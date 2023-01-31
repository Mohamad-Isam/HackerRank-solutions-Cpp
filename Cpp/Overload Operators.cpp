

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator + (Complex& x1, Complex& x2){
    Complex C;
    C.a = x1.a + x2.a;
    C.b = x1.b + x2.b;
    return C;
}
ostream& operator << (ostream& output, Complex& obj){
    output << obj.a << "+i" << obj.b << endl;
    return output;
}
