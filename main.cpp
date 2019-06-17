#include <iostream>

using namespace std;

class base{
public:
    virtual void vfunc(){
        cout<<"this is base's vfunc().\n";
    }
};

class derived1 : public base{
public:
    void vfunc(){
        cout<<"this is derived's vfunc()\n";
    }
};

class derived2:public base{
public:
};

int main(){
    base *p,b;
    derived1 d1;
    derived2 d2;
    //point to base
    p=&b;
    p->vfunc();

    //point to derived1
    p=&d1;
    p->vfunc();

    //point to derived2
    p=&d2;
    p->vfunc();

    return 0;
}
