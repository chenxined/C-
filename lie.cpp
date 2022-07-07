

#include <iostream>

using namespace std;

namespace one{
    void func(){
        cout<<"func"<<endl;
    };
}
namespace  two{
    void  func(){
            cout<<"func2"<<endl;
        };
}

int main(){
    two::func();
    one::func();
    return 0;
}