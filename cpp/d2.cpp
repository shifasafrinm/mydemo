#include<iostream>
using namespace std; 

int d2array[5][5]={
{ 1,2,3,4,5},
{ 1,2,3,4,5},
{ 1,2,3,4,5},
{ 1,2,3,4,5},
{ 1,2,3,4,5}
};
int main(){
int row=sizeof(d2array)/sizeof(d2array[0]);

cout<<row<<endl;
return 0;
}
