
#include <bits/stdc++.h>
using namespace std;

int minPalPartion(string str)
{
    
    int n = str.length();
 
    
    int C[n][n];
    bool P[n][n];
 
   
    for (int i = 0; i < n; i++) {
        P[i][i] = true;
        C[i][i] = 0;
    }
 
   
    for (int L = 2; L <= n; L++) {
 
      
        for (int i = 0; i < n - L + 1; i++) {
            int j = i + L - 1; 
 
            
            if (L == 2)
                P[i][j] = (str[i] == str[j]);
            else
                P[i][j] = (str[i] == str[j]) && P[i + 1][j - 1];
 
      
            if (P[i][j] == true)
                C[i][j] = 0;
            else {
 
                
                C[i][j] = INT_MAX;
                for (int k = i; k <= j - 1; k++)
                    C[i][j] = min(C[i][j], C[i][k] + C[k + 1][j] + 1);
            }
        }
    }
 

    return C[0][n - 1];
}

int main()
{
    string str;
    cin>>str;
    cout << minPalPartion(str) << endl;
    return 0;
}
