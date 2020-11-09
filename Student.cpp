    #include "Student.h"
    #include <iostream>

    std::string Student::getMStudentGroup()  {
        return m_studentGroup;
    }

    void Student::setMStudentGroup( std::string mStudentGroup) {
        m_studentGroup = mStudentGroup;
    }
    void Student::setIsDeducted(bool Deducted){
        isDeducted = Deducted;
    }

    bool Student::getIsDeducted(){
        return isDeducted;
    }

    void Student::print() {
        std::cout << m_studentGroup << " " << getUserName() << " " << getUserEmail() << std::endl;
        if (isDeducted){
            std::cout << "Deducted" << std::endl;
        }
        else {
            std::cout << "not deducted" << std::endl;
        }
    }
