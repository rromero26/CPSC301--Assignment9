#ifndef _STUDENT
#define _STUDENT

class Student {
    private:
        std::string firstName;
        std::string lastName;
        int    studentId;
        float  classGrade;
    public:
        Student();
        Student(std::string fname, std::string lname, int id, float grade);
        void   setfirstName(std::string fname);
        void   setLastName(std::string lname);
        void   setStudentId(int id);
        void   setClassGrade();
        std::string getFirstName();
        std::string getLastName();
        int    getStudentId();
        float  getClassGrade();
};

Student::Student() {

}

Student::Student(std::string fname, std::string lname, int id, float grade) {

}

void Student::setfirstName(std::string fname) {

}

void Student::setLastName(std::string lname) {

}

void Student::setStudentId(int id) {

}

void Student::setClassGrade() {

}

std::string Student::getFirstName() {
    return "";
}

std::string getLastName() {
    return "";
}

int Student::getStudentId() {
    return 0;
}

float Student::getClassGrade() {
    return 0;
}
#endif