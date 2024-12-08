#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter the nubmer  ");
    scanf("%d",&n);
    printf("Factor of a number ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {printf("%d  \n",i);
            
        }
    }
    return 0;

}