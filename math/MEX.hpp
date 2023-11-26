#pragma once
#include "../template/template.hpp"
struct MEX {
    set<pair<ll,ll>> st;
    // setにvを追加(vがあるときの動作は未定義)
    void insert(ll v) {
        auto t = st.lower_bound({v-1,2});
        if (t != st.end() && t->first == v-1) t = st.erase(t);
        else st.insert({v,1});
        if (t != st.end() && t->first == v+1) st.erase(t);
        else st.insert({v,2});
    }
    // setからvを削除(vがないときの動作は未定義)
    void erase(ll v) {
        auto t = st.lower_bound({v,2}); t--;
        if (t->first == v) st.erase(t);
        else st.insert({v-1,2});
        t = st.lower_bound({v,2});
        if (t->first == v) st.erase(t);
        else st.insert({v+1,1});
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