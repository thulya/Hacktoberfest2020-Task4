#include <studio.h>


int main()
{
    bool swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=false;
        for(j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j-1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=false;
            }
        }
    }while(swap);
    
    for(j=0;j<n;j++)
        {
            printf("%d ",arr[j]);
        }
}
