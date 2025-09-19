#include "ColorPair.h"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMajorColors = 5;
    int numberOfMinorColors = 5;

    ColorPair::ColorPair(MajorColor major, MinorColor minor):
        majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() {
        return majorColor;
    }
    MinorColor ColorPair::getMinor() {
        return minorColor;
    }

    std::string ColorPair::ToString() {
        return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
    }
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor major = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(major, minor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}
