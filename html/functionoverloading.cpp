#include<iostream>
using namespace std;
int Area(int l){
    return l*l;
}
int Area(int l, int b)
{
    return l*b;
}
double Area(double r){
    return 3.14*r*r;
}
int main(){
    cout<<"Area1 ="<<Area(5)<<endl;
    cout<<"Area1 ="<<Area(5,6)<<endl;
cout<<"Area1 ="<<Area(5.5)<<endl;
return 0;
}