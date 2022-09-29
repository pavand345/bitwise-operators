#include<stdio.h>
int main()
{
	  int num,pos,i;
	  printf("enter the num : ");
	  scanf("%d",&num);
	  for(i=31;i>=0;i--)
        {
                if((num>>i)&1)
                        printf("1");
                else
                        printf("0");
        }
	  printf("\nenter the position :");
	  scanf("%d",&pos);
	  num=num&~(1<<pos);
	  for(i=31;i>=0;i--)
        {
                if((num>>i)&1)
                        printf("1");
                else
                        printf("0");
        }
	  printf("\n%d\n",num);
}
