#include "ColorPair.h"
namespace TelCoColorCoder 
{
    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajorColor() const 
    {
        return majorColor;
    }

    MinorColor ColorPair::getMinorColor() const 
    {
        return minorColor;
    }

    std::string ColorPair::toString() const 
    {
        return std::string(MajorColorNames[(int)majorColor]) + " " + MinorColorNames[(int)minorColor];
    }
}
