#include <iostream>
#include <string>

using namespace std;

struct Bus 
{
    string model;
    int year;
    string color;
    int capacity;
};

bool shouldComeBefore(const Bus& a, const Bus& b) 
{
    if (a.capacity != b.capacity) 
    {
        return a.capacity > b.capacity;
    }
    return a.year < b.year;
}

void insertionSort(Bus* arr, int n) 
{
    for (int i = 1; i < n; i++) 
    {
        Bus key = *(arr + i);
        int j = i - 1;

        while (j >= 0 && shouldComeBefore(key, *(arr + j))) {
            *(arr + j + 1) = *(arr + j);
            j--;
        }
        *(arr + j + 1) = key;
    }
}

void printBuses(const Bus* arr, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "Model: " << (arr + i)->model
            << ", Capacity: " << (arr + i)->capacity
            << ", Year: " << (arr + i)->year
            << ", Color: " << (arr + i)->color << endl;
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;

    Bus* arr = new Bus[SIZE]
    {
        { "Mercedes-Benz Citaro", 2018, "White", 85 },
        { "Bogdan A092", 2012, "Yellow", 43 },
        { "MAN Lion's City", 2015, "Blue", 85 },
        { "Electron A185", 2021, "Green", 100 },
        { "Etalon A079", 2010, "White", 43 }
    };

    printBuses(arr, SIZE);

    insertionSort(arr, SIZE);

    printBuses(arr, SIZE);

    delete[] arr;

    return 0;
}