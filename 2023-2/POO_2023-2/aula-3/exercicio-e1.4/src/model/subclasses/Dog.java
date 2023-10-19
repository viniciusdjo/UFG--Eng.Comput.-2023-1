package model.subclasses;

import model.superclass.Animal;

public class Dog extends Animal {
    @Override
    public String sound() {
        return "Dog barks";
    }
}
