#include <iostream>

class BusinessCard {

private:
    std::string company_name;
    std::string ins_handle;
    std::string address;
    std::string name;
    int office_number;

public:
    BusinessCard(const std::string &name,
                 const std::string &company_name,
                 const std::string &ins_handle,
                 const std::string &address,
                 int officeNumber) : company_name(company_name),
                                     ins_handle(ins_handle),
                                     address(address),
                                     name(name),
                                     office_number(officeNumber) {}

    std::string name_card_string() {
        return company_name + ", " +
               ins_handle + ", " +
               address + ", " +
               name + ", " +
               std::to_string(office_number);
        // sort of like toString() in Java
    }
};

int main(int argc, char **argv) {
    BusinessCard card1(
            "Peng Du", "University of Washington Bothell",
            "@fatgoooose",
            "UW1, 18115 Campus Way NE, Bothell, WA 98011",
            304);

    std::cout << card1.name_card_string() << std::endl;

    BusinessCard card2(
            "Sam", "Microsoft",
            "@sam",
            "15563 NE 31st Way, Redmond, WA 98052",
            12);

    std::cout << card2.name_card_string() << std::endl;
}


