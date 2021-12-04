#include <stdio.h>
int binarysearch(int a[],int n,int data)
{
    int lb = 0;
    int ub = n-1;
    int mid;
    while (lb<ub)
    {
        mid = (lb + ub)/2;
        if (data == a[mid])
        {
            return mid;
        }
        else if(data < a[mid])
        {
            ub = mid -1;
            return mid -1;

        }
        else if(data > a[mid])
        {
            lb = mid+1;
            return mid+1;
        }
        return -1;
    }
    

}
int main()
{
    int arr[3] = {1,2,3};
    int n = 3;
    int data = 1;
    int pos;
    pos = binarysearch(arr,n,data);
    printf("%d",pos);
    return 0;
}