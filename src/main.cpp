#include <iostream>
#include "types/point2d.h"
#include "types/line.h"
#include "operations/operations.h"

int main(){
    fgal::types::Point2D p1(2,3);
    fgal::types::Point2D p2(3,3);

    fgal::types::Line l(p1, p2);

    std::cout << "Line: " << std::endl;
    std::cout << '\t' << "p1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    std::cout << '\t' << "p2: (" << p2.x << ", " << p2.y << ")" << std::endl;

    std::cout << fgal::operations::points_distance(p1,p2) << std::endl;


}