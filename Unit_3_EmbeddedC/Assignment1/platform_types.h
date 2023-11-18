/*
 * platform_types.h
 *
 *  Created on: Nov 18, 2023
 *      Author: Ahmed Saleem
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

typedef unsigned char         boolean;
typedef unsigned char         uint8;
typedef unsigned int          uint32;
typedef unsigned short        uint16;
typedef unsigned long long    uint64;

typedef signed char           sint8;
typedef signed short          sint16;
typedef signed int            sint32;
typedef signed long long      sint64;


typedef float                 float32;
typedef double               float64;

typedef volatile uint8       vuint8_t;
typedef volatile sint8       vsint8_t;

typedef volatile uint16      vuint16_t;
typedef volatile sint16      vsint16_t;

typedef volatile uint32      vuint32_t;
typedef volatile sint32      vsint32_t;



#endif /* PLATFORM_TYPES_H_ */
