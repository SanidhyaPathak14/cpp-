// program to calculate area of circle using function .

#include<iostream>
using namespace std;

double areaofcircle(int radius){
    float pi= 3.14 ;
    float area;
    area = 3.14*radius *radius;

    return area;
}

int main()
{
    int radius ;
    cout<<"enter the radius of circle : ";
    cin>>radius;

    cout<<"area of circle is : "<<areaofcircle(radius);


   return 0;
}