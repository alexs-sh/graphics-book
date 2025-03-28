//
//
//

#pragma once
#ifndef	__STEPS_COMMON__
#define	__STEPS_COMMON__

//#include	<math.h>
#include	<cmath>

#ifndef	EPS
	#define	EPS	0.0001f
#endif

#ifndef	MAX_COORD
	#define	MAX_COORD	1e7
#endif


#ifndef	M_PI								// since not all compilers define it
	#define M_PI        3.14159265358979323846f
#endif

#undef	min
#undef	max

inline float min ( float x, float y )
{
	return x < y ? x : y;
}

inline float max ( float x, float y )
{
	return x > y ? x : y;
}

/*
inline	float	calcFov ( int width, int height )
{
	return (float)width / (float)height;
}
*/

inline float   sqr ( float x )
{
	return x*x;
}

#endif
