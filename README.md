# cpp_module_04
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_04/issues/1)

# Exercise 00: Polymorphism 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_04.git
cd cpp_module_04/ex00/
make
./polymorphism
```
## Summary
- Turn-in directory : ex00/
- Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
- Forbidden functions : None
## Detail
- 모든 연습에서 할 수 있는 가장 완벽한 테스트를 작성해야 한다.
- 각 클래스의 생성자와 소멸자들은 각기 다른 메시지를 출력해야만 한다. 클래스들끼리 서로 다른 메시지를 출력하도록 해라.
- 간단한 base class인 Animal class 를 구현하자. 이건 하나의 protected attribute를 가지고 있다:
	- std::string type;
- 다음을 추가로 구현하자:
	- Animal을 상속하는 Dog
	- Animal을 상속하는 Cat
- 이 두 파생 class 는 그들의 이름에 의존적인 type field를 만들어야 한다. 예를 들어 Dog의 type 은 "Dog"로 초기화 되어야 하고, Cat 은 "Cat"으로 초기화 되어야 한다. Animal class는 비워두거나 원하는 문자열로 초기화 해도 된다.
- 모든 동물은 다음 멤버 함수를 사용할 수 있어야 한다:
	- makeSound();
- 적절한 울음소리를 출력한다.(고양이는 bark라고 짖지 않는다)
- 다음 코드를 실행하여 Animal의 것이 아닌, 개와 고양이 class의 특정 소리를 출력해야 한다.
```
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	...
	return 0;
}
```
- 이것이 어떻게 작동하는지 이해하기 위하여, WrongCat class 를 WrongAnimal로부터 상속 받아 구현하라. 만약 위의 코드에서 Wrong으로 변경한다면 WrongCat은 WrongAnimal의 울음소리로 출력되어야 한다.
- 구현한 뒤 적절한 테스트를 넣어줘!

<bt> </bt>

# Exercise 01: I don’t want to set the world on fire
## Usage
```
git clone https://github.com/brixxt27/cpp_module_04.git
cd cpp_module_04/ex01/
make
./i_do_not_want_to_set_the_world_on_fire
```
## Summary
- Turn-in directory : ex01/
- Files to turn in : Files from previous exercise + *.cpp, *.{h, hpp}
- Forbidden functions : None
## Detail
- 각 클래스의 생성자와 소멸자들은 특정 메시지를 출력해야 한다.
- Brain class를 구현해라. 이건 std::string ideas[100] 배열을 가지고 있다.
- 이번엔 Dog와 Cat이 private Brain* 멤버 변수를 가지고 있다.
- 생성자에서 Dog, Cat 은 new Brain() 을 사용하여 그들의 뇌를 생성한다.
- 소멸자에서 Dog, Cat 은 delete 를 사용하여 그들의 뇌를 없앤다.
- main 함수에서는 Animal object 의 배열을 생성하고 채워 넣어라. 배열의 절반은 Dog object, 그리고 다른 절반은 Cat object로 채워 넣어라. 프로그램 실행의 끝에서 이 배열을 반복하여 순회하고, 모든 Animal을 삭제해야 한다. Animal 에서 개와 고양이들을 직접 삭제 해야 한다. 올바른 소멸자는 예상되는 순서대로 호출될 것이다.
- 메모리 leaks는 절대 있어서는 안 된다!
- Dog, Cat 은 shallow copy 가 되어서는 안 되고, deep copy 가 되어야 한다. copy에서 깊은 복사가 일어나는지 테스트 해야 한다.
```
int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	...
	return 0;
}
```
- 위 보다 더 많은 테스트를 포함하여 제출해라.
<bt> </bt>

# Exercise 02: Abstract class 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_04.git
cd cpp_module_02/ex02
make
./abstract_class
```
## Summary
- Turn-in directory : ex02/
- Files to turn in : Files from previous exercise + *.cpp, *.{h, hpp}
- Forbidden functions : None
## Detail
- 결국 Animal 개체를 만드는 것은 의미가 없습니다. 사실, 그들은 소리가 나지 않는다. 가능한 실수를 방지하기 위해 기본 Animal class 를 인스턴스화 할 수 없어야 한다. 아무도 Animal을 인스턴스화할 수 없도록 Animal 클래스를 수정한다. 나머지는 모든 것이 이전처럼 작동해야 한다. 만약 원하는 경우 Animal에 접두사 'A'를 붙여 class 이름을 업데이트 할 수 있다.
<bt> </bt>

# Exercise 03: Interface & recap 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_04.git
cd cpp_module_03/ex03
make
./interface_and_recap
```
## Summary
- Turn-in directory : ex03/
- Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
- Forbidden functions : None
## Detail
- interface는 C++98에는 존재하지 않는다. 그러나 순수 추상 클래스는 흔히 인터페이스로 불린다. 결론적으로 마지막 연습에서, 이번 모듈을 정복하기 위해 인터페이스 구현을 시도해보자!
- 다음 따라오는 AMateria 클래스의 정의를 완성하고, 필요한 멤버 함수를 구현하자.
```
class AMateria
{
protected:
	[...]

public:
	AMateria(std::string const & type);
	[...]

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
```
- Meteria 의 구체적인 클래스인 Ice와 Cure를 구현해라. 그들의 type을 그들의 이름을 lower case로 변환한 값으로 채워넣어라. 물론 그들의 멤버 함수 clone() 은 값은 타입의 새로운 인스턴스를 반환할 것이다. 만약 Ice Materia 를 clone 하면 새로운 Ice Meteria를 가질 것이다.
- (ICharacter&) 멤버 함수는 출력할 것이다:
	- Ice: "* shoots an ice bolt at {name} *"
	- Cure: "* heals {name}’s wounds *"
- {name}은 인자로 들어오는 캐릭터의 이름이다. 괄호를 출력하지 마라!
- Meteria 를 다른 곳으로 할당하는 동안 타입을 복사하는 것은 옳지 않다.
- 다음 따라오는 인터페이스를 구현하는 구체적인 class Character를 작성해라.
```
class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};
```
- Character 4개의 슬롯을 가지고 있고, 이는 최대 4개의 Materias를 가질 수 있다는 것을 의미한다. 생성 시 인벤토리(슬롯)은 비어 있다. 그들은 그들이 발견한 비어 있는 처음 슬롯에 Materias를 장착한다. 이것은 0 부터 3까지의 순서대로 채워넣는다는 의미이다. 가득 찬 인벤토리에 Materia 를 채우려고 시도하는 경우나, 또는 존재하지 않은 Materia를 사용/해제하려 하는 것은, 아무 것도 일어나지 않는다.(그러나 여전히 버그는 금지되어 있다.) unequip() 멤버 함수는 Materia를 삭제하면 안 된다.
- 캐릭터가 바닥에 남겨둔 Materias 는 좋을 대로 처리해라. unequip(), 또는 다른 것을 호출하기 전에 주소를 저장하되, 메모리 누수를 절대 피해라!
- ues(int, ICharacter&) 멤버 함수는 slot[idx]의 Materia를 사용해야 하고, 타겟 인자에 AMateria::use 함수가 사용된다.
- ***너의 캐릭터의 인벤토리는 어떠한 타입의 AMateria도 지원할 것이다.(아마 AMateria\* 등으로 사용하라는 이야기 같다)***
- 너의 Character 는 name을 인자로 받는 생성자가 있어야 한다. Character의 어떤 복사(복사 생성자나 복사 할당 연산자를 사용하는)든지 깊은 복사를 해야 한다. 복사하는 동안, Character의 Materias 는 새로운 것이 인벤토리에 추가 되기 전에 삭제 되어야 한다. 물론 Materias 는 Character 의 소멸 때 삭제 되어야 한다.
- 다음 따라오는 인터페이스를 구현할 MateriaSource 를 구현해라.
```
class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
```
- learnMateria(AMateria* )
	- 인자로 들어온 Materia 를 복사하고, 나중에 복사될 수 있도록 메모리에 저장해라. Character 같이, MateriaSource 는 최대 4개의 Materia를 알 수 있다. 그들은 고유하지 않다.
- createMateria(std::string const & )
	- 새로운 Materia 를 반환해라. 문자는 인자로 들어온 같은 타입의 MateriaSource 로부터 이전에 배운 복사본이다. 만약 모르는 타입이라면 0을 반환해라.
- 간단히 말해서 MateriaSource는 필요할 때 Materias를 생성하기 위해 Materias의 "템플릿"을 학습할 수 있어야 합니다. 그런 다음 해당 유형을 식별하는 문자열만 사용하여 새 Materia를 생성할 수 있습니다.
- 다음 코드를 실행해라:
```
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
```
- 그럼 아래와 같은 출력이 나와야 한다.
```
$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
* shoots an ice bolt at bob *$
* heals bob's wounds *$
```
- 위에 있는 테스트 보다 많은 테스트를 넣어라.
- ex03을 하지 않아도 이 모듈을 통과할 수 있다.
<bt> </bt>
