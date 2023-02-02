
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
public:
    int l;
    int b;
    int h;
    Box(){l = 0; b = 0; h = 0;}
    Box(int x, int y, int z){l = x; b = y; h = z;}
    Box(const Box &p){l = p.l; b = p.b; h = p.h;}
    int getLength(){return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}
    long long CalculateVolume(){return ((long long)l * b * h);}
    bool operator<(Box& b){
        if((*this).l < b.l)return true;
        else if((*this).b < b.b && (*this).l == b.l)return true;
        else if((*this).h < b.h && (*this).b == b.b && (*this).l == b.l)return true;
        else return false;
    }
    friend ostream& operator<<(ostream& out, Box& B);
};
ostream& operator<<(ostream& out, Box& B){
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
