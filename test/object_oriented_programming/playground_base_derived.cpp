#include "gtest/gtest.h"
#include "ACT_3_object_oriented_programming/3.4_base_and_derived/derived_class.h"

#define TO_STRING(x) std::to_string(x)

#define SKIP_FOR_CI

#ifndef SKIP_FOR_CI
// any problem?
TEST(base_derived, use_base_on_stack) {
    BaseClass base(6);
    PRINT("\t>>>>>> Base capacity: " + TO_STRING(base.get_capacity()));

    // base object is delete here when function returns
}

// any problem?
TEST(base_derived, use_base_pointer_on_heap) {
    BaseClass *p_base = new BaseClass(6);
    PRINT("\t>>>>>> Base capacity: " + TO_STRING(p_base->get_capacity()));

    // base object pointed by p_base is NOT deleted when function returns.
    // uncomment the following line to fix
    // delete p_base;
}

// any problem?
TEST(base_derived, use_derived_on_stack) {
    DerivedClass derived(6);
    PRINT("\t>>>>>> Derived capacity: " + TO_STRING(derived.get_capacity()));

    // derived object is delete here when function returns
    // no problem
}

// any problem?
TEST(base_derived, use_derived_pointer_on_heap) {
    DerivedClass *p_derived = new DerivedClass(6);
    PRINT("\t>>>>>> Derived capacity: " + TO_STRING(p_derived->get_capacity()));

    // derived object pointed by p_derived is NOT deleted when function returns
    // uncomment the following line to fix
    // delete p_derived;
}

// any problem?
TEST(base_derived, use_base_pointer_on_derived_object) {
    DerivedClass *p_derived = new DerivedClass(40);

    BaseClass *p_base = p_derived;

    PRINT("\t>>>>>> Base pointer -> Derived object, capacity:" + TO_STRING(p_base->get_capacity()));
    PRINT("\t>>>>>> Derived pointer -> Derived object, capacity:" + TO_STRING(p_derived->get_capacity()));

    // derived object pointed by p_derived is NOT deleted when function returns
    // uncomment the following line to fix
    //delete p_derived;

    // the following also works, but base class destructor needs to be virtual
    delete p_base;
}
#endif

/*
 * does this even compile?
 */
//#define ENABLE_SECTION
#ifdef ENABLE_SECTION
TEST(base_derived, use_derived_pointer_on_base_object) {
    BaseClass *p_base = new BaseClass(6);

    DerivedClass *p_derived = &p_base;

    PRINT("\t>>>>>> Derived point -> Base object, capacity:" + TO_STRING(p_base->get_capacity()));
}
#endif
