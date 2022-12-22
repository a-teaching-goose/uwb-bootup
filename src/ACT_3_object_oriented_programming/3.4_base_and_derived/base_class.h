#include "util.h"

class BaseClass {
protected:
    int capacity;

private:
    int *base_class_data;

public:

    BaseClass(int capacity);

    int get_capacity() {
        return capacity;
    }

    //virtual ~BaseClass();
    ~BaseClass();
};