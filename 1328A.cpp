// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    int t;
   cin>>t;
   while(t--){
       int x,y;
       cin>>x>>y;
       if(x%y==0)cout<<x%y<<endl;
       else cout<<y-(x%y)<<endl;
   }

    return 0;
}