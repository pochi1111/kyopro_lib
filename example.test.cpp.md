---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
  bundledCode: "#line 1 \"example.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
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
    \ (int (i) = 0; (i) < (int)(n); (i)++)\n#line 3 \"example.test.cpp\"\nint main()\
    \ {\n    int n; cin >> n;\n    vector<int> s(n);\n    for(int i = 0;i<n;i++){\n\
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
  path: example.test.cpp
  requiredBy: []
  timestamp: '2023-11-23 10:39:45+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: example.test.cpp
layout: document
redirect_from:
- /verify/example.test.cpp
- /verify/example.test.cpp.html
title: example.test.cpp
---
