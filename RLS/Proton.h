#pragma once

#include "Particle.h"

class Proton : public Particle {
public:
    Proton() : Particle(1.673e-27, 1, 0.5) {}  // Mass, positive charge, and spin for a proton

    void move() override {
        // Define specific movement for a proton
    }

    void interact(Particle* other) override {
        // Define how protons interact with other particles
    }
};
