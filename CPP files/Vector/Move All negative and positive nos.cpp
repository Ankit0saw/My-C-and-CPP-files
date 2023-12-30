// this code will move all the -ve nos to left side of array and hence +ve nos to the right side of array
// no need to maintain any swapping order like increasing or decreasing

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> nums{3,-1,5,-5,8,12,-58,63,4,21,-35,7,4,-4,6,5};
  int pos,neg;
  neg=0,pos=nums.size()-1;
  
  cout<<"before :"<<endl;
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<"  ";
  }
  
  while(neg<=pos){
      if(nums[neg]<0){
        neg++;
      }
      else{
       swap(nums[neg],nums[pos]);
       pos--;
     }
  } 
  
  cout<<"\nafter :"<<endl;
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<"  ";
  }
  return 0;
}
