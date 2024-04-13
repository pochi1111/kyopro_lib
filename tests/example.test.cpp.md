---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "#line 1 \"tests/example.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
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
    \ (ll (i) = (s); (i) < (ll)(n); (i)++)\n#line 3 \"tests/example.test.cpp\"\nint\
    \ main() {\n    int n; cin >> n;\n    vector<int> s(n);\n    for(int i = 0;i<n;i++){\n\
    \        cin >> s[i];\n    }\n    int q; cin >> q;\n    int cnt = 0;\n    while\
    \ (q --) {\n        int t_i; cin >> t_i;\n        cnt += binary_search(s.begin(),s.end(),\
    \ t_i);\n    }\n    cout << cnt << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include \"template/template.hpp\"\nint main() {\n    int n; cin >> n;\n   \
    \ vector<int> s(n);\n    for(int i = 0;i<n;i++){\n        cin >> s[i];\n    }\n\
    \    int q; cin >> q;\n    int cnt = 0;\n    while (q --) {\n        int t_i;\
    \ cin >> t_i;\n        cnt += binary_search(s.begin(),s.end(), t_i);\n    }\n\
    \    cout << cnt << endl;\n    return 0;\n}\n"
  dependsOn:
  - template/template.hpp
  isVerificationFile: true
  path: tests/example.test.cpp
  requiredBy: []
  timestamp: '2024-04-13 16:15:16+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: tests/example.test.cpp
layout: document
redirect_from:
- /verify/tests/example.test.cpp
- /verify/tests/example.test.cpp.html
title: tests/example.test.cpp
---
