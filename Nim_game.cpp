#include<bits/stdc++.h>
 using namespace std;


int main(){
    int n;
     cin>>n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }
     
     int x=a[0];
     for (int i = 1; i < n; i++)
     {
        x=x^a[i];
     }
     if(x!=0) cout<<"Player 1 wins the game"<<endl;
     else cout<<"Player 2 wins the game"<<endl;
     
    return 0;
}