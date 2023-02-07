#include <tuple>

#ifndef B16TUTE1_MASS_H
#define B16TUTE1_MASS_H


class Mass {
public:
    Mass(double mass, std::tuple<double, double> position, std::tuple<double, double> velocity, std::tuple<double);
    double get_mass() const;
    std::tuple<double, double> get_position() const;
    std::tuple<double, double> get_velocity() const;
    void set_force(std::tuple<double, double> force);


protected:
    double mass;
    std::tuple<double, double> position;
    std::tuple<double, double> velocity;
    std::tuple<double, double> force;

};



// mass, position, velocity
// able to update itself depending on forces applied to it



#endif
