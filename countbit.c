#include<stdio.h>
int main()
{
	int data,zeros=0,ones=0,i;
	printf("enter the number : ");
	scanf("%d",&data);
	for(i=31;i>=0;i--)
	{
		if(((data>>i)&1)==1)
			ones++;
		else 
			zeros++;
	}
	printf("Zeros= %d\tOnes= %d\n",zeros,ones);
}
