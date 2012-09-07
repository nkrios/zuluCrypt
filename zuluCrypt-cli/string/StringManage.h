/*
 * 
 *  Copyright (c) 2012
 *  name : mhogo mchungu 
 *  email: mhogomchungu@gmail.com
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 * 
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef STRINGMANAGE
#define STRINGMANAGE

#ifdef __cplusplus
extern "C" {
#endif	

#include <stdlib.h>
#include "String.h"

#define StringManageVoid ( ( void * ) 0 ) 

typedef struct StringManage_t * stringManage_t ;

stringManage_t StringManage( size_t ) ;

string_t * StringManageString( void ) ;

void StringManageStringDelete( string_t * ) ;

string_t * StringManageAssign( stringManage_t ) ;

void StringManageDelete( stringManage_t ) ;

void StringManageClearDelete( stringManage_t ) ;

ssize_t StringManageSize( stringManage_t ) ;

string_t StringManageStringAt( stringManage_t,size_t index ) ;

int StringManageMaxSize( stringManage_t ) ;

#ifdef __cplusplus
}
#endif

#endif