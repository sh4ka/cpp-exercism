#include "lasagna_master.h"

namespace lasagna_master {
    int preparationTime(const std::vector<std::string>& layers, int time_per_layer) {
        return layers.size() * time_per_layer;
    }

    amount quantities(std::vector<std::string> layers) {
        double needed_sauce = 0;
        int needed_noodles = 0;
        int amount_per_noodle_layer = 50;
        double amount_per_sauce_layer = 0.2;

        for (const auto& layer: layers) {
            if (layer == "noodles") {
                needed_noodles += amount_per_noodle_layer;
            }
            if (layer == "sauce") {
                needed_sauce += amount_per_sauce_layer;
            }
        }

        return amount{needed_noodles, needed_sauce};
    }

    void addSecretIngredient(std::vector<std::string> &my_ingredients, std::vector<std::string> friend_ingredients) {
        my_ingredients.back() = friend_ingredients.back();
    }

    void addSecretIngredient(std::vector<std::string> &my_ingredients, std::string auntie_secret) {
        my_ingredients.back() = auntie_secret;
    }

    std::vector<double> scaleRecipe(const std::vector<double>& amounts_for_two, double amount_to_cook) {
        std::vector<double> computed_amounts;
        computed_amounts.reserve(amounts_for_two.size());
        for (auto for_two: amounts_for_two) {
            computed_amounts.push_back(for_two / 2 * amount_to_cook);
        }

        return computed_amounts;
    }
}  // namespace lasagna_master
