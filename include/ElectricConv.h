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

#ifndef CONVERTER_H
#define CONVERTER_H

namespace ElectricConv
{
    /// ChargeConverter is used to convert electric charge units.
    class ChargeConverter
    {

    private:

        /**
            ELECTRIC CHARGE

            Calculations are based on 1 C (Coulomb)
        **/

        /// Coulomb equal to 1 C
        const double C = 1;

        /// Nanocoulomb equal to 1 C
        const double nC = 1000000000;

        /// Microcoulomb equal to 1 C
        const double uC = 1000000;

        /// Millicoulomb equal to 1 C
        const double mC = 1000;

        /// Kilocoulomb equal to 1 C
        const double kC = 0.0001;

        /// Megacoulomb equal to 1 C
        const double MC = 0.000001;

        /// Abcoulomb equal to 1 C
        const double abC = 0.1;

        /// Milliampere-hours equal to 1 C
        const double mAh = 0.27777778;

        /// Ampere-hours equal to 1 C
        const double Ah = 0.00027778;

        /// Faraday equal to 1 C
        const double F = 0.00001036;

        /// Statcoulomb equal to 1 C
        const double statC = 2997924580;

        /// Elementary charge equal to 1 C
        const double e = 6.24150947E+18;

    public:

        /// Supported charge units.
        enum UNITS
        {
            /// Coulomb
            COULOMB,
            /// Nanocoulomb
            NANOCOULOMB,
            /// Microcoulomb
            MICROCOULOMB,
            /// Millicoulomb
            MILLICOULOMB,
            /// Kilocoulomb
            KILOCOULOMB,
            /// Megacoulomb
            MEGACOULOMB,
            /// Abcoulomb
            ABCOULOMB,
            /// Milliampere-hours
            MILLIAMPERE_HOURS,
            /// Ampere-hours
            AMPERE_HOURS,
            /// Faraday
            FARADAY,
            /// Statcoulomb
            STATCOULOMB,
            /// Elementary charge
            ELEMENTARY_CHARGE
        };

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };

    class CapacityConverter
    {
        /**
            ELECTRIC CAPACITY

            Calculations are based on 1 Farad
        **/

    private:

        /// Farad
        const double F = 1;

        /// Decafarad equal to 1 Farad
        const double daF = 0.1;

        /// Hectofarad equal to 1 Farad
        const double hF = 0.01;

        /// Kilofarad equal to 1 Farad
        const double kF = 0.001;

        /// Megafarad equal to 1 Farad
        const double MF = 0.000001;

        /// Gigafarad equal to 1 Farad
        const double GF = 10E-9;

        /// Terafarad equal to 1 Farad
        const double TF = 10E-13;

        /// Petafarad equal to 1 Farad
        const double PF = 10E-15;

        /// Exafarad equal to 1 Farad
        const double EF = 10E-18;

        /// Zettafarad equal to 1 Farad
        const double ZF = 10E-21;

        /// Yottafarad equal to 1 Farad
        const double YF = 10E-24;

        /// Decifarad equal to 1 Farad
        const double dF = 10;

        /// Centifarad equal to 1 Farad
        const double cF = 100;

        /// Microfarad equal to 1 Farad
        const double uF = 1000000;

        /// Nanofarad equal to 1 Farad
        const double nF = 1000000000;

        /// Picofarad equal to 1 Farad
        const double pF = 10E+12;

        /// Femtofarad equal to 1 Farad
        const double fF = 10E+15;

        /// Attofarad equal to 1 Farad
        const double aF = 10E+18;

        /// Zeptofarad equal to 1 Farad
        const double zF = 10E+21;

        /// Yoctofarad equal to 1 Farad
        const double yF = 10E+24;

        /// Coulomb per Volt equal to 1 Farad
        const double CpV = 1;

        /// Abfarad equal to 1 Farad
        const double abF = 10E-9;

        /// Statfarad equal to 1 Farad
        const double statF = 8.9875517874 * (10E+11);

        enum UNITS
        {
            /// Farad
            FARAD,
            /// Decafarad
            DECAFARAD,
            /// Hectofarad
            HECTOFARAD,
            /// Kilofarad
            KILOFARAD,
            /// Megafarad
            MEGAFARAD,
            /// Gigafarad
            GIGAFARAD,
            /// Terafarad
            TERAFARAD,
            /// Petafarad
            PETAFARAD,
            /// Exafarad
            EXAFARAD,
            /// Zettafarad
            ZETTAFARAD,
            /// Yottafarad
            YOTTAFARAD,
            /// Decifarad
            DECIFARAD,
            /// Centifarad
            CENTIFARAD,
            /// Microfarad
            MICROFARAD,
            /// Nanofarad
            NANOFARAD,
            /// Picofarad
            PICOFARAD,
            /// Femtofarad
            FEMTOFARAD,
            /// Attofarad
            ATTOFARAD,
            /// Zeptofarad
            ZEPTOFARAD,
            /// Yoctofarad
            YOCTOFARAD,
            /// Coulomb per Volt
            COULOMB_PER_VOLT,
            /// Abfarad
            ABFARAD,
            /// Statfarad
            STATFARAD
        };

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };
}

#endif // CONVERTER_H
