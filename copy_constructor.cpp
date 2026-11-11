#include <iostream>
using namespace std:

class student{
    public:
    int rollNo;

    student(int r){
        rollNo = r;
    }
    student(const student &s){
        rollNo = s.rollNo;
        cout << "copy constructor called" << endl;
    }
};

int main(){
    student s1(101);
    student s2 = s1;
    student s3(s1);
    cout << s1.rollNo << " " << s2.rollNo
    << " " << s3.rollNo << endl;
    return 0;
}