#include "Sorting.h"

int main()
{
    const size_t SIZE = 6;
    int* arr = new int[] { 5, 1, 9, 0, 10, 14 };
    Sorting s(arr, SIZE);

    s.stupid_sort_ascending();
    std::cout << "Ascending: ";
    s.print_array();

    s.stupid_sort_descending();
    std::cout << "Descending: ";
    s.print_array();

    delete[] arr;
}