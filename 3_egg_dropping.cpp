#include<bits/stdc++.h>
 using namespace std;
int solve(int e,int f){
    int min_attempt=INT_MAX;
    if(f==0|| f==1|| e==1){
        return f;
    }
    for (int k = 1 ; k <=f; k++)
    {
        int temp_ans=max(solve(e-2,k-1),solve(e,f-k))+1;
        min_attempt=min(min_attempt,temp_ans);
    }
    return min_attempt;
}

int main(){
    int e,f;
     cin>>e>>f;
  cout<<solve(e,f);
    return 0;
}