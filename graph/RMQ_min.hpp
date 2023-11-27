#pragma once
#include "template/template.hpp"
struct RMQ{
    vector<ll> x;
    vector<ll> dat;
    RMQ(vector<ll> x){
        int M = 1;
        //初期化 |1-indexed|0は無視しましょう|
        while(M < x.size()) M *= 2;
        dat = vector<ll> (M*2,LLONG_MAX);
        for(int i=dat.size()-1;i>0;i--){
            if (i >= M){
                dat[i] = x[i-M];
            }else{
                dat[i] = op(dat[i*2],dat[i*2+1]);
            }
        }
    }
    void update(ll i,ll x){
        i += dat.size()/2;
        dat[i] = x;
        while(i > 0){
            i /= 2;
            dat[i] = op(dat[i*2],dat[i*2+1]);
        }
    }
    ll query(ll a,ll b){
        return subquerry(a,b,1,0,dat.size()/2);
    }
    ll subquerry(ll a,ll b,ll k,ll l,ll r){
        if (r <= a || b <= l) return LLONG_MAX;
        else if(a <= l && r <= b) return dat[k];
        else return op(subquerry(a,b,k*2,l,(l+r)/2),subquerry(a,b,k*2+1,(l+r)/2,r));
    }
    ll op(ll a,ll b){
        return min(a,b);
    }
};