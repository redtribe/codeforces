//pranjalr34

#include<bits/stdc++.h>

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(a) a.begin(),a.end()

using namespace std;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;
typedef long long int LL;
typedef pair<LL,LL> PLL;
typedef vector<LL> VLL;
typedef vector< PLL > VPLL;

//long long int gcd(long long int m, long long int n){if(n == 0) return m;return gcd(n, m % n);}  
//long long int fastpow(long long int a, long long int b,long long int m){long long int r = 1;while (b > 0){if (b % 2 == 1)r = (r * a) % m;b = b >> 1;a = (a * a) % m;}return r%m;}
//int prime(long long int x){if(x==1)return 0;if(x<=3)return 1;if(x%6==1||x%6==5){long long int y=sqrt(x),i;for(i=2;i<=y;i++)if(x%i==0)return 0;return 1;} return 0;}
//LL root(LL x){return v[x]<0?x:(v[x]=root(v[x]));}  //returns the root of the node x
//void merge(int x,int y){    if((x = root(x)) == (y = root(y)))     return ;if(v[y] < v[x]) swap(x, y);v[x] += v[y];v[y] = x;}  //(merges two sets) further if i is a root then v[i] is the negative of size of its set
//bool cmp(int x,int y){return x<y;}    //sorts in ascending order 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void cal()
{
    cout <<"IMPOSSIBLE\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int k,l,i,freq[26]={0},j,p;
    string str,v="";
    cin >>k>>str;
    l=str.length();
    for(i=0;i<l;i++)
        freq[str[i]-'a']++;
    for(i=25;i>k-1;i--)
        if(freq[i]!=0)
        {   
            cal();
            return 0;
        }
    for(i=k-1;i>=0;i--)
        if(freq[i]==0)
            v+=((char)('a'+i));
    j=0,p=v.length();
    for(i=l/2;i<l;i++)
    {
        if(str[i]=='?')
        {
            if(str[l-i-1]=='?')
            {
                if(j>=p)
                {
                    str[i]='a';
                    str[l-i-1]='a';
                }
                else
                {
                    str[i]=v[j];
                    str[l-i-1]=v[j];
                    j++;
                }
            }
            else
            {
                str[i]=str[l-i-1];
            }
        }
        else
        {
            if(str[l-i-1]=='?')
            {
                str[l-i-1]=str[i];
            }
            else
            {
                if(str[i]!=str[l-i-1])
                {
                    cal();
                    return 0;
                }
            }
        }
    }
    if(j==p)
        cout <<str<<"\n";
    else
    {
        cal();
        return 0;
    }
    return 0;
}
