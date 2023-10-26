import model.Figure;
import subclasses.Circle;
import subclasses.Rectangle;
import subclasses.Square;
import subclasses.Triangle;

public class Main {
    public static void main(String[] args) {

        Figure square = new Square(4);
        Figure rectangle = new Rectangle(2, 2);
        Figure triangle = new Triangle(1,2,3,4);
        Figure circle = new Circle(1);

//        Area
        double squareArea = square.calculateArea();
        double rectangleArea = rectangle.calculateArea();
        double triangleArea = triangle.calculateArea();
        double circleArea = circle.calculateArea();

//        Perimeter
        double squarePerimeter = square.calculatePerimeter();
        double rectanglePerimeter = rectangle.calculatePerimeter();
        double trianglePerimeter = triangle.calculatePerimeter();
        double circlePerimeter = circle.calculatePerimeter();

//        List
        Figure[] figures = new Figure[]{square, rectangle, triangle, circle};

//        Methods
        //Areas
        System.out.println("Areas: \n");
        System.out.println("Square: " + figures[0].calculateArea());
        System.out.println("Rectangle: " + figures[1].calculateArea());
        System.out.println("Triangle: " + figures[2].calculateArea());
        System.out.println("Circle: " + figures[3].calculateArea());

        System.out.println("\n");

        //Perimeters
        System.out.println("Perimeters:\n");
        System.out.println("Square: " + figures[0].calculatePerimeter());
        System.out.println("Rectangle: " + figures[1].calculatePerimeter());
        System.out.println("Triangle: " + figures[2].calculatePerimeter());
        System.out.println("Circle: " + figures[3].calculatePerimeter());
    }
}
