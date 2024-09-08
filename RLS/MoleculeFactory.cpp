#include "Molecule.h"

class MoleculeFactory {
public:
    static Molecule* createWaterMolecule() {
        Molecule* water = new Molecule();
        Atom* oxygen = new Atom();  // Create Oxygen Atom
        Atom* hydrogen1 = new Atom();  // Create Hydrogen Atom
        Atom* hydrogen2 = new Atom();  // Create Hydrogen Atom

        water->addAtom(oxygen);
        water->addAtom(hydrogen1);
        water->addAtom(hydrogen2);

        water->addBond(0, 1, "single");
        water->addBond(0, 2, "single");

        return water;
    }
};
