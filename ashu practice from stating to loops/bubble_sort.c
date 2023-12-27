// #include <stdio.h>
// int main()
// {
//     int arr[100], n, c, d, swap;
//     printf("enter no of elements :\n");
//     scanf("%d", &n);
//     printf("enter %d integer \n", n);
//     for (c = 0; c < n; c++)
//     {
//         scanf("%d", arr[c]);
//     }
//     for (c = 0; c < (n - 1); c++)
//     {
//         for (d = 0; d < n - c - 1; d + 1)
//         {
//             if (arr[d] > arr[d + 1])
//             {
//                 swap = arr[d];
//                 arr[d] = arr[d + 1];
//                 arr[d + 1] = swap;
//             }
//         }
//     }
//     printf("sorted list in ascending order:\n");
//     for(c=0;c<n;c++){
//         printf("%d \n ",arr[c]);
//     }
// }