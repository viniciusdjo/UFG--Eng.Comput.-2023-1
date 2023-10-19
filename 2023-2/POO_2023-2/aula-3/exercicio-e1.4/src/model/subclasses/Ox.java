package model.subclasses;

import model.superclass.Animal;

public class Ox extends Animal {
    @Override
    public String sound() {
        return "Ox moo";
    }
}
