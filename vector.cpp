#include "vector.hpp"

#include <iostream>
#include <cmath>


namespace geometry {

  // const before '{' marks that this is const
  // if an object is const it has to be declared within
  // the member function, that the object will not be changed
  // which is guaranteed by placing const at the end
  double Vector::dot(const Vector& other) const {

    double dot{this->x*other.x + this->y*other.y + this->z*other.z};

    return dot;
  }

  double Vector::length() const {

    double x_pow{std::pow(this->x, 2)};
    double y_pow{std::pow(this->y, 2)};
    double z_pow{std::pow(this->z, 2)};

    return std::sqrt(x_pow + y_pow + z_pow);
  }

  double Vector::magnitude() const {

    return this->Vector::length();
  }

  Vector Vector::cross(const Vector& other) const {

    Vector x{
      this->y*other.z - this->z*other.y
      , this->z*other.x - this->x*other.z
      , this->x*other.y - this->y*other.x
    };

    return x;
  }

  Vector Vector::operator+(const Vector& second) const {

    Vector x{this->x + second.x, this->y + second.y, this->z + second.z};

    return x;
  }
  Vector Vector::operator-(const Vector& second) const {

    Vector x{this->x - second.x, this->y - second.y, this->z - second.z};

    return x;
  }

  double Vector::operator*(const Vector& second) const {
    return this->Vector::dot(second);
  }
  Vector Vector::operator*(double scalar) const {

    Vector x{this->x * scalar, this->y * scalar, this->z * scalar};

    return x;
  }

  Vector operator*(double scalar, const Vector& v) {

    Vector x{v.x * scalar, v.y * scalar, v.z * scalar};

    return x;
  }
  std::ostream& operator<<(std::ostream& out, const Vector& v) {
    out << "(" << v.x << ", " << v.y << ", " << v.z << ")";

    return out;
  }
}
