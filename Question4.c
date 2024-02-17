/*
Problem statement:
Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array or not.
If present, then also find the number of copies of given key. (Time Complexity = O(log n))
*/
#include<stdio.h>
int binarysearch(int [], int, int, int);
int main()
{
    int a[10], T, n, i, key, c = 0;
    int lb, ub;
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
        int result = binarysearch(a, 0, n - 1, key);
        if(result != -1)
        {
            c = 1;
            int left = result - 1;
            while(left >= 0 && a[left] == key)
            {
                c++;
                left--;
            }
            int right = result + 1;
            while(right < n && a[right] == key)
            {
                c++;
                right++;
            }
            printf("Found key %d - %d times\n", key, c);
        }else
            printf("Key not found");
    }
    return 0;
}
int binarysearch(int a[], int lb, int ub, int key)
{
    while(lb <= ub)
    {
        int mid = lb + (ub - lb)/2;
        if(a[mid] == key)
            return mid;
        if(a[mid] < key)
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return -1;
}
