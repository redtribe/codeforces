//pranjalr34

#include<bits/stdc++.h>

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(a) a.begin(),a.end()
#define SZ(a) (int)(a.size())
#define fi(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define n_p next_permutation
#define b_s binary_search
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a<b)?b:a)
#define gcd __gcd
#define INF INT_MAX
#define init(a,b) memset(a,b,sizeof(a))
#define INFL LLONG_MAX
#define trace1(x)                cerr <<#x<<": "<<x<<endl;
#define trace2(x, y)             cerr <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define trace3(x, y, z)          cerr <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define trace4(a, b, c, d)       cerr <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define trace5(a, b, c, d, e)    cerr <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<endl;

using namespace std;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;
typedef long long int LL;
typedef pair<LL,LL> PLL;
typedef vector<LL> VLL;
typedef vector< PLL > VPLL;
typedef set<int> SI;
typedef set<LL> SLL;

void FastIO(){ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);cout.precision(15);}
//LL modpow(LL a,LL b,LL m){LL r = 1;while (b > 0){if (b % 2 == 1)r = (r * a) % m;b = b >> 1;a = (a * a) % m;}return r%m;}
int power(int a,int p){int ret=1;while(p){if(p&1)ret=(ret*a);a=(a*a);p/=2;}return ret;}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

int main()
{
    FastIO();
    int n,i,maxans=-1,counter=0;
    VI v,vec;
    int ans;
    cin >>n;
    for(i=0;i<=n;i++)
        v.PB(i);
    int cnt1,x;
    x=n;
    while(x!=0)
    {
        counter++;
        x=x/2;
    }
    x=power(2,counter)-1;
    cout <<x<<"\n";
    for(i=0;i<=n;i++)
    {
        ans=ans+i^(x^i);
    }
    /*for(i=0;i<=n;i++)
    {
        x=i;
        cnt1=0;
        while(cnt1!=counter)
        {
            d=x%2;
            x=x/2;
            cnt1++;
        }
    }*/
        


 /*   vec.resize(n+1);
    while(1)
    {
        ans=0;
        for(i=0;i<=n;i++)
            ans=ans+(i^v[i]);
        if(ans>maxans)
        {
            for(i=0;i<=n;i++)
                vec[i]=v[i];
            maxans=ans;
        }
        if(ans==20)
            counter++;
        if(!next_permutation(all(v)))
            break;
    }
    for(i=0;i<=n;i++)
        v[i]=i;
    cout <<maxans<<"\n";
    while(1)
    {
        ans=0;
        for(i=0;i<=n;i++)
            ans=ans+(i^v[i]);
        if(ans==maxans)
        {
            for(i=0;i<=n;i++)
                cout <<v[i]<<" ";
            cout <<"\n";
        }
        if(!next_permutation(all(v)))
            break;
    }*/
    return 0;
}
