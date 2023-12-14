#pragma once
#include <bits/stdc++.h>
#include "template/alias.hpp"

namespace Monoid {
    template<typename T>
    struct Sum {
        using value_type = T;
        static constexpr T op(const T &x, const T &y) { return x + y; }
        static constexpr T e() { return T(0); }
    };
    template<typename T, T max_value = infinity<T>::value>
    struct Min {
        using value_type = T;
        static constexpr T op(const T &x, const T &y) { return x < y ? x : y; }
        static constexpr T e() { return max_value; }
    };
    template<typename T, T min_value = infinity<T>::mvalue>
    struct Max {
        using value_type = T;
        static constexpr T op(const T &x, const T &y){ return x < y ? y : x; }
        static constexpr T e(){ return min_value; }
    };
    template<typename T>
    struct GCD{
        using value_type = T;
        static T op(const T &x, const T &y) { return gcd(x, y); }
        static T id() { return T(0); }
    };
    template<typename T>
    struct LCM{
        using value_type = T;
        static T op(const T &x,const T &y){ return lcm(x, y); }
        static T id(){ return T(1); }
    };
}
