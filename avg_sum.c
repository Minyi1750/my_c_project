/*
 * Name: avg_sum.c
 * PurPose: 计算数组中元素的总和以及平均值
 * Author: K.N.King
 * Create Time: 2020.11.15 10:50
 * Book Name: C Programming A Modern Approach, Second Edtion
 * Page: 182
 * 
 */

#include <stdio.h>


void avg_sum(double a[], int n, double* sum, double* avg)
{
	int i;
	*sum = 0.0;
	for (i = 0; i < n; i++) 
	{
		*sum += a[i];
	}
	*avg = *sum / n;
	
}


int main(void)
{
	double a[] = { 1.2, 3.4, 5.6, 7.8, 9.1 };
	double sum = 0.0, avg = 0.0;
	
	avg_sum(a, 5, &sum, &avg);
	
	printf("sum=%f, avg=%f", sum, avg);
	
	return 0;
}
