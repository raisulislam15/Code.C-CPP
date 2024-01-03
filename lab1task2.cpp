#include <iostream>
using namespace std;
class Student {
    public:
string name;
    int id;
    string course;
    char sec;

    void setName(const string& studentName) {
        name = studentName;
    }

    string getName() const {
        return name;
    }
    void setId(int studentId) {
        id = studentId;
    }
    int getId() const {
        return id;
    }
    void setCourse(const string& studentCourse) {
        course =studentCourse ;
    }
    string getCourse() const {
      return course;
    }
    void setSec(char Sec)
    {
        sec=Sec;
    }
    char getSec() const {
    return sec;
    }
};
int main() {
    Student student1;
    student1.setName("TAMANNA JAHAN");
    student1.setId(287);
    student1.setCourse("computer science");
     student1.setSec('B');

    cout << "Name: " << student1.getName() << endl;
    cout<<"Id: "<<student1.getId()<<endl;
    cout<<"Course: "<<student1.getCourse()<<endl;
    cout<<"Section: "<<student1.getSec()<<endl;
    return 0;
}
