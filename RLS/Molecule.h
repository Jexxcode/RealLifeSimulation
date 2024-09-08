#pragma once
#include "Atom.h"

class Molecule {
private:
    std::vector<Atom*> atoms;  // Collection of atoms in the molecule
    std::map<std::pair<int, int>, std::string> bonds;  // for bonds I'll need to think more on how to to so

public:
    ~Molecule() {
        for (auto a : atoms) {
            delete a;  
        }
    }

    void addAtom(Atom* atom) {
        atoms.push_back(atom);
    }

    void addBond(int atomIndex1, int atomIndex2, const std::string& bondType) {
        bonds[{atomIndex1, atomIndex2}] = bondType;
    }

    double calculateMolecularMass() const {
        double totalMass = 0.0;
        for (const auto& atom : atoms) {
            totalMass += atom->calculateMass();
        }
        return totalMass;
    }

    void displayMolecule() const {
        // Display atoms and bonds
        for (size_t i = 0; i < atoms.size(); ++i) {
            //way to display it(optional)
        }
        for (const auto& bond : bonds) {
            // way to display it(optional)
        }
    }
};
