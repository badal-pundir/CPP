#include "cylinder.h"

// Cylinder::Cylinder() {
//     radius = 2.0;
//     height = 2.0;
// }

Cylinder::Cylinder(double radius_param, double height_param) {
    radius = radius_param;
    height = height_param;
}

double Cylinder::volume() {
    return PI * radius * radius* height;
}

//-----------getter--------------
double Cylinder::get_base_radius() {
    return radius;
}
double Cylinder::get_height() {
    return height;
}

//---------setter----------------
void Cylinder::set_base_radius(double radius_param) {
    radius = radius_param;
}
void Cylinder::set_height(double height_param) {
    height = height_param;
} 