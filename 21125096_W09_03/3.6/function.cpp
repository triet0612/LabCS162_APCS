#include "header.h"

vector<Poly> ReadPoly(){
    vector<Poly> Polynomial_list;
    ifstream fin("POLY.bin", ios::binary);
    int n;
    fin.read((char*)&n, sizeof(int));
    for (int i = 0; i < n; i++){
        Poly P;
        fin.read((char*)&P.no_term, sizeof(int)/2);
        for (int j = 0; j < P.no_term; j++){
            Term t;
            fin.read((char*)&t, sizeof(Term));
            P.Term_list.push_back(t);
        }
        Polynomial_list.push_back(P);
    }
    fin.close();
    return Polynomial_list;
}

void WritePoly(vector<Poly> _Poly_vector) {
    Poly p = _Poly_vector[0];
    for (auto i : _Poly_vector){
        if (p.Term_list.back().monomial < i.Term_list.back().monomial){
            p = i;
        }
    }
    ofstream fout("POLY_LARGEST.bin", ios::binary);
    fout.write((char*)&p.no_term, sizeof(int)/2);
    fout.write(reinterpret_cast<char*>(&p.Term_list), p.Term_list.size() * sizeof(p.Term_list));
    fout.close();
}