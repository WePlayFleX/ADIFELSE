#include <iostream>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	cout << "Press Enter to exit...\n";
	while (dir != '\r')
	{
		cout << "\nYour coordinates: " << x << ", " << y;
		cout << "\nChoose direction (n, s, e, w): ";

		dir = getche();
		if (dir == 'n')
		{
			y--;
		}
		else
		{
			if (dir == 's')
			{
				y++;
			}
			else
			{
				if (dir == 'e')
				{
					x++;
				}
				else
				{
					if (dir == 'w')
					{
						x--;
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}