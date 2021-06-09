cmake_minimum_required(VERSION 3.17.5)
project(modules)

set(CMAKE_CXX_STANDARD 98)

add_executable(mod0_ex00 mod0/ex00/megaphone.cpp)
add_executable(mod0_ex01 mod0/ex01/Contact.cpp mod0/ex01/Phonebook.cpp)
#add_executable(mod1_ex06 mod01/ex06/Weapon.cpp mod01/ex06/main.cpp mod01/ex06/HumanA.cpp mod01/ex06/HumanB.cpp)
add_executable(mod1_ex07 mod1/ex07/reple.cpp)
add_executable(mod02_ex00 mod2/ex00/Fixed.cpp mod2/ex00/main.cpp)
#add_executable(mod2_ex01 mod2/ex01/Fixed.cpp mod2/ex01/main.cpp)
add_executable(mod3_ex00 mod3/ex00/FragTrap.cpp mod3/ex00/main.cpp)
add_executable(mod3_ex01 mod3/ex01/FragTrap.cpp mod3/ex01/ScavTrap.cpp mod3/ex01/main.cpp)
add_executable(mod3_ex02 mod3/ex02/FragTrap.cpp mod3/ex02/ScavTrap.cpp mod3/ex02/ClapTrap.cpp mod3/ex02/main.cpp)
add_executable(mod3_ex03 mod3/ex03/FragTrap.cpp mod3/ex03/ScavTrap.cpp mod3/ex03/ClapTrap.cpp mod3/ex03/NinjaTrap.cpp mod3/ex03/main.cpp)
add_executable(mod3_ex04 mod3/ex04/FragTrap.cpp mod3/ex04/ScavTrap.cpp mod3/ex04/ClapTrap.cpp mod3/ex04/NinjaTrap.cpp mod3/ex04/SuperTrap.cpp mod3/ex04/main.cpp)

add_executable(mod4_ex00 mod4/ex00/Sorcerer.cpp mod4/ex00/Victim.cpp mod4/ex00/Peon.cpp mod4/ex00/main.cpp)
target_compile_options(mod4_ex00 PRIVATE -Wall -Wextra -Werror)

add_executable(mod4_ex01 mod4/ex01/AWeapon.cpp mod4/ex01/PlasmaRifle.cpp mod4/ex01/PowerFist.cpp
        mod4/ex01/Enemy.cpp mod4/ex01/SuperMutant.cpp mod4/ex01/RadScorpion.cpp mod4/ex01/Character.cpp mod4/ex01/main.cpp)
target_compile_options(mod4_ex01 PRIVATE -Wall -Wextra -Werror)

add_executable(mod4_ex02 mod4/ex02/Squad.cpp mod4/ex02/TacticalMarine.cpp mod4/ex02/AssaultTerminator.cpp mod4/ex02/main.cpp)
target_compile_options(mod4_ex02 PRIVATE -Wall -Wextra -Werror)

add_executable(mod4_ex03 mod4/ex03/AMateria.cpp mod4/ex03/Ice.cpp mod4/ex03/Cure.cpp
        mod4/ex03/Character.cpp mod4/ex03/MateriaSource.cpp mod4/ex03/main.cpp)
target_compile_options(mod4_ex03 PRIVATE -Wall -Wextra -Werror)


add_executable(mod5_ex0 mod5/ex00/Bureaucrat.cpp mod5/ex00/main.cpp)
target_compile_options(mod5_ex0 PRIVATE -Wall -Wextra -Werror)

add_executable(mod5_ex1 mod5/ex01/Bureaucrat.cpp mod5/ex01/main.cpp
        mod5/ex01/Form.cpp)
target_compile_options(mod5_ex1 PRIVATE -Wall -Wextra -Werror)

add_executable(mod5_ex2 mod5/ex02/Bureaucrat.cpp mod5/ex02/main.cpp
        mod5/ex02/Form.cpp mod5/ex02/ShrubberyCreationForm.cpp
        mod5/ex02/RobotomyRequestForm.cpp mod5/ex02/PresidentialPardonForm.cpp)
target_compile_options(mod5_ex2 PRIVATE -Wall -Wextra -Werror)

add_executable(mod5_ex3 mod5/ex03/Bureaucrat.cpp mod5/ex03/main.cpp
        mod5/ex03/Form.cpp mod5/ex03/ShrubberyCreationForm.cpp
        mod5/ex03/RobotomyRequestForm.cpp mod5/ex03/PresidentialPardonForm.cpp
        mod5/ex03/Intern.cpp)
target_compile_options(mod5_ex3 PRIVATE -Wall -Wextra -Werror)

add_executable(mod6_ex0 mod6/ex00/main.cpp)
target_compile_options(mod6_ex0 PRIVATE -Wall -Wextra -Werror)

add_executable(mod6_ex1 mod6/ex01/main.cpp)
target_compile_options(mod6_ex1 PRIVATE -Wall -Wextra -Werror)

add_executable(mod6_ex2 mod6/ex02/main.cpp)
target_compile_options(mod6_ex2 PRIVATE -Wall -Wextra -Werror)

add_executable(mod7_ex0 mod7/ex00/main.cpp)
target_compile_options(mod7_ex0 PRIVATE -Wall -Wextra -Werror)

add_executable(mod7_ex1 mod7/ex01/main.cpp)
target_compile_options(mod7_ex1 PRIVATE -Wall -Wextra -Werror)

add_executable(mod7_ex2 mod7/ex02/main.cpp mod7/ex02/Array.hpp)
target_compile_options(mod7_ex2 PRIVATE -Wall -Wextra -Werror)

add_executable(mod8_ex0 mod8/ex00/main.cpp mod8/ex00/easyfind.hpp)
target_compile_options(mod8_ex0 PRIVATE -Wall -Wextra -Werror)

add_executable(mod8_ex1 mod8/ex01/main.cpp mod8/ex01/span.cpp mod8/ex01/span.hpp)
target_compile_options(mod8_ex1 PRIVATE -Wall -Wextra -Werror)

add_executable(mod8_ex2 mod8/ex02/main.cpp mod8/ex02/mutantstack.cpp mod8/ex02/mutantstack.hpp)
target_compile_options(mod8_ex2 PRIVATE -Wall -Wextra -Werror)