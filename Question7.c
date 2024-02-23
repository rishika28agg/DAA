/*
Problem statement:
Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort.
Your program should be able to find number of comparisons and shifts (shifts - total number of times the array
elements are shifted from their place) required for sorting the array.
*/
#include<stdio.h>
#include<stdlib.h>
void insertionsort(int [], int);
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
        insertionsort(a, n);
    }
    return 0;
}
void insertionsort(int a[], int n)
{
    int i, j, c = 0, s = 0, temp;
    for(i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            s++;
            j--;
            c++;
        }
        a[j + 1] = temp;
        s++;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nComparisons: %d", c);
    printf("\nShifts: %d", s);
}
