#pragma once

#include "Particle.h"

class Neutron : public Particle {
public:
    Neutron() : Particle(1.675e-27, 0, 0.5) {}  // Mass, charge (neutral), and spin for a neutron

    void move() override {
        // Define specific movement for a neutron/if needed
    }

    void interact(Particle* other) override {
        // Define how neutrons interact with other particles/later on
    }
};
