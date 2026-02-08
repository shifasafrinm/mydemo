#include<iostream>
using namespace std;
class rectangle{
private:
double lenght;
double width;
public:
rectangle(double l,double w){
lenght=l;
width=w;
}

void setDimensions(double l,double w){
    lenght=l;
    width=w;
}
double getArea()const{
    return lenght*width;
  }
};
int main(){
    rectangle rect(4.0,5.0);
    cout<<"Area"<<rect.getArea()<<endl;
    
    
    return 0;
}


