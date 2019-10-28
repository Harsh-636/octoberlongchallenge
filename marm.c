#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n, k, i, j = 0, m;
        scanf("%d %d", &n, &k);
        int a[n];
        for(i = 0 ; i < n ; ++i)
            scanf("%d", &a[i]);
        // if(n % 2 != 0)
            m = k % (3*n);
            for(i = 0 ; i < m ; i++)
            {
                a[i%n] = a[i%n] ^ a[(n - (i%n) - 1)];
            }
            if(k > (n/2) && (n % 2 != 0))
                a[n/2] = 0;
            for(i = 0 ; i < n ; i++)
                printf("%d ", a[i]);
    }
    return 0;
}