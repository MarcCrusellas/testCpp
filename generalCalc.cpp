#include "generalCalc.h"

int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
    
    int x;
    int s = 0; 
    for(int i= i; i<n; i++)
    {
        x = va_arg(list, int);
        s += x;
    }
    return s;
}

vector<string> split(string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector< string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}