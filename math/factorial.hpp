#pragma once
#include "../template/template.hpp"
ll factorial(ll n) {
    ll ret = 1;
    for (ll i = 2; i <= n; i++) ret *= i;
    return ret;
}