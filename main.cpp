#include <iostream>
#include "User.h"
#include "Student.h"


    void printInfo(User user);
    int main()
    {
    Student student = Student("Ivan", "test@test.com", "Y2333", true);
    student.print();

    }
    void printInfo(User user){
        if (user.getUserName().length()!=0) {
            std::cout << "User name: " << user.getUserName() << std::endl;
        }
        if (user.getUserSurname().length()!=0) {
            std::cout << "User surname: " << user.getUserSurname() << std::endl;
        }
        if (user.getUserLogin().length()!=0) {
            std::cout << "User login: " << user.getUserLogin() << std::endl;
        }
        if (user.getUserEmail().length()!=0) {
            std::cout << "User email: " << user.getUserEmail() << std::endl;
        }
    }
