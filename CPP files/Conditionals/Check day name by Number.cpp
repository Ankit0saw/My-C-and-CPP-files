// In this code, you'll need to enter a number as input & the output will be the corresponding day name
// eg: 1 resembles to monday, 2 to tuesday and so on
// if input will be outside the domain (i.e. no of days) then it will display invalid

#include <iostream>
using namespace std;

string convertToDays(int num){
  if(num==1){
    return "Monday";
  }
  else if(num==2){
    return "Tuesday";
  }
  else if(num==3){
    return "Wednesday";
  }
  else if(num==4){
    return "Thursday";
  }
  else if(num==5){
    return "Friday";
  }
  else if(num==6){
    return "Saturday";
  }
  else if(num==7){
    return "Sunday";
  }
  else{
    return "Invalid";
  }
}

int main() 
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    string str=convertToDays(num);
    cout<<"RESULT => "<<str<<endl;
    return 0;
}
