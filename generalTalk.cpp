#ifndef GENERALTALK_CPP

#define GENERALTALK_CPP

#include <iostream>

#include "User.h"


using namespace std;


int getNumInRange( int min, int max){
    cout << "\033[38:5:114m";
    int enter ;
    cin >> enter;
    cin.clear();
    cout << "\033[0m";
    if (enter>= min && enter<= max) return enter;
    
    return -1;
            
}




User* getUser(){
    User *u = new User();
    int enter;
    while(1){
            cout <<
               "   What do you to enter?" << 
            "\n     1 -> First Name. "<< u->getFName() <<
            "\n     2 -> Last Name. "<< u->getLName() <<
            "\n     3 -> Balance. "<< u->getInitBalance() <<
            "\n     4 -> Finish" <<
            "\n     0 -> Exit \n";
            enter = getNumInRange(0, 4);
            
                // case
            switch (enter){
                
                case 1: 
                {
                    string fname;
                    cin >> fname;
                    cin.clear();
                    u->setFName(fname);
                    break;
                }
                    
                case 2:
                {
                    string lname;
                    cin >> lname;
                    cin.clear();
                    u->setLName(lname);
                    break;
                }
                    
                case 3:
                {
                    int balance;
                    cin >> balance;
                    cin.clear();
                    u->setInitBalance(balance);
                    break;
                }
                    
                case 4: 
                {
                    return u;
                    break;
                }
                    
                    
                case 0: 
                {
                    delete u;
                    u = nullptr;
                    return nullptr;
                    break;
                }
                    
                case -1: 
                {
                    cout << "The value you entered is not correct."<< "\n";
                    break;
                }
                    
                
            }
        }
    
  return u;
}




int getIntOption(){
    
    try {
        int enter ;
        int i = 1;
        for(;i <6;){
            
            cout <<
              "    \033[38:5:111m Select one option below \033[0m"<<
            "\n     \033[38:5:105m1 ->\033[38:5:108m Open an Account \033[0m"<<
            "\n     \033[38:5:105m2 ->\033[38:5:108m Balance Enquiry \033[0m"<<
            "\n     \033[38:5:105m3 ->\033[38:5:108m Deposit \033[0m"<<
            "\n     \033[38:5:105m4 ->\033[38:5:108m Withdrawal \033[0m"<<
            "\n     \033[38:5:105m5 ->\033[38:5:108m Close an Account \033[0m"<<
            "\n     \033[38:5:105m6 ->\033[38:5:108m Show All Accounts \033[0m"<<
            "\n     \033[38:5:105m0 ->\033[38:5:108m Quit \n\033[0m";
        
            enter = getNumInRange(0, 6);
            if (enter!=-1){
                return enter;
            } else {
                cout << "The value you entered is not correct."<< "\n";
                i++;
            }
        }
        throw i;
    } catch(int i){
        cout << "You have been trying to enter a good promt for mothe than " << i<< " times";
        exit(0);
    }
   
  return -1;
}






#endif