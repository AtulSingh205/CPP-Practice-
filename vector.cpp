// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<char>vec ={'a','b','c','d'};
//     for(char val:vec){
//         cout<<val<<endl;
//     }
//     return 0;

// }

#include<iostream>
#include<vector>
using namespace std ;

 int display(vector<int> &V){
       for(int i = 0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> V;
    int  size ,element;
    cout<<"Enter  the size: ";
    cin>>size;

    for(int i = 1;i<size; i++){
     cout<<"Enter  a element: ";
     cin>>element;
     V.push_back(element); // elemnt ko end m add krta hai  
}
    display(V);

    vector<int> :: iterator iter  = V.begin();
    V.insert(iter+2,5,566); 
    display(V);

    for(auto it= V.begin();it!=V.end();it++){
        cout<<*it<<" ";
    }
            cout<<endl;

    V.pop_back();
    display(V);

    cout<<"after erase ";
    V.erase(V.begin()+1);

 display(V);

 
}