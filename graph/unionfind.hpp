#pragma once
#include "../template/template.hpp"

struct UnionFind {
    vector<int> par; // par[i]:i�̐e�̔ԍ��@(��) par[3] = 2 : 3�̐e��2

    UnionFind(int N) : par(N) { //�ŏ��͑S�Ă����ł���Ƃ��ď�����
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // �f�[�^x��������؂̍����ċA�œ���Froot(x) = {x�̖؂̍�}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void connect(int x, int y) { // x��y�̖؂𕹍�
        int rx = root(x); //x�̍���rx
        int ry = root(y); //y�̍���ry
        if (rx == ry) return; //x��y�̍�������(=�����؂ɂ���)���͂��̂܂�
        par[rx] = ry; //x��y�̍��������łȂ�(=�����؂ɂȂ�)���Fx�̍�rx��y�̍�ry�ɂ���
    }

    bool same(int x, int y) { // 2�̃f�[�^x, y��������؂������Ȃ�true��Ԃ�
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};