/*
Problem statement:
Given an unsorted array of integers, design an algorithm and implement a program to sort this array using selection sort.
Your program should also find number of comparisons and number of swaps required.
*/
#include<stdio.h>
#include<stdlib.h>
void selectionsort(int [], int);
int main()
{
    int a[10], t, n;
    printf("Enter the no. of test case: ");
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        printf("\nEnter the no. of elements: ");
        scanf("%d", &n);
        printf("Input array:\n");
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        selectionsort(a, n);
    }
    return 0;
}
void selectionsort(int a[], int n)
{
    int i, j, c = 0, s = 0, min, temp;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[min] > a[j])
            {
                min = j;
            }
            c++;
        }
        if(min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        s++;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nComparisons: %d", c);
    printf("\nSwaps: %d", s);
}
