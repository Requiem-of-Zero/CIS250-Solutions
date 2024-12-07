#include <stdexcept>
#include <iostream>
#include <memory>
using namespace std;

class Pizza {
public:
    virtual double getPrice() const = 0;
    virtual ~Pizza() { cout << "Destructor called" << endl; }
};

class PepperoniOlivePizza : public Pizza {
public:
    virtual double getPrice() const { return 8.50; };
    virtual ~PepperoniOlivePizza() {};
};

class DeluxeChickenPizza : public Pizza {
public:
    virtual double getPrice() const { return 10.50; };
    virtual ~DeluxeChickenPizza() {};
};

class HawaiianPizza : public Pizza {
public:
    virtual double getPrice() const { return 11.50; };
    virtual ~HawaiianPizza() {};
};

class PizzaFactory {
public:
    enum PizzaType {
        PepperoniOlive,
        DeluxeChicken,
        Hawaiian
    };

    static unique_ptr<Pizza> createPizza(PizzaType pizzaType) {
        switch (pizzaType) {
        case PepperoniOlive:  return make_unique<PepperoniOlivePizza>();
        case DeluxeChicken:  return make_unique<DeluxeChickenPizza>();
        case Hawaiian:  return make_unique<HawaiianPizza>();
        default: throw "invalid pizza type.";
        }
      
    }
  
    static const char* getPizzaName(PizzaType pizzaType){
      switch(pizzaType){
        case PepperoniOlive: return "Pepperoni Olive Pizza";
        case DeluxeChicken: return "Deluxe Chicken Pizza";
        case Hawaiian: return "Hawaiian Pizza";
        default: return "Unknown Pizza";
      }
    }
};

// Instantiate all available pizzas and print their prices, and names
void pizza_information(PizzaFactory::PizzaType pizzatype)
{
    unique_ptr<Pizza> pizza = PizzaFactory::createPizza(pizzatype);
    cout << "Price of " << PizzaFactory::getPizzaName(pizzatype) << " is " << pizza->getPrice() << std::endl;
    // Currently this prints the enum #, and price
    // Fix this code so it prints the pizza name, not the enum #,  and prints the price
}

int main()
{
    pizza_information(PizzaFactory::PepperoniOlive);
    pizza_information(PizzaFactory::DeluxeChicken);
    pizza_information(PizzaFactory::Hawaiian);
}
