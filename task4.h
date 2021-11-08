#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

using namespace std;

class Figure{
public:
    virtual double CalcPerimetr() = 0;
    /**
 * @brief чисто виртуальная функция взятие периметра
 *
 */
    virtual double CalcArea() = 0;
    /**
 * @brief чисто виртуальная функция взятие площади
 *
 */
    virtual void Print() const = 0;
    /**
 * @brief чисто виртуальная функция вывода
 *
 */
    virtual void Read() = 0;
    /**
 * @brief чисто виртуальная функция считывания фигуры
 *
 */
    virtual ~Figure() = default;
    /**
 * @brief виртуальный дефолтный деструктор
 *
 */
};


class Circle: public Figure {
private:
    double _r, _P, _S;
public:
    Circle(double r, double P, double S);
    /**
 * @brief конструктор с параметрами
 *
 */

    void SetR(double r);
    /**
 * @brief сеттер для радиуса
 *
 */

    void SetP(double P);
    /**
 * @brief сеттер для периметра
 *
 */

    void SetS(double S);
    /**
 * @brief сеттер для площади
 *
 */

    Circle (const Circle &c);
    /**
 * @brief конструктор копирования
 *
 */


    double CalcPerimetr() override;
    /**
 * @brief вычисление периметра
 *
 */

    double CalcArea() override;
    /**
 * @brief рассчет площади
 *
 */

    void Read() override;
    /**
 * @brief функция считывания
 *
 */

    void Print() const override;
    /**
 * @brief функция вывода
 *
 */

    ~Circle() override = default;
    /**
 * @brief дефолтный деструктор
 *
 */
};


class Rect: public Figure{
private:
    double _w, _h, _P, _S;
public:
    Rect(double w, double h, double P, double S);
        /**
 * @brief конструктор с параметрами
 *
 */

    void SetW(double w);
    /**
 * @brief сеттер ширины
 *
 */

    void SetH(double h);
    /**
 * @brief сеттер высоты
 *
 */

    void SetP(double P);
    /**
 * @brief сеттер периметра
 *
 */

    void SetS(double S);
    /**
 * @brief сеттер площади
 *
 */

    Rect(const Rect &c);
    /**
* @brief конструктор копирования
*
*/

    double CalcPerimetr() override;
    /**
 * @brief рассчет периметра
 *
 */

    double CalcArea() override;
    /**
 * @brief рассчет площади
 *
 */

    void Read() override;
    /**
 * @brief функция считывания
 *
 */

    void Print() const override;
    /**
 * @brief функция вывода
 *
 */

    ~Rect() override = default;
    /**
 * @brief дефолтный деструктор
 *
 */
};


class Triangle: public Figure {
private:
    double _x, _y, _z, _P, _S, _p, _pz;
public:
    Triangle (double x, double y, double z, double P, double S, double p, double pz);
    /**
 * @brief конструктор с параметрами
 *
 */

    void SetX(double x);
    /**
* @brief сеттер для "x"
*
*/

    void SetY(double y);
    /**
* @brief сеттер для "y"
*
*/

    void SetZ(double z);
    /**
* @brief сеттер для "z"
*
*/

    void SetP(double P);
    /**
* @brief сеттер для "P"
*
*/

    void SetS(double S);
    /**
* @brief сеттер для "S"
*
*/

    void Set_P(double _Pval);
    /**
* @brief сеттер для "_p"
*
*/

    void Set_PZ(double _PZval);
    /**
* @brief сеттер для "_pz"
*
*/

    Triangle(const Triangle &c);
    /**
 * @brief конструктор копирования
 *
 */

    double CalcPerimetr() override;
    /**
 * @brief рассчет периметра
 *
 */

    double CalcArea() override;
    /**
 * @brief рассчет площади
 *
 */

    void Read() override;
    /**
 * @brief функция считывания
 *
 */

    void Print() const override;
    /**
 * @brief функция вывода
 *
 */

    ~Triangle() override = default;
    /**
 * @brief дефолтный деструктор
 *
 */
};

void menu(char **list, int num);
