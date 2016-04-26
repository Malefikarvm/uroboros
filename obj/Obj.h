#include <iostream>

using namespace std;

class Obj{
    public:
        Obj(Obj *val);
        ~Obj();
        Obj *get();
        void val(void *val);
        void getVal();

    private:
        void *obj;
        Obj *value;
};

void Obj::val(void *val) {
    this->obj = val;
}

void Obj::getVal() {
    cout << this->obj << endl;
}

Obj::Obj(Obj *val) {
    this->value = val;
}

Obj *Obj::get() {
    return this->value;
}

Obj::~Obj() {
    delete this->value;
}

