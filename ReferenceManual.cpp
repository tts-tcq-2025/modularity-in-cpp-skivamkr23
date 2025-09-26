#include <iostream>
#include "ColorMap.h"
#include "ColorPair.h"
#include "ReferenceManual.h"

namespace TelCoColorCoder {
    void printColorCodeManual() {
        std::cout << "Pair Number | Major Color | Minor Color\n";
        std::cout << "---------------------------------------\n";
        for (int i = 0; i < numberOfMajorColors * numberOfMinorColors; ++i) 
            {
            ColorPair colorPair((MajorColor)(i / numberOfMinorColors),(MinorColor)(i % numberOfMinorColors));
            std::cout << i + 1 << "\t\t| "<< MajorColorNames[(int)colorPair.getMajorColor()] << "\t   | "<< MinorColorNames[(int)colorPair.getMinorColor()] << "\n";
        }
    }
}
