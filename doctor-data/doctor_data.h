#pragma once
#include <string>

namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani,
    };
}

namespace heaven {

    class Vessel {

    public:
        std::string name;
        int generation;
        int busters {0};
        star_map::System current_system {star_map::System::Sol};

        Vessel(std::string name, int generation) {
            this->name = name;
            this->generation = generation;
        }

        Vessel(std::string name, int generation, star_map::System current_system) {
            this->name = name;
            this->generation = generation;
            this->current_system = current_system;
        }

        Vessel replicate(std::string name);

        void make_buster() { busters++;}
        bool shoot_buster();

        friend bool operator==(const Vessel &lhs, const Vessel &rhs) {
            return lhs.generation == rhs.generation;
        }

        friend bool operator!=(const Vessel &lhs, const Vessel &rhs) {
            return !(lhs == rhs);
        }

        friend bool operator<(const Vessel &lhs, const Vessel &rhs) {
            return lhs.generation < rhs.generation;
        }

        friend bool operator<=(const Vessel &lhs, const Vessel &rhs) {
            return !(rhs < lhs);
        }

        friend bool operator>(const Vessel &lhs, const Vessel &rhs) {
            return rhs < lhs;
        }

        friend bool operator>=(const Vessel &lhs, const Vessel &rhs) {
            return !(lhs < rhs);
        }
    };

    std::string get_older_bob(Vessel vessel1, Vessel vessel2);
    bool in_the_same_system(Vessel vessel1, Vessel vessel2);
}
