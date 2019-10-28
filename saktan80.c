#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n, m, q, ans = 0;
        scanf("%d %d %d", &n, &m, &q);
        int x[q], y[q];
        for(int i = 0 ; i < q ; i++)
        {
            scanf("%d %d", &x[i], &y[i]);
        }
        // printf("PRE OK");
        int a[n], b[m];
        for(int i = 0 ; i < n ; i++)
            a[i] = 0;
        for(int i = 0 ; i < m ; i++)
            b[i] = 0;
        // printf("OK");
        for(int i = 0 ; i < q ; i++)
            a[x[i] - 1]++;
        for(int i = 0 ; i < q ; i++)
            b[y[i] - 1]++;
        // printf("OK 2");
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(((a[i] + b[j]) % 2) != 0)
                    ans++;
            }
        }
        printf("%d\n", ans);
        
    }
    return 0;
}