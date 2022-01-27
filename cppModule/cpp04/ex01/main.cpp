#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(){
	Animal *animal[10];
	Brain *brain;


	for (int i = 0; i < 10; i++){
		if (i > 5){
			animal[i] = new Dog();
		}
		else{
			animal[i] = new Cat();
		}
		std::cout << animal[i]->getType() << std::endl;
	}
	brain = animal[7]->getBrain();
	brain->arry[0] = "I'm hungry";
	brain->arry[1] = "That's a strange idea I'm having";
	brain->arry[2] = "Ball!!!!!";
	brain->arry[3] = "Squirrel!!!!!";

	std::cout << animal[7]->getBrain()->arry[0] << std::endl;

 	*(animal[5]) = *(animal[7]);
	std::cout << animal[5]->getBrain()->arry[2] << std::endl;
	

	for (int i = 0; i < 10; i++){
		animal[i]->getBrain()->arry[0] = "Hi CPP";
		animal[i]->getBrain()->arry[1] = "Hi C";
		animal[i]->getBrain()->arry[2] = "Hi JAVA";
		std::cout << animal[i]->getBrain()->arry[0] << std::endl;
		std::cout << animal[i]->getBrain()->arry[1] << std::endl;
		std::cout << animal[i]->getBrain()->arry[2] << std::endl;
	}

	for (int i = 0; i < 10; i++){
		delete animal[i];
	}
}