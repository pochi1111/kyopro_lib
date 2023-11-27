---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/RMQ_min.test.cpp
    title: tests/RMQ_min.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
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
    \ (int (i) = 0; (i) < (int)(n); (i)++)\n#line 3 \"graph/RMQ_min.hpp\"\nstruct\
    \ RMQ{\n    vector<ll> x;\n    vector<ll> dat;\n    RMQ(vector<ll> x){\n     \
    \   int M = 1;\n        //\u521D\u671F\u5316 |1-indexed|0\u306F\u7121\u8996\u3057\
    \u307E\u3057\u3087\u3046|\n        while(M < x.size()) M *= 2;\n        dat =\
    \ vector<ll> (M*2,LLONG_MAX);\n        for(int i=dat.size()-1;i>0;i--){\n    \
    \        if (i >= M){\n                dat[i] = x[i-M];\n            }else{\n\
    \                dat[i] = op(dat[i*2],dat[i*2+1]);\n            }\n        }\n\
    \    }\n    void update(ll i,ll x){\n        i += dat.size()/2;\n        dat[i]\
    \ = x;\n        while(i > 0){\n            i /= 2;\n            dat[i] = op(dat[i*2],dat[i*2+1]);\n\
    \        }\n    }\n    ll query(ll a,ll b){\n        return subquerry(a,b,1,0,dat.size()/2);\n\
    \    }\n    ll subquerry(ll a,ll b,ll k,ll l,ll r){\n        if (r <= a || b <=\
    \ l) return LLONG_MAX;\n        else if(a <= l && r <= b) return dat[k];\n   \
    \     else return op(subquerry(a,b,k*2,l,(l+r)/2),subquerry(a,b,k*2+1,(l+r)/2,r));\n\
    \    }\n    ll op(ll a,ll b){\n        return min(a,b);\n    }\n};\n"
  code: "#pragma once\n#include \"template/template.hpp\"\nstruct RMQ{\n    vector<ll>\
    \ x;\n    vector<ll> dat;\n    RMQ(vector<ll> x){\n        int M = 1;\n      \
    \  //\u521D\u671F\u5316 |1-indexed|0\u306F\u7121\u8996\u3057\u307E\u3057\u3087\
    \u3046|\n        while(M < x.size()) M *= 2;\n        dat = vector<ll> (M*2,LLONG_MAX);\n\
    \        for(int i=dat.size()-1;i>0;i--){\n            if (i >= M){\n        \
    \        dat[i] = x[i-M];\n            }else{\n                dat[i] = op(dat[i*2],dat[i*2+1]);\n\
    \            }\n        }\n    }\n    void update(ll i,ll x){\n        i += dat.size()/2;\n\
    \        dat[i] = x;\n        while(i > 0){\n            i /= 2;\n           \
    \ dat[i] = op(dat[i*2],dat[i*2+1]);\n        }\n    }\n    ll query(ll a,ll b){\n\
    \        return subquerry(a,b,1,0,dat.size()/2);\n    }\n    ll subquerry(ll a,ll\
    \ b,ll k,ll l,ll r){\n        if (r <= a || b <= l) return LLONG_MAX;\n      \
    \  else if(a <= l && r <= b) return dat[k];\n        else return op(subquerry(a,b,k*2,l,(l+r)/2),subquerry(a,b,k*2+1,(l+r)/2,r));\n\
    \    }\n    ll op(ll a,ll b){\n        return min(a,b);\n    }\n};"
  dependsOn:
  - template/template.hpp
  isVerificationFile: false
  path: graph/RMQ_min.hpp
  requiredBy: []
  timestamp: '2023-11-27 22:15:47+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/RMQ_min.test.cpp
documentation_of: graph/RMQ_min.hpp
layout: document
redirect_from:
- /library/graph/RMQ_min.hpp
- /library/graph/RMQ_min.hpp.html
title: graph/RMQ_min.hpp
---
