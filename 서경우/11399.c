#include <stdio.h>

void sort(int *n, int len);

int main()
{
    int n;
    int tl[1001];
    int i;
    int sum = 0;
    int sum2 = 0;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
        scanf("%d", &tl[i]);
    sort(tl,n);
    for (i = 0;i < n;i++)
    {
        sum += tl[i];
        sum2 += sum;
    }
    printf("%d", sum2);
    
    return 0;
}

void sort(int *n,int len)
{
    int i, j;
    int temp;
    for (i = 0;i < len;i++)
    {
        for (j = 0;j <len-(i+1);j++)
        {
            if (n[j] > n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }
}


