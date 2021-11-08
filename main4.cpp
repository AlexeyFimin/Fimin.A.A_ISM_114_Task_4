#include "Figure.h"

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
