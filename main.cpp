#include <iostream>
// #include "function.hpp"
#include<string>

using namespace std;

class Client{
    private:
        string name;
        string mail;
        string password;
    public:
    Client(string n, string m, string p){
        this->name = n;
        this->mail = m;
        this->password = p;
    }
    Client(string n, string m){
        this->name = n;
        this->mail = m;
        
    }
};

int main()
{
    Client c1 {"richard", "richard@gmail.com", "123"};

    return 0;
}
