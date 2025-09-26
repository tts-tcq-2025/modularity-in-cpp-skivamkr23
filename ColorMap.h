#pragma once

namespace TelCoColorCoder 
{
    enum class MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum class MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];
    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;
}
