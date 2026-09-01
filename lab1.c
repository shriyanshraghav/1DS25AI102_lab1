//1. Traversal
#include<stdio.h>
int main()
{
    int a[5]={8,12,14,28,36};
    printf("Traversal:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    
//2. Linear Search
    printf("Searching the element:\n");
    int val=28;
    for(int i=0;i<5;i++)
    {
        if(a[i]==val)
        {
            printf("Element found at index %d\n",i);
        }
    }
//3. Finding maximum value
    int max=a[0];
    printf("Maximum value:\n");
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum value is %d\n",max);
//4. Finding minimum value
    int min=a[0];
    printf("Minimum value:\n");
    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The minimum value is %d\n",min);
}

