#include<iostream>
#include<string>
using namespace std;
class person{
    private:
    string name;
    int age;
    
    public:
    person(const std::string&n,int a):name(n),age(a){}
    person(const person&other):name(other.name),age(other.age){}
    void display(){
        std::cout<<"name: "<<name<<",age: "<<age<<std::endl;
    }
};
int main(){
    person p1("shifa",18);
    person p2=p1;
    std::cout<<"person 1: ";
    p1.display();
    std::cout<<"p2: ";
    p2.display();

    return 0;
}