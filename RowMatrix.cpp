//
// Created by m3taprog on 08/08/18.
//

#include "RowMatrix.h"

template <class T>
RowMatrix<T>::RowMatrix(int r, int c, std::string n) : MatrixTemplate<T>(1,c,n){
    this->setMatrixName("Row Matrix");
    //std::cout <<"\t" << this->getMatrixName() << std::endl;
}

template <class T>
RowMatrix<T>::~RowMatrix() {

}