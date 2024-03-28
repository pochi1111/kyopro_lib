---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\nusing ll = long long;\n#define all(x) (x).begin(), (x).end()\n\
    template <typename T, typename U>\nostream &operator<<(ostream &os, const pair<T,\
    \ U> &p) {\n    os << p.first << \" \" << p.second;\n    return os;\n}\nll sum(vector<ll>\
    \ a){\n    ll res = 0;\n    for(auto x:a) res += x;\n    return res;\n}\ntemplate\
    \ <typename T, typename U>\nistream &operator>>(istream &is, pair<T, U> &p) {\n\
    \    is >> p.first >> p.second;\n    return is;\n}\n\ntemplate <typename T>\n\
    ostream &operator<<(ostream &os, const vector<T> &v) {\n    ll s = (ll)v.size();\n\
    \    for (ll i = 0; i < s; i++) os << (i ? \" \" : \"\") << v[i];\n    return\
    \ os;\n}\ntemplate <typename T>\nistream &operator>>(istream &is, vector<T> &v)\
    \ {\n    for (auto &x : v) is >> x;\n    return is;\n}\n#define rep(i, n) for\
    \ (ll (i) = 0; (i) < (ll)(n); (i)++)\n#define rep2(i, s, n) for (ll (i) = (s);\
    \ (i) < (ll)(n); (i)++)\n#line 3 \"data-structure/MEX.hpp\"\n//\u57FA\u672C\u306E\
    \u578B\u306Fll\nstruct MEX {\n    set<pair<ll,ll>> st;\n    map<ll,ll> mp;\n \
    \   void clear(){\n        st.clear();\n        mp.clear();\n    }\n    void set(vector<ll>\
    \ x){\n        clear();\n        for (auto v : x) insert(v);\n    }\n    void\
    \ insert(ll v) {\n        mp[v] += 1;\n        if (mp[v] > 1){\n            return;\n\
    \        }\n        auto t = st.lower_bound({v-1,2});\n        if (t != st.end()\
    \ && t->first == v-1) t = st.erase(t);\n        else st.insert({v,1});\n     \
    \   if (t != st.end() && t->first == v+1) st.erase(t);\n        else st.insert({v,2});\n\
    \    }\n    void erase(ll v){\n        mp[v] -= 1;\n        if (mp[v] == 0) {\n\
    \            auto t = st.lower_bound({v,2}); t--;\n            if (t->first ==\
    \ v) st.erase(t);\n            else st.insert({v-1,2});\n            t = st.lower_bound({v,2});\n\
    \            if (t->first == v) st.erase(t);\n            else st.insert({v+1,1});\n\
    \        }\n    }\n    ll mex() {\n        auto t = st.lower_bound({0,-1});\n\
    \        if (t->first != 0) return 0;\n        else {\n            t++;\n    \
    \        return t->first + 1;\n        }\n    }\n};\n"
  code: "#pragma once\n#include \"template/template.hpp\"\n//\u57FA\u672C\u306E\u578B\
    \u306Fll\nstruct MEX {\n    set<pair<ll,ll>> st;\n    map<ll,ll> mp;\n    void\
    \ clear(){\n        st.clear();\n        mp.clear();\n    }\n    void set(vector<ll>\
    \ x){\n        clear();\n        for (auto v : x) insert(v);\n    }\n    void\
    \ insert(ll v) {\n        mp[v] += 1;\n        if (mp[v] > 1){\n            return;\n\
    \        }\n        auto t = st.lower_bound({v-1,2});\n        if (t != st.end()\
    \ && t->first == v-1) t = st.erase(t);\n        else st.insert({v,1});\n     \
    \   if (t != st.end() && t->first == v+1) st.erase(t);\n        else st.insert({v,2});\n\
    \    }\n    void erase(ll v){\n        mp[v] -= 1;\n        if (mp[v] == 0) {\n\
    \            auto t = st.lower_bound({v,2}); t--;\n            if (t->first ==\
    \ v) st.erase(t);\n            else st.insert({v-1,2});\n            t = st.lower_bound({v,2});\n\
    \            if (t->first == v) st.erase(t);\n            else st.insert({v+1,1});\n\
    \        }\n    }\n    ll mex() {\n        auto t = st.lower_bound({0,-1});\n\
    \        if (t->first != 0) return 0;\n        else {\n            t++;\n    \
    \        return t->first + 1;\n        }\n    }\n};"
  dependsOn:
  - template/template.hpp
  isVerificationFile: false
  path: data-structure/MEX.hpp
  requiredBy: []
  timestamp: '2024-03-28 17:04:14+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/MEX.hpp
layout: document
redirect_from:
- /library/data-structure/MEX.hpp
- /library/data-structure/MEX.hpp.html
title: data-structure/MEX.hpp
---
