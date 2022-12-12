#include <iostream>

class Triangle {
private:
    double m_a = 0, m_b = 0, m_c = 0, sqrtrgl = 0;
public:
    Triangle(double a, double b, double c)
    {
        m_a = a;
        m_b = b;
        m_c = c;
        sqrtrgl = 0;
    }

    bool positive(int a, int b, int c) {
        if ((a > 0 and b > 0 and c > 0) and ((a + b > c) or (a + c > b) or (b + c < a))){
            std::cout << "Cool" << std::endl;
            return true;
        }
        else{
            std::cout << "wrong side length" << std::endl;
            return false; 
        }
    }

    void square(double a, double b, double c) {
        double p = (a + b + c) / 2;
        if (positive(a, b, c) == true) {
            sqrtrgl = sqrt(p * (p - a) * (p - b) * (p - c));
        }
    }
    
    int SQ()
    {
        return sqrtrgl;
    }

    ~Triangle(){}
};

int main()
{
    double m, n, l;
    std::cout << "Enter the sides of the triangle" << std::endl;
    std::cin >> m >> n >> l;
    Triangle triangle1(m, n, l);
    triangle1.square(m, n, l);
    std::cout <<"square = " << triangle1.SQ() << std::endl;
}