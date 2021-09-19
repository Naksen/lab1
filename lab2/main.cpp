#include <iostream>
#include "pentagon.h"
int main() {
    //Pentagon:
    Pentagon p(std::cin);
    p.Print(std::cout);
    std::cout << "Area is " << p.Area() << "\n";
    std::cout << "Number of vertexes is " << p.VertexesNumber() << "\n";
    return 0;
}
/* Test's:
Pentagon (Area = 7):
0 0 0 2 1 3 2 3 3 0
Hexagon (Area = 36):
0 0 0 3 2 6 5 6 7 3 7 0
Octagon (Area = 104):
0 0 0 4 4 8 6 10 8 10 10 8 14 4 14 0
*/