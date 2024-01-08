#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>

class Point3D {
private:
    static int cnt;
    int* pt;
public:
    Point3D(): pt(new int[3]{0, 0, 0}) { 
        cnt++; 
    }
    Point3D(int x, int y, int z): pt(new int[3]{x, y, z}){ 
        cnt++;
    }
    ~Point3D() { 
        cnt--; 
        delete[] pt;    
    }
    friend double Area(const Point3D& a, const Point3D& b, const Point3D& c);
    static int getNum(){ return cnt; }
};

double Area(const Point3D& a, const Point3D& b, const Point3D& c) {
    int diff1[3], diff2[3];
    for (int i = 0; i < 3; i++) {
        diff1[i] = a.pt[i] - b.pt[i];
        diff2[i] = a.pt[i] - c.pt[i];
    }

    double crossProduct[3];
    crossProduct[0] = diff1[1] * diff2[2] - diff1[2] * diff2[1];
    crossProduct[1] = diff1[2] * diff2[0] - diff1[0] * diff2[2];
    crossProduct[2] = diff1[0] * diff2[1] - diff1[1] * diff2[0];

    double area = std::sqrt(crossProduct[0] * crossProduct[0] +
                            crossProduct[1] * crossProduct[1] +
                            crossProduct[2] * crossProduct[2]);

    return area;
}

int Point3D::cnt = 0;

int main(int argc, char** argv)
{
    Point3D p1(0, 1, 1);
    Point3D p2(0, 4, 5);
    Point3D p3(12, 1, 1);
    printf("%d points in total\n", Point3D::getNum());
    printf("Area is %.2lf\n", Area(p1, p2, p3));
}