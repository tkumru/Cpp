#include<iostream>
#include<list>

using namespace std;

class Student{
    private:
        string name;
        string surname;
        int age;
        list<string> courses;

    public:
        Student(string name, string surname, int age){
            name = name;
            surname = surname;
            age = age;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Age: " << age << endl;

            cout << "Courses:";
            for (string course : courses)
            {
                cout << " " << course << ",";
            }     
        }

        void pushCourse(string course){
            courses.push_front(course);
        }
};

class StudentThirdYear: public Student{
    public:
        StudentThirdYear(string name, string surname, int age): Student(name, surname, age){}
};

int main(){
    Student student("Talha Nebi", "Kumru", 22);

    student.pushCourse("C++");
    student.pushCourse("Data Science");
    student.pushCourse("Artificial Intelligence");

    student.getInfo();

    return 0;
}