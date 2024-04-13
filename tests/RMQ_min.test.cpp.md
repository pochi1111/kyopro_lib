---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/RMQ_min.hpp
    title: graph/RMQ_min.hpp
  - icon: ':x:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "#line 1 \"tests/RMQ_min.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\
    \n#line 2 \"template/template.hpp\"\n#include <bits/stdc++.h>\n#include <atcoder/all>\n\
    using namespace std;\nusing namespace atcoder;\nusing ll = long long;\n#define\
    \ all(x) (x).begin(), (x).end()\ntemplate <typename T, typename U>\nostream &operator<<(ostream\
    \ &os, const pair<T, U> &p) {\n    os << p.first << \" \" << p.second;\n    return\
    \ os;\n}\nll sum(vector<ll> a){\n    ll res = 0;\n    for(auto x:a) res += x;\n\
    \    return res;\n}\ntemplate <typename T, typename U>\nistream &operator>>(istream\
    \ &is, pair<T, U> &p) {\n    is >> p.first >> p.second;\n    return is;\n}\n\n\
    template <typename T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n\
    \    ll s = (ll)v.size();\n    for (ll i = 0; i < s; i++) os << (i ? \" \" : \"\
    \") << v[i];\n    return os;\n}\ntemplate <typename T>\nistream &operator>>(istream\
    \ &is, vector<T> &v) {\n    for (auto &x : v) is >> x;\n    return is;\n}\n#define\
    \ rep(i, n) for (ll (i) = 0; (i) < (ll)(n); (i)++)\n#define rep2(i, s, n) for\
    \ (ll (i) = (s); (i) < (ll)(n); (i)++)\n#line 3 \"graph/RMQ_min.hpp\"\nstruct\
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
    \    }\n    ll op(ll a,ll b){\n        return min(a,b);\n    }\n};\n#line 4 \"\
    tests/RMQ_min.test.cpp\"\nint main(){\n    int N,Q;\n    cin >> N >> Q;\n    vector<ll>\
    \ A(N);\n    cin >> A;\n    RMQ rmq(A);\n    while(Q--){\n        int l,r;\n \
    \       cin >> l >> r;\n        cout << rmq.query(l,r) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n#include \"\
    template/template.hpp\"\n#include \"graph/RMQ_min.hpp\"\nint main(){\n    int\
    \ N,Q;\n    cin >> N >> Q;\n    vector<ll> A(N);\n    cin >> A;\n    RMQ rmq(A);\n\
    \    while(Q--){\n        int l,r;\n        cin >> l >> r;\n        cout << rmq.query(l,r)\
    \ << endl;\n    }\n}"
  dependsOn:
  - template/template.hpp
  - graph/RMQ_min.hpp
  isVerificationFile: true
  path: tests/RMQ_min.test.cpp
  requiredBy: []
  timestamp: '2024-04-13 16:15:16+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: tests/RMQ_min.test.cpp
layout: document
redirect_from:
- /verify/tests/RMQ_min.test.cpp
- /verify/tests/RMQ_min.test.cpp.html
title: tests/RMQ_min.test.cpp
---
