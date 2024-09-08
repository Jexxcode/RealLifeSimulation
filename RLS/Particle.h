#pragma once

class Particle {
protected:
    double mass;     // in kilograms (kg)
    int charge;      // in elementary charge units (e.g., -1 for electron, +1 for proton)
    double spin;     // in terms of angular momentum (in h units) for particles its 1/2 h units /its quantum properties with quarks

public:

    Particle(double m, int ch, double sp) : mass(m), charge(ch), spin(sp) {}


    virtual void move() = 0;                     // Pure virtual: movement behavior
    virtual void interact(Particle* other) = 0;  // Interaction between particles
    double getMass() const { return mass; }
    int getCharge() const { return charge; }
    double getSpin() const { return spin; }
};