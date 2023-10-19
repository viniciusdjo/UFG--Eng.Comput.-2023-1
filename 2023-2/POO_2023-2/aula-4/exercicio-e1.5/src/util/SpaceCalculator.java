package util;

import model.GeometricForms;

public class SpaceCalculator {
    public static double calculateTotalArea(GeometricForms[] form){
        double totalArea = 0.0;
        for (GeometricForms forms : form) {
            totalArea += forms.calculateArea();
        }
        return totalArea;
    }
}
