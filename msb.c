#include<stdio.h>
int main()
{
        int data,i;
        printf("enter the number : ");
        scanf("%d",&data);
        printf("The binary code of %d\n",data);
        for(i=31;i>=0;i--)
        {
                if((data>>i)&1)
                        printf("1");
                else
                        printf("0");
        }
        if(((data>>31)&1)==1)
                printf("\nMSB bit is set\n");
        else
                printf("\nMSB bir is clear\n");
}
