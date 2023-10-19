package subclasses;

import model.GeometricForms;

public class Triangle extends GeometricForms {
    double base;
    double height;
    @Override
    public double calculateArea() {
        return (base * height)/2;
    }
}
