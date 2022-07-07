#include <iostream>
#include "1.h"
using  namespace  std;


int main(){
    Math<int> math;//
    cout<<math.sum(1,2)<<endl;
    cout<<math.max(3,1)<<endl;

    Math<float> math1;
    cout<<math1.max(1.2,1.4);
    return 0;
}
