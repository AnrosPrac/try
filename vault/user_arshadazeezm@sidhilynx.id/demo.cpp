#include <iostream>  
using namespace std;

class Shape {
public:
    virtual void draw() { 
        cout << "Drawing a Shape" << endl; 
    }
    
    virtual ~Shape() {} 
};

class Circle : public Shape {
public:
    void draw() override { 
        cout << "Drawing a Circle" << endl; 
    }
};

int main() {
    Shape* s = new Circle();
    
    s->draw(); 
    
    delete s; 
    return 0;
}