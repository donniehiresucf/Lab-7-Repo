/* Donald Hires
COP3502-0004
Lab 7 - Number of Swaps in a Bubble Sort
Date: 07/07/2023 */

#include <stdio.h>
#include <stdlib.h>

// Pre-condition: Unsorted array, number of elements, swap counter
// Post-condition: Sorts the array, increments swap counter
void bubbleSort(int *arr, int num)
{
    int x, y, temp;
    int swaps = 0;
    printf("Numbers of Swaps per Iteration:\n");
    for (x = 0; x < num; x++)
    {
        for (y = 0; y < num - x - 1; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y + 1] = temp;
                swaps += 1;
            }
        }
        printf("%d ", swaps);
        swaps = 0;
    }
    printf("\n");
}

// Pre-condition: Array, number of elements
// Post-condition: Prints each element of array, carriage returns at end
void print(int *arr, int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = sizeof(array)/sizeof(array[0]);

    printf("Initial Array: \n");
    print(array, size);

    bubbleSort(array, size);
    printf("Bubble Sorted Array: \n");
    print(array, size);
    return 0;
}