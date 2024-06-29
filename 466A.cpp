// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n, m, a, b ;
    cin>>n>>m>>a>>b;
    int normalprice = a*n;
    if(n<m) cout<<min(a*n,b);
    else{
    int x= (n%m)*a;
    int specialprice = (n/m)*b + min(x,b);
    cout<<min(normalprice,specialprice);
    }
    
    return 0;
}