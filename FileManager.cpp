#include "FileManager.h"
using namespace std;



FileManager::FileManager()
{
    // cout << "in FileManager"<< "\n";
    nextId = -1;
}

FileManager::~FileManager(){}

bool FileManager::testConnection(){
    fstream fileStream;
    
    fileStream.open("bankDetails.txt");
    
    bool failed = fileStream.fail();
    fileStream.close();
    
    return !failed;
}


bool FileManager::createFile()
{
    std::ofstream outfile ("bankDetails.txt");

    outfile << "" << std::endl;

    outfile.close();

    
    return testConnection();
}

void FileManager::addTooFile()
{
    
}


int FileManager::getNextId(){
    if (nextId != -1){
        return  nextId;
    } else {
        // fins next id
        return -1;
    }
}

/*
std::ofstream outfile ("test.txt");

outfile << "my text here!" << std::endl;

outfile.close(); */