//Write a code find the length of a string and its reverse equivalent without using readymade c functions
// C program to find length of string. 
#include <stdio.h>
int main()
{
char s[100];
int i;

printf(“Enter a string: “);
scanf(“%s”, s);

for(i = 0; s[i] != ‘\0’; ++i);

printf(“Length of string: %d”, i);
return 0;
}




