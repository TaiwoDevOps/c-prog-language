#include <stdio.h>
#include <stdbool.h>

int find_diff(int arr[], int size, bool diffType);

int main(void)
{

    int givenArray[] = {2, 3, 21, 56, 78, 5, 34, 4, 3, 6, 7, 9, 1, 14};

    int min = find_diff(givenArray, sizeof(givenArray) / sizeof(givenArray[0]), true);
    int max = find_diff(givenArray, sizeof(givenArray) / sizeof(givenArray[0]), false);

    printf("Min: %d\nMax: %d\n", min, max);
    return 0;
}

int find_diff(int arr[], int size, bool diffType)
{
    int diff = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < diff && diffType)
        {
            diff = arr[i];
        }
        else if (arr[i] > diff && !diffType)
        {
            diff = arr[i];
        }
    }
    return diff;
}