#include <iostream>
#include "Matrix.hpp"
#include <cstring>
using namespace std;

namespace zich {
//    Matrix(vector<double> v, int ro, int co){
//        vec=v;
//        vector<vector<int> > matrix(ro);
//        for ( int i = 0 ; i < ro ; i++ ) {
//            matrix[i].resize(co);
//        }
//        int curr=0;
//        for(int i = 0; i<ro; i++)
//        {
//            for(int j = 0; j<co; j++)
//            {
//
//                if(i==0){
//                    curr==j;
//                }
//                else{
//                    curr= i*co + j;
//                }
//                matrix[i][j]= vec[curr];
//    }
    Matrix Matrix::operator + (Matrix const &obj) {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        return a;
    }
    Matrix& Matrix::operator += (Matrix const &obj) {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        Matrix  b = a;
        return *this;
    }
    Matrix Matrix::operator + () {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        return a;
    }

    //    //the '-' operators
    Matrix Matrix::operator - (Matrix const &obj) {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        return a;
    }
    Matrix Matrix::operator - () {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        return a;
    }
    Matrix& Matrix::operator -= (Matrix const &obj) {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        Matrix & b = a;
        return *this;
    }
    //the equals operators
    bool Matrix::operator == (Matrix const &obj) {
        return false;
    }
    bool Matrix::operator > (Matrix const &obj) {
        return false;

    }
    bool Matrix::operator >= (Matrix const &obj) {
        return false;

    }
    bool Matrix::operator != (Matrix const &obj) {
        return false;

    }
    bool Matrix::operator <= (Matrix const &obj) {
        return false;

    }
    bool Matrix::operator < (Matrix const &obj) {
        return false;

    }
    //the increment/decrement functions
    Matrix& Matrix::operator ++ () {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        Matrix & b = a;
        return *this;
    }
    Matrix& Matrix::operator -- () {
        vector<double> ar = {1.0};
        Matrix a(ar, 1, 1);
        Matrix &b = a;
        return *this;
    }
    //multiplying with scalar
    Matrix Matrix::operator * (double scalar) {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        return a;
    }
    Matrix& Matrix::operator *= (double scalar) {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        Matrix & b = a;
        return *this;
    }
    // matrix muliplying
    Matrix Matrix::operator * (Matrix const &obj) {
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        return a;
    }

    //operators for istream and ostream
    std::ostream& operator<< (std::ostream& output, const Matrix& c){
        return output;
}
    std::istream& operator>> (std::istream& input , Matrix& c){
        return input;
}
    Matrix operator * (const double scalar, Matrix &m){
        vector<double> ar={1.0};
        Matrix a(ar,1,1);
        return a;
    }


}
