#include <bits/stdc++.h>
using namespace std;
int n,a;
int t[111]={0};
int solve(){
    int p=a,left=a,right=a,res=0;
    if(n%2==0){
 
    }
    while(true){
        //cout<<"lft= "<<left<<" right= "<<right<<"  res "<<res<<'\n';
        if(left>=1 && right<=n){
            if(left==right){
                if(t[left]==1)
                    res++;
            }else{
                if((t[left]==1 || t[right]==1)){
                    if((t[left]+t[right])==2){
                        res+=2;
                    }
                }
 
            }
            left--;
            right++;
        }else{
            //cout<<"ah here\n";
            if(left>=1){
                if(t[left]==1)
                    res++;
                left--;
            }
            if(right<=n){
                if(t[right]==1)
                    res++;
                right++;
            }
 
        }
        if(left<=0 && right>n){
            return res;
        }
        //char c;cin>>c;
    }
}
int main()
{
    cin>>n>>a;
    for(int i=1;i<=n;i++)
        cin>>t[i];
    cout<<solve();
    return 0;
}
