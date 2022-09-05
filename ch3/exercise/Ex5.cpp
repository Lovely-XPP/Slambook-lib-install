#include <Eigen/Core>
#include <iostream>

using namespace std;
using namespace Eigen;

int main()
{
    Matrix<float, 50, 50> M;
    Matrix3d M3;
    for (auto i = 0; i < 3; i++)
    {
        for ( auto j = 0; j < 3; j++)
        {
            M3(i, j) = M(i, j);
            M(i, j) = 1;
        }
    }
    cout << M3 << endl;
    cout << M << endl;
    return 0;
}