#pragma once
#include "template/template.hpp"
//maze library
#define wall '#'
#define road '.'
struct Maze{
    int H,W;
    int sx,sy;
    vector<string> maze;
    vector<vector<int>> dist;
    bool finished = false;
    void input(int h,int w){
        H = h;
        W = w;
        maze = vector<string>(H);
   }
    void input_maze(vector<string> inp_maze){
        maze = inp_maze;
    }
    void input_start(int x,int y){
        sx = x;
        sy = y;
    }
    void bfs_start(){
        dist = vector<vector<int>>(H,vector<int>(W,-1));
        queue<pair<int,int>> que;
        vector<vector<bool>> used(H,vector<bool>(W,false));
        que.push(make_pair(sx,sy));
        dist[sx][sy] = 0;
        while(!que.empty()){
            pair<int,int> p = que.front();
            que.pop();
            int x = p.first;
            int y = p.second;
            if(used[x][y]) continue;
            used[x][y] = true;
            if(x-1>=0 && maze[x-1][y] == road && !used[x-1][y]){
                que.push(make_pair(x-1,y));
                dist[x-1][y] = dist[x][y] + 1;
            }
            if(x+1<H && maze[x+1][y] == road && !used[x+1][y]){
                que.push(make_pair(x+1,y));
                dist[x+1][y] = dist[x][y] + 1;
            }
            if(y-1>=0 && maze[x][y-1] == road && !used[x][y-1]){
                que.push(make_pair(x,y-1));
                dist[x][y-1] = dist[x][y] + 1;
            }
            if(y+1<W && maze[x][y+1] == road && !used[x][y+1]){
                que.push(make_pair(x,y+1));
                dist[x][y+1] = dist[x][y] + 1;
            }
        }
        finished = true;
    }
    int get_dist(int x,int y){
        if (!finished) return -1;
        return dist[x][y];
    }
};