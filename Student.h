#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;
//#write student class here
class Student : public Person {
    private:
        int yearLevel;
        string major;
    public:
        Student(){
            yearLevel = 0;
            major = " ";
        }

        Student(int yearLevel, string major){
            this -> yearLevel = yearLevel;
            this -> major = major;
        }

        ~Student(){

        }

        void set_major(string major){
            this-> major = major;
        }

        string get_major(){
            return major;
        }

        void set_yearLevel(int yearLevel){
            this -> yearLevel = yearLevel;
        }

        int get_yearLevel(){
            return yearLevel;
        }

        void display(){
            Person::display();
            cout << "Year: " << yearLevel << endl;
            cout << "Major: " << major << endl;
        }

};
#endif
