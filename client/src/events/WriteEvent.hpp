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

#ifndef DEF_WRITEEVENT
#define DEF_WRITEEVENT
#include <stdint.h>

class WriteEvent
{
	private:
		uint64_t sizeToWrite;
		uint64_t writtenSize;

	public:
		WriteEvent(uint64_t sizeToWrite_, uint64_t writtenSize_);

		uint64_t getSizeToWrite();
		uint64_t getWrittenSize();
		void				 setWrittenSize(uint64_t);
		void				 addtoWrittenSize(uint64_t);
};

#endif
