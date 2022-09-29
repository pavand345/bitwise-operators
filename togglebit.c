#include<stdio.h>
int main()
{
        int data,pos,i;
        printf("enter the data : ");
        scanf("%d",&data);
	printf("binary code of %d\n",data);
	for(i=31;i>=0;i--)
	{
		if((data>>i)&1)
			printf("1");
		else
			printf("0");
	}
	printf("\nenter the postion : ");
        scanf("%d",&pos);
        if((pos<0)||(pos>31))
        {
                printf("bit postion will be between 0 to 31 \n");
                return 0;
        }
        data=data^(1<<pos);
	printf("\n after toggle \n");
	for(i=31;i>=0;i--)
        {
                if((data>>i)&1)
                        printf("1");
                else
                        printf("0");
        }
        printf("\n%d\n",data);
}

