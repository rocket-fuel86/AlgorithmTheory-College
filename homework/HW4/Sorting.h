#pragma once

#include <iostream>

class Sorting 
{
private:
    int* arr;
    size_t size;
public:
    Sorting();
    Sorting(int* arr, size_t size);

    void stupid_sort_ascending();
    void stupid_sort_descending();

    void print_array() const;
};
