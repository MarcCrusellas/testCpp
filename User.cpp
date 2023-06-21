#include "User.h"
using namespace std;


User::User(){
    id = -1;
    fName = "";
    lName = "";
    initBalance = 0;
}

User::User(string init){
    string delimiter = ";";
    std::vector<std::string> v = split(init, delimiter);
    
    // cout << v<< "\n";

};

User::UserBuilder::UserBuilder(){
    fName = "";
    lName= "";
    initBalance = 0;
}

User::UserBuilder* User::UserBuilder::setFname(string n){
    this -> fName = n;
    return this;
}

User::UserBuilder* User::UserBuilder::setLName(string n){
    this -> lName = n;
    return this;
}

User::UserBuilder* User::UserBuilder::setInitBAlance(int b){
    this -> initBalance = b;
    return this;
}

User User::UserBuilder::build(FileManager & f){
    return User(*this, f);
}

string User::toFileFormat(){
    string toRet= fName +";";
    toRet +=lName+";";
    toRet += to_string(initBalance) + ";";
    
    return toRet;
}

User::User(User::UserBuilder ub, FileManager & f) : fName(ub.fName), lName(ub.lName), initBalance(ub.initBalance)
{
    
    // find a new id a set.
    // id = f.
    
};

// Get
int User::getId()
{
    return id;
};

string User::getFName()
{
    return fName;
};

string User::getLName()
{
    return lName;
};

int User::getInitBalance()
{
    return initBalance;
};

// Set
void User::setId(int i)
{
    id = i;
};
void User::setFName(string f)
{
    fName = f;
};
void User::setLName(string l)
{
    lName = l;
};
void User::setInitBalance(int i)
{
    initBalance = i;
};
