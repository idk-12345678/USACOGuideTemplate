#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <string>
#include <map>
using namespace std;
using ll = long long;

struct Rect{
    double length; double height;
    Rect(double l, double h){
        length = l;
        height = h;
    }

    double findArea(){
        return length * height;
    }

    double findPerimeter(){
        return 2*(length + height);
    }
};

void setIO(string filename){
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(nullptr);
}

int main(){
    
}

