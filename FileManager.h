#ifndef FileManager_H
#define FileManager_H


#include <iostream>
#include <fstream>

class FileManager
{
    private:
        int nextId;
    public:
        
        FileManager();
        
        ~FileManager();
        
        bool testConnection();
        
        bool createFile();
        
        void addTooFile();
        
        int getNextId();
};


#endif