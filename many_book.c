/*
 * Name: many_book.c
 * Purpose: 测试结构体的汇编语言会是什么
 * Author: minyi
 * Create Time: 2020.11.15 22:41
 * Book: C Primer Plus, Sixth Edtion
 * Page: 381
 */

#include<stdio.h>
#include<string.h>

// char* s_gets(char* st, int n);

#define MAXTITLE 40
#define MAXAUTL 40
#define MAXBKS 100

struct book
{	
	char title[MAXTITLE];
	char author[MAXAUTL];
	int value;
};


int main(void)
{
	struct book library = {
		"c and cpp",
		"Minyi",
		100
	};

	const int my_double = 0x12345678;
	char* name = "Hello World";
	const int* const ptr = name;
	int tmp;
	int arr[] = { 0x10, 0x20, 0x30 };

	_asm {
		// mov ax, byte ptr my_double
		mov ax, WORD PTR my_double
		mov WORD PTR tmp, ax

		mov esi, OFFSET arr
		mov
	}
	printf("tmp = 0x%x", tmp);
	return 0;
}
