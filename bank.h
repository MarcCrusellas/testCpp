#ifndef Bank_H
#define Bank_H

#include "FileManager.h"
#include "User.h"
#include <iostream>

class Bank
{
protected:
    FileManager f;

public:
    Bank();
    ~Bank();
    FileManager &getFileManager();
};

#endif
