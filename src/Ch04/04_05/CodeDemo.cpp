// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

auto main() -> int{
//int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    for (int i = 0;i < grades.size();i++)
        if (grades[i].Grade::get_student_id() == id){
            if (grades[i].Grade::get_grade() == 'A')
                GPA = 4;
            if (grades[i].Grade::get_grade() == 'B')
                GPA = 3;
            if (grades[i].Grade::get_grade() == 'C')
                GPA = 2;
            if (grades[i].Grade::get_grade() == 'D')
                GPA = 1;
            if (grades[i].Grade::get_grade() == 'F')
                GPA = 1;
            GPA+= GPA * (courses[grades[i].Grade::get_course_id()].Course::get_credits());
        }
            
    GPA = GPA/grades.size();

    //while(grades[].Grade::get_student_id() == id){
    //}

    std::string student_str;
    student_str = students[id].get_name();
    //student_str = students[0].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    //return (0);
}
