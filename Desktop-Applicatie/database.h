#ifndef DATABASE_H
#define DATABASE_H

class database
{
public:
    database();
    bool setupConnection();
    int getTempVal();

private:
    int tempVal;
};

#endif // DATABASE_H
