---
data:
  _extendedDependsOn:
  - icon: ':warning:'
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
    \ namespace std;\nusing ll = long long;\nusing ld = long double;\nconstexpr int\
    \ inf = 1 << 30;\nconstexpr ll INF = 1LL << 60;\n#define rep(i, n) for (int (i)\
    \ = 0; (i) < (int)(n); (i)++)\n#line 3 \"graph/unionfind.hpp\"\n\nstruct UnionFind\
    \ {\n    vector<int> par; // par[i]:i\u306E\u89AA\u306E\u756A\u53F7\u3000(\u4F8B\
    ) par[3] = 2 : 3\u306E\u89AA\u304C2\n\n    UnionFind(int N) : par(N) { //\u6700\
    \u521D\u306F\u5168\u3066\u304C\u6839\u3067\u3042\u308B\u3068\u3057\u3066\u521D\
    \u671F\u5316\n        for(int i = 0; i < N; i++) par[i] = i;\n    }\n\n    int\
    \ root(int x) { // \u30C7\u30FC\u30BFx\u304C\u5C5E\u3059\u308B\u6728\u306E\u6839\
    \u3092\u518D\u5E30\u3067\u5F97\u308B\uFF1Aroot(x) = {x\u306E\u6728\u306E\u6839\
    }\n        if (par[x] == x) return x;\n        return par[x] = root(par[x]);\n\
    \    }\n\n    void connect(int x, int y) { // x\u3068y\u306E\u6728\u3092\u4F75\
    \u5408\n        int rx = root(x); //x\u306E\u6839\u3092rx\n        int ry = root(y);\
    \ //y\u306E\u6839\u3092ry\n        if (rx == ry) return; //x\u3068y\u306E\u6839\
    \u304C\u540C\u3058(=\u540C\u3058\u6728\u306B\u3042\u308B)\u6642\u306F\u305D\u306E\
    \u307E\u307E\n        par[rx] = ry; //x\u3068y\u306E\u6839\u304C\u540C\u3058\u3067\
    \u306A\u3044(=\u540C\u3058\u6728\u306B\u306A\u3044)\u6642\uFF1Ax\u306E\u6839rx\u3092\
    y\u306E\u6839ry\u306B\u3064\u3051\u308B\n    }\n\n    bool same(int x, int y)\
    \ { // 2\u3064\u306E\u30C7\u30FC\u30BFx, y\u304C\u5C5E\u3059\u308B\u6728\u304C\
    \u540C\u3058\u306A\u3089true\u3092\u8FD4\u3059\n        int rx = root(x);\n  \
    \      int ry = root(y);\n        return rx == ry;\n    }\n};\n"
  code: "#pragma once\n#include \"../template/template.hpp\"\n\nstruct UnionFind {\n\
    \    vector<int> par; // par[i]:i\u306E\u89AA\u306E\u756A\u53F7\u3000(\u4F8B)\
    \ par[3] = 2 : 3\u306E\u89AA\u304C2\n\n    UnionFind(int N) : par(N) { //\u6700\
    \u521D\u306F\u5168\u3066\u304C\u6839\u3067\u3042\u308B\u3068\u3057\u3066\u521D\
    \u671F\u5316\n        for(int i = 0; i < N; i++) par[i] = i;\n    }\n\n    int\
    \ root(int x) { // \u30C7\u30FC\u30BFx\u304C\u5C5E\u3059\u308B\u6728\u306E\u6839\
    \u3092\u518D\u5E30\u3067\u5F97\u308B\uFF1Aroot(x) = {x\u306E\u6728\u306E\u6839\
    }\n        if (par[x] == x) return x;\n        return par[x] = root(par[x]);\n\
    \    }\n\n    void connect(int x, int y) { // x\u3068y\u306E\u6728\u3092\u4F75\
    \u5408\n        int rx = root(x); //x\u306E\u6839\u3092rx\n        int ry = root(y);\
    \ //y\u306E\u6839\u3092ry\n        if (rx == ry) return; //x\u3068y\u306E\u6839\
    \u304C\u540C\u3058(=\u540C\u3058\u6728\u306B\u3042\u308B)\u6642\u306F\u305D\u306E\
    \u307E\u307E\n        par[rx] = ry; //x\u3068y\u306E\u6839\u304C\u540C\u3058\u3067\
    \u306A\u3044(=\u540C\u3058\u6728\u306B\u306A\u3044)\u6642\uFF1Ax\u306E\u6839rx\u3092\
    y\u306E\u6839ry\u306B\u3064\u3051\u308B\n    }\n\n    bool same(int x, int y)\
    \ { // 2\u3064\u306E\u30C7\u30FC\u30BFx, y\u304C\u5C5E\u3059\u308B\u6728\u304C\
    \u540C\u3058\u306A\u3089true\u3092\u8FD4\u3059\n        int rx = root(x);\n  \
    \      int ry = root(y);\n        return rx == ry;\n    }\n};"
  dependsOn:
  - template/template.hpp
  isVerificationFile: false
  path: graph/unionfind.hpp
  requiredBy: []
  timestamp: '2023-10-06 22:55:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/unionfind.hpp
layout: document
redirect_from:
- /library/graph/unionfind.hpp
- /library/graph/unionfind.hpp.html
title: graph/unionfind.hpp
---
