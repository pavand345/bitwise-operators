#include<stdio.h>
int main()
{
        int a,b;
	printf("enter the A,B values\n");
	scanf("%d%d",&a,&b);
	printf("before swaping the value are\n A=%d\t B=%d \n ",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after the swaping the values are\n A=%d\t B=%d\n",a,b);
}

