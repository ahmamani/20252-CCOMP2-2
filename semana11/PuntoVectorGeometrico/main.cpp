#include <iostream>
#include <cmath>

using namespace std;

class Punto {
    private:
        int x;
        int y;
    public:
        Punto() {
            x = 0;
            y = 0;
        }
        Punto(int _x, int _y) {
            x = _x;
            y = _y;
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        void print() {
            cout << "(" << x << ", " << y << ")";
        }
        void modificar(int _x, int _y){
            x = _x;
            y = _y;
        }
};

class VectorGeometrico {
        Punto ini;
        Punto fin;
    public:
        VectorGeometrico(Punto p1, Punto p2) {
            ini = p1;
            fin = p2;
        }
        void print() const {
            ini.print();
            cout << " -> ";
            fin.print();
        }
        float modulo() {
            return sqrt( pow(fin.getX()-ini.getX(), 2) + pow(fin.getY()-ini.getY(), 2));
        }
};

int main()
{
    Punto p1;
    Punto p2(3, 4);
    VectorGeometrico vg(p1, p2);

    vg.print();
    cout << "\n El modulo es: " << vg.modulo() << endl;
    return 0;
}
