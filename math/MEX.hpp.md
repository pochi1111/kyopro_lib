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
    \ U> &p) {\n    os << p.first << \" \" << p.second;\n    return os;\n}\ntemplate\
    \ <typename T, typename U>\nistream &operator>>(istream &is, pair<T, U> &p) {\n\
    \    is >> p.first >> p.second;\n    return is;\n}\n\ntemplate <typename T>\n\
    ostream &operator<<(ostream &os, const vector<T> &v) {\n    int s = (int)v.size();\n\
    \    for (int i = 0; i < s; i++) os << (i ? \" \" : \"\") << v[i];\n    return\
    \ os;\n}\ntemplate <typename T>\nistream &operator>>(istream &is, vector<T> &v)\
    \ {\n    for (auto &x : v) is >> x;\n    return is;\n}\n#define rep(i, n) for\
    \ (int (i) = 0; (i) < (int)(n); (i)++)\n#line 3 \"math/MEX.hpp\"\nstruct MEX {\n\
    \    set<pair<ll,ll>> st;\n    // set\u306Bv\u3092\u8FFD\u52A0(v\u304C\u3042\u308B\
    \u3068\u304D\u306E\u52D5\u4F5C\u306F\u672A\u5B9A\u7FA9)\n    void insert(ll v)\
    \ {\n        auto t = st.lower_bound({v-1,2});\n        if (t != st.end() && t->first\
    \ == v-1) t = st.erase(t);\n        else st.insert({v,1});\n        if (t != st.end()\
    \ && t->first == v+1) st.erase(t);\n        else st.insert({v,2});\n    }\n  \
    \  // set\u304B\u3089v\u3092\u524A\u9664(v\u304C\u306A\u3044\u3068\u304D\u306E\
    \u52D5\u4F5C\u306F\u672A\u5B9A\u7FA9)\n    void erase(ll v) {\n        auto t\
    \ = st.lower_bound({v,2}); t--;\n        if (t->first == v) st.erase(t);\n   \
    \     else st.insert({v-1,2});\n        t = st.lower_bound({v,2});\n        if\
    \ (t->first == v) st.erase(t);\n        else st.insert({v+1,1});\n    }\n    ll\
    \ mex() {\n        auto t = st.lower_bound({0,-1});\n        if (t->first != 0)\
    \ return 0;\n        else {\n            t++;\n            return t->first + 1;\n\
    \        }\n    }\n};\n"
  code: "#pragma once\n#include \"../template/template.hpp\"\nstruct MEX {\n    set<pair<ll,ll>>\
    \ st;\n    // set\u306Bv\u3092\u8FFD\u52A0(v\u304C\u3042\u308B\u3068\u304D\u306E\
    \u52D5\u4F5C\u306F\u672A\u5B9A\u7FA9)\n    void insert(ll v) {\n        auto t\
    \ = st.lower_bound({v-1,2});\n        if (t != st.end() && t->first == v-1) t\
    \ = st.erase(t);\n        else st.insert({v,1});\n        if (t != st.end() &&\
    \ t->first == v+1) st.erase(t);\n        else st.insert({v,2});\n    }\n    //\
    \ set\u304B\u3089v\u3092\u524A\u9664(v\u304C\u306A\u3044\u3068\u304D\u306E\u52D5\
    \u4F5C\u306F\u672A\u5B9A\u7FA9)\n    void erase(ll v) {\n        auto t = st.lower_bound({v,2});\
    \ t--;\n        if (t->first == v) st.erase(t);\n        else st.insert({v-1,2});\n\
    \        t = st.lower_bound({v,2});\n        if (t->first == v) st.erase(t);\n\
    \        else st.insert({v+1,1});\n    }\n    ll mex() {\n        auto t = st.lower_bound({0,-1});\n\
    \        if (t->first != 0) return 0;\n        else {\n            t++;\n    \
    \        return t->first + 1;\n        }\n    }\n};"
  dependsOn:
  - template/template.hpp
  isVerificationFile: false
  path: math/MEX.hpp
  requiredBy: []
  timestamp: '2023-11-26 14:45:19+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/MEX.hpp
layout: document
redirect_from:
- /library/math/MEX.hpp
- /library/math/MEX.hpp.html
title: math/MEX.hpp
---
