#pragma once

#include <iostream>
#include <algorithm>

class Sorting 
{
private:
    int* arr = nullptr;
    size_t size;

    int partition(const int p, const int q, size_t& iterations);
public:
    Sorting();
    Sorting(int* arr, size_t size);

    void stupid_sort_ascending(size_t& iterations);
    void stupid_sort_descending(size_t& iterations);
    void gnome_sort_asc(size_t& iterations);
    void bubble_sort(size_t& iterations);
    void selection_sort(size_t& iterations);
    void insertion_sort(size_t& iterations);
    void quick_sort(const int p, const int q, size_t& iterations);

    int* get_arr();

    void print_array() const;

	//~Sorting();
};