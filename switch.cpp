#include <iostream>
using namespace std;

int main(){
    int v;
    cin>>v;
    switch(v){
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        default:
            cout<<"Not match";
    }
}