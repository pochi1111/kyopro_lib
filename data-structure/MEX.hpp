#pragma once
#include "template/template.hpp"
//基本の型はll
struct MEX {
    set<pair<ll,ll>> st;
    map<ll,ll> mp;
    MEX(vector<ll> x){
        for (auto v : x) insert(v);

    }
    void insert(ll v) {
        mp[v] += 1;
        if (mp[v] > 1){
            return;
        }
        auto t = st.lower_bound({v-1,2});
        if (t != st.end() && t->first == v-1) t = st.erase(t);
        else st.insert({v,1});
        if (t != st.end() && t->first == v+1) st.erase(t);
        else st.insert({v,2});
    }
    void erase(ll v){
        mp[v] -= 1;
        if (mp[v] == 0) {
            auto t = st.lower_bound({v,2}); t--;
            if (t->first == v) st.erase(t);
            else st.insert({v-1,2});
            t = st.lower_bound({v,2});
            if (t->first == v) st.erase(t);
            else st.insert({v+1,1});
        }
    }
    ll mex() {
        auto t = st.lower_bound({0,-1});
        if (t->first != 0) return 0;
        else {
            t++;
            return t->first + 1;
        }
    }
};