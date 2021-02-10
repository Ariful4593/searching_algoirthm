#include<stdio.h>
int linear_search(int A[], int x)
{
    int i;
    for(i = 0; i < 6; i++){
        if(A[i] == x){
            return i+1;
        }
    }

    i = -1;
    return i;
}
int main()
{
    int ara[] = {10,30,45,20,40,60};
    int searching_value;
    scanf("%d", &searching_value);

    printf("%d\n", linear_search(ara, searching_value));

    return 0;
}
