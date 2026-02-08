#include<iostream>
using namespace std;
template <typename T>
T maxi(T a,T b){
    return(a>b)?a:b;
}
int main(){
   int int1=19,int2=7;
   cout<<"max"<< maxi (int1,int2)<<endl;
   return 0;
}