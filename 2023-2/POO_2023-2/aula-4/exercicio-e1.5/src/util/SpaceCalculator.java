package util;

import model.GeometricForms;
import java.util.Arrays;

public class SpaceCalculator {
    public static double calculateTotalArea(GeometricForms[] form){
        double totalArea = 0.0;
        for (GeometricForms form : form) {
            totalArea += form.calculateArea();;
        }
        return totalArea;
    }
}
