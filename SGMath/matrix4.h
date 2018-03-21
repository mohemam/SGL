#ifndef SGLMATRIX4_H
#define SGLMATRIX4_H

namespace SGMath
{
	class Matrix4
	{
	public:

		// Constructors
		Matrix4();                                      // Default Constructor
		Matrix4(const Matrix4& m);                      // Copy Constructor
		~Matrix4();                                     // Destructor

		// Operators
		Matrix4& operator= (const Matrix4& m2);         // Assignment operator
		double& operator() (int x, int y);              // For indexing
		double operator() (int x, int y) const;         // For indexing
		Matrix4 operator* (const Matrix4& m2) const;    // Matrix-Matrix multiplication
		Matrix4 operator* (const double d);             // Matrix-scalar multiplication
		Matrix4 operator/ (const double d);             // Matrix-scalar division
		Matrix4 operator+ (const Matrix4& m2) const;    // Matrix-Matrix addition
		Matrix4 operator- (const Matrix4& m2) const;    // Matrix-Matrix subtraction

		// Functions
		void setToIdentity();                           // Set Matrix to Identity
		void print() const;                             // For debugging

	private:
		double m[4][4];
	};

}

inline double& SGMath::Matrix4::operator() (int x, int y) { return m[x][y]; };
inline double SGMath::Matrix4::operator() (int x, int y) const { return m[x][y]; };

// Non-member Functions
// Scalar-matrix4 multiplication
SGMath::Matrix4 operator* (const double d, const SGMath::Matrix4& m);

#endif