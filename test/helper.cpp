#include "test_macros.hpp"
#include <matrix/helper_functions.hpp>

using namespace matrix;

int main()
{
    TEST(fabs(wrap_pi(4.0) - (4.0 - 2*M_PI)) < FLT_EPSILON);
    TEST(fabs(wrap_pi(-4.0) - (-4.0 + 2*M_PI)) < FLT_EPSILON);
    TEST(fabs(wrap_pi(3.0) - (3.0)) < FLT_EPSILON);
    TEST(!is_finite(wrap_pi(1000.0f)));
    TEST(!is_finite(wrap_pi(-1000.0f)));
    wrap_pi(NAN);

    TEST(fabs(wrap_2pi(-4.0) - (-4.0 + 2*M_PI)) < FLT_EPSILON);
    TEST(fabs(wrap_2pi(3.0) - (3.0)) < FLT_EPSILON);
    TEST(!is_finite(wrap_2pi(1000.0f)));
    TEST(!is_finite(wrap_2pi(-1000.0f)));
    wrap_2pi(NAN);

    Vector3f a(1, 2, 3);
    Vector3f b(4, 5, 6);
    a.T().print();
    TEST(!isEqual(a, b));
    TEST(isEqual(a, a));

    TEST(isEqualF(1.0f, 1.0f));
    TEST(!isEqualF(1.0f, 2.0f));
    return 0;
}

/* vim: set et fenc=utf-8 ff=unix sts=0 sw=4 ts=4 : */
