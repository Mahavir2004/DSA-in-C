#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {  
        if (arr[i] > largest) {
            largest = arr[i];
        }
       else if (arr[i] < smallest)
       {
        smallest = arr[i];
       }
       
        
    }

    printf("\nLargest element is: %d\n", largest);
    printf("\nSmallest element is: %d\n", smallest);

    return 0;
}
