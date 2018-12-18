#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	
	setlocale(LC_ALL, "");
	srand(time(NULL));

	/*int N = 1 + rand() % 10;
	int f = 1;
	
	for (size_t i = 1; i < N; i++)
	{
		f = f * i;
		printf("N - %d\n", f);
	}
	printf("Факториал = %d\n", f);*/


	/*float S = 100;
	float K = 2000;
	float TotalS = 0;
	float TotalK = 0;

	for (int i = 1998; i < 2008; i++)
	{
		SetConsoleTextAttribute(hConsole, 15);
		S = S * 1.05;
		float t = (-1 + rand() % 4)/100;
		K = K + (K*float(t/100));
		if (t < 0)
		{
			SetConsoleTextAttribute(hConsole, 4);
			printf("Площадь в %f году = %f Га и Урожайность = %f Га\n снижение на %f\n", i, S, K, t);
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 2);
			printf("Площадь в %f году = %f Га и Урожайность = %f Га\n прирост на %f\n", i, S, K, t);
		}
		SetConsoleTextAttribute(hConsole, 15);
		printf("K: %f\n", t);
		printf("Площадь в %f году = %f Га и Урожайность = %f Га\n", i, S, K);
		TotalS = S;
		TotalK = K;
	}
	printf("--------------------------------------------\n");
	printf("TOTAL S = %f", TotalS);
	printf("--------------------------------------------\n");*/

	/*float Area = 0;
	for (int i = 1; i <= 12; i++)
	{
		int People = 1000 + rand() % 110000;
		int Density = 1 + rand() % 25;
		Area += float(People * Density);
		printf("Area: %d, People: %d, Density: %d\n",
			i, People, Density);
	}
	printf("Total Area: %f\n", Area);*/

	/*int N = 10 + rand() % 1000;
	double M = 1;

	for (int i = 1; i < N; i++)
	{
		M = M * i;
		printf("%d\n", M);
	}*/

	/*float A = 1 + rand() % 10;
	int N = 1 + rand() % 10;
	
	for (int i = 1; i < N; i++)
	{
		A = A + N;
		printf("%f\n", A);
	}*/
	
	/*int a= 1+rand() % 10;
	int n = 1+ rand() % 10; 
	int b = 1;

	printf("; %d\n", a);
	for (int i = 1; i <= n; i++)
	{
		b = a * pow(a, i); 
		printf("%d: \n", b);
	}
	printf("result: %d\n", a);*/

	/*int a, b;
	a = 1 + rand() % 99;
	b = 0;
	
	do
	{
		printf("- %d\n", b);
		b = 1 + rand() % 99;
	} while (a > b);

	int Amount = 0;

	for (int i = 0; i < b; i++)
	{
		printf("%d\n", i);
		Amount = Amount + 1;
	}

	printf("\n");
	printf("Amount: %d\n", Amount);*/

	system("pause");

}