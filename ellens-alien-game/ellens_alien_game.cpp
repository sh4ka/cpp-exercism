namespace targets {
    class Alien {
        int health {3};
    public:
        int x_coordinate, y_coordinate;

        Alien(int x_coord, int y_coord) {
            x_coordinate = x_coord;
            y_coordinate = y_coord;
        }

        int get_health() const {
            return health;
        }

        int hit() {
            if (is_alive()) {
                health--;
            }
            return health;
        }

        bool is_alive() const {
            return get_health() > 0;
        }

        bool teleport(int new_x, int new_y) {
            x_coordinate = new_x;
            y_coordinate = new_y;

            return true;
        }

        bool collision_detection(Alien other_alien) {
            if (other_alien.x_coordinate == x_coordinate && other_alien.y_coordinate == y_coordinate) {
                return true;
            }
            return false;
        }
    };

}  // namespace targets