#include <stdio.h>

int main() {
    int n , positive = 0, negative = 0, zero = 0;
    printf("enter the number of elemnts in the array: ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("the %d element is: ",i+1);  
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
       printf(" %d\t",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0){
            positive++;
        }
        else if (arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    }
    printf("\n\n");
    printf("positive numbers: %d\n",positive);
    printf("negative numbers: %d\n",negative);
    printf("zero numbers: %d\n",zero);
    
    
    

   
    return 0;
}