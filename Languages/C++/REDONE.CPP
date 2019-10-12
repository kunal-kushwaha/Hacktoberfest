#include <iostream>
#include<vector>
using namespace std;
#define MOD 1000000007
#define ll long long int
int main() {
 
 vector <ll> l(1000001);
   int i;
   l[0]=1;
   for(i=1;i<=1000001;i++)
    {
       l[i] = (l[i-1]*i) % MOD;
      }
      ll t;
      cin >> t;
     while (t--)
       {
         ll n,ans=0;
         cin >> n;
         ans = l[n+1];
         cout<<ans-1<<endl;

       }
 
    
    
   
    return 0;
}
