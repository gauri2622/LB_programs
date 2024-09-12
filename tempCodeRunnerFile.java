class Animal {
    void makeSound() {
        System.out.println("Some generic sound");
    }
}

class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Woof! Woof!");
    }

    // Additional method specific to Dog
    void wagTail() {
        System.out.println("Tail wagging");
    }
}

class Cat extends Animal {
    @Override
    void makeSound() {
        System.out.println("Meow!");
    }

    // Additional method specific to Cat
    void scratch() {
        System.out.println("Scratching...");
    }
}

public class PolymorphismExample {
    public static void main(String[] args) {
        // Polymorphism with method overriding
        Animal myDog = new Dog();
        Animal myCat = new Cat();

        myDog.makeSound();  // Calls Dog's makeSound() method
        myCat.makeSound();  // Calls Cat's makeSound() method

        // Cannot call wagTail() or scratch() because the reference type is Animal

        // Polymorphism with method overloading
        PolymorphismExample example = new PolymorphismExample();
        example.displayInfo("Dog Info:", myDog);
        example.displayInfo("Cat Info:", myCat);
    }

    // Method overloading
    void displayInfo(String type, Animal animal) {
        System.out.println(type);
        animal.makeSound();  // Calls the appropriate makeSound() method based on the actual object type

        // Check the type and call additional methods if needed
        if (animal instanceof Dog) {
            ((Dog) animal).wagTail();
        } else if (animal instanceof Cat) {
            ((Cat) animal).scratch();
        }
    }
}
