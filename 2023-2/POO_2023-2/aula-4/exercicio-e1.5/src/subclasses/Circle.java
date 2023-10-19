package subclasses;

import model.GeometricForms;

public class Circle extends GeometricForms {
    double r;

    public Circle(double r) {
        this.r = r;
    }

    @Override
    public double calculateArea() {
        return Math.PI * r * r;
    }
}
