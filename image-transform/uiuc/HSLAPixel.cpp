/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
	// Constructor
	 HSLAPixel::HSLAPixel(double hh , double ss , double ll , double aa ) 
	 : h(hh)
	 , s(ss)
	 , l(ll)
	 , a(aa)
	 {}
}
