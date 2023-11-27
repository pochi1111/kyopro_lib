#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"
#include "template/template.hpp"
#include "graph/RMQ_min.hpp"
int main(){
    int N,Q;
    cin >> N >> Q;
    vector<ll> A(N);
    cin >> A;
    RMQ rmq(A);
    while(Q--){
        int l,r;
        cin >> l >> r;
        cout << rmq.query(l,r) << endl;
    }
}