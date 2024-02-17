/*
Problem statement:
Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their
difference is equal to a given key, K.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10], T, n, i, key, count = 0;
    printf("Input no. of test cases: ");
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        printf("Enter no. of elements: ");
        scanf("%d", &n);
        printf("Input sorted array:\n");
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter key: ");
        scanf("%d", &key);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] - a[j] == key || a[j] - a[i] == key)
                count++;
        }
    }
    printf("Number of pairs with difference equal to %d: %d\n", key, count);
    return 0;
}
