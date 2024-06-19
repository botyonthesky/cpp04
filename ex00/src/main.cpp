/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:57:33 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/19 07:40:41 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

void subjectTest()
{
	std::cout << "[ SUBJECT TEST ]" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}
void wrongSubjectTest()
{
	std::cout << std::endl << "[ WRONG SUBJECT TEST ]" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	meta->makeSound();
	delete meta;
	delete i;
}
void testDog()
{
	std::cout << std::endl << "[ DOG TEST ]" << std::endl;
	Dog stack_dog;
	Dog *heap_dog = new Dog();

	std::cout << "stack_dog getType: " << stack_dog.getType() << std::endl;
	std::cout << "stack_dog getType: ";
	stack_dog.makeSound();

	std::cout << "heap_dog getType: " << heap_dog->getType() << std::endl;
	std::cout << "heap_dog getType: ";
	heap_dog->makeSound();
	delete heap_dog;
}

void testCat()
{
	std::cout << std::endl << "[ CAT TEST ]" << std::endl;
	Cat stack_cat;
	Cat *heap_cat = new Cat();

	std::cout << "stack_cat getType: " << stack_cat.getType() << std::endl;
	std::cout << "stack_cat getType: ";
	stack_cat.makeSound();

	std::cout << "heap_cat getType: " << heap_cat->getType() << std::endl;
	std::cout << "heap_cat getType: ";
	heap_cat->makeSound();
	delete heap_cat;
}
void testAnimal()
{
	std::cout << std::endl << "[ ANIMAL TEST ]" << std::endl;
	Animal stack_animal;
	Animal *heap_animal = new Animal();

	std::cout << "stack_animal getType: " << stack_animal.getType() << std::endl;
	std::cout << "stack_animal getType: ";
	stack_animal.makeSound();

	std::cout << "heap_animal getType: " << heap_animal->getType() << std::endl;
	std::cout << "heap_animal getType: ";
	heap_animal->makeSound();
	delete heap_animal;
}

int main()
{    
    subjectTest();
	wrongSubjectTest();
	testDog();
	testCat();
	testAnimal();

    return (0);
}