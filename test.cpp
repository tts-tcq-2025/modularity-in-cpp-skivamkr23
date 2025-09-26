#include <iostream>
#include <assert.h>
#include "ColorMap.h"
#include "ColorPair.h"
#include "Test.h"

namespace TelCoColorCoder 
{
    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) 
    {
        ColorPair colorPair((MajorColor)((pairNumber - 1) / numberOfMinorColors),(MinorColor)((pairNumber - 1) % numberOfMinorColors));
        std::cout << "Got pair " << colorPair.toString() << std::endl;
        assert(colorPair.getMajorColor() == expectedMajor);
        assert(colorPair.getMinorColor() == expectedMinor);
    }

    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
    {
        int pairNumber = (int)major * numberOfMinorColors + (int)minor + 1;
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
}
