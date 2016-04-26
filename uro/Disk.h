#include <iostream>

using namespace std;

template<class Obj>
class Disk{
    public:
        Obj value;

        Disk();
        ~Disk();

        void setValue(const Obj& v);
        void setRightNode(Disk<Obj> *r);
        void setLeftNode(Disk<Obj> *l);

        Obj getValue();
        Disk<Obj>* getRightNode();
        Disk<Obj>* getLeftNode();

    private:
        Disk<Obj> *left;
        Disk<Obj> *right;
};

template<class Obj>
Disk<Obj>::Disk(){
    /*value = nullptr;
    left = right = nullptr;*/
}

template<class Obj>
void Disk<Obj>::setValue(const Obj& v){
    this->value = v;
}

template<class Obj>
void Disk<Obj>::setLeftNode(Disk<Obj> *l){
    this->left = l;
}

template<class Obj>
void Disk<Obj>::setRightNode(Disk<Obj> *r){
    this->right = r;
}

template<class Obj>
Disk<Obj>* Disk<Obj>::getLeftNode(){
    return this->left;
}

template<class Obj>
Obj Disk<Obj>::getValue(){
    return this->value;
}

template<class Obj>
Disk<Obj>* Disk<Obj>::getRightNode(){
    return this->right;
}
