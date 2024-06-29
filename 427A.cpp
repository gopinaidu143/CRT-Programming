// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int x;
    int crime=0;
    int police=0;
    while(n>0){
        cin>>x;
        if (x<0 && police==0){
           crime+=1; 
        }
        else if(x>0)
             police+=x;
        else{
            police-=1;
        }
    n--;
    }
    cout<<crime;

    return 0;
}