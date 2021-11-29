#include <QCoreApplication>
#include <iostream>

#include "cppfactory.h"
#include "csharpfactory.h"
#include "javafactory.h"

namespace  {

std::string generateProgram(AbstractFactory* factory)
{
    std::string result;
    std::shared_ptr<ClassUnit> myClass(factory->CreateClassUnit("MyClass"));

    myClass->add(factory->CreateMethodUnit("testFunc1", "void", 0), ClassUnit::PUBLIC);
    myClass->add(factory->CreateMethodUnit("testFunc2", "void", MethodUnit::STATIC), ClassUnit::PRIVATE);
    myClass->add(factory->CreateMethodUnit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST), ClassUnit::PUBLIC);
    std::shared_ptr<MethodUnit> method = factory->CreateMethodUnit("testFunc4", "void", MethodUnit::STATIC);
    method->add(factory->CreatePrintOperator(R"(Hello, world!\n)"));
    myClass->add(method, ClassUnit::PROTECTED);
    result += myClass->compile() + '\n';

    return result;
}

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AbstractFactory* factory = nullptr;
    factory = new CppFactory();
    std::cout << generateProgram(factory)  << std::endl;
    delete factory;

    factory = new CsharpFactory();
    std::cout << generateProgram(factory)  << std::endl;
    delete factory;

    factory = new JavaFactory();
    std::cout << generateProgram(factory)  << std::endl;
    delete factory;

    return a.exec();
}
