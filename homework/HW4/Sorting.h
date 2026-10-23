#pragma once

#include <iostream>

class Sorting 
{
private:
    int* arr = nullptr;
    size_t size;
public:
    Sorting();
    Sorting(int* arr, size_t size);

    void stupid_sort_ascending(size_t& iterations);
    void stupid_sort_descending(size_t& iterations);
    void gnome_sort_asc(size_t& iterations);

    int* get_arr();

    void print_array() const;

	~Sorting();
};