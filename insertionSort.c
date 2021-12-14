/*
Name : Shahane Om Prashant
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter array size\n");
    scanf("%d",&n);
    int arr[n],temp;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i < n; i++)
    {
        temp = arr[i];
        j=i-1;
        while (j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }
    
    for ( j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\n");
    
    

    return 0;
}
