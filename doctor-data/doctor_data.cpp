#include "doctor_data.h"

heaven::Vessel heaven::Vessel::replicate(std::string name) {
    return Vessel{name, ++this->generation, this->current_system};
}

bool heaven::Vessel::shoot_buster() {
    if (busters > 0) {
        busters -= 1;
        return true;
    }
    return false;
}

std::string heaven::get_older_bob(Vessel vessel1, Vessel vessel2) {
    std::string older = vessel1.name;
    if (vessel2 < vessel1) {
        older = vessel2.name;
    }

    return older;
}

bool heaven::in_the_same_system(Vessel vessel1, Vessel vessel2) {
    return vessel1.current_system == vessel2.current_system;
}
