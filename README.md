# ElectricConv
C++ library for converting units used in the field of electro dynamics.

## Using the library

```cpp
#include <iostream>
#include "ElectricConv.h"

using namespace ElectricConv;

int main()
{
        CapacityConverter conv;

        double farad = conv.Convert(CapacityConverter::UNITS::FARAD, 10, CapacityConverter::UNITS::KILOFARAD);

        std::cout << farad << std::endl;

        return 0;
}
```