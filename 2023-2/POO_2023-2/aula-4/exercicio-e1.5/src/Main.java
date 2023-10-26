import model.GeometricForms;
import subclasses.Circle;
import subclasses.Rectangle;
import subclasses.Triangle;

import static util.SpaceCalculator.calculateTotalArea;

public class Main {
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
