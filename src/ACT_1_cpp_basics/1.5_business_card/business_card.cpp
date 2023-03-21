#include <cstdio>
#include <iostream>

// forward declarations
std::string name_card_string(const std::string &company_name,
                             const std::string &ins_handle,
                             const std::string &address,
                             const std::string &name,
                             int office_number);

int main(int argc, char **argv) {
    std::string company_name = "University of Washington Bothell";
    std::string ins_handle = "@fatgoooose";
    std::string address = "UW1, 18115 Campus Way NE, Bothell, WA 98011";
    std::string name = "Peng Du";
    int office_number = 304;

    std::cout << "name card reads: " << name_card_string(company_name,
                                                         ins_handle,
                                                         address,
                                                         name,
                                                         office_number) << std::endl;

    company_name = "Microsoft";
    ins_handle = "@sam";
    address = "15563 NE 31st Way, Redmond, WA 98052";
    name = "Sam";
    office_number = 12;
    std::cout << "name card reads: " << name_card_string(company_name,
                                                         ins_handle,
                                                         address,
                                                         name,
                                                         office_number) << std::endl;
}

std::string name_card_string(const std::string &company_name,
                             const std::string &ins_handle,
                             const std::string &address,
                             const std::string &name,
                             int office_number) {
    return company_name + ", " +
           ins_handle + ", " +
           address + ", " +
           name + ", " +
           std::to_string(office_number);
}

