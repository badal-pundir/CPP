#ifndef CYLINDER_H
#define CYLINDER_H

// constant.h is already included by class__.cpp file.
// constant.h will skip because of include guard.
#include "constants.h" // skiped...
class Cylinder {
    private:
        int radius{1}; // defalut initialization.  
        int height{1};
    public: 
        Cylinder() = default;
        // Cylinder();
        //parameterise constructer.
        Cylinder(double radius_param, double height_param);

        //-----------getter--------------
        double get_base_radius();
        double get_height();

        //---------setter----------------
        void set_base_radius(double radius_param);
        void set_height(double height_param);

        //-----------member function---------
        double volume();

};
#endif