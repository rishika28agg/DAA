/*
Problem statement:
Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any
duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n))
*/
#include<stdio.h>
#include<stdlib.h>
void msort(int [], int [], int, int);
void merge(int [], int [], int, int, int);
void linearsearch(int [], int);
int main()
{
    int a[10], b[10];
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    msort(a, b, 0, n - 1);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    linearsearch(a, n);
    return 0;
}
void msort(int a[], int b[], int lb, int ub)
{
    int mid = 0;
    int n = sizeof(a)/ sizeof(a[0]);
    //printf("%d", n);
    if(lb < ub)
    {
        mid = (lb + ub)/2;
        msort(a, b, lb, mid);
        msort(a, b, mid + 1, ub);
        merge(a, b, lb, mid, ub);
    }
}
void merge(int a[], int b[], int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = lb;
    while(i <= mid && j <= ub)
    {
        if(a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if(i > mid)
    {
        while(j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(i = lb; i <= ub; i++)
    {
        a[i] = b[i];
    }
}
void linearsearch(int a[], int n)
{
    int i, j, key;
    int flag = 0;
    for(i = 0; i < n; i++)
    {
        key = a[i];
        if(a[i] == a[i + 1])
        {
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }
    if(flag == 1)
        printf("YES");
    else
        printf("NO");
}
