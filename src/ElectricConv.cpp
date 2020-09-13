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
