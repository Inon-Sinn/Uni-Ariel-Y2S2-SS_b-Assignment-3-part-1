#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>


namespace zich{

    class Matrix
    {
    private:
        std::vector<double> array;
        int rows;
        int columns;
    public:
        Matrix();
        Matrix(std::vector<double> arr, int n, int m);
        ~Matrix() = default;


        // Plus and Minus Operators
        Matrix operator+() const ;
        Matrix operator+(const Matrix& other) const;
        Matrix& operator+=(const Matrix& other);
        Matrix operator-() const ;
        Matrix operator-(const Matrix& other) const;
        Matrix& operator-=(const Matrix& other);

        // Comparsion operators
        bool operator>(const Matrix& other) const;
        bool operator>=(const Matrix& other) const;
        bool operator<(const Matrix& other) const;
        bool operator<=(const Matrix& other) const;
        bool operator==(const Matrix& other) const;
        bool operator!=(const Matrix& other) const;

        // addition and substition by 1, prefix and postfix
        Matrix& operator++();
        Matrix& operator++(int);
        Matrix& operator--();
        Matrix& operator--(int);

        // multiplication operator
        friend Matrix operator*(double real_number,const Matrix& other);
        Matrix operator*(const Matrix& other) const;
        Matrix& operator*=(const Matrix& other);
        Matrix operator*(double real_number) const;
        Matrix& operator*=(double real_number);

        // input and output oprators
        friend std::ostream& operator<< (std::ostream& output, const Matrix& other);
        friend std::istream& operator>> (std::istream& input , Matrix& other);




    };
    
    

};