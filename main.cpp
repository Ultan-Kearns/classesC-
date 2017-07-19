#include <iostream>

using namespace std;

class Shape  //declare class
{
    int w;
    int h;
    public:
        void setWidth(int);  //declare member functions
        void setHeight(int);
        int getArea(void){return h * w;}

};

void Shape::setWidth(int width)  //access the member functions and use set methods
{
    w = width;
}
void Shape::setHeight(int height)
{
    h = height;
}

int main()
{
    int height;
    int width;
    cout<<"Please enter height: ";
    cin >> height;
    cout<<"Please enter width: ";
    cin >> width;
    Shape shape; //declare object of class shape
    shape.setWidth(width);
    shape.setHeight(height);
    cout<<"The of the shape of height " << height << " and width "
    << width << " is " << shape.getArea() << endl;
    return 0;
}
