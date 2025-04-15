#include <stdio.h>

int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++) {
    printf("Enter element %d: ",i+1);
    scanf("%d",&a[i]);
 }
for (int  i = 0; i < n; i++)
{
    printf("the elements are :%d\n",a[i]);
}
for (int i = n-1; i >= 0; i--)
{
    printf("the reverse elements are :%d\n",a[i]);
}




    return 0;
}