#include <iostream>
using namespace std;
// class difinition + implementation together
class Rectangle{
    private:
        float length;
        float width;
    public:
        //default constructor
        Rectangle(){
            length = 0;
            width  = 0;
        }
        // destructor
        ~Rectangle(){
            // does nothing
        }
        // assign values
        void setLength(float l){
            length = l;
        }
        void setWidth(float w){
            width = w;
        }
        // retrieve values 
        float getLength() const{
            return length;
        }
        float getWidth() const{
            return width;
        }
        //calculate area
        float calculateArea() const{
            return length * width;
        }
};
int main(){
    Rectangle rect;
    float l, w;
    //user input
    cout<< "enter lenth: ";
    cin>> l;
    cout<<"enter width: ";
    cin>>w;
    // assign values 
    rect.setLength(l);
    rect.setWidth(w);
    //output area
    cout<<"area of rectangle is: "<< rect.calculateArea()<<endl;
    return 0;
}