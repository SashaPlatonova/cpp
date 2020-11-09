#include "User.h"
#include <iostream>
    User::User() {

}
    User::User(std::string userName) {
        this->userName=userName;
}

    User::User(std::string userName, std::string userSurname) {
    this->userName=userName;
    this->userSurname=userSurname;
}

    User::User(std::string userName, std::string userSurname, std::string userLogin) {
        this->userName=userName;
        this->userSurname=userSurname;
        this->userLogin=userLogin;
}

    User::User(std::string userName, std::string userSurname, std::string userLogin, std::string userEmail) {
        this->userName=userName;
        this->userSurname=userSurname;
        this->userLogin=userLogin;
        this->userEmail=userEmail;
}

    User::User(std::string userName, std::string userSurname, std::string userLogin, std::string userEmail,
               std::string userPassword) {
        this->userName=userName;
        this->userSurname=userSurname;
        this->userLogin=userLogin;
        this->userEmail=userEmail;
        this->userPassword=userPassword;
}

User::~User() {

}
std::string User::getUserName()  {
    return userName;
}

void User::setUserName(std::string userName) {
    User::userName = userName;
}

std::string User::getUserSurname()  {
    return userSurname;
}

void User::setUserSurname(std::string userSurname) {
    User::userSurname = userSurname;
}

std::string User::getUserLogin()  {
    return userLogin;
}

void User::setUserLogin( std::string userLogin) {
    User::userLogin = userLogin;
}

std::string User::getUserEmail()  {
    return userEmail;
}

void User::setUserEmail( std::string userEmail) {
    User::userEmail = userEmail;
}

std::string User::getUserPassword()  {
    return userPassword;
}

void User::setUserPassword( std::string userPassword) {
    User::userPassword = userPassword;
}








