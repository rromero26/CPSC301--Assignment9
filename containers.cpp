#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include "Student.h"

void readData(std::vector<Student> & vec) {
    // File I/O code can also be used in the other readData functions
    std::ifstream file;
    file.open("input.txt");
    std::string fn, ln;
    int id;
    float test1, test2, test3, test4, test5;
    file >> fn;
    while(!file.eof()) {
        file >> ln >> id >> test1 >> test2 >> test3 >> test4 >> test5;
        std::cout << fn << " " << ln << " " << id << " " << test1 << " " << test2 << " " << test3 << " " << test4 << " " << test5 << std::endl;
        // implement logic to store data in STL container
    
        file >> fn;
    }
}

void readData(std::stack<Student> & vec) {

}

void readData(std::queue<Student> & vec) {

}

void readData(std::list<Student> & vec) {

}

void readData(std::map<int, Student> & vec) {

}

int main() {
    std::vector<Student> studentVec;
    std::stack<Student> studentStack;
    std::queue<Student> studentQueue;
    std::list<Student> studentList;
    std::map<int, Student> studentMap; // use the student ID for the key

    readData(studentVec);
    return 0;
}