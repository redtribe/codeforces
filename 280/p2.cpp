//pranjalr34
#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int m, long long int n){if(n == 0) return m;return gcd(n, m % n);}  
long long int fastpow(long long int a, long long int b,long long int m){long long int r = 1;while (b > 0){if (b % 2 == 1)r = (r * a) % m;b = b >> 1;a = (a * a) % m;}return r;}
int prime(long long int x){if(x==1)return 0;if(x<=3)return 1;if(x%6==1||x%6==5){long long int y=sqrt(x),i;for(i=2;i<=y;i++)if(x%i==0)return 0;return 1;} return 0;}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    set <int> s;
    int d=INT_MIN,x,i,n,var,l;
    double f;
    set <int>::iterator it;
    cin >>n>>l;
    for(i=0;i<n;i++)
    {
        cin >>var;
        s.insert(var);
    }
    it=s.begin();
    x=(*it);
    it++;
    while(it!=s.end())
    {
        d=max(d,(*it)-x);
        x=*it;
        it++;
    }
    f=d/2.0;
    if(s.find(0)==s.end())
        f=max((double)(*(s.begin())),f);
    it=s.end();
    it--;
    if(s.find(l)==s.end())
        f=max((double)(l-(*it)),f);
    printf("%.6lf\n",f);
    return 0;
}