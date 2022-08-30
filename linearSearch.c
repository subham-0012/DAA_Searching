#include<stdio.h>
#include<stdlib.h>
int linearSearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(i>n)
        {
            return -1;
        }
        else if(arr[i]==key)
        {
            printf("The index is %d and the key is %d",i,key);
        }
    }
    return 0;
}
int main()
{
    int n,i,key;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the %dth element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the key you want to search: ");
    scanf("%d",&key);
    linearSearch(arr,key,n);
    return 0;
}