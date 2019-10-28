#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n, i, j, index = 0, temp, count;
        cin>>n;
        int a[n];
        for(i = 0 ; i < n ; i++)
            cin>>a[i];
        for(i = (n-1) ; i >= (index) ; --i)
        {
            temp = 0;
            count = 0;
            for(j = (i-1) ; j >= 0 ; --j)
            {
                if((a[j] % a[i]) == 0)
                    temp++;
                else
                    count++;
                if(count >= (i - index))
                    break;
            }
            if(index < temp)
                index = temp;
        }
        cout<<index<<endl;
    }
    return 0;
}