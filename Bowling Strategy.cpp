#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        int i=1;
        
        if(k*l<n || ( k == 1 && n > 1))cout<<"-1"<<endl;
        else{
            for(int p=0;p<n;p++){
                cout<<i<<" ";
                i++;
                if(i>k)i=1;
            }
            
        cout<<endl;
        
        }
        
    }
	return 0;
}