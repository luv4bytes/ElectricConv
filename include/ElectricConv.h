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

#include <map>

namespace ElectricConv
{
    /// ChargeConverter is used to convert electric charge units.
    class ChargeConverter
    {

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

    private:

        /// Unit mappings based on 1 coulomb
        std::map<UNITS, double> unitMap =
        {
            {COULOMB, 1},
            {NANOCOULOMB, 1000000000},
            {MICROCOULOMB, 1000000},
            {MILLICOULOMB, 1000},
            {KILOCOULOMB, 0.0001},
            {MEGACOULOMB, 0.000001},
            {MILLIAMPERE_HOURS, 0.27777778},
            {AMPERE_HOURS, 0.00027778},
            {FARADAY, 0.00001036},
            {STATCOULOMB, 2997924580},
            {ELEMENTARY_CHARGE, 6.24150947E+18}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };

    /// CapacityConverter is used to convert electrical capacity.
    class CapacityConverter
    {

    public:

        /// Supported units for conversion
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
            /// Statfarad
            STATFARAD
        };

    private:

        /// Untit mappings based on 1 Farad
        std::map<UNITS, double> unitMap =
        {
            {FARAD, 1},
            {DECAFARAD, 0.1},
            {HECTOFARAD, 0.01},
            {KILOFARAD, 0.001},
            {MEGAFARAD, 0.000001},
            {GIGAFARAD, 10E-9},
            {TERAFARAD, 10E-13},
            {PETAFARAD, 10E-15},
            {EXAFARAD, 10E-18},
            {ZETTAFARAD, 10E-21},
            {YOTTAFARAD, 10E-24},
            {DECIFARAD, 10},
            {CENTIFARAD, 100},
            {MICROFARAD, 1000000},
            {NANOFARAD, 1000000000},
            {PICOFARAD, 10E+12},
            {FEMTOFARAD, 10E+15},
            {ATTOFARAD, 10E+18},
            {ZEPTOFARAD, 10E+21},
            {YOCTOFARAD, 10E+24},
            {COULOMB_PER_VOLT, 1},
            {STATFARAD, 8.9875517874 * (10E+11)}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };

    /// ConductivityConverter is used to convert electrical conductivity.
    class ConductivityConverter
    {

    public:

        /// Supported units for conversion
        enum UNITS
        {
            /// Siemens
            SIEMENS,
            /// Nanosiemens
            NANOSIEMENS,
            /// Millisiemens
            MILLISIEMENS,
            /// Microsiemens
            MICROSIEMENS,
            /// Kilosiemens
            KILOSIEMENS,
            /// Megasiemens
            MEGASIEMENS,
            /// Gigasiemens
            GIGASIEMENS,
            /// Mho
            MHO,
            /// Ampere per Volt
            AMPERE_PER_VOLT
        };

    private:

        /// Untit mappings based on 1 Siemens
        std::map<UNITS, double> unitMap =
        {
            {SIEMENS, 1},
            {NANOSIEMENS, 1000000000},
            {MICROSIEMENS, 1000000},
            {MILLISIEMENS, 1000},
            {KILOSIEMENS, 0.001},
            {MEGASIEMENS, 0.000001},
            {GIGASIEMENS, 10E-9},
            {MHO, 1},
            {AMPERE_PER_VOLT, 1}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };

    /// CurrentConverter is used to convert electrical current.
    class CurrentConverter
    {

    public:

        /// Supported units for conversion
        enum UNITS
        {
            /// Nanoampere
            NANOAMPERE,
            /// Microampere
            MICROAMPERE,
            /// Milliampere
            MILLIAMPERE,
            /// Ampere
            AMPERE,
            /// Kiloampere
            KILOAMPERE,
            /// Megaampere
            MEGAAMPERE,
            /// Gigaampere
            GIGAAMPERE,
            /// Coulomb per second
            COULOMB_PER_SECOND
        };

    private:

        /// Untit mappings based on 1 Ampere
        std::map<UNITS, double> unitMap =
        {
            {AMPERE, 1},
            {NANOAMPERE, 1000000000},
            {MICROAMPERE, 1000000},
            {MILLIAMPERE, 1000},
            {KILOAMPERE, 0.001},
            {MEGAAMPERE, 0.000001},
            {GIGAAMPERE, 10E-9},
            {COULOMB_PER_SECOND, 1}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };

    /// ResitanceConverter is used to convert electrical resitance.
    class ResistanceConverter
    {

    public:

        /// Supported units for conversion
        enum UNITS
        {
            /// Nanoohm
            NANOOHM,
            /// Microohm
            MICROOHM,
            /// Milliohm
            MILLIOHM,
            /// Ohm
            OHM,
            /// Kiloohm
            KILOOHM,
            /// Megaohm
            MEGAOHM,
            /// Gigaohm
            GIGAOHM,
            /// Volt per Ampere
            VOLT_PER_AMPERE
        };

    private:

        /// Untit mappings based on 1 Ohm
        std::map<UNITS, double> unitMap =
        {
            {OHM, 1},
            {NANOOHM, 1000000000},
            {MICROOHM, 1000000},
            {MILLIOHM, 1000},
            {KILOOHM, 0.001},
            {MEGAOHM, 0.000001},
            {GIGAOHM, 10E-9},
            {VOLT_PER_AMPERE, 1}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };

    /// InductivityConverter is used to convert electrical inductivity.
    class InductivityConverter
    {

    public:

        /// Supported units for conversion
        enum UNITS
        {
            /// Nanohenry
            NANOHENRY,
            /// Microhenry
            MICROHENRY,
            /// Millihenry
            MILLIHENRY,
            /// Henry
            HENRY,
            /// Kilohenry
            KILOHENRY,
            /// Megahenry
            MEGAHENRY,
            /// Gigahenry
            GIGAHENRY,
            /// Weber per Ampere
            WEBER_PRO_AMPERE
        };

    private:

        /// Untit mappings based on 1 Henry
        std::map<UNITS, double> unitMap =
        {
            {HENRY, 1},
            {NANOHENRY, 1000000000},
            {MICROHENRY, 1000000},
            {MILLIHENRY, 1000},
            {KILOHENRY, 0.001},
            {MEGAHENRY, 0.000001},
            {GIGAHENRY, 10E-9},
            {WEBER_PRO_AMPERE, 1}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };

    /// PotentialConverter is used to convert electrical potential.
    class PotentialConverter
    {

    public:

        /// Supported units for conversion
        enum UNITS
        {
            /// Nanovolt
            NANOVOLT,
            /// Microvolt
            MICROVOLT,
            /// Millivolt
            MILLIVOLT,
            /// Volt
            VOLT,
            /// Kilovolt
            KILOVOLT,
            /// Megahvolt
            MEGAVOLT,
            /// Gigavolt
            GIGAVOLT,
            /// Watt per Ampere
            WATT_PER_AMPERE,
            /// Statvolt
            STATVOLT
        };

    private:

        /// Untit mappings based on 1 Volt
        std::map<UNITS, double> unitMap =
        {
            {VOLT, 1},
            {NANOVOLT, 1000000000},
            {MICROVOLT, 1000000},
            {MILLIVOLT, 1000},
            {KILOVOLT, 0.001},
            {MEGAVOLT, 0.000001},
            {GIGAVOLT, 10E-9},
            {WATT_PER_AMPERE, 1},
            {STATVOLT, 0.00333564}
        };

    public:

        /// Converts value 'inVal' of unit 'inUnit' to 'outUnit' and returns the value.
        /// @param inUnit The unit of the given value
        /// @param inVal The value to convert
        /// @param outUnit The unit of the result
        double Convert(UNITS inUnit, double inVal, UNITS outUnit);
    };
}

#endif // CONVERTER_H
