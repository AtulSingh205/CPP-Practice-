#include<iostream>
using namespace std;
int main(){
    int mark ;
    cout<<"enter mark: ";
    cin >> mark;
    if(mark>=90){
        cout<<"A";
    }else if(mark>=80&&90<=90){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;
}