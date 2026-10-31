#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

namespace geometry {

  class Vector {
  public:
    Vector(double x, double y, double z):
      x{x}, y{y}, z{z} {}
    Vector(): Vector(0, 0, 0) {}
    double dot(const Vector& other) const;
    double length() const;
    double magnitude() const;
    Vector cross(const Vector& other) const;

    Vector operator+(const Vector& second) const;
    Vector operator-(const Vector& second) const;
    double operator*(const Vector& second) const;  // dot product
    Vector operator*(double scalar) const;  // scalar multiplication

    double x;
    double y;
    double z;

  };

  Vector operator*(double scalar, const Vector& v);  // scalar multiplication
  std::ostream& operator<<(std::ostream& out, const Vector& v);

}

#endif  // VECTOR_HPP
