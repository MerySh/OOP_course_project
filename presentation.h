enam Color {
    red, green, blue
};

/* Slide */
class Slide {
public:
    Shape* getCurrentShape();
    int getShapesCount();
private:
    double height, width;
    Color colorBackground;
    int countOfShapes;
};

/* Shape */
class Shape {
public:
    // Functionality
    void draw() = 0;
    void paint(Color colorFill, colorOutline) = 0;
    void resize(double newHeight, double newWidth) = 0;
    void move(double diffX, double diffY) = 0;
    void rotate(double angle);
    
    // Getters and Setters
    std::string getType();

    void setShape(Shape* shape);
    Shape* getShape();
    
    double getWidth();
    double getHeight();
    double getAngle();

    void setColorFill(Color color);
    void setColorOutline(Color color);
    Color getColorFill();
    Color getColorOutline();

protected:
    // position
    double x, y;
    double height, width;
    double angle;
    
    // color
    Color colorFill;
    Color colorOutline;
};

/* Shape Container */
class ShapeContainer {
public:
    void addShape(Shape shape);
    void removeShape(Shape shape);
    void moveShape(Shape shape);

private:
    std::vector<Shape> shapes;
};

/* Rectangle Shape */
class Rectangle : public Shape {
public:
    Rectangle() {}
    std::string getType() 
    {
        return "Rectangle";
    }
private:
    
};

/* Square Shape */
class Square : public Shape {
public:
    Square() {}
    std::string getType() 
    {
        return "Square";
    }
private:
    
};


/* Circle Shape */
class Circle : public Shape {
public:
    Circle() {}
    std::string getType() 
    {
        return "Circle";
    }
private:
    
};
