#pragma once

#include "Particle.h"

class Electron : public Particle {
public:
    Electron() : Particle(9.109e-31, -1, 0.5) {}  // Mass, negative charge, and spin for an electron

    void move() override {
        // Define specific movement for an electron if needed/for later on
    }

    void interact(Particle* other) override {
        // Define how electrons interact with other particles /for later on 
    }
};
