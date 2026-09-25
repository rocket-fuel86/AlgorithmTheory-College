#include <iostream>
using namespace std;

int main()
{
	srand(0);
	const short ROWS = 10;
	const short COLS = 20;

	bool cinema[ROWS][COLS] = {};

	for (short i = 0; i < ROWS; i++)
	{
		for (short j = 0; j < COLS; j++)
		{
			cinema[i][j] = rand() % 2;
			cout << cinema[i][j] << ' ';
		}
		cout << endl;
	}

	bool found_row = false;
	for (short i = 0; i < ROWS; i++)
	{
		bool isSold = true;
		for (short j = 0; j < COLS; j++)
		{
			if (cinema[i][j] == 0)
			{
				isSold = false;
				break;
			}
		}

		if (isSold)
		{
			cout << "In row" << i << " all places are sold!\n";
			found_row = true;
		}
	}

	if (!found_row)
	{
		cout << "There are no sold rows" << endl;
	}
}