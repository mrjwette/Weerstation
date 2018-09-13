#include "valuelabels.h"

valueLabels::valueLabels(double tempVal, double humidVal, double pressVal )
{
    tempValue = tempVal;
    humidValue = humidVal;
    pressValue = pressVal;
}

void valueLabels::setTempValue( double value )
{
    tempValue = value;
}

void valueLabels::setHumidValue( double value )
{
    humidValue = value;
}

void valueLabels::setPressValue( double value )
{
    pressValue = value;
}

double valueLabels::getTempValue()
{
    return tempValue;
}

double valueLabels::getHumidValue()
{
    return humidValue;
}

double valueLabels::getPressValue()
{
    return pressValue;
}
