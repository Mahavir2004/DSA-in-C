#include <stdio.h>

int main(){
int n;
printf("Enter a number: ");
scanf("%d", &n);

int arr[n];

for (int i = 0; i < n; i++)
{
     printf("Enter element %d: ", i + 1);
     scanf("%d", &arr[i]);
}
printf("[");
for (int i = 0; i < n; i++)
{
     printf("%d ", arr[i]);
}
printf("]");
int max = arr[0];
int min = arr[0];
for (int i = 1; i < n; i++){
     if (arr[i] > max) 
     {
          max = arr[i];
     }
     if (arr[i] < min){
          min = arr[i];
     }
}
printf("\nMaximum element is %d\n", max);
printf("\nMinimum element is %d\n", min);
     return 0;
}