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
    \ (i) < (ll)(n); (i)++)\n#line 3 \"math/prime_fac.hpp\"\nmap<ll,ll> prime_fac(ll\
    \ n){\n    vector<pair<ll,ll>> res;\n    for(ll i = 2;i*i<=n;i++){\n        if(n%i\
    \ == 0){\n            ll cnt = 0;\n            while(n%i == 0){\n            \
    \    n /= i;\n                cnt++;\n            }\n            res.emplace_back(i,cnt);\n\
    \        }\n    }\n    if(n != 1) res.emplace_back(n,1);\n    return map<ll,ll>(res.begin(),res.end());\n\
    }\n"
  code: "#pragma once\n#include \"template/template.hpp\"\nmap<ll,ll> prime_fac(ll\
    \ n){\n    vector<pair<ll,ll>> res;\n    for(ll i = 2;i*i<=n;i++){\n        if(n%i\
    \ == 0){\n            ll cnt = 0;\n            while(n%i == 0){\n            \
    \    n /= i;\n                cnt++;\n            }\n            res.emplace_back(i,cnt);\n\
    \        }\n    }\n    if(n != 1) res.emplace_back(n,1);\n    return map<ll,ll>(res.begin(),res.end());\n\
    }"
  dependsOn:
  - template/template.hpp
  isVerificationFile: false
  path: math/prime_fac.hpp
  requiredBy: []
  timestamp: '2024-03-23 14:08:26+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/prime_fac.hpp
layout: document
redirect_from:
- /library/math/prime_fac.hpp
- /library/math/prime_fac.hpp.html
title: math/prime_fac.hpp
---
