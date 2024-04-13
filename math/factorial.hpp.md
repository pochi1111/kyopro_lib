---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template/template.hpp\"\n#include <bits/stdc++.h>\n#include\
    \ <atcoder/all>\nusing namespace std;\nusing namespace atcoder;\nusing ll = long\
    \ long;\n#define all(x) (x).begin(), (x).end()\ntemplate <typename T, typename\
    \ U>\nostream &operator<<(ostream &os, const pair<T, U> &p) {\n    os << p.first\
    \ << \" \" << p.second;\n    return os;\n}\nll sum(vector<ll> a){\n    ll res\
    \ = 0;\n    for(auto x:a) res += x;\n    return res;\n}\ntemplate <typename T,\
    \ typename U>\nistream &operator>>(istream &is, pair<T, U> &p) {\n    is >> p.first\
    \ >> p.second;\n    return is;\n}\n\ntemplate <typename T>\nostream &operator<<(ostream\
    \ &os, const vector<T> &v) {\n    ll s = (ll)v.size();\n    for (ll i = 0; i <\
    \ s; i++) os << (i ? \" \" : \"\") << v[i];\n    return os;\n}\ntemplate <typename\
    \ T>\nistream &operator>>(istream &is, vector<T> &v) {\n    for (auto &x : v)\
    \ is >> x;\n    return is;\n}\n#define rep(i, n) for (ll (i) = 0; (i) < (ll)(n);\
    \ (i)++)\n#define rep2(i, s, n) for (ll (i) = (s); (i) < (ll)(n); (i)++)\n#line\
    \ 3 \"math/factorial.hpp\"\nll factorial(ll n) {\n    ll ret = 1;\n    for (ll\
    \ i = 2; i <= n; i++) ret *= i;\n    return ret;\n}\n"
  code: "#pragma once\n#include \"../template/template.hpp\"\nll factorial(ll n) {\n\
    \    ll ret = 1;\n    for (ll i = 2; i <= n; i++) ret *= i;\n    return ret;\n\
    }"
  dependsOn:
  - template/template.hpp
  isVerificationFile: false
  path: math/factorial.hpp
  requiredBy: []
  timestamp: '2024-04-13 16:15:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/factorial.hpp
layout: document
redirect_from:
- /library/math/factorial.hpp
- /library/math/factorial.hpp.html
title: math/factorial.hpp
---
