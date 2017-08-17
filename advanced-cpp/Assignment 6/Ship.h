#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship
{
    public:
        Ship(std::string,int);
        void setName(std::string);
        std::string getName()const;
        void setYear(int y);
        int getYear()const;
        virtual void print();
    
    private:
        std::string name;
        int yearBuilt;
};

#endif