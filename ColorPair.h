#pragma once
#include <string>
#include "ColorMap.h"

namespace TelCoColorCoder 
{
    class ColorPair 
{
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajorColor() const;
        MinorColor getMinorColor() const;
        std::string toString() const;
};
}
