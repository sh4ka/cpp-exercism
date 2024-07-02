#include "raindrops.h"

namespace raindrops {
    std::string convert(int raindrop) {
        bool has_multiple = false;
        std::string result;
        if (raindrop % 3 == 0) {
            has_multiple = true;
            result += "Pling";
        }
        if (raindrop % 5 == 0) {
            has_multiple = true;
            result += "Plang";
        }
        if (raindrop % 7 == 0) {
            has_multiple = true;
            result += "Plong";
        }
        if (has_multiple == false) {
            result = std::to_string(raindrop);
        }

        return result;
    }
}  // namespace raindrops
