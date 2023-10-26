package subclasses;

import model.Draw;

public class Rectangle extends Square implements Draw {
    private double height;
//    Constructor
    public Rectangle(double side, double height) {
        super(side);
        this.height = height;
    }
//    Getters and Setters
    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    @Override
    public double calculateArea() {
        return getHeight() * getSide();
    }

    @Override
    public double calculatePerimeter() {
        return (2*getHeight()) + (2*getSide());
    }
    @Override
    public String toDraw() {
        return "Drawing a rectangle";
    }
}
