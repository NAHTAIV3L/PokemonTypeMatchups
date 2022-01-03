#include <string>
#include <iostream>
#include <algorithm>

class Type
{
public:
    float Normal = 0;
    float Fire = 0;
    float Water = 0;
    float Electric = 0;
    float Grass = 0;
    float Ice = 0;
    float Fighting = 0;
    float Poison = 0;
    float Ground = 0;
    float Flying = 0;
    float Psychic = 0;
    float Bug = 0;
    float Rock = 0;
    float Ghost = 0;
    float Dragon = 0;
    float Dark = 0;
    float Steel = 0;
    float Fairy = 0;

    std::string FloatToFraction(float f)
    {
        if(f == 1.0f)
        {
            return "1";
        }
        else if (f == 2.0f)
        {
            return "2";
        }
        else if (f == 0.5f)
        {
            return "1/2";
        }
        else if (f == 0.0f)
        {
            return "0";
        }
        else 
        {
            return "?";
        }
    }

    std::string str()
    {
        std::string s = "\n  Normal:   ";  s += FloatToFraction(Normal);
        s += "\n  Fire:     ";               s += FloatToFraction(Fire);
        s += "\n  Water:    ";              s += FloatToFraction(Water);
        s += "\n  Electric: ";           s += FloatToFraction(Electric);
        s += "\n  Grass:    ";              s += FloatToFraction(Grass);
        s += "\n  Ice:      ";                s += FloatToFraction(Ice);
        s += "\n  Fighting: ";           s += FloatToFraction(Fighting);
        s += "\n  Poison:   ";             s += FloatToFraction(Poison);
        s += "\n  Ground:   ";             s += FloatToFraction(Ground);
        s += "\n  Flying:   ";             s += FloatToFraction(Flying);
        s += "\n  Psychic:  ";            s += FloatToFraction(Psychic);
        s += "\n  Bug:      ";                s += FloatToFraction(Bug);
        s += "\n  Rock:     ";               s += FloatToFraction(Rock);
        s += "\n  Ghost:    ";              s += FloatToFraction(Ghost);
        s += "\n  Dragon:   ";             s += FloatToFraction(Dragon);
        s += "\n  Dark:     ";               s += FloatToFraction(Dark);
        s += "\n  Steel:    ";              s += FloatToFraction(Steel);
        s += "\n  Fairy:    ";              s += FloatToFraction(Fairy);
        return s;
    }
};



int main()
{
    Type Normal=    {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.0f, 1.0f, 1.0f, 0.5f, 1.0f};
    Type Fire=      {1.0f, 0.5f, 0.5f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 0.5f, 1.0f, 2.0f, 1.0f};
    Type Water=     {1.0f, 2.0f, 0.5f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f};
    Type Electric=  {1.0f, 1.0f, 2.0f, 0.5f, 0.5f, 1.0f, 1.0f, 1.0f, 0.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f};
    Type Grass=     {1.0f, 0.5f, 2.0f, 1.0f, 0.5f, 1.0f, 1.0f, 0.5f, 2.0f, 0.5f, 1.0f, 0.5f, 2.0f, 1.0f, 0.5f, 1.0f, 0.5f, 1.0f};
    Type Ice=       {1.0f, 0.5f, 0.5f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f};
    Type Fighting=  {2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 0.5f, 0.5f, 0.5f, 2.0f, 0.0f, 1.0f, 2.0f, 2.0f, 0.5f};
    Type Poison=    {1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 0.5f, 0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, 1.0f, 1.0f, 0.0f, 2.0f};
    Type Ground=    {1.0f, 2.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 2.0f, 1.0f, 0.0f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f};
    Type Flying=    {1.0f, 1.0f, 1.0f, 0.5f, 2.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f};
    Type Psychic=   {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.5f, 1.0f};
    Type Bug=       {1.0f, 0.5f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 0.5f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 0.5f, 1.0f, 2.0f, 0.5f, 0.5f};
    Type Rock=      {1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 0.5f, 2.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f};
    Type Ghost=     {0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 1.0f};
    Type Dragon=    {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 0.0f};
    Type Dark=      {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 0.5f};
    Type Steel=     {1.0f, 0.5f, 0.5f, 0.5f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 0.5f, 2.0f};
    Type Fairy=     {1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 2.0f, 0.5f, 1.0f};


    std::string TypeChoice;
    while (true)
    {
        std::cout << "\n\nPick a Pokemon Type: ";
        std::cin >> TypeChoice;
        std::transform(TypeChoice.begin(), TypeChoice.end(), TypeChoice.begin(), tolower);
        if (TypeChoice == "normal") { std::cout << "\n\nPicked Normal:" << Normal.str(); }
        else if (TypeChoice == "fire") { std::cout << "\n\nPicked Fire:" << Fire.str(); }
        else if (TypeChoice == "water") { std::cout << "\n\nPicked Water:" << Water.str(); }
        else if (TypeChoice == "electric") { std::cout << "\n\nPicked Electric:" << Electric.str(); }
        else if (TypeChoice == "grass") { std::cout << "\n\nPicked Grass:" << Grass.str(); }
        else if (TypeChoice == "ice") { std::cout << "\n\nPicked Ice:" << Ice.str(); }
        else if (TypeChoice == "fighting") { std::cout << "\n\nPicked Fighting:" << Fighting.str(); }
        else if (TypeChoice == "poison") { std::cout << "\n\nPicked Poison:" << Poison.str(); }
        else if (TypeChoice == "ground") { std::cout << "\n\nPicked Ground:" << Ground.str(); }
        else if (TypeChoice == "flying") { std::cout << "\n\nPicked Flying:" << Flying.str(); }
        else if (TypeChoice == "psychic") { std::cout << "\n\nPicked Psychic:" << Psychic.str(); }
        else if (TypeChoice == "bug") { std::cout << "\n\nPicked Bug:" << Bug.str(); }
        else if (TypeChoice == "rock") { std::cout << "\n\nPicked Rock:" << Rock.str(); }
        else if (TypeChoice == "ghost") { std::cout << "\n\nPicked Ghost:" << Ghost.str(); }
        else if (TypeChoice == "dragon") { std::cout << "\n\nPicked Dragon:" << Dragon.str(); }
        else if (TypeChoice == "dark") { std::cout << "\n\nPicked Dark:" << Dark.str(); }
        else if (TypeChoice == "steel") { std::cout << "\n\nPicked Steel:" << Steel.str(); }
        else if (TypeChoice == "fairy") { std::cout << "\n\nPicked Fairy:" << Fairy.str(); }
        else if (TypeChoice == "quit") { break; }
        else { std::cout << "\n\nDid not pick a valid type"; }
        std::cin.get();
    }
    return 0;
}
