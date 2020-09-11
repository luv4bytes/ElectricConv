/*
 * Copyright (C) 2020 Lukas Pfeifer
 * for ElectricConv version 1.0
 *      https://github.com/luv4bytes/ElectricConv
 *
 * This file is part of ElectricConv.
 *
 * ElectricConv is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ElectricConv is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with ElectricConv. If not, see <http://www.gnu.org/licenses/>.
 *
*/


#include "ElectricConv.h"

double ElectricConv::ChargeConverter::Convert(ElectricConv::ChargeConverter::UNITS inUnit,
                                              double inVal,
                                              ElectricConv::ChargeConverter::UNITS outUnit)
{
    double coulomb = 0;
    double result  = 0;

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

double ElectricConv::CapacityConverter::Convert(ElectricConv::CapacityConverter::UNITS inUnit,
                                              double inVal,
                                              ElectricConv::CapacityConverter::UNITS outUnit)
{
    double farad = 0;
    double result = 0;

    switch(inUnit)
    {
        case FARAD:
            farad = inVal;
            break;

        case DECAFARAD:
            farad = inVal / daF;
            break;

        case HECTOFARAD:
            farad = inVal / hF;
            break;

        case KILOFARAD:
            farad = inVal / kF;
            break;

        case MEGAFARAD:
            farad = inVal / MF;
            break;

        case GIGAFARAD:
            farad = inVal / GF;
            break;

        case TERAFARAD:
            farad = inVal / TF;
            break;

        case PETAFARAD:
            farad = inVal / PF;
            break;

        case EXAFARAD:
            farad = inVal / EF;
            break;

        case ZETTAFARAD:
            farad = inVal / ZF;
            break;

        case YOTTAFARAD:
            farad = inVal / YF;
            break;

        case DECIFARAD:
            farad = inVal / dF;
            break;

        case CENTIFARAD:
            farad = inVal / cF;
            break;

        case MICROFARAD:
            farad = inVal / uF;
            break;

        case NANOFARAD:
            farad = inVal / nF;
            break;

        case PICOFARAD:
            farad = inVal / pF;
            break;

        case FEMTOFARAD:
            farad = inVal / fF;
            break;

        case ATTOFARAD:
            farad = inVal / aF;
            break;

        case ZEPTOFARAD:
            farad = inVal / zF;
            break;

        case YOCTOFARAD:
            farad = inVal / yF;
            break;

        case COULOMB_PER_VOLT:
            farad = inVal / CpV;
            break;

        case ABFARAD:
            farad = inVal / abF;
            break;

        case STATFARAD:
            farad = inVal / statF;
            break;

        default:
            break;
    }

    switch(outUnit)
    {
        case FARAD:
            result = farad;
            break;

        case DECAFARAD:
            result = farad * daF;
            break;

        case HECTOFARAD:
            result = farad * hF;
            break;

        case KILOFARAD:
            result = farad * kF;
            break;

        case MEGAFARAD:
            result = farad * MF;
            break;

        case GIGAFARAD:
            result = farad * GF;
            break;

        case TERAFARAD:
            result = farad * TF;
            break;

        case PETAFARAD:
            result = farad * PF;
            break;

        case EXAFARAD:
            result = farad * EF;
            break;

        case ZETTAFARAD:
            result = farad * ZF;
            break;

        case YOTTAFARAD:
            result = farad * YF;
            break;

        case DECIFARAD:
            result = farad * dF;
            break;

        case CENTIFARAD:
            result = farad * cF;
            break;

        case MICROFARAD:
            result = farad * uF;
            break;

        case NANOFARAD:
            result = farad * nF;
            break;

        case PICOFARAD:
            result = farad * pF;
            break;

        case FEMTOFARAD:
            result = farad * fF;
            break;

        case ATTOFARAD:
            result = farad * aF;
            break;

        case ZEPTOFARAD:
            result = farad * zF;
            break;

        case YOCTOFARAD:
            result = farad * yF;
            break;

        case COULOMB_PER_VOLT:
            result = farad * CpV;
            break;

        case ABFARAD:
            result = farad * abF;
            break;

        case STATFARAD:
            result = farad * statF;
            break;

        default:
            break;
    }

    return result;
}
