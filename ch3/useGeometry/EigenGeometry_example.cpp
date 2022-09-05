#include <iostream>
#include <cmath>

using namespace std;

#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace Eigen;

int main(int argc, char **argv) 
{
    // 初始化
    Matrix3d rotation_mtr = Matrix3d::Identity();
    Vector3d v(1, 0, 0);

    // 建立旋转角度 45度
    AngleAxisd v_rotate(M_PI/6, Vector3d (0, 0, 1));
    //cout << (v_rotate * v).transpose() << endl;

    // 转换为矩阵
    rotation_mtr = v_rotate.matrix();

    // 设置输出精度
    cout.precision(5);

    // 欧拉角
    Vector3d Angle = rotation_mtr.eulerAngles(2, 1, 0); // 设置转序为 2 1 0
    cout << Angle.transpose() * 180 / M_PI << endl;

    // 欧式变换
    Isometry3d T = Isometry3d::Identity();
    T.rotate(v_rotate); // 等价于 Isometry3d T(v_rotate)
    T.pretranslate(Vector3d (3, 3, 3));
    cout << "v' = T * v = " << (T * v).transpose() << endl;

    // 四元数
    Quaterniond q = Quaterniond(v_rotate);
    cout << "q = " << q.coeffs().transpose() << endl;
    cout << "v' = q * v = " << (q * v).transpose() << endl;

    return 0;
}
