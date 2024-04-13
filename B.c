#include<stdio.h>
int main()
{
    int s=0,n,l=9,m=0,pos=0,f=0;
    int ar[]={10,20,30,40,50,55,60,65,70,90};
    printf("Enter number to search:");
    scanf("%d",&n);
    while(s<=l)
    {
        m=(s+l)/2;
        if(n==ar[m])
        {
            pos=m;
            f=1;
            break;
        }
        else if (n>ar[m])
        {
            s=m+1;
        }
        else if(n<ar[m])
        {
            l=m-1;
        }
    }
    if(f==1)
    {
        printf("Element found at inder %d",pos);
    }
    else
    {
        printf("\n Element not found");
    }
    return 0;
}