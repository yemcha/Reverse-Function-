// reverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <string.h>
void swap(char* a, char* b);
void reverse(char* str);

int main() 
{
	char strArray[] = "XtaticArt";
	printf("Before Reverse: %s\n", strArray);
	reverse(strArray);
	printf("After Reverse: %s\n", strArray);
}

void swap(char* a, char* b) 
{
	char c = *a;
	*a = *b;
	*b = c;
}

void reverse(char* str) {
	// handle the special case when it is an empty string
	if (!*str) 
	{
		return;
	}

	// mark down the begin of the string
	char* begin = str;

	// pointing to the last character
	char* end = begin + strlen(str) - 1;

	// swap begin and end
	while (begin < end) {
		swap(begin, end);
		begin++;
		end--;
	}
}