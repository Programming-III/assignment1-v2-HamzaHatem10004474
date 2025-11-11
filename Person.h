#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
//#write Person class here
class Person{
    private:
        string name;
        int id;
    public:
        
        void display();

        Person(){
            name = " ";
            id = 0; 
        }

        Person(string name, int id){
            this -> name = name;
            this -> id = id;
        }

        ~Person(){
            
        }

        void set_name(string name){
            this -> name = name;
        }

        

        int get_id(){
            return id;
        }

        string get_name(){
            return name;
        }


}
#endif
