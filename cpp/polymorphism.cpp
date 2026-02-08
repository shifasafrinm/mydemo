#include<iostream>

class shape{
    public:
    virtual void draw(){
        std::cout<<"drawing a circle"<<std::endl;

    }
};
class circle:public shape{
    public: void draw()override{
        std::cout<<"drawing a circle"<<std::endl;
    }
};
class square:public shape{
    public:
    void draw()override{
        std::cout<<"drawing a square"<<std::endl;
    }
};
int main(){
    shape*shapePtr;
    circle circle;
    square square;

    shapePtr=&circle;
    shapePtr->draw();

    shapePtr=&square;
    shapePtr->draw();

    return 0;
}

    

