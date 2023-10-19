package model.subclasses;

import model.superclass.Animal;

public class Frog extends Animal {
    @Override
    public String sound() {
        return "frog croak";
    }
}
