#include <stdio.h>

int main(void)
{
    int N, n, find;
    int arr[100] = { 0 };
    int check = 0;
    int i;
    
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &n);
        arr[i] = n;
    }
    scanf("%d", &find);
    for(i = 0;i < N; i++)
    {
        if(arr[i] == find)
        {
            check++;
        }
    }
    
    printf("%d", check);
    
    return 0;
}