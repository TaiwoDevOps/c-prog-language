#include <stdio.h>

int find_min(int arr[], int size);

int main(void)
{

    int givenArray[] = {2, 3, 21, 56, 78, 5, 34, 4, 3, 6, 7, 9, 1, 14};

    int min = find_min(givenArray, sizeof(givenArray) / sizeof(givenArray[0]));

    printf("Min: %d\n", min);
    return 0;
}

int find_min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}