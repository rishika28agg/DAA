/*Problem Statement:
Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices
i, j, k such that arr[i] + arr[j] = arr[k].
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10], T, n, i = 0, j = 0, k = 0;
    int sum = 0, flag = 0;
    printf("Input no. of test cases: ");
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        printf("Enter no. of elements: ");
        scanf("%d", &n);
        printf("Input array:");
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                sum = a[i] + a[j];
                //printf("Sum: %d\n", sum);
                for(k = j + 1; k < n; k++)
                {
                    //printf("Value of third index: %d\n", a[k]);
                    if(sum == a[k])
                    {
                        flag = 1;
                        break;
                    }
                    else{
                        flag = 0;
                    }
                }
                //printf("Flag: %d\n", flag);
                if(flag == 1)
                {
                    printf("%d %d %d\n", i, j, k);
                    exit(1);
                }
            }
        }
        if(flag == 0)
        {
            printf("Sequence not found\n");
            exit(1);
        }
    }
}
