#include "ElectricConv.h"

double ElectricConv::ChargeConverter::Convert(ElectricConv::ChargeConverter::UNITS inUnit,
                                              double inVal,
                                              ElectricConv::ChargeConverter::UNITS outUnit)
{
    double coulomb = 0.0;
    double result  = 0.0;

    switch (inUnit)
    {
        case COULOMB:
            coulomb = inVal;
            break;

        case NANOCOULOMB:
            coulomb = inVal / nC;
            break;

        case MICROCOULOMB:
            coulomb = inVal / uC;
            break;

        case MILLICOULOMB:
            coulomb = inVal / mC;
            break;

        case KILOCOULOMB:
            coulomb = inVal / kC;
            break;

        case MEGACOULOMB:
            coulomb = inVal / MC;
            break;

        case ABCOULOMB:
            coulomb = inVal / abC;
            break;

        case MILLIAMPERE_HOURS:
            coulomb = inVal / mAh;
            break;

        case AMPERE_HOURS:
            coulomb = inVal / Ah;
            break;

        case FARADAY:
            coulomb = inVal / F;
            break;

        case STATCOULOMB:
            coulomb = inVal / statC;
            break;

        case ELEMENTARY_CHARGE:
            coulomb = inVal / e;
            break;

        default:
            break;
    }

    switch(outUnit)
    {
        case COULOMB:
            result = coulomb;
            break;

        case NANOCOULOMB:
            result = coulomb * nC;
            break;

        case MICROCOULOMB:
            result = coulomb * uC;
            break;

        case MILLICOULOMB:
            result = coulomb * mC;
            break;

        case KILOCOULOMB:
            result = coulomb * kC;
            break;

        case MEGACOULOMB:
            result = coulomb * MC;
            break;

        case ABCOULOMB:
            result = coulomb * abC;
            break;

        case MILLIAMPERE_HOURS:
            result = coulomb * mAh;
            break;

        case AMPERE_HOURS:
            result = coulomb * Ah;
            break;

        case FARADAY:
            result = coulomb * F;
            break;

        case STATCOULOMB:
            result = coulomb * statC;
            break;

        case ELEMENTARY_CHARGE:
            result = coulomb * e;
            break;

        default:
            break;
    }

    return result;
}
