/*
 * Copyright (c) 2018 Mohamed E. Saleh
 * The code is licensed under the MIT License.
 * You can check the file LICENSE for the full license.
 *
 * This is a class for a 2D Point.
 */

#ifndef SGLPOINT2_H
#define SGLPOINT2_H

namespace sgl
{
	class Point2
	{
	public:
		double x, y;

		Point2();                                   // Default Constructor
		Point2(const double d);                     // From 1 value
		Point2(const double x, const double y);     // From 2 values
		Point2(const Point2& p);                    // Copy Constructor
		~Point2();                                  // Destructor

		Point2& operator= (const Point2& p);        // Assignment operator
		Point2 operator* (const double d);          // Scaling the point
	};
}

inline sgl::Point2 sgl::Point2::operator*(const double d) { return sgl::Point2(x * d, y * d); }

#endif