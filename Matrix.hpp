#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

namespace zich{

    class Matrix
    {
    private:
        /* data */
    public:
        Matrix(/* args */);
        ~Matrix();

        Matrix(vector<double> array, unsigned int n, unsigned int m);

        // Plus Operator
        Matrix operator+() const ;




    };
    
    

};