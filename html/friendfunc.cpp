#include<iostream>
using namespace std;
class second;
class first{
    int data1;
    public:
    first(int x){
        data1=x;
    }
    friend int sum(first a , second b);
};
class second{
    int data2;
    public:
    second(int y){
        data2=y;
    }
    friend int sum(first a, second b);
};
int sum(first a, second b){
    return a.data1+b.data2;
}
int main(){
    first a(15);
    second b(10);
    cout<<"Sum of first and second is:"<<sum(a,b);
    return 0;
}