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
    double coulomb = inVal / unitMap[inUnit];
    double result  = coulomb * unitMap[outUnit];

    return result;
}

double ElectricConv::CapacityConverter::Convert(ElectricConv::CapacityConverter::UNITS inUnit,
                                              double inVal,
                                              ElectricConv::CapacityConverter::UNITS outUnit)
{
    double farad = inVal / unitMap[inUnit];
    double result = farad * unitMap[outUnit];

    return result;
}

double ElectricConv::ConductivityConverter::Convert(ElectricConv::ConductivityConverter::UNITS inUnit,
                                                    double inVal,
                                                    ElectricConv::ConductivityConverter::UNITS outUnit)
{
    double siemens = inVal / unitMap[inUnit];
    double result = siemens * unitMap[outUnit];

    return result;
}

double ElectricConv::CurrentConverter::Convert(ElectricConv::CurrentConverter::UNITS inUnit,
                                                    double inVal,
                                                    ElectricConv::CurrentConverter::UNITS outUnit)
{
    double ampere = inVal / unitMap[inUnit];
    double result = ampere * unitMap[outUnit];

    return result;
}

double ElectricConv::ResistanceConverter::Convert(ElectricConv::ResistanceConverter::UNITS inUnit,
                                                    double inVal,
                                                    ElectricConv::ResistanceConverter::UNITS outUnit)
{
    double ohm = inVal / unitMap[inUnit];
    double result = ohm * unitMap[outUnit];

    return result;
}

double ElectricConv::InductivityConverter::Convert(ElectricConv::InductivityConverter::UNITS inUnit,
                                                    double inVal,
                                                    ElectricConv::InductivityConverter::UNITS outUnit)
{
    double henry = inVal / unitMap[inUnit];
    double result = henry * unitMap[outUnit];

    return result;
}

double ElectricConv::PotentialConverter::Convert(ElectricConv::PotentialConverter::UNITS inUnit,
                                                    double inVal,
                                                    ElectricConv::PotentialConverter::UNITS outUnit)
{
    double volt = inVal / unitMap[inUnit];
    double result = volt * unitMap[outUnit];

    return result;
}
