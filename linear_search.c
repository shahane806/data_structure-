

/*
Name : Shahane Om Prashant
*/

#include<stdio.h>
int main()
{
    int arr[10] = {4,3,2,6,1,5,7,9,8,0};
    int n= 10,data,i;
    printf("Enter data value\n");
    scanf("%d",&data);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==data)
        {
            printf("%d is Found\n",arr[i]);
            break;
        }
        if (arr[i]==n)
        {
            printf("Data is not present\n");
        }
        
        
    }
    
    return 0;
}
