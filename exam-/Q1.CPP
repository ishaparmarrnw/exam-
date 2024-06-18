#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int width;
    public:
     void set(int length,int width)
     {
        this->length=length;
        this->width=width;

     }
     int  get()
     {
        return length * width;
     }
};
int main()
 {
    Rectangle rect;
    rect.set(10, 5);
    cout << "Area of the rectangle: " << rect.get() << endl;
    return 0;
}