/*Problem Statement:
Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key
element is present in the array or not.  Also, find total number of comparisons for each input case.
(Time Complexity = O(nlogn), where n is the size of input).
*/
#include<stdio.h>
#include<stdlib.h>
void binarysearch(int [], int, int, int);
int main()
{
    int a[10], T, n, key, i, j, lb, ub;
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
        binarysearch(a, 0, n-1, key);
    } 
    return 0;
}
void binarysearch(int a[], int lb, int ub, int key)
{
    int c = 0;
    int mid;
    while(lb <= ub)
    {
        mid = (lb + ub)/2;
        c++;
        if(key == a[mid])
        {
            printf("Present - %d", c);
            return;
        }
        else if(key > a[mid])
        {
            lb = mid + 1;
        }
        else{
            ub = mid - 1;
        }
    }
    printf("Not present - %d", c);
}
