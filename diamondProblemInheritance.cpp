// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;
class Person{
    private:
      string name;
      int age;
    public:
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void showPersonDetail(){
        cout<<"name :" <<name<<endl;
        cout<<"age :" <<age<<endl;
    }
    
};
class Student: virtual public Person{
    private:
        int id;
        string stream;
    public:
       void setId(int id){
           this->id = id; 
       }
       void setStream(string stream){
           this->stream = stream;
       }
       void showStudentDetail(){
           cout<<"id :"<<id<<endl;
           cout<<"stream : "<<stream<<endl;
           
       }
};
class Faculty: virtual public Person{
    private:
        int salary;
        string specification;
    public:
        void setSalary(int salary){
            this->salary = salary;
        }
        void setSpecification(string specification){
             this->specification = specification;   
        }
        void  showFacultyDetail(){
            cout<<"salary :"<<salary<<endl;
            cout<<"specification : "<<specification<<endl;
        }
};
class TA:public Student, public Faculty{
    private : 
        int examTime;
    public:
    void setExamTime(int examTime){
        this->examTime = examTime;
    }
    void showTADetail(){
        cout<< "examTime :" << examTime<<endl;
    }
};


int main() {
    TA ExamTutor;
    ExamTutor.setName("Azhar");
    ExamTutor.setAge(25);
    ExamTutor.setId(10927);
    ExamTutor.setSalary(5000);
    ExamTutor.setStream("Electronics and Communcation");
    ExamTutor.setSpecification("MathMatics");
    ExamTutor.setExamTime(15);
    ExamTutor.showPersonDetail();
    ExamTutor.showFacultyDetail();
    ExamTutor.showStudentDetail();
    ExamTutor.showTADetail();
 
    Faculty objFaculty;
    objFaculty.setName("kishore");
    objFaculty.setAge(50);
    objFaculty.setSpecification("Electrical");
    objFaculty.setSalary(1000000);
    objFaculty.showPersonDetail();
    objFaculty.showFacultyDetail();

    return 0;
}
