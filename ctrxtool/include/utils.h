/*
 * utils.h - utility functions.
 * 
 * Copyright 2015, Alex Shaw <alex.shaw.as@gmail.com>
 * 
 * This file is part of OpenCTR.
 * 
 * OpenCTR is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * OpenCTR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with OpenCTR.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UTILS_H
#define UTILS_H

#ifdef __cplusplus
extern "C" {
#endif

int readfile(unsigned char* buffer[], unsigned int* size, const char* filename);

#ifdef __cplusplus
}
#endif

#endif
