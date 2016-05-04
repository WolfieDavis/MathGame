#include <time.h>  // we need this for time(0)
#include <iostream>
#include <cstdlib> // we need this for rand()
#include <string>

using namespace std;

int main()

{

	// we need these next 3 lines at the start of

	// any program using random!

	unsigned seed;

	seed = time(0);

	srand(seed);

	string keep_going;
	int running_total = 0;
	int cal_answer;
	char op;
	int operation;
	int answer;
	int num1, num2;

	do {
		operation = rand() % 3 + 1;

		if (operation == 1)

			op = '+';

		else if (operation == 2)

			op = '-';

		else

			op = 'x';

		num1 = rand() % 10 + 1;

		num2 = rand() % 10 + 1;

		cout << "What is the answer of " << num1 << op << num2 << "?";

		cin >> answer;

		if (operation == 1)

		{
			if (answer == num1 + num2)
			{
				cout << "You are correct! ";

				running_total++;
			}

			else
			{
				cout << "You are incorrect. ";

				running_total--;
			}
		}

		else if (operation == 2)
		{

			if (answer == num1 - num2)
			{

				cout << "You are correct ";

				running_total++;
			}

			else
			{
				cout << "You are incorect ";

				running_total--;
			}
		}

		else
		{
			if (answer == num1 * num2)
			{
				cout << "You are correct ";

				running_total++;
			}

			else
			{
				cout << "You are incorrect ";

				running_total--;
			}
		}

		cout << "Your score is " << running_total << endl;

		cout << "Do you want to keep going? ";

		cin >> keep_going;

	} while (keep_going == "yes");

	system("pause");

	return 0;
}

