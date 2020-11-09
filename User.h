//
// Created by User on 02.11.2020.
//

#ifndef MAIN_CPP_USER_H
#define MAIN_CPP_USER_H


#include <string>

class User {
protected:

    User(std::string userName, std::string userSurname);

    std::string userName;
    std::string userSurname;
    std::string userLogin;
    std::string userEmail;
    std::string userPassword;


public:
    User();

    User(std::string userName);
    //User(std::string userName, std::string userSurname);
    User(std::string userName, std::string userSurname, std::string userLogin);
    User(std::string userName, std::string userSurname, std::string userLogin, std::string userEmail);
    User(std::string userName, std::string userSurname, std::string userLogin, std::string userEmail,
         std::string userPassword);


    ~User();

    std::string getUserName();

    void setUserName(std::string userName);

    std::string getUserSurname();

    void setUserSurname(std::string userSurname);

    std::string getUserLogin();

    void setUserLogin(std::string userLogin);

    std::string getUserEmail();

    void setUserEmail(std::string userEmail);

    std::string getUserPassword();

    void setUserPassword(std::string userPassword);


};


#endif //MAIN_CPP_USER_H
