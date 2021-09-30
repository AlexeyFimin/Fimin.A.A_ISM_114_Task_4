#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

using namespace std;

class Figure{
public:
    virtual double CalcPerimetr()=0;
    virtual double CalcArea()=0;
    virtual void Print()=0;
    virtual void Read()=0;
};

class Circle: public Figure{
private:
    double _r, _P, _S;
public:
    Circle(double r, double P, double S)//конструктор
    {
        _r=r;
        _P=P;
        _S=S;

    }
    Circle (const Circle &c)// конструктор копирования
    {
        _r=c._r;
        _P=c._P;
        _S=c._S;
    }
    double CalcPerimetr() override {
        _P = (2*3.14f*_r);
        return _P;
    }
    double CalcArea() override {
        _S = 3.14f*_r*_r;
        return _S;
    }
    void Read() override {
        cout << "Введите радиус r круга: r= ";
        cin >> _r;
        while (_r <= 0 ){
            cout << "Ощибка, введите заново:"<< endl;
            cout << "Введите радиус r круга: r= ";
            cin >> _r;
        }
    }
    void Print() override {
        cout << "Периметр круга равен: Р= "<< _P << endl;
        cout << "Площадь круга равна: S= " << _S << endl;
    }
};

class Rect: public Figure{
private:
    double _w, _h, _P, _S;
public:
    Rect (double w, double h, double P, double S)//конструктор
    {
        _w=w;
        _h=h;
        _P=P;
        _S=S;
    }
    Rect (const Rect &c)//конструктор копирования
    {
        _w=c._w;
        _h=c._h;
        _P=c._P;
        _S=c._S;
    }
    double CalcPerimetr() override {
        _P = 2*(_h+_w);
        return _P;
    }
    double CalcArea() override {
        _S=_w*_h;
        return _S;
    }
    void Read() override {
        cout << "Введите высоту h прямоугольника: h= ";
        cin >> _h;
        while (_h <= 0 ){
            cout << "Ощибка, введите заново:"<< endl;
            cout << "Введите высоту h круга: h= ";
            cin >> _h;
        }
        cout << "Введите ширину w прямоугольника: w= ";
        cin >> _w;
        while (_w <= 0 ){
            cout << "Ощибка, введите заново:"<< endl;
            cout << "Введите ширину w круга: w= ";
            cin >> _w;
    }
    }
    void Print() override {
        cout << "Периметр прямоугольника равен: Р= "<< _P << endl;
        cout << "Площадь прямоугольника равна: S= " << _S << endl;
    }

};

class Triangle: public Figure{
private:
    double _x, _y, _z, _P, _S, _p, _pz;
public:
    Triangle (double x, double y, double z, double P, double S, double p, double pz)
    {
        _x=x;
        _y=y;
        _z=z;
        _P=P;
        _S=S;
        _p=p;
        _pz=pz;
    }
    Triangle (const Triangle &c)//конструктор копирования
    {
        _x=c._x;
        _y=c._y;
        _z=c._z;
        _P=c._P;
        _S=c._S;
        _p=c._p;
        _pz=c._pz;
    }
    double CalcPerimetr() override {
        _P=(_x + _y + _z);
        return _P;
    }
    double CalcArea() override {
        _p = CalcPerimetr() / 2.0;
        _pz = _p*(_p-_x)*(_p-_y)*(_p-_z);
        _S=sqrt(_pz);
        return _S;
    }
    void Read() override {
        cout << "Введите длину первой стороны треугольника: x= ";
        cin >> _x;
        while (_x <= 0 ){
            cout << "Ошибка, введите заново:"<< endl;
            cout << "Введите первую сторону x круга: x= ";
            cin >> _x;
        }
        cout << "Введите длину второй стороны треугольника: у= ";
        cin >> _y;
        while (_y <= 0 ){
            cout << "Ошибка, введите заново:"<< endl;
            cout << "Введите вторую сторону y круга: y= ";
            cin >> _y;
        }
        cout << "Введите длину треьей стороны треуголника: z= ";
        cin >> _z;
        while (_z <= 0 )
        {
            cout << "Ошибка, введите заново:"<< endl;
            cout << "Введите третью сторону z круга: z= ";
            cin >> _z;
        }
        while ((_x+_y >_z && _x+_z > _y && _y+ _z > _x)!=1)
       {
            cout << "Ошибка, такого треугольника не существует! Введите данные заново!" << endl << endl;
            cout << "Введите длину первой стороны треугольника: x= ";
            cin >> _x;
            while (_x <= 0 ){
                cout << "Ошибка, введите заново:"<< endl;
                cout << "Введите первую сторону x круга: x= ";
                cin >> _x;
            }
            cout << "Введите длину второй стороны треугольника: у= ";
            cin >> _y;
            while (_y <= 0 ){
                cout << "Ошибка, введите заново:"<< endl;
                cout << "Введите вторую сторону y круга: y= ";
                cin >> _y;
            }
            cout << "Введите длину треьей стороны треуголника: z= ";
            cin >> _z;
            while (_z <= 0 ){
                cout << "Ошибка, введите заново:"<< endl;
                cout << "Введите третью сторону z круга: z= ";
                cin >> _z;
            }
        }
    }

    void Print() override {
        cout << "Периметр треугольника равен: Р= "<< _P << endl;
        cout << "Площадь треугольника равна: S= " << _S << endl;
    }
};

void menu(char **list, int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Введите %d, чтобы %s\n", i, list[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    char prov;
    double x=0;
    double y=0;
    double z=0;
    double h=0;
    double w=0;
    double P=0;
    double S=0;
    double p=0;
    double pz=0;
    double r=0;
    do {
        char *list[3];
        list[0] = "работать с кругом";
        list[1] = "работать с треугольником";
        list[2] = "работать с прямоугольником";
        Figure *f = new Circle(r, P, S);
        Figure *k = new Triangle(x, y, z, P, S, p, pz);
        Figure *g = new Rect(w, h, P, S);
        char l;
        menu(list,3);
        rewind(stdin);
        l = getchar();
        switch (l)
        {
            case '0':
            {
                f->Read();
                f->CalcArea();
                f->CalcPerimetr();
                f->Print();
                delete f;
                break;
            }
            case '1':
            {
                k->Read();
                k->CalcArea();
                k->CalcPerimetr();
                k->Print();
                delete k;
                break;
            }
            case '2':
            {
                g->Read();
                g->CalcArea();
                g->CalcPerimetr();
                g->Print();
                delete g;
                break;
            }
        }
        cout << "Введите 3, если хотите завершить работу программы или 4, для продолжения работы:" << endl;
        cin >>prov;
        while ((prov!='3') && (prov!='4'))
        {
            rewind(stdin);
            cout <<"Ошибка, введите заново:";
            cin >> prov;
        }

    }
    while (prov == '4');
    return 0;
}
