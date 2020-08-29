#include <iostream>
#include <ctime>

void PrintIntroduction() 
{

    std::cout << "\n" << R"(
    /                                                                )  
   )\ )                                                )              ( /(  
  (()/(      (       )                 (        )   ( /(   (          )\()) 
   /(_))    ))\     (       (     (    )(    ( /(   )\())  )\    (   ((_)\  
  (_))_    /((_)    )\  '   )\    )\  (()\   )(_)) (_))/  ((_)   )\  __((_) 
   |   \  (_))    _((_))   ((_)  ((_)  ((_) ((_)_  | |_    (_)  ((_) \ \/ / 
   | |) | / -_)  | '  \() / _ \ / _|  | '_| / _` | |  _|   | | / _|   >  <  
   |___/  \___|  |_|_|_|  \___/ \__|  |_|   \__,_|  \__|   |_| \__|  /_/\_\ 
                                                                           
)" << "\n\n";
std::cout << "You are an Ex Economic Hitman on a Mission\n";

std::cout << R"(

------------------------
|*****   DemocraticX   |
|*****                 |
|**********************|
|**********************|
|**********************|
|**********************|


)" <<  std::endl;
 
     std::cout << "\nHired by the democrats, you on a secrete mission to hack into \n";
    std::cout << "the 2020 election to meddle with the votes.. \n";
    std:: cout << std:: endl;
    std:: cout << "You hide in plain sight and move to a secure location \n";
    std::cout << "just outside of Langley VA. You proceed to hack into the \n";
    std::cout << "Voting system...\n" ;
    std:: cout << std:: endl;

}

void PrintLevel(int Difficulty)
{
        

  std::cout << "You attempt to break into the Level " << Difficulty << " system \n";
    std::cout << "Enter the correct code to continue \n\n";
    
}

bool PlayGame(int Difficulty)
{
     
    //game variables 
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    
          //game instructions 
    std:: cout << "|1.| There are 3 numbers in the code\n";
    std::cout << "|2.| The codes add-up to: " << CodeSum << "\n";
    std::cout << "|3.| The codes also multiply to give: " << CodeProduct << "\n";
    std::cout << "     Enter the corect code to get in.. \n\n" << std::endl;
    std::cout;
    PrintLevel(Difficulty);

    //Store Player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC; 

    
    // check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << " \n You are in the system! Keep hacking through! \n";
        return true;
    } 
    else
    {
        std::cout << "\n Wrong code! Your hack was almost discovered!!! \n" ;
        std::cout << "Please try again \n\n";
        return false;
    }

}


int main()
{
    srand(time(NULL));
    PrintIntroduction();
    int LevelDifficulty = 1;
    int const MaxLevel = 5;

    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // clears erros 
        std::cin.ignore(); // discards buffer
        
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
        
    }
    
    std::cout << "You made it through the firewalls good job! \n" ;
    std::cout << "Now lets swing those votes and blame Russia! \n" ;
    return 0;
    
}