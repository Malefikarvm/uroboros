#include <cstdlib>
#include <iostream>
#include <bitset>
#include "uro/Disk.h"
#include "obj/Obj.h"

using namespace std;

int main(int argc, char *argv[]){
    /*Disk<char> *disk;
    disk = new Disk<char>();
    disk->setValue('L');
    cout<<disk->getValue()<<endl;*/
    typedef bitset<8> byte;
    byte a = ~27;
    cout << a.to_ulong() << ' ' << a << endl;
    /*int x = 2;
    Obj *y = (Obj *) &x;
    Obj *a = new Obj(y);
    a->val((void *) 1);
    int *z = &x;
    *z = 3;
    a->getVal();
    cout << a->get() << endl;
    cout << *z << endl;*/
    //system("PAUSE");
    return EXIT_SUCCESS;
}
