#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[],int key,int high)
{
    int low=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,i,key;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key you want ot search: ");
    scanf("%d",&key);
    int result=binarySearch(arr,key,n);
    printf("%d",result);
    return 0;
}