#include "vector.hpp"

#include <iostream>

namespace geometry {

  Vector::Vector() {}
  Vector::Vector(double x, double y, double z) {}

  // const before '{' marks that this is const
  // if an object is const it has to be declared within
  // the member function, that the object will not be changed
  // which is guaranteed by placing const at the end
  double Vector::dot(const Vector& other) const {
    double x{0};

    return x;
  }

  double Vector::length() const {
    double x{0};

    return x;
  }

  double Vector::magnitude() const {
    double x;
    return x;
  }

  Vector Vector::cross(const Vector& other) const {
    Vector x;

    return x;
  }

  Vector Vector::operator+(const Vector& second) const {

  };
  Vector Vector::operator-(const Vector& second) const {}
  double Vector::operator*(const Vector& second) const {}
  Vector Vector::operator*(double scalar) const {}

  Vector operator*(double scalar, const Vector& v) {}
  std::ostream& operator<<(std::ostream& out, const Vector& v) {}
}
