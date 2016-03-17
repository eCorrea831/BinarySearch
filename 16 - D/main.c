//
//  main.c
//  16 - D
//
//  Created by Erica Correa on 2/3/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

int binary_search (int array[], int target, int array_size) {
    int lo = 1;
    int hi = array_size;
    int mid;
    
    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        
        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return 0;
}

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int array[] = {};
    int n, temp;
    
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; ++i) {
        printf("%d. Enter element: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    for (int step = 0; step < n - 1; step++) {
        for (int i = 0; i < n - step - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    
    int find_number = 8;
    
    printf("Number %d is located at index %d in the array.\n", find_number, binary_search(array, find_number, n));
    
    return 0;
}
