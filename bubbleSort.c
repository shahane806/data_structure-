#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); 
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            int temp;
            if (arr[j+1]<arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
            
        }
        
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}