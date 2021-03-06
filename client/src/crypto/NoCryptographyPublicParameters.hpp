/* Copyright (C) 2014 Carlos Aguilar Melchor, Joris Barrier, Marc-Olivier Killijian
 * This file is part of XPIRe.
 *
 *  XPIRe is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  XPIRe is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XPIRe.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DEF_NOCRYPTOGRAPHYPUBLICPARAMETERS
#define DEF_NOCRYPTOGRAPHYPUBLICPARAMETERS
#include <string>
#include <vector>

#include <boost/algorithm/string.hpp>
#include "AbstractPublicParameters.hpp"

class NoCryptographyPublicParameters : public AbstractPublicParameters {
  protected:
    std::string cryptoName;

  public:
    NoCryptographyPublicParameters();
    std::string getSerializedParams(bool shortversion);
    char* getByteModulus();
    unsigned int getAbsorptionBitsize();
    unsigned int getAbsorptionBitsize(unsigned int rec_lvl);
    void setModulus(char* rawPubKey);
    void setMockedPubKey();
    unsigned int getCiphertextBitsize();
    unsigned int getCiphBitsizeFromRecLvl(unsigned int);
    unsigned int getQuerySizeFromRecLvl(unsigned int);
    void computeNewParameters(const std::string& crypto_param_descriptor);
    unsigned int getSerializedModulusBitsize();
};

#endif
