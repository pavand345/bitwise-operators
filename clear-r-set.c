#include<stdio.h>
int main()
{
	int data,pos,i;
	printf("enter the num : ");
	scanf("%d",&data);
	printf("the binary code : %d\n",data);
	for(i=31;i>=0;i--)
        {
                if((data>>i)&1)
                        printf("1");
                else
                        printf("0");
        }
	printf("\nenter the pos : ");
	scanf("%d",&pos);
	if(((data>>pos)&1)==1)
		printf("The bit is set\n");
	else 
		printf("the bit is clear\n");
}

