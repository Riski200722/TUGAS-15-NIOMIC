#include <iostream>
using namespace std;
int x = 10;
int y = 6;
int *a = &x;
int *b = &y;
void d()
{
    cout << "Nilai pointer dari variabel x adalah " << a << endl;
    cout << "Nilai pointer dari variabel y adalah " << b << endl;
}
int main()
{
    d();
    cout << "Hasil perkalian variabel x dan y adalah " << (*a) * (*b) << endl;
}