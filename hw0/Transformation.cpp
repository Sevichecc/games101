#include <cmath>
#include <iostream>
#include <Eigen/Core>

int main() {
  Eigen::Vector3d p(2, 1, 1);
  Eigen::Matrix3d rotate;
  rotate << cos(M_PI / 4), -sin(M_PI / 4), 0, 
            sin(M_PI / 4), cos(M_PI / 4), 0, 
            0, 0, 1;
  Eigen::Matrix3d translate;
  translate << 1, 0, 1,
               0, 1, 2,
               0, 0, 1;
  Eigen::Vector3d result = translate * rotate * p;
  std::cout << result << std::endl;
}
