package subclasses;

import model.Draw;
import model.Figure;

public class Triangle extends Figure implements Draw {
    private double side1, side2, height, base;

//    Constructor
    public Triangle(double side1, double side2, double height, double base) {
            this.side1 = side1;
            this.side2 = side2;
            this.height = height;
            this.base = base;
        }

//        Getters and Setters
        public double getSide1() {
        return side1;
    }

    public void setSide1(double side1) {
        this.side1 = side1;
    }

    public double getSide2() {
        return side2;
    }

    public void setSide2(double side2) {
        this.side2 = side2;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getBase() {
        return base;
    }

    public void setBase(double base) {
        this.base = base;
    }

    @Override
    public double calculateArea() {
        return side1 + side2 + base;
    }

    @Override
    public double calculatePerimeter() {
        return 0;
    }

    @Override
    public String toDraw() {
        return "Drawing a Triangle";
    }
}
