#include <iostream>

class Product {
 public:
  virtual ~Product() {}
  virtual std::string Operation() const = 0;
};

class ConcreteProduct : public Product {
 public:
  std::string Operation() const override {
    return "{Result of the ConcreteProduct1}";
  }
};

class Creator {
 public:
  virtual ~Creator(){};
  virtual Product* FactoryMethod() const = 0;

  std::string SomeOperation() const {
    Product* product = this->FactoryMethod();
    std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
    delete product;
    return result;
  }
};

class ConcreteCreator : public Creator {
 public:
  Product* FactoryMethod() const override {
    return new ConcreteProduct();
  }
};

void ClientCode(const Creator& creator) {
  std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
            << creator.SomeOperation() << std::endl;
}

int main() {
  std::cout << "App: Launched with the ConcreteCreator.\n";
  Creator* creator = new ConcreteCreator();
  ClientCode(*creator);
  std::cout << std::endl;

  delete creator;
  return 0;
}
