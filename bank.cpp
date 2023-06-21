#include "bank.h"

using namespace std;


Bank::Bank()
{

    // cout << "in Bank"<< endl;
    if (f.testConnection() == 0){
       if (f.createFile()==0){
           cout << "The connection failed, and it has not been possible to create the DB file."<< endl;
           exit(1);
       } else 
       {
           cout << "DB File Created."<< endl;
       }
    } else 
    {
        // get All Users
        
    }
    
   
    
};

Bank::~Bank(){
    cout << "~~"<< "\n";
};


FileManager& Bank::getFileManager(){
    return f;
};