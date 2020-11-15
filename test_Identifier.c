/*
 * Name: test_identifier.c
 * Purpose: 测试C语言的标识符是否有长度限制
 * Author: minyi
 * Create Time: 2020.11.15 22:41
 * Book: C Programming: A Modern Approach, Second Edtion
 * Page: 23
 */

#include<stdio.h>

int main(void)
{
    
	int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_1 = 10;
	int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_2 = 100;
	
	printf("%d\n", aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_1);
	printf("%d\n", aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_2);
	
	return 0;
}
