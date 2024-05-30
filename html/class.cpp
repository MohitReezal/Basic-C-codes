#include<iostream>
using namespace std;
class student{
    private:
    int data1,data2;
    public:
    void getdata(int a, int b){
    data1=a;
    data2 = b;
    }
    void showdata(){
        cout<<"Data 1="<<data1<<endl;
        cout<<"Data 2="<<data2<<endl;
    }
};
int main(){
    student s1,s2;
    s1.getdata(200,205);
    s2.getdata(500,600);
    s1.showdata();
    s2.showdata();
    return 0;
    
}