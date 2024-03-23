---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: graph/Maze.hpp
    title: "\u30B0\u30EA\u30C3\u30C9\u8FF7\u8DEF(bfs)"
  - icon: ':heavy_check_mark:'
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
  - icon: ':heavy_check_mark:'
    path: tests/RMQ_min.test.cpp
    title: tests/RMQ_min.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/example.test.cpp
    title: tests/example.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\nusing ll = long long;\n#define all(x) (x).begin(), (x).end()\n\
    template <typename T, typename U>\nostream &operator<<(ostream &os, const pair<T,\
    \ U> &p) {\n    os << p.first << \" \" << p.second;\n    return os;\n}\nll sum(vector<ll>\
    \ a){\n    ll res = 0;\n    for(auto x:a) res += x;\n    return res;\n}\ntemplate\
    \ <typename T, typename U>\nistream &operator>>(istream &is, pair<T, U> &p) {\n\
    \    is >> p.first >> p.second;\n    return is;\n}\n\ntemplate <typename T>\n\
    ostream &operator<<(ostream &os, const vector<T> &v) {\n    int s = (int)v.size();\n\
    \    for (int i = 0; i < s; i++) os << (i ? \" \" : \"\") << v[i];\n    return\
    \ os;\n}\ntemplate <typename T>\nistream &operator>>(istream &is, vector<T> &v)\
    \ {\n    for (auto &x : v) is >> x;\n    return is;\n}\n#define rep(i, n) for\
    \ (int (i) = 0; (i) < (int)(n); (i)++)\n#define rep2(i, s, n) for (int (i) = (s);\
    \ (i) < (int)(n); (i)++)\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll =\
    \ long long;\n#define all(x) (x).begin(), (x).end()\ntemplate <typename T, typename\
    \ U>\nostream &operator<<(ostream &os, const pair<T, U> &p) {\n    os << p.first\
    \ << \" \" << p.second;\n    return os;\n}\nll sum(vector<ll> a){\n    ll res\
    \ = 0;\n    for(auto x:a) res += x;\n    return res;\n}\ntemplate <typename T,\
    \ typename U>\nistream &operator>>(istream &is, pair<T, U> &p) {\n    is >> p.first\
    \ >> p.second;\n    return is;\n}\n\ntemplate <typename T>\nostream &operator<<(ostream\
    \ &os, const vector<T> &v) {\n    int s = (int)v.size();\n    for (int i = 0;\
    \ i < s; i++) os << (i ? \" \" : \"\") << v[i];\n    return os;\n}\ntemplate <typename\
    \ T>\nistream &operator>>(istream &is, vector<T> &v) {\n    for (auto &x : v)\
    \ is >> x;\n    return is;\n}\n#define rep(i, n) for (int (i) = 0; (i) < (int)(n);\
    \ (i)++)\n#define rep2(i, s, n) for (int (i) = (s); (i) < (int)(n); (i)++)"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy:
  - math/MEX.hpp
  - math/prime_fac.hpp
  - math/factorial.hpp
  - graph/RMQ_min.hpp
  - graph/unionfind.hpp
  - graph/Maze.hpp
  timestamp: '2024-03-23 14:03:42+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/example.test.cpp
  - tests/RMQ_min.test.cpp
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---
