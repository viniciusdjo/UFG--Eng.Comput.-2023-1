package subclasses;

import model.GeometricForms;

public class Triangle extends GeometricForms {
    double base;
    double height;

    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    @Override
    public double calculateArea() {
        return (base * height)/2;
    }
}
