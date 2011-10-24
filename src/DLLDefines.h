/**
 * This file is a part of LibHDR package.
 * ---------------------------------------------------------------------- 
 * Copyright (C) 2011 Davide Anastasia
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ---------------------------------------------------------------------- 
 * 
 * @author Davide Anastasia <davideanastasia@users.sourceforge.net>
 *  
 */
 
#ifndef _LibHDR_DLLDEFINES_H_
#define _LibHDR_DLLDEFINES_H_

/* 
* Cmake will define LibHDR_EXPORTS on Windows when it
* configures to build a shared library. If you are going to use
* another build system on windows or create the visual studio
* projects by hand you need to define LibHDR_EXPORTS when
* building a DLL on windows.
*/
// We are using the Visual Studio Compiler and building Shared libraries

#if defined (_WIN32) 
  #if defined(LibHDR_EXPORTS)
    #define LIBHDR_API __declspec(dllexport)
  #else
    #define LIBHDR_API __declspec(dllexport)
  #endif /* LIBHDR_API */
#else /* defined (_WIN32) */
 #define LIBHDR_API
#endif

#endif /* _LibHDR_DLLDEFINES_H_ */