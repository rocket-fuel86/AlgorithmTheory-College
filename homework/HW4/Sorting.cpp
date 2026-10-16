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

void Sorting::stupid_sort_ascending()
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void Sorting::stupid_sort_descending()
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void Sorting::print_array() const
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}