#ifndef User_h
#define User_h

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "generalCalc.h"
#include "FileManager.h"

using namespace std;

class User 
{
    private:
        int id;
        string fName;
        string lName;
        int initBalance;
        
        
    public:
        User();
        User(string init);
        class UserBuilder
        {
            
            private:
            
            public:
            UserBuilder();
            string fName;
            string lName;
            int initBalance;
            
            UserBuilder* setFname(string n);
            
            UserBuilder* setLName(string n);
            
            
            UserBuilder* setInitBAlance(int b);
            
            User build(FileManager & f);
            
        };
        
        
        User(UserBuilder ub, FileManager & f);
        
        string toFileFormat();
        
        int getId();
        string getFName();
        string getLName();
        int getInitBalance();
        
        void setId(int i);
        void setFName(string f);
        void setLName(string l);
        void setInitBalance(int i);
};

#endif