#include "Sorting.h"

int main()
{
    srand(time(NULL));

    const size_t SIZE = 1000;

    int* original = new int[SIZE];
    int* arr1 = new int[SIZE];
    int* arr2 = new int[SIZE];
    int* arr3 = new int[SIZE];
    int* arr4 = new int[SIZE];

    for (size_t i = 0; i < SIZE; i++)
    {
        original[i] = rand() % 10000;
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        arr1[i] = original[i];
        arr2[i] = original[i];
        arr3[i] = original[i];
        arr4[i] = original[i];
    }

    Sorting s1(arr1, SIZE);
    Sorting s2(arr2, SIZE);
    Sorting s3(arr3, SIZE);
    Sorting s4(arr4, SIZE);

    size_t stupid_iterations = 0;
    size_t gnome_iterations = 0;
    size_t bubble_iterations = 0;
    size_t selection_iterations = 0;

    s1.stupid_sort_ascending(stupid_iterations);
    s2.gnome_sort_asc(gnome_iterations);
    s3.bubble_sort(bubble_iterations);
    s4.selection_sort(selection_iterations);

    std::cout << "Stupid Sort iterations: "
        << stupid_iterations << '\n';

    std::cout << "Gnome Sort iterations: "
        << gnome_iterations << '\n';

    std::cout << "Bubble Sort iterations: "
        << bubble_iterations << '\n';

    std::cout << "Selection Sort iterations: "
        << selection_iterations << '\n';

    std::cout << "Stupid Sort correct: "
        << std::is_sorted(arr1, arr1 + SIZE) << '\n';

    std::cout << "Gnome Sort correct: "
        << std::is_sorted(arr2, arr2 + SIZE) << '\n';

    std::cout << "Bubble Sort correct: "
        << std::is_sorted(arr3, arr3 + SIZE) << '\n';

    std::cout << "Selection Sort correct: "
        << std::is_sorted(arr4, arr4 + SIZE) << '\n';

    delete[] original;
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;

    return 0;
}