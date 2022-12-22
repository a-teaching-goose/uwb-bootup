#pragma once

class Laptop {
private:
    std::string brand;
    int model_year;

public:
    Laptop(const std::string &brand, int modelYear) : brand(brand), model_year(modelYear) {}

    void start_up() {
        std::cout << "laptop " + brand + " (" + std::to_string(model_year) + ") is starting up";
    }
};