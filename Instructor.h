#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>

using namespace std;
//#write Instructor class here
class Instructor : public Person{
    private:
        string department;
        int experienceYears;
    public:
        void display(){
            Person::display();
            cout << "Department: " << department << endl;
            cout << "Experience: " << experienceYears << endl;
        }

        Instructor(){
            department = " ";
            experienceYears = 0; 
        }

        Instructor(string department,int experienceYears){
            this-> department = department;
            this-> experienceYears = experienceYears;
        }

        ~Instructor(){

        }

        void display(){
            Person::display();
            cout << "Department: " << department << endl;
            cout << "Experience: " << experienceYears << endl;
        }

};
#endif
