#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10] = {5,1,6,9,8,3,4,6,10,7};;
	

	int temp= 0;

	
	for(int i=0;i<10;i++) 
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i] > a[j]) 
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(int i=0;i<10;i++) 
	{
		printf("%d  ",a[i]);
	}

	system("pause");
} 
