---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/factorial.hpp
    title: math/factorial.hpp
  - icon: ':question:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0019
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0019
  bundledCode: "#line 1 \"tests/factorial.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0019\"\
    \n#line 2 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nusing ll = long long;\n#define all(x) (x).begin(), (x).end()\ntemplate\
    \ <typename T, typename U>\nostream &operator<<(ostream &os, const pair<T, U>\
    \ &p) {\n    os << p.first << \" \" << p.second;\n    return os;\n}\ntemplate\
    \ <typename T, typename U>\nistream &operator>>(istream &is, pair<T, U> &p) {\n\
    \    is >> p.first >> p.second;\n    return is;\n}\n\ntemplate <typename T>\n\
    ostream &operator<<(ostream &os, const vector<T> &v) {\n    int s = (int)v.size();\n\
    \    for (int i = 0; i < s; i++) os << (i ? \" \" : \"\") << v[i];\n    return\
    \ os;\n}\ntemplate <typename T>\nistream &operator>>(istream &is, vector<T> &v)\
    \ {\n    for (auto &x : v) is >> x;\n    return is;\n}\n#define rep(i, n) for\
    \ (int (i) = 0; (i) < (int)(n); (i)++)\n#line 3 \"math/factorial.hpp\"\nll factorial(ll\
    \ n) {\n    ll ret = 1;\n    for (ll i = 2; i <= n; i++) ret *= i;\n    return\
    \ ret;\n}\n#line 4 \"tests/factorial.test.cpp\"\nint main(){\n    int N; cin >>\
    \ N;\n    cout << factorial(N) << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0019\"\
    \n#include \"template/template.hpp\"\n#include \"math/factorial.hpp\"\nint main(){\n\
    \    int N; cin >> N;\n    cout << factorial(N) << endl;\n}"
  dependsOn:
  - template/template.hpp
  - math/factorial.hpp
  isVerificationFile: true
  path: tests/factorial.test.cpp
  requiredBy: []
  timestamp: '2023-11-26 17:39:26+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: tests/factorial.test.cpp
layout: document
redirect_from:
- /verify/tests/factorial.test.cpp
- /verify/tests/factorial.test.cpp.html
title: tests/factorial.test.cpp
---
