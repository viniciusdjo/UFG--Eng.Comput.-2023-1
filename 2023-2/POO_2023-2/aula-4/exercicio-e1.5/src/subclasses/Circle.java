package subclasses;

import model.GeometricForms;

public class Circle extends GeometricForms {
    double r;

    @Override
    public double calculateArea() {
        return Math.PI * r * r;
    }
}
