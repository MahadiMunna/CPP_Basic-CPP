#include <iostream>
#include <algorithm>
using namespace std;

int my_min(int a,int b){
    if(a<b) return a;
    else return b;
}
int my_max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    int a,b;
    cin>>a>>b;
    int minn = my_min(a,b);//using function
    int maxx = my_max(a,b);//using function

    int mn = min(a,b);//built in function
    int mx = max(a,b);//built in function

    cout<<mn<<endl;
    cout<<mx<<endl;
}