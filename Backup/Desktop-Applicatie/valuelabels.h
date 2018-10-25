#ifndef VALUELABLES_H
#define VALUELABLES_H

#include "mainwindow.h"

class valueLabels
{
private:
    double tempValue;
    double humidValue;
    double pressValue;

public:
    valueLabels( double tempVal = -273, double humidVal = 0, double pressVal = 0);
    void setTempValue( double value );
    void setHumidValue( double value );
    void setPressValue( double value );
    double getTempValue();
    double getHumidValue();
    double getPressValue();
};

#endif // VALUELABLES_H
