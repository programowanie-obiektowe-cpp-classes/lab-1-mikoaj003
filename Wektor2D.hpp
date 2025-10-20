class Wektor2D
{
public:
    // zakladam ze podajemy to w kartezjanskich
    Wektor2D(double x = 0, double y = 0)
    {
        x_coord = x;
        y_coord = y;
    };

    void   setX(double x) { x_coord = x; };
    void   setY(double y) { y_coord = y; };
    double getX() { return x_coord; };
    double getY() { return y_coord; };

    // zakladamy ze wynik jest skalarem <=> da sie je mnozyc 
    double operator*(const Wektor2D& other)
    {
        return (x_coord * other.x_coord + y_coord * other.y_coord);
    };
    
    //zakladamy takie same rozmiary 
    Wektor2D operator+(Wektor2D& other)
    {
        return Wektor2D(x_coord + other.x_coord, y_coord + other.y_coord);
    }


	double x_coord;
    double y_coord;
};
