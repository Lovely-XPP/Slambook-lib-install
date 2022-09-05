#include <iostream>
#include <vector>
#include <algorithm>
#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace std;
using namespace Eigen;

int main(int argc, char** argv) {
    // 定义四元数并归一化
    Quaterniond q1(0.35, 0.2, 0.3, 0.1), q2(-0.5, 0.4, -0.1, 0.2);
    q1.normalize();
    q2.normalize();
    
    // 定义向量
    Vector3d t1(0.3, 0.1, 0.1), t2(-0.1, 0.5, 0.3);
    Vector3d p1(0.5, 0, 0.2);

    // 定义欧拉变换
    Isometry3d T1(q1);
    Isometry3d T2(q2);
    T1.pretranslate(t1);
    T2.pretranslate(t2);

    // 做变换
    auto p2 = T2 * T1.inverse() * p1;
    cout << p2.transpose() << endl;
    return 0;
}