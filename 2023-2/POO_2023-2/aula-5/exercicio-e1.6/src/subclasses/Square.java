package subclasses;

import model.Draw;
import model.Figure;

public class Square extends Figure implements Draw {
    private double side;

//    Constructor

    public Square(double side) {
        this.side = side;
    }

//Getters and Setters
    public double getSide() {
        return side;
    }
    public void setSide(double side) {
        this.side = side;
    }
    @Override
    public double calculateArea() {
        return side*side;
    }
    @Override
    public double calculatePerimeter() {
        return 4 * side;
    }
    @Override
    public String toDraw() {
        return "Drawing a Square";
    }
}
