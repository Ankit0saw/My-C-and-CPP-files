// In this code: take n student name, rollno, marks then find out and display the details of highest scoring student
//  using class and object concept


#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int roll_no;
        int arr[5];
    public:
        void getdata(){
            cout << "Enter roll no: ";
            cin >> roll_no;
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter marks for 5 subjects: ";
            for (int i = 0; i < 5; i++) {
                cin >> arr[i];
            }
        }

        int computeTotalMarks(){
            int total= 0;
            for (int i = 0; i < 5; i++) {
                total+= arr[i];
            }
            return total;
        }

        void putdata(){
            cout << "Roll Number    : " << roll_no << endl;
            cout << "Name           : " << name << endl;
            cout << "Total marks    : " <<computeTotalMarks()<<endl;
        }
};

int main(){
    int num;
    cout<<"enter the no of students: "<<endl;
    cin>>num;
    //edge case
    if(num==0) return 0;

    //created num number of objects
    Student obj[num];

    //getting details of all the students
    for(int i=0;i<num;i++){
        cout<<"Enter details for student "<<i+1<<" : "<<endl;
        obj[i].getdata();
    }

    //finding the student with maxm total marks
    cout << "\n----------Details of Highest Scoring student----------\n";
    int index,maxmarks=0;
    for (int i=0;i<num;i++) {
        int marks=obj[i].computeTotalMarks();
        if(marks>maxmarks){
            index=i;
            maxmarks=marks;
        }
    }
    //printing the details of topper student
    obj[index].putdata();

    return 0;
}
