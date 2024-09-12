class Animal {
    String name;

    Animal(String name) {
        this.name = name;
    }

    void eat() {
        System.out.println(name + " is eating.");
    }

    void sleep() {
        System.out.println(name + " is sleeping.");
    }
}

// Child class (Subclass) inheriting from Animal
class Dog extends Animal {
    Dog(String name) {
        super(name); // Call the constructor of the superclass (Animal)
    }

    // Additional method specific to Dog
    void bark() {
        System.out.println(name + " is barking.");
    }
}

// Another child class (Subclass) inheriting from Animal
class Cat extends Animal {
    Cat(String name) {
        super(name); // Call the constructor of the superclass (Animal)
    }

    // Additional method specific to Cat
    void meow() {
        System.out.println(name + " is meowing.");
    }
}

public class InheritanceExample {
    public static void main(String[] args) {
        // Creating an instance of the Dog class
        Dog myDog = new Dog("Buddy");
        
        // Using inherited methods from Animal class
        myDog.eat();
        myDog.sleep();
        
        // Using the specific method of Dog class
        myDog.bark();

        // Creating an instance of the Cat class
        Cat myCat = new Cat("Whiskers");

        // Using inherited methods from Animal class
        myCat.eat();
        myCat.sleep();

        // Using the specific method of Cat class
        myCat.meow();
    }
}