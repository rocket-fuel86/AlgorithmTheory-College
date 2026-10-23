#include "Sorting.h"

Sorting::Sorting()
{
    size_t size = 1;
    int* arr = new int[size] {};
}

Sorting::Sorting(int* arr, size_t size)
{
    this->size = size;
    this->arr = arr;
}

void Sorting::stupid_sort_ascending(size_t& iterations)
{
    iterations = 0;

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

    if (size > 1 && arr != nullptr)
    {
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

Sorting::~Sorting()
{
    if (arr != nullptr)
    {
        delete[] arr;
    }
}
