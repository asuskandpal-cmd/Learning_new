#ifndef CLASS_H
#define CLASS_H

class student{
    private:
        string Email;
    public:
        int id ;
        string name;
        float cgpa;

        student(int id, string name, float cgpa){
            this -> id = id;
            this -> name = name;
            this -> cgpa = cgpa;
        }

        void printInfo(){

            cout<<"ID : "<<id<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"cgpa : "<<cgpa<<endl;

            cout<<"-------------------------"<<endl;
        }
};

class job : public student {

};

#endif
