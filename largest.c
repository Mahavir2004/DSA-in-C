#include <stdio.h>

int main(){
int n;
printf("Enter a number\n: ");
scanf("%d", &n);
int a[n];
printf("the number is %d\n", n);
for (int i = 0; i < n; i++) {
    scanf("%d",&a[i]);
}
int largest = a[0];
printf("You entered: ");
for (int i = 1; i < n; i++) {
    if (a[i]>largest)
    {
        largest = a[i];
    }
    
}
printf("\nLargest number is: %d\n", largest);

     return 0;
}