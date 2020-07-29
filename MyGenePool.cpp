#include "MyGenePool.h"
#include "MyPerson.h"
#include "vector"
#include "sstream"

// This is here to avoid having yet another object file:
GenePool* GenePool::create(std::istream& stream) {
  // TODO! 
  return new MyGenePool(stream);
}

//constructor
MyGenePool::MyGenePool(std::istream& stream){

  std::string name;
  std::string input;
  std::string gender;
  std::string mother;
  std::string father;
  std::vector<std::string> vector;

  while(std::getline(stream,input)){

    std::istringstream linestream(input);

    std::getline(linestream, name, '\t');
    std::getline(linestream, gender, '\t');
    std::getline(linestream, mother, '\t');
    std::getline(linestream, father, '\t');

    Gender g;
    MyPerson* mom;
    MyPerson* dad;

    if (gender == "female"){
      g = Gender::FEMALE; 
    }
    else{
      g = Gender::MALE;
    }

    if (mother == "???"){
      mom = nullptr;
    }
    else{
      mom = mMap.find(mother)->second;
    }

    if (father == "???"){
      dad = nullptr;
    }
    else{
      dad = mMap.find(father)->second;
    }

    MyPerson* person = new MyPerson(name, g, mom, dad);

    mMap.insert( std::pair<std::string, MyPerson*>(name, person) );

  }

}

MyPerson* MyGenePool::find(const std::string& name) const{
  MyPerson* person = mMap.find(name)->second;
  return person;
}
// MyGenePool Member Functions

MyGenePool::~MyGenePool(){

}
