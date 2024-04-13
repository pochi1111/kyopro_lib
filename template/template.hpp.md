---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: data-structure/MEX.hpp
    title: data-structure/MEX.hpp
  - icon: ':warning:'
    path: graph/Maze.hpp
    title: "\u30B0\u30EA\u30C3\u30C9\u8FF7\u8DEF(bfs)"
  - icon: ':x:'
    path: graph/RMQ_min.hpp
    title: graph/RMQ_min.hpp
  - icon: ':warning:'
    path: graph/unionfind.hpp
    title: graph/unionfind.hpp
  - icon: ':warning:'
    path: math/MEX.hpp
    title: math/MEX.hpp
  - icon: ':warning:'
    path: math/factorial.hpp
    title: math/factorial.hpp
  - icon: ':warning:'
    path: math/prime_fac.hpp
    title: math/prime_fac.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: tests/RMQ_min.test.cpp
    title: tests/RMQ_min.test.cpp
  - icon: ':x:'
    path: tests/example.test.cpp
    title: tests/example.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
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
    \ (i)++)\n#define rep2(i, s, n) for (ll (i) = (s); (i) < (ll)(n); (i)++)\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n#include <atcoder/all>\nusing namespace\
    \ std;\nusing namespace atcoder;\nusing ll = long long;\n#define all(x) (x).begin(),\
    \ (x).end()\ntemplate <typename T, typename U>\nostream &operator<<(ostream &os,\
    \ const pair<T, U> &p) {\n    os << p.first << \" \" << p.second;\n    return\
    \ os;\n}\nll sum(vector<ll> a){\n    ll res = 0;\n    for(auto x:a) res += x;\n\
    \    return res;\n}\ntemplate <typename T, typename U>\nistream &operator>>(istream\
    \ &is, pair<T, U> &p) {\n    is >> p.first >> p.second;\n    return is;\n}\n\n\
    template <typename T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n\
    \    ll s = (ll)v.size();\n    for (ll i = 0; i < s; i++) os << (i ? \" \" : \"\
    \") << v[i];\n    return os;\n}\ntemplate <typename T>\nistream &operator>>(istream\
    \ &is, vector<T> &v) {\n    for (auto &x : v) is >> x;\n    return is;\n}\n#define\
    \ rep(i, n) for (ll (i) = 0; (i) < (ll)(n); (i)++)\n#define rep2(i, s, n) for\
    \ (ll (i) = (s); (i) < (ll)(n); (i)++)"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy:
  - math/factorial.hpp
  - math/MEX.hpp
  - math/prime_fac.hpp
  - graph/Maze.hpp
  - graph/RMQ_min.hpp
  - graph/unionfind.hpp
  - data-structure/MEX.hpp
  timestamp: '2024-04-13 16:15:16+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - tests/RMQ_min.test.cpp
  - tests/example.test.cpp
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---
