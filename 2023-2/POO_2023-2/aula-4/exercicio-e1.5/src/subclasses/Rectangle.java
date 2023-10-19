package subclasses;

import model.GeometricForms;

public class Rectangle extends GeometricForms {
    double width;
    double height;

    @Override
    public double calculateArea() {
        return width * height;
    }
}
