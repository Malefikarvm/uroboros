#include <cstdlib>
#include <iostream>
//#include "util/Byte.h"
//#include "uro/Disk.h"
//#include "obj/Obj.h"
#include "dna/Atom.h"

using namespace std;

int main(int argc, char *argv[]){
    /*Disk<char> *disk;
    disk = new Disk<char>();
    disk->setValue('L');
    cout<<disk->getValue()<<endl;*/
    /*typedef bitset<8> byte;
    byte a = ~27;*/
    /*Byte *b;
    b->setByte(27);
    cout << b->getNum()<< ' ' << b->getByte() << endl;*/
    int vals[] = {27, ~27, 12};
    const int size = sizeof(vals) / sizeof(*vals);
    Atom<size> a(vals);
    cout << size << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }
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
