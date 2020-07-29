#include "MyPerson.h"
#include <set>
#include <iostream>

// MyPerson Member Functions
MyPerson::MyPerson(std::string name, Gender gender, MyPerson* mother, MyPerson* father){
    mName = name;
    mGender = gender;
    mMother = mother;
    mFather = father;
}

  const std::string& MyPerson::name() const {
      return mName;
  }

  Gender MyPerson::gender() const{
      return mGender;
  }

  MyPerson* MyPerson::mother(){
      return mMother;
  }

  MyPerson* MyPerson::father(){
      return mFather;
  }

  // Required Relationship Functions
  std::set<Person*> MyPerson::ancestors(PMod pmod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 

      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::aunts(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }

      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::brothers(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::children(){
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::cousins(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::daughters(){
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::descendants(){
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::grandchildren(){
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::granddaughters(){
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::grandfathers(PMod pmod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 

      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::grandmothers(PMod pmod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::grandparents(PMod pmod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::grandsons(){
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::nephews(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::nieces(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::parents(PMod pmod){
      if (pmod == PMod::MATERNAL){
        MyPerson* mom = mother();
        std::set<Person*> set;
        set.insert(mom); 
        return set;
      } 
      else{
        std::cout << "stub" << std::endl;
        std::set<Person*> set;
        return set;
      }

  }

  std::set<Person*> MyPerson::siblings(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::sisters(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::sons(){
      std::set<Person*> set;
      return set;
  }

  std::set<Person*> MyPerson::uncles(PMod pmod, SMod smod){
      if (pmod == PMod::ANY){
          std::cout << "stub" << std::endl;
      } 
      if (smod == SMod::ANY){
          std::cout << "stub" << std::endl;
      }
      std::set<Person*> set;
      return set;
  }