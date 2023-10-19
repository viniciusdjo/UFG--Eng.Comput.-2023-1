import model.subclasses.Dog;
import model.subclasses.Frog;
import model.subclasses.Ox;
import model.superclass.Animal;

public class AnimalTest {
    public static void main(String[] args) {
        Animal[] animals = new Animal[3];

        animals[0] = new Dog();
        animals[1] = new Ox();
        animals[2] = new Frog();

        for (Animal animal : animals) {
            System.out.println(animal.sound());
        }
    }
}
