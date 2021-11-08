#include "Figure.h"

void menu(char **list, int num) {
    /**
* @brief функция меню
*
*/
    for (int i = 0; i < num; i++) {
        printf("Введите %d, чтобы %s\n", i, list[i]);
    }
}

void Circle::SetR(double r) {
    /**
 * @brief сеттер для радиуса
 *
 */
    if (r > 0) {
        _r = r;
    }
}

void Circle::SetP(double P) {
    /**
 * @brief сеттер для периметра
 *
 */
    if (P > 0) {
        _P = P;
    }
}

void Circle::SetS(double S) {
    /**
 * @brief сеттер для площади
 *
 */
    if (S > 0) {
        _S = S;
    }
}

Circle::Circle(double r, double P, double S) {
    /**
* @brief конструктор с параметрами
*
*/
    SetR(r);
    SetP(P);
    SetS(S);
}


Circle::Circle(const Circle &c) {
    /**
* @brief конструктор копирования
*
*/
    _r=c._r;
    _P=c._P;
    _S=c._S;
}


double Circle::CalcPerimetr() {
    /**
 * @brief вычисление периметра
 *
 */
    _P = (2*3.14f*_r);
    return _P;
}


double Circle::CalcArea() {
    /**
 * @brief рассчет площади
 *
 */
    _S = 3.14f*_r*_r;
    return _S;
}

void Circle::Read() {
    /**
 * @brief функция считывания
 *
 */
    cout << "Введите радиус r круга: r= ";
    cin >> _r;
    while (_r <= 0 ){
        cout << "Ощибка, введите заново:"<< endl;
        cout << "Введите радиус r круга: r= ";
        cin >> _r;
    }
}

void Circle::Print() const {
    /**
 * @brief функция вывода
 *
 */
    cout << "Периметр круга равен: Р= "<< _P << endl;
    cout << "Площадь круга равна: S= " << _S << endl;
}

Rect::Rect(double w, double h, double P, double S) {
    /**
* @brief конструктор с параметрами
*
*/
    SetW(w);
    SetH(h);
    SetP(P);
    SetS(S);
}

Rect::Rect(const Rect &c) {
    /**
* @brief конструктор копирования
*
*/
    _w=c._w;
    _h=c._h;
    _P=c._P;
    _S=c._S;
}

double Rect::CalcPerimetr() {
    /**
* @brief рассчет периметра
*
*/
    _P = 2*(_h+_w);
    return _P;
}

double Rect::CalcArea() {
    /**
* @brief рассчет площади
*
*/
    _S=_w*_h;
    return _S;
}

void Rect::Read() {
    /**
* @brief функция считывания
*
*/
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

void Rect::Print() const {
    /**
* @brief функция вывода
*
*/
    cout << "Периметр прямоугольника равен: Р= "<< _P << endl;
    cout << "Площадь прямоугольника равна: S= " << _S << endl;
}

Triangle::Triangle(double x, double y, double z, double P, double S, double p, double pz) {
    /**
* @brief конструктор с параметрами
*
*/
    SetX(x);
    SetY(y);
    SetZ(z);
    SetP(P);
    SetS(S);
    Set_P(p);
    Set_PZ(pz);
}

Triangle::Triangle(const Triangle &c) {
    /**
* @brief конструктор копирования
*
*/
    _x=c._x;
    _y=c._y;
    _z=c._z;
    _P=c._P;
    _S=c._S;
    _p=c._p;
    _pz=c._pz;
}

double Triangle::CalcPerimetr() {
    /**
* @brief рассчет периметра
*
*/
    _P=(_x + _y + _z);
    return _P;
}

double Triangle::CalcArea() {
    /**
* @brief рассчет площади
*
*/
    _p = CalcPerimetr() / 2.0;
    _pz = _p*(_p-_x)*(_p-_y)*(_p-_z);
    _S=sqrt(_pz);
    return _S;
}

void Triangle::Read() {
    /**
* @brief функция считывания
*
*/
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
    while (_z <= 0) {
        cout << "Ошибка, введите заново:"<< endl;
        cout << "Введите третью сторону z круга: z= ";
        cin >> _z;
    }
    while ((_x+_y >_z && _x+_z > _y && _y+ _z > _x)!=1) {
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

void Triangle::Print() const {
    /**
* @brief функция вывода
*
*/
    cout << "Периметр треугольника равен: Р= "<< _P << endl;
    cout << "Площадь треугольника равна: S= " << _S << endl;
}

void Rect::SetW(double w) {
    /**
 * @brief сеттер ширины
 *
 */

    if (w > 0) {
        _w = w;
    }
}

void Rect::SetH(double h) {
    /**
 * @brief сеттер высоты
 *
 */
    if (h > 0) {
        _h = h;
    }
}

void Rect::SetP(double P) {
    /**
 * @brief сеттер периметра
 *
 */
    if (P > 0) {
        _P = P;
    }
}

void Rect::SetS(double S) {
    /**
 * @brief сеттер площади
 *
 */
    if (S > 0) {
        _S = S;
    }
}

void Triangle::SetX(double x) {
    /**
* @brief сеттер для "x"
*
*/
    _x = x;
}

void Triangle::SetY(double y) {
    /**
* @brief сеттер для "y"
*
*/
    _y = y;
}

void Triangle::SetZ(double z) {
    /**
* @brief сеттер для "z"
*
*/
    _z = z;
}

void Triangle::SetP(double P) {
    /**
* @brief сеттер для "P"
*
*/
    if (P > 0) {
        _P = P;
    }
}

void Triangle::SetS(double S) {
    /**
* @brief сеттер для "S"
*
*/
    if (S > 0) {
        _S = S;
    }
}

void Triangle::Set_P(double _Pval) {
    /**
* @brief сеттер для "_p"
*
*/
    if (_P > 0) {
        _p = _Pval;
    }
}

void Triangle::Set_PZ(double _PZval) {
    /**
* @brief сеттер для "_pz"
*
*/
    if (_PZval > 0) {
        _pz = _PZval;
    }
}
