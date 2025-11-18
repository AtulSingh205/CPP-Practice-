#include<iostream>
using namespace std;
int factorialN(int n){
    int fact = 1;
    for(int i=0;i<=n;i++){
        fact*=i;
    }
    return fact;
}
    int main(){
        cout<<factorialN(5)<<endl;
        cout<<factorialN(20)<<endl;
        return 0;
    }
