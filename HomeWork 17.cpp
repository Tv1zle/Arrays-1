
#include <iostream>
#include <ctime>


int main()
{
	//Task 1
	const int n = 5;
	int arr[n];


	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}


	for (int i = n - 1; i > -1; i--)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n\n";



	//Task 2
	const int size = 20;
	int array[size];
	srand(time(0));


	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 99;
	}


	std::cout << "Random numbers with index / 2: ";
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << array[i] << " ";
		}
	}
	std::cout << "\n\n";



	//Task 3
	const int saiz = 10;
	int count = 0, sum = 0, a[saiz];
	srand(time(0));


	for (int i = 0; i < saiz; i++)
	{
		a[i] = (rand() % 40) - 20;

	}


	for (auto now : a)
	{
		if (now > 0)
		{
			count++;
			sum += now;
		}
	}
	std::cout << "Quantity of positive numbers: " << count << "\nSum of positive numbers: " << sum << "\nAverage of positive numbers: " << sum / count << "\n\n";



	//Task 4
	char symbolarr[100];
	int digits = 0, letters = 0, punctuations = 0;
	srand(time(0));


	for (int i = 0; i < 100; i++)
	{
		if (rand() % 3 == 1)
		{
			symbolarr[i] = char('a' + rand() % ('z' - 'a'));
			letters++;
		}
		else if (rand() % 3 == 2)
		{
			symbolarr[i] = rand() % 100;
			digits++;
		}
		else
		{
			symbolarr[i] = '.';
			punctuations++;
		}
	}


	std::cout << "There are " << digits << " digits in the array\n";
	std::cout << "There are " << letters << " letters in the array\n";
	std::cout << "There are " << punctuations << " punctuation marks in the array\n\n";



	//Task 5
	int user, caban = 0, numbersarray[100];
	std::cout << "A number to test it against the number in the array: ";
	std::cin >> user;


	for (int i = 0; i < 100; i++)
	{
		numbersarray[i] = rand() % 50;
	}


	for (auto now : numbersarray)
	{
		if (now == user)
		{
			caban++;
		}
	}


	std::cout << "Number met in array " << caban << " times\n\n";



	//Task 6
	int arrabas[20], sums = 0;
	srand(time(0));


	for (int i = 0; i < 20; i++)
	{
		arrabas[i] = (rand() % 40) - 10;
		if (arrabas[i] < 0)
		{
			break;
		}
		sum += arrabas[i];
	}


	std::cout << "The sum of the numbers in the array before first negative is " << sum << "\n\n";



	//Task 7
	int min = 100, max = 0, randomarr[20];
	srand(time(0));


	for (int i = 0; i < 20; i++)
	{
		randomarr[i] = rand() % 99;
	}


	for (auto now : randomarr)
	{
		if (now > max)
		{
			max = now;
		}
		else if (now < min)
		{
			min = now;
		}
	}


	std::cout << "Min number is " << min << "\nMax number is " << max << "\n\n";



	//Task 8
	double doublercount = 0, doublearr[100];
	srand(time(0));


	for (int i = 0; i < 100; i++)
	{
		double near = rand() % 100;
		double behind = near / 10;
		doublearr[i] = behind;


		if (doublearr[i] - (int)doublearr[i] == 0)
		{
			doublercount++;
		}
	}


	std::cout << "Number of array elements without real part: " << doublercount << "\n\n";



	//Task 9
	int single = 0, two = 0, three = 0, arrab[200];
	srand(time(0));


	for (int i = 0; i < 200; i++)
	{
		arrab[i] = rand() % 200;


		if (arrab[i] < 10)
		{
			single++;
		}
		else if (arrab[i] < 100)
		{
			two++;
		}
		else
		{
			three++;
		}
	}


	std::cout << "Single digit numbers: " << single / 2 << "%\nTwo-digit numbers: " << two / 2 << "%\nThree-digit numbers: " << three / 2 << "%.";


}
