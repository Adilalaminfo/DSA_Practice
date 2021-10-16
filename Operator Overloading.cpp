#include <iostream>

using namespace std;
class Complex{
    private:
    float r,i;
    public:
    Complex(float r,float i){
        this->r=r;
        this->i=i;
    }
    
    Complex(){
}
void dispalyData(){
    cout<<"real part ="<<r<<endl;
    cout<<"_Imaginary part ="<<i<<endl;
}

Complex operator + (Complex c)
{
    return Complex(r+c.r, i+c.i);
}
};
int main()
 
Complex a(2,3);
Complex b(5,9);
Complex c=a+b;
c.dispalyData();
    return 0;
}