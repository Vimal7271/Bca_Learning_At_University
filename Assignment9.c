//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1
#include<stdio.h>
#include<string.h>
//function to count the frequency of each character
void count(char str[50])
{
	int n,f[50],c=0,i,j;
	n=strlen(str);
	//converting the string into lower case
	for(i=0;i<n;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=str[i]+32;
	}
    //counting the frequency of the elements
    for(i=0; i<n; i++)
    {
        c= 1;
        if(str[i])
        {
        	for(j=i+1;j<n;j++)
        	{
        		if(str[i]==str[j])
        		{
        			c++;
        			str[j]='\0';
				}
			}
			printf("The frequency of '%c' is %d\n",str[i],c);
		}
	}
}

//main function
int main()
{
	//declaring the variables
	char str[50];
	//taking the input
	printf("\nEnter the string: ");
	gets(str);
	//calling the function to count the frequency
	count(str);
}

