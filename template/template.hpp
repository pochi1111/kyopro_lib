#pragma once
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define all(x) (x).begin(), (x).end()
template <typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
    os << p.first << " " << p.second;
    return os;
}
ll sum(vector<ll> a){
    ll res = 0;
    for(auto x:a) res += x;
    return res;
}
template <typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p) {
    is >> p.first >> p.second;
    return is;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    ll s = (ll)v.size();
    for (ll i = 0; i < s; i++) os << (i ? " " : "") << v[i];
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &x : v) is >> x;
    return is;
}
#define rep(i, n) for (ll (i) = 0; (i) < (ll)(n); (i)++)
#define rep2(i, s, n) for (ll (i) = (s); (i) < (ll)(n); (i)++)