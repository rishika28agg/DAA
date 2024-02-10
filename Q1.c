/*Problem Statement:
Given an array of non-negative integers, design a linear algorithm and implement it using a program to find whether given key
element is present in the array or not. Also, find total number of comparisons for each input case.
(Time Complexity = O(n), where n is the size of input)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10], T, n, key, i, j, c, flag = 0;
    printf("Input no. of test cases: ");
    scanf("%d", &T);
    for(i = 1; i <= T; i++)
    {
        c = 0;
        printf("\nEnter no. of elements: ");
        scanf("%d", &n);
        printf("Input array:\n");
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        printf("Enter key: ");
        scanf("%d", &key);
        for(j = 0; j < n; j++)
        {
            if(key == a[j])
            {
                flag = 1;
                c++;
                break;
            }
            else{
                flag = 0;
                c++;
            }
        }
        if(flag == 1)
        {
            printf("Present - %d", c);
        }
        else{
            printf("Not present - %d", c);
        }
    }
}
