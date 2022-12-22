#include <string>

class RubberDuck {
public:
    void talk(const std::string &words);

    std::string walk(int &steps);

    RubberDuck(const std::string &name);

    RubberDuck(const RubberDuck &another_duck);

    std::string &get_name();

    void set_name(const std::string &name);

    static std::string color();

    bool operator==(const RubberDuck &another_duck) const;

    bool operator!=(const RubberDuck &another_duck) const;

private:
    std::string name;
};