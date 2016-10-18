#include "../util/Byte.h"
#include "Atom.h"

class Molecule: private Atom {

    private:
        int atoms[];

    public:
        Molecule(int electrons);
};
