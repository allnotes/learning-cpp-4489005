// Write your implementation code here
#include "records.h"
//#include <string>

Student::Student(int the_id, std::string the_name){
    //int id = the_id;
    id = the_id;
    //std::string name = the_name;
    name = the_name;
    }
int Student::get_id() const{
    return id;
}
std::string Student::get_name() const{
    return name;
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits){
    //int id = the_id;
    id = the_id;
    //std::string name = the_name;
    name = the_name;
    //unsigned char credits = the_credits;
    credits = the_credits;
    }
int Course::get_id() const{
    return id;
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}
Grade::Grade(int sid, int cid, char grd){
    //int student_id = sid;
    student_id = sid;
    //int course_id = cid;
    course_id = cid;
    //char grade = grd;
    grade = grd;
    }
int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}