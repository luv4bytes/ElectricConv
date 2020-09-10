#ifndef CONVERTER_H
#define CONVERTER_H

namespace ElectricConv
{
    /// ChargeConverter is used to convert electric charge units.
    class ChargeConverter
    {

    class CapacityConverter
    {
        // TODO: CapacityConverter
    };

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
}

#endif // CONVERTER_H
