#include <iostream>

using namespace std;

class ultanClass  //declare class
{
    int w;
    int h;
    public:
        void setWidth(int);  //declare member functions
        void setHeight(int);
        int getArea(void){return h * w;}

};

void ultanClass::setWidth(int width)  //access the member functions and use set methods
{
    w = width;
}
void ultanClass::setHeight(int height)
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
    ultanClass square; //declare object of class ultanClass
    square.setWidth(width);
    square.setHeight(height);
    cout<<"The of the square of height " << height << " and width "
    << width << " is " << square.getArea() << endl;
    return 0;
}
