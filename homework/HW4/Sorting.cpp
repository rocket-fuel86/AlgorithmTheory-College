#include "Sorting.h"

Sorting::Sorting()
{
    size = 1;
    arr = new int[size] {};
}

Sorting::Sorting(int* arr, size_t size)
{
    this->size = size;
    this->arr = arr;
}

void Sorting::stupid_sort_ascending(size_t& iterations)
{
    iterations = 0;

    if (arr == nullptr || size <= 1 || std::is_sorted(arr, arr + size))
    {
        return;
    }

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size - 1; j++)
        {
            ++iterations;

            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void Sorting::stupid_sort_descending(size_t& iterations)
{
    iterations = 0;

    if (arr == nullptr || size <= 1)
    {
        return;
    }

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size - 1; j++)
        {
            ++iterations;

            if (arr[j] < arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void Sorting::gnome_sort_asc(size_t& iterations)
{
    iterations = 0;

    if (arr == nullptr || size <= 1 || std::is_sorted(arr, arr + size))
    {
        return;
    }

    size_t i = 0;
    while (i < size - 1) // 2 6 7 8 9
    {
        if (arr[i] > arr[i + 1])
        {
            ++iterations;

            std::swap(arr[i], arr[i + 1]);
            if (i == 0)
            {
                ++i;
            }
            else
            {
                --i;
            }
        }
        else
        {
            ++i;
        }
    }
}

void Sorting::bubble_sort(size_t& iterations)
{
    iterations = 0;

    if (arr == nullptr || size <= 1)
        return;

    for (size_t i = 0; i < size - 1; ++i)
    {
        bool swapped = false;

        for (size_t j = 0; j < size - 1 - i; ++j)
        {
            ++iterations;

            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void Sorting::selection_sort(size_t& iterations)
{
    if (arr != nullptr && size > 0)
    {
        for (size_t i = size; i > 0; --i)
        {
            size_t max_index = 0;

            bool isSorted = true;

            for (size_t j = 0; j < i; ++j)
            {
                ++iterations;
                if (arr[j] > arr[max_index])
                {
                    max_index = j;
                }

                if (j > 0 && arr[j] < arr[j - 1])
                    isSorted = false;
            }

            if (isSorted) return;

            if (max_index != i - 1)
            {
                std::swap(arr[max_index], arr[i - 1]);
            }
        }
    }
}

int* Sorting::get_arr()
{
    return arr;
}

void Sorting::print_array() const
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

//Sorting::~Sorting() {}
