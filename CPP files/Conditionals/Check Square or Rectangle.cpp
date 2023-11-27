// you need to enter all the 4 sides of a quadrilateral
// output will tell either it is square or rectangle

#include <iostream>
using namespace std;

int main()
{
    int side1,side2,side3,side4;
    cout<<"Enter all the 4 sides of a quadrilateral :"<<endl;
    cin>>side1>>side2>>side3>>side4;
    
    if(side1 == side2 && side1 == side3 && side1 == side4){
        cout<<"It is square";
    }
    else if((side1 == side3 && side2 == side4) || (side1 == side2 && side3 == side4 ) || (side1 == side4 && side2 == side3)){
        cout<<"It is rectangle";
    }
    else{
        cout<<"It is just a quadrilateral";
    }
    
    return 0;
} 
