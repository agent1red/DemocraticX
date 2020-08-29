#include <iostream>

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

}


void PlayGame()
{
    //game variables 
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 6;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    

    
    std::cout << "\nHired by the democrats, you on a secrete mission to hack into \n";
    std::cout << "the 2020 election to meddle with the votes.. \n";
    std:: cout << std:: endl;
    std:: cout << "You hide in plain sight and move to a secure location \n";
    std::cout << "just outside of Langley VA. You proceed to hack into  \n";
    std::cout << "Voting system...\n";
    std:: cout << std:: endl;

    //game instructions 
    std:: cout << "|1.| There are 3 numbers in the code\n";
    std::cout << "|2.| The codes add-up to: " << CodeSum << "\n";
    std::cout << "|3.| The codes also multiply to give: " << CodeProduct << "\n";
    std::cout << "     Enter the corect code to get in.. \n\n" << std::endl;
    std::cout;
    

    //Store Player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC; 

    
    // check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << " \n You are in the system! \n";
    } 
    else
    {
        std::cout << "\n Wrong code! Your hack was discovered!!! \n";
        std::cout << "FBI is alerted you are burned.";
    }

}


int main()
{
    PrintIntroduction();

    while (true)
    {
        PlayGame();
        std::cin.clear();
        std::cin.ignore();
        
        
    }
    
    
    
    return 0;
    
}