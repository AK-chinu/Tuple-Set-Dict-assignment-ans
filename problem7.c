// Find the second highest elements in the given array !
#include <stdio.h>

void main() {
    int arr[5] = {-5, 2, 6, 5, 0};
    int max = arr[0];
    int smax = arr[0];
    
    // Finding the maximum element
    for (int i = 1; i < 5; i++) {
        if (max < arr[i]) {
            smax = max; // Update second max
            max = arr[i];
        } else if (smax < arr[i] && arr[i] != max) {
            smax = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Second Maximum: %d\n", smax);
}
