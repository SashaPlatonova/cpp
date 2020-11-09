#pragma once
#include "User.h"

class Student : protected User {
public:
    Student(std::string l_userName, std::string l_userEmail, std::string l_studentGroup, bool Deducted) {
        userName = l_userName;
        userEmail = l_userEmail;
        m_studentGroup = l_studentGroup;
        isDeducted = Deducted;
    }

    void print();

    std::string getMStudentGroup();
    void setIsDeducted(bool Deducted);
    bool getIsDeducted();


private:
    std::string m_studentGroup;
    bool isDeducted = false;
    void setMStudentGroup(std::string mStudentGroup);

};