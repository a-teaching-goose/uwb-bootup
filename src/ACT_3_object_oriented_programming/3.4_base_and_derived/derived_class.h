#include "util.h"
#include "base_class.h"

class DerivedClass : public BaseClass {
private:
    int capacity;
    int *derived_class_data;

public:
    DerivedClass(int capacity);

    int get_capacity() {
        return capacity;
    }

    ~DerivedClass();
};