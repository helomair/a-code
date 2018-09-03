#include <bits/stdc++.h>

using namespace std;

long long cnt;

int m(int t)
{
    int tmp=1;
    for(int i=1;i<=t;i++)
        tmp*=i;
    return tmp;
}

double fast_pow(double base,int t)
{
    if(t==0) return 1;
    double ans=1;
    while(t>0)
    {
        if(t&1)
            ans*=base;
        base*=base;
        t>>=1;
    }
    return ans;
}

int main()
{
    double A=0.1,B=0.3,C=0.25,D=0.35,ans=0.0;
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++)
            for(int k=0;k<=2;k++)
            {
                int result = m(i+j+k+2);
                double tmp;
                if(i)   result/=i;
                if(j)   result/=j;
                if(k)   result/=k;
                result/=2;
                tmp=fast_pow(A,3)*fast_pow(B,i)*fast_pow(C,j)*fast_pow(D,k);
                tmp*=result;
                ans+=tmp;
                cout<<"B "<<i<<" C "<<j<<" D "<<k<<" re: "<<tmp<<"\n";
            }
    cout<<ans<<"\n";
    return 0;
}
