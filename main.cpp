#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int ArrayNumbers[4] = {0, 0, 0, 0};
	int NumberOfArray = 0;
	int RandomNumber;

	bool exist; // 중복검사

	srand(time(NULL));


	while (NumberOfArray < 4)
	{

		RandomNumber = 1 + (rand() % 53);
		exist = false;
		
		for (int i = 0; i < 4; i++)
		{
			if (ArrayNumbers[i] == RandomNumber)
			{	
				exist = true;
			}
			
		}

		if (exist == false)
		{
			ArrayNumbers[NumberOfArray] = RandomNumber;
			cout << ArrayNumbers[NumberOfArray] << endl;
			NumberOfArray++;
		}

	}
	

	

	return 0;
}