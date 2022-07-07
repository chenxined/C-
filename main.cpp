#include <iostream>
using  namespace std;

class Box{

    //
    void set(double len,double bre,double hei);

public:
    double  height;
    double length;
    double  breadth;
};

void Box::set(double len, double bre, double hei) {
       length=len;
       breadth=bre;
       height=hei;
}


int main() {
    Box Box1;
    double volume=0.0;


  //  box1
  Box1.height=5.0;
  Box1.length=5.0;
  Box1.breadth=13.0;

  volume=Box1.height*Box1.length*Box1.breadth;
  cout<<"tiji:"<<volume<<endl;

    return 0;
}
