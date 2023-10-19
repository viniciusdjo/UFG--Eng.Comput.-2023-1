package util;

import model.GeometricForms;
import subclasses.Circle;
import subclasses.Rectangle;
import subclasses.Triangle;

import java.util.Arrays;

public class SpaceCalculator {
    public static double calculateTotalArea(GeometricForms[] form){
        double totalArea = 0.0;
        for (GeometricForms forms : form) {
            totalArea += forms.calculateArea();;
        }
        return totalArea;
    }

    public static void main(String[] args) {
        GeometricForms[] forms = new GeometricForms[3];

        GeometricForms Retangulo = new Rectangle(10, 15);
        GeometricForms Circulo = new Circle(5);
        GeometricForms Triangulo = new Triangle(10, 5);

        forms[0] = Retangulo;
        forms [1] = Circulo;
        forms [2] = Triangulo;

        System.out.println(calculateTotalArea(forms));
    }
}
