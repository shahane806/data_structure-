/*
Name : Shahane Om Prashant
*/



#include <stdio.h>
void quicksort(int a[],int lb,int ub)
{
    int pivot = lb,start = lb, end = ub,loc, temp;
    if (lb<ub)
    {
        while (start<end)
        {
            while(a[start]<=a[pivot]&&start<end)
            { 
                start++;
            }
            while (a[end]>a[pivot])
            {
                end--;
            }
            if (start<end)
            {
                temp=a[start];
                a[start]=a[end];
                a[end]=temp;
            }
            
            
        }
        temp=a[pivot];
        a[pivot]=a[end];
        a[end]=temp;
        quicksort(a,lb,end-1);
        quicksort(a,end+1,ub);
        
    }
    

}
int main()
{
    int n;
    printf("Enter array size\n");
    scanf("%d",&n);
    int lb,ub,a[n],i;
    printf("Enter array elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,lb=0,ub=n-1);

    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }    
    printf("\n");
    return 0;
}
