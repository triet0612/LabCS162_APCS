#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Term{
    int coeff;
    int monomial;
};

struct Poly{
    int no_term;
    vector<Term> Term_list;
};

vector<Poly> ReadPoly();

void WritePoly(vector<Poly> _Poly_vector);
