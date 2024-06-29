// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
    int t;
    vector<int> sequence;
    int i=1;
    while(sequence.size()<=1000){
        if(i%3!=0 && i%10!=3){
            sequence.push_back(i);
            i++;
            
        }
        else{
            i++;
            continue;
        }
    }
   cin>>t;
   while(t--){
       int x;
       cin>>x;
       cout<<sequence[x-1]<<endl;
   }

    return 0;
}