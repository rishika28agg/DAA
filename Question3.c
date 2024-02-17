/*
Problem Statement:
Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key
element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on.
Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key.
(Complexity < O(n), where n is the number of elements need to be scanned for searching): Jump Search
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int jumpsearch(int [], int, int);
int main()
{
    int a[10], T, n, key, i, j, loc;
    printf("Input no. of test cases: ");
    scanf("%d", &T);
    for(i = 1; i <= T; i++)
    {
        printf("\nEnter the no. of elements: ");
        scanf("%d", &n);
        printf("Input array:\n");
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        printf("Enter key: ");
        scanf("%d", &key);
        loc = jumpsearch(a, n, key);
        if(loc >= 0)
            printf("Element present at %d", loc + 1);
        else
            printf("Element not present");
    }
    return 0;
}
int jumpsearch(int a[], int n, int key)
{
    int start = 0;
    int end = sqrt(n);
    while(a[end] <= key && end < n)
    {
        start = end;
        end += sqrt(n);
        if(end > n - 1);
            end = n;
    }
    for(int i = start; i < end; i++)
    {
        if(a[i] == key)
            return i;
    }
    return -1;
}
