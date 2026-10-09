#include <iostream>
using namespace std;

static void binarySearch(const int* arr, const size_t N, const int search)
{
	size_t indexLeft = 0;
	size_t indexRight = N;

	bool isSuccess = false;

	while (indexLeft < indexRight)
	{
		size_t indexMiddle = (indexLeft + indexRight) / 2;

		if (search < arr[indexMiddle])
		{
			indexRight = indexMiddle - 1;
		}
		else if (search > arr[indexMiddle])
		{
			indexLeft = indexMiddle + 1;
		}
		else
		{
			cout << "Value " << search << " found at index " << indexMiddle << endl;
			isSuccess = true;
			break;
		}
	}

	if (!isSuccess)
	{
		cout << "Value " << search << " not found" << endl;
	}
}

int main()
{
	const size_t N = 8;
	int arr[N] = { 4, 7, 9, 12, 21, 25, 30, 56 };

	int search = 0;
	cout << "Search: ";
	cin >> search;
	
	binarySearch(arr, N, search);
}