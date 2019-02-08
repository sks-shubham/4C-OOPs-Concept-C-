#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class stdnt {
    int rollno;
    char name[20];
    float m1,m2,m3,tot,per;
public:
    void readdata();
    void header();
    void dispdata();
};

void stdnt::readdata() {
    std::cout<<"Enter the student roll number, Name & marks in three subject:"<<"\nRollno:";
    std::cin>>rollno;
    std::cout<<endl<<"Name:";
    std::cin>>name;
    cout.setf(ios::left,ios::adjustfield);
    std::cout<<"marks M1, M2 & M3:";
    std::cin>>m1>>m2>>m3;
}

void stdnt::header() {
    std::cout<<setw(10);
    std::cout<<"RollNo."<<setw(20);
    std::cout<<"Name"<<setw(10);
    cout.setf(ios::left,ios::adjustfield);
    std::cout<<"Per"<<"\n";
}

void stdnt::dispdata()  {
    std::cout<<setw(10);
    std::cout<<rollno<<setw(20);
    std::cout<<name<<setw(10);
    cout.setf(ios::left,ios::adjustfield);
    std::cout<<(m1+m2+m3)/3<<"\n";
}

int main() {
    stdnt s[2];
    for (int i = 0; i < 2; i++) {
        s[i].readdata();
    }
    s[0].header();
    for (int i = 0; i < 2; ++i) {
        s[i].dispdata();
    }
    getch();
}