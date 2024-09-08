#pragma once
#include "xtd.h"
#include "Particle.h"

class Atom {
private:
    //it's easier to make three list than one with particle because it's already classified correctly so less work
    std::vector<Electron> electrons;
    std::vector<Proton> protons;
    std::vector<Neutron> neutrons;

public:
    // Methods to add/remove particles
    void addElectron(const Electron& e) { electrons.push_back(e); }
    void addProton(const Proton& p) { protons.push_back(p); }
    void addNeutron(const Neutron& n) { neutrons.push_back(n); }

    // Methods to calculate properties
    int calculateCharge() const {
        return protons.size() - electrons.size();
    }

    double calculateMass() const {
        double totalMass = 0.0;
        for (const auto& p : protons) totalMass += p.getMass();
        for (const auto& n : neutrons) totalMass += n.getMass();
        for (const auto& e : electrons) totalMass += e.getMass();
        return totalMass;
    }
};
