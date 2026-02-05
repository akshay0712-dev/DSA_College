#include <stdio.h>
// void swap(int arr[], int i, int j)
// {
//     printf("swaping %d and %d\n", arr[i], arr[j]);
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Size %d\n", n);
//     for (int k = 0; k < n; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     printf("\n");
// }
int main()
{
    int arr[] = {9, 10, 11, 12, 13, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            peakIndex = i;
            break;
        }
    }

    printf("Peak Index: %d\n", peakIndex);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // int s = 0;
    // int e = n - 1;

    // while (s < e)
    // {
    //     // printf("checking %d and %d\n",  arr[s], arr[e]);
    //     if (arr[s] > arr[e])
    //     {
    //         int temp = arr[s];
    //         arr[s] = arr[e];
    //         arr[e] = temp;
    //         for (int i = 0; i < n; i++)
    //         {
    //             printf("%d ", arr[i]);
    //         }
    //         printf("\n");
    //         if (s <= peakIndex)
    //         {
    //             s++;
    //         }
    //         else
    //         {
    //             e--;
    //         }
    //     }
    //     if (arr[s] < arr[e])
    //     {
    //         if (s <= peakIndex)
    //         {
    //             s++;
    //         }
    //         else
    //         {
    //             e--;
    //         }
    //     }
    //     printf("S: %d, E: %d\n", s, e);

    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    return 0;
}