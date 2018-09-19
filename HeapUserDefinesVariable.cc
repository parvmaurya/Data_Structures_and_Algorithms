#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
 
#define ll long long
#define vll vector<long long>
#define vc vector<char>
#define vi vector<int>
#define pb push_back
#define LOOP(n) for(int i=0; i<n; ++i)  
 
using namespace std;

class Point{
    int x; 
    int y;
public:
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

struct myComparator{
    bool operator()(Point p1, Point p2){
        int d1 = p1.getX()*p1.getX() + p1.getY()*p1.getY();
        int d2 = p2.getX()*p2.getX() + p2.getY()*p2.getY();
        return d1<d2;
    }
};

int main()
{
    priority_queue<Point, vector<Point>, myComparator> pq;
    pq.push(Point(1,2));
    pq.push(Point(2,3));
    pq.push(Point(3,4));
    pq.push(Point(4,5));
    while(!pq.empty())
    {
        Point ele = pq.top();
        cout<<ele.getX()<<' '<<ele.getY()<<endl;
        pq.pop();
    }
    return 0;
}