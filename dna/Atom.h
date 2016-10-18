#include "../util/Byte.h"

template <size_t e>
class Atom: private Byte{

    private:
        Byte::byte electrons[e];

    public:
        Atom(int electrons[]);
        byte operator[](int i);
};

template <size_t e>
Byte::byte Atom<e>::operator[](int pos){
    return electrons[pos];
}

template <size_t e>
Atom<e>::Atom(int arr[]) {
    for (int i = 0; e >= i; i++) {
        electrons[i] = (byte) arr[i];
    }
}