#include <stdio.h>

int main(){
int n;
printf("enter the number: ");
scanf("%d",&n);

int arr[n];
for (int  i = 0; i < n; i++)
{
    printf("the elements in array are %d:\n",i+1);
    scanf("%d",&arr[i]);
}
printf("the array are: ");
printf("[");
for (int  i = 0; i < n; i++)
{
    
    printf(" %d ",arr[i]);
}
printf("]\n");  

printf("the reversed array are: ");
printf("[");

for (int  i = n-1; i >= 0; i--)
{
   printf(" %d ",arr[i]);
}
printf("]");

     return 0;
}