#pragma once
#include "template/template.hpp"
map<ll,ll> prime_fac(ll n){
    vector<pair<ll,ll>> res;
    for(ll i = 2;i*i<=n;i++){
        if(n%i == 0){
            ll cnt = 0;
            while(n%i == 0){
                n /= i;
                cnt++;
            }
            res.emplace_back(i,cnt);
        }
    }
    if(n != 1) res.emplace_back(n,1);
    return map<ll,ll>(res.begin(),res.end());
}