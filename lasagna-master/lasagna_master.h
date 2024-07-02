#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime(const std::vector<std::string>& layers, int time_per_layer = 2);

    amount quantities(std::vector<std::string> layers);

    void addSecretIngredient(std::vector<std::string> &my_ingredients, std::vector<std::string> friend_ingredients);
    void addSecretIngredient(std::vector<std::string> &my_ingredients, std::string auntie_secret);

    std::vector<double> scaleRecipe(const std::vector<double>& amounts_for_two, double amount_to_cook);

}  // namespace lasagna_master
