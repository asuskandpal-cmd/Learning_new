#include "h.cpp"
#include "class.cpp"

int main() {

    sayHello();

    student S1 = {1,"Himesh",8.9};
    student S2 = {2,"raju",7.2};
    student S3 = {3,"Abdul",9.0};

    S1.printInfo();
    S2.printInfo();
    S3.printInfo();
}
