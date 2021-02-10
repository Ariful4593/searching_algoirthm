#include<stdio.h>
int binary_search(int A[], int x)
{
    int left, right, mid;
    left = 0;
    right = 6;

    while(left <= right){
        mid = (left + right) / 2;

        if(A[mid] == x){
            return mid;
        }

        if(A[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int ara[] = {10,30,45,78,100,129,135};
    int searching_value;
    scanf("%d", &searching_value);

    printf("%d\n", binary_search(ara, searching_value));
}
