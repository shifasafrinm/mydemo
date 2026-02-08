#include <iostream>

class simpleclass{
    public:
    simpleclass(){std::cout<<"constructor called!"<<std::endl;
}
    
~simpleclass(){
    std::cout<<"destructor called!"<<std::endl;
}
};
int main(){
    std::cout<<"creatimg an instance of simpleclass..."<<std::endl;
    simpleclass obj;
    std::cout<<"dpoing some work with simple class..."<<std::endl;
    return 0;
}