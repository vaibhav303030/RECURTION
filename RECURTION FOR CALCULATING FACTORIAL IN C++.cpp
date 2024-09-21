// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
int re=n* fact(n-1);
 return re;

}

int main() {
    // Write C++ code here
    // INP FUNCTION RETURN STATEMENT USEFUL NEHAMI RETURN STATEMENT LIHINE 
    //GARJECHE AAHE **************
    int n;
    cout<<"nter n";
    cin>>n;
    int r=fact(n);
    cout<<r;
    

    return 0;
}