/*
 * Name: my_c_project_2.cpp
 * Purpose: 调试汇编语言
 * Author: minyi
 * Create Time: 2020.11.15 22:41
 * Book: no
 * Page: no
 */

#include<stdio.h>

int sum(int* ar, int n);

#define SIZE 10

int main()
{
	printf("Hello world\n");
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sum(marbles, SIZE);

	printf("The total number of marbles is %ld.\n", answer);
	return 0;
}

int sum(int* ar, int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
	{
		total += ar[i];
	}
	printf("The size of ar is %d butes.\n", sizeof ar);
	return total;
}

