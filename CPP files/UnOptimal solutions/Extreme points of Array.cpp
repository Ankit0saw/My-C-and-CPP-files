// this program will give the output as extreme points of array
// eg: [2,8,5,7] => [2,7,5,8] i.e. first and last then second and second last ans so on

#include <iostream>
using namespace std;

int main(){
    int arr[]={2,5,1,9,4};
    int size=5;                        // size of array
    int i=0;                           // initially i=0
    
    nextLoop:          
     
    while(i<=size){                         // i starts from beginning
        for(int j=size-i-1;j>=0;j--){       // j starts from ending
            if(i>j){
                return 0;                  // after i traverse middle of array we exit
            }
            else if( i== j){
                cout<<arr[i];              // handling if array has odd size
            }
            else{
                cout<<arr[i]<<"  ";        // print from start
                cout<<arr[j]<<"  ";        // print from last
                i++;                      // increase value of i
                goto nextLoop;            // using goto to next i value
            }
        }
    }
}
