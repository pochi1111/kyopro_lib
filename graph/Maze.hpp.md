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
    \ (i) < (ll)(n); (i)++)\n#line 3 \"graph/Maze.hpp\"\n//maze library\n#define wall\
    \ '#'\n#define road '.'\nstruct Maze{\n    int H,W;\n    int sx,sy;\n    vector<string>\
    \ maze;\n    vector<vector<int>> dist;\n    bool finished = false;\n    void input(int\
    \ h,int w){\n        H = h;\n        W = w;\n        maze = vector<string>(H);\n\
    \   }\n    void input_maze(vector<string> inp_maze){\n        maze = inp_maze;\n\
    \    }\n    void input_start(int x,int y){\n        sx = x;\n        sy = y;\n\
    \    }\n    void bfs_start(){\n        dist = vector<vector<int>>(H,vector<int>(W,-1));\n\
    \        queue<pair<int,int>> que;\n        vector<vector<bool>> used(H,vector<bool>(W,false));\n\
    \        que.push(make_pair(sx,sy));\n        dist[sx][sy] = 0;\n        while(!que.empty()){\n\
    \            pair<int,int> p = que.front();\n            que.pop();\n        \
    \    int x = p.first;\n            int y = p.second;\n            if(used[x][y])\
    \ continue;\n            used[x][y] = true;\n            if(x-1>=0 && maze[x-1][y]\
    \ == road && !used[x-1][y]){\n                que.push(make_pair(x-1,y));\n  \
    \              dist[x-1][y] = dist[x][y] + 1;\n            }\n            if(x+1<H\
    \ && maze[x+1][y] == road && !used[x+1][y]){\n                que.push(make_pair(x+1,y));\n\
    \                dist[x+1][y] = dist[x][y] + 1;\n            }\n            if(y-1>=0\
    \ && maze[x][y-1] == road && !used[x][y-1]){\n                que.push(make_pair(x,y-1));\n\
    \                dist[x][y-1] = dist[x][y] + 1;\n            }\n            if(y+1<W\
    \ && maze[x][y+1] == road && !used[x][y+1]){\n                que.push(make_pair(x,y+1));\n\
    \                dist[x][y+1] = dist[x][y] + 1;\n            }\n        }\n  \
    \      finished = true;\n    }\n    int get_dist(int x,int y){\n        if (!finished)\
    \ return -1;\n        return dist[x][y];\n    }\n};\n"
  code: "#pragma once\n#include \"template/template.hpp\"\n//maze library\n#define\
    \ wall '#'\n#define road '.'\nstruct Maze{\n    int H,W;\n    int sx,sy;\n   \
    \ vector<string> maze;\n    vector<vector<int>> dist;\n    bool finished = false;\n\
    \    void input(int h,int w){\n        H = h;\n        W = w;\n        maze =\
    \ vector<string>(H);\n   }\n    void input_maze(vector<string> inp_maze){\n  \
    \      maze = inp_maze;\n    }\n    void input_start(int x,int y){\n        sx\
    \ = x;\n        sy = y;\n    }\n    void bfs_start(){\n        dist = vector<vector<int>>(H,vector<int>(W,-1));\n\
    \        queue<pair<int,int>> que;\n        vector<vector<bool>> used(H,vector<bool>(W,false));\n\
    \        que.push(make_pair(sx,sy));\n        dist[sx][sy] = 0;\n        while(!que.empty()){\n\
    \            pair<int,int> p = que.front();\n            que.pop();\n        \
    \    int x = p.first;\n            int y = p.second;\n            if(used[x][y])\
    \ continue;\n            used[x][y] = true;\n            if(x-1>=0 && maze[x-1][y]\
    \ == road && !used[x-1][y]){\n                que.push(make_pair(x-1,y));\n  \
    \              dist[x-1][y] = dist[x][y] + 1;\n            }\n            if(x+1<H\
    \ && maze[x+1][y] == road && !used[x+1][y]){\n                que.push(make_pair(x+1,y));\n\
    \                dist[x+1][y] = dist[x][y] + 1;\n            }\n            if(y-1>=0\
    \ && maze[x][y-1] == road && !used[x][y-1]){\n                que.push(make_pair(x,y-1));\n\
    \                dist[x][y-1] = dist[x][y] + 1;\n            }\n            if(y+1<W\
    \ && maze[x][y+1] == road && !used[x][y+1]){\n                que.push(make_pair(x,y+1));\n\
    \                dist[x][y+1] = dist[x][y] + 1;\n            }\n        }\n  \
    \      finished = true;\n    }\n    int get_dist(int x,int y){\n        if (!finished)\
    \ return -1;\n        return dist[x][y];\n    }\n};"
  dependsOn:
  - template/template.hpp
  isVerificationFile: false
  path: graph/Maze.hpp
  requiredBy: []
  timestamp: '2024-03-23 14:08:26+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/Maze.hpp
layout: document
title: "\u30B0\u30EA\u30C3\u30C9\u8FF7\u8DEF(bfs)"
---
