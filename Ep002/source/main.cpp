#include<iostream>
#include<string>
using namespace std;

class goods
{
private:
    int weight;
    static int totalweight;
public:
    goods()
    {
        weight = 0;
        totalweight += weight;
    }
    goods(int n)
    {
        weight = n;
        totalweight += weight;
    }
    goods(const goods & o)
    {
        weight = o.weight;
        totalweight += weight;
    }
    void set(int n)
    {
        weight = n;
        totalweight += weight;
    }
    static void show_totalweight()
    {
        cout << "total weight:" << totalweight << endl;
    }
};
int goods::totalweight = 0;

int main()
{
    int n;
    goods g1;
    cin >> n;
    g1.set(n);
    goods::show_totalweight(); // 静态成员函数显示总重量
    goods g2(200);
    goods::show_totalweight();
    goods g3 = g2;
    goods::show_totalweight();
    return 0;
}
