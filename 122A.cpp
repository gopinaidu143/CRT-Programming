// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    // Write C++ code here
    vector<int> a = {4,7,44,77,47,74,444,447,474,744,477,747,774,777};
    int x;
    cin>>x;
    int flag=0;
    for(int it : a){
        if(x%it==0){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    

    return 0;
}