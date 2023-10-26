package subclasses;

import model.Draw;
import model.Figure;

public class Circle extends Figure implements Draw {
    private double r;
//Constructor
    public Circle(double r) {
        this.r = r;
    }

//    Getters and Setters
    public double getR() {
        return r;
    }

    public void setR(double r) {
        this.r = r;
    }

    @Override
    public double calculateArea() {
        return getR() * Math.PI * getR();
    }

    @Override
    public double calculatePerimeter() {
        return 2 * Math.PI * getR();
    }

    @Override
    public String toDraw() {
        return "Drawing a Circle";
    }
}
