#include <string>
#include <iostream>
#include <algorithm>
#include <Windows.h>

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
            return "1";
        else if (f == 2.0f)
            return "2";
        else if (f == 0.5f)
            return "1/2";
        else if (f == 0.0f)
            return "0";
        else 
            return "?";
    }

    std::string str()
    {
        std::string s = "\n\n  Normal:   ";s += FloatToFraction(Normal);
        s += "\n  Fire:     ";             s += FloatToFraction(Fire);
        s += "\n  Water:    ";             s += FloatToFraction(Water);
        s += "\n  Electric: ";             s += FloatToFraction(Electric);
        s += "\n  Grass:    ";             s += FloatToFraction(Grass);
        s += "\n  Ice:      ";             s += FloatToFraction(Ice);
        s += "\n  Fighting: ";             s += FloatToFraction(Fighting);
        s += "\n  Poison:   ";             s += FloatToFraction(Poison);
        s += "\n  Ground:   ";             s += FloatToFraction(Ground);
        s += "\n  Flying:   ";             s += FloatToFraction(Flying);
        s += "\n  Psychic:  ";             s += FloatToFraction(Psychic);
        s += "\n  Bug:      ";             s += FloatToFraction(Bug);
        s += "\n  Rock:     ";             s += FloatToFraction(Rock);
        s += "\n  Ghost:    ";             s += FloatToFraction(Ghost);
        s += "\n  Dragon:   ";             s += FloatToFraction(Dragon);
        s += "\n  Dark:     ";             s += FloatToFraction(Dark);
        s += "\n  Steel:    ";             s += FloatToFraction(Steel);
        s += "\n  Fairy:    ";             s += FloatToFraction(Fairy);
        return s;
    }
};



int main()
{
    //                         1     2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18
    Type Offense_Normal =   { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.0f, 1.0f, 1.0f, 0.5f, 1.0f };
    Type Offense_Fire =     { 1.0f, 0.5f, 0.5f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 0.5f, 1.0f, 2.0f, 1.0f };
    Type Offense_Water =    { 1.0f, 2.0f, 0.5f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f };
    Type Offense_Electric = { 1.0f, 1.0f, 2.0f, 0.5f, 0.5f, 1.0f, 1.0f, 1.0f, 0.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f };
    Type Offense_Grass =    { 1.0f, 0.5f, 2.0f, 1.0f, 0.5f, 1.0f, 1.0f, 0.5f, 2.0f, 0.5f, 1.0f, 0.5f, 2.0f, 1.0f, 0.5f, 1.0f, 0.5f, 1.0f };
    Type Offense_Ice =      { 1.0f, 0.5f, 0.5f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f };
    Type Offense_Fighting = { 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 0.5f, 0.5f, 0.5f, 2.0f, 0.0f, 1.0f, 2.0f, 2.0f, 0.5f };
    Type Offense_Poison =   { 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 0.5f, 0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f, 1.0f, 1.0f, 0.0f, 2.0f };
    Type Offense_Ground =   { 1.0f, 2.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 2.0f, 1.0f, 0.0f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f };
    Type Offense_Flying =   { 1.0f, 1.0f, 1.0f, 0.5f, 2.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f };
    Type Offense_Psychic =  { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.5f, 1.0f };
    Type Offense_Bug =      { 1.0f, 0.5f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 0.5f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 0.5f, 1.0f, 2.0f, 0.5f, 0.5f };
    Type Offense_Rock =     { 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 0.5f, 2.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f };
    Type Offense_Ghost =    { 0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 1.0f };
    Type Offense_Dragon =   { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 0.0f };
    Type Offense_Dark =     { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.5f, 1.0f, 0.5f };
    Type Offense_Steel =    { 1.0f, 0.5f, 0.5f, 0.5f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 0.5f, 2.0f };
    Type Offense_Fairy =    { 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 2.0f, 0.5f, 1.0f };

    Type Defense_Normal =   { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f };
    Type Defense_Fire =     { 1.0f, 0.5f, 2.0f, 1.0f, 0.5f, 0.5f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f };
    Type Defense_Water =    { 1.0f, 0.5f, 0.5f, 2.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f };
    Type Defense_Electric = { 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f };
    Type Defense_Grass =    { 1.0f, 2.0f, 0.5f, 0.5f, 0.5f, 2.0f, 1.0f, 2.0f, 0.5f, 2.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };
    Type Defense_Ice =      { 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f };
    Type Defense_Fighting = { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 2.0f, 0.5f, 0.5f, 1.0f, 1.0f, 0.5f, 1.0f, 2.0f };
    Type Defense_Poison =   { 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 0.5f, 0.5f, 2.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f };
    Type Defense_Ground =   { 1.0f, 1.0f, 2.0f, 0.0f, 2.0f, 2.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };
    Type Defense_Flying =   { 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 2.0f, 0.5f, 1.0f, 0.0f, 1.0f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };
    Type Defense_Psychic =  { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 2.0f, 1.0f, 2.0f, 1.0f, 2.0f, 1.0f, 1.0f };
    Type Defense_Bug =      { 1.0f, 2.0f, 1.0f, 1.0f, 0.5f, 1.0f, 0.5f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };
    Type Defense_Rock =     { 0.5f, 0.5f, 2.0f, 1.0f, 2.0f, 1.0f, 2.0f, 0.5f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f };
    Type Defense_Ghost =    { 0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.5f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 2.0f, 1.0f, 2.0f, 1.0f, 1.0f };
    Type Defense_Dragon =   { 1.0f, 0.5f, 0.5f, 0.5f, 0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 2.0f };
    Type Defense_Dark =     { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 1.0f, 1.0f, 0.0f, 2.0f, 1.0f, 0.5f, 1.0f, 0.5f, 1.0f, 2.0f };
    Type Defense_Steel =    { 0.5f, 2.0f, 1.0f, 1.0f, 0.5f, 0.5f, 2.0f, 0.0f, 2.0f, 0.5f, 0.5f, 0.5f, 0.5f, 1.0f, 0.5f, 1.0f, 0.5f, 0.5f };
    Type Defense_Fairy =    { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 2.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 1.0f, 0.0f, 0.5f, 2.0f, 1.0f };

    std::string TypeChoice;
    char Offense_Defense;
    while (true)
    {
        std::cout << "\n\nAre you Attacking(a), Defending(d), or do you want to Quit(q): ";
        std::cin >> Offense_Defense;
        Offense_Defense = tolower(Offense_Defense);
        std::system("cls");

        if (Offense_Defense == 'a')
        {
            std::cout << "\n\nPicked Attacking\nPick a Pokemon Type: ";
            std::cin >> TypeChoice;
            std::transform(TypeChoice.begin(), TypeChoice.end(), TypeChoice.begin(), tolower);
            if (TypeChoice == "normal") { std::cout << "\n\nPicked Normal:" << Offense_Normal.str(); }
            else if (TypeChoice == "fire") { std::cout << "\n\nPicked Fire:" << Offense_Fire.str(); }
            else if (TypeChoice == "water") { std::cout << "\n\nPicked Water:" << Offense_Water.str(); }
            else if (TypeChoice == "electric") { std::cout << "\n\nPicked Electric:" << Offense_Electric.str(); }
            else if (TypeChoice == "grass") { std::cout << "\n\nPicked Grass:" << Offense_Grass.str(); }
            else if (TypeChoice == "ice") { std::cout << "\n\nPicked Ice:" << Offense_Ice.str(); }
            else if (TypeChoice == "fighting") { std::cout << "\n\nPicked Fighting:" << Offense_Fighting.str(); }
            else if (TypeChoice == "poison") { std::cout << "\n\nPicked Poison:" << Offense_Poison.str(); }
            else if (TypeChoice == "ground") { std::cout << "\n\nPicked Ground:" << Offense_Ground.str(); }
            else if (TypeChoice == "flying") { std::cout << "\n\nPicked Flying:" << Offense_Flying.str(); }
            else if (TypeChoice == "psychic") { std::cout << "\n\nPicked Psychic:" << Offense_Psychic.str(); }
            else if (TypeChoice == "bug") { std::cout << "\n\nPicked Bug:" << Offense_Bug.str(); }
            else if (TypeChoice == "rock") { std::cout << "\n\nPicked Rock:" << Offense_Rock.str(); }
            else if (TypeChoice == "ghost") { std::cout << "\n\nPicked Ghost:" << Offense_Ghost.str(); }
            else if (TypeChoice == "dragon") { std::cout << "\n\nPicked Dragon:" << Offense_Dragon.str(); }
            else if (TypeChoice == "dark") { std::cout << "\n\nPicked Dark:" << Offense_Dark.str(); }
            else if (TypeChoice == "steel") { std::cout << "\n\nPicked Steel:" << Offense_Steel.str(); }
            else if (TypeChoice == "fairy") { std::cout << "\n\nPicked Fairy:" << Offense_Fairy.str(); }
            else { std::cout << "\n\n" << TypeChoice << "is not a valid type"; }
        }
        else if (Offense_Defense == 'd')
        {
            std::cout << "\n\nPicked Defending\nPick a Pokemon Type: ";
            std::cin >> TypeChoice;
            std::transform(TypeChoice.begin(), TypeChoice.end(), TypeChoice.begin(), tolower);
            if (TypeChoice == "normal") { std::cout << "\n\nPicked Normal:" << Defense_Normal.str(); }
            else if (TypeChoice == "fire") { std::cout << "\n\nPicked Fire:" << Defense_Fire.str(); }
            else if (TypeChoice == "water") { std::cout << "\n\nPicked Water:" << Defense_Water.str(); }
            else if (TypeChoice == "electric") { std::cout << "\n\nPicked Electric:" << Defense_Electric.str(); }
            else if (TypeChoice == "grass") { std::cout << "\n\nPicked Grass:" << Defense_Grass.str(); }
            else if (TypeChoice == "ice") { std::cout << "\n\nPicked Ice:" << Defense_Ice.str(); }
            else if (TypeChoice == "fighting") { std::cout << "\n\nPicked Fighting:" << Defense_Fighting.str(); }
            else if (TypeChoice == "poison") { std::cout << "\n\nPicked Poison:" << Defense_Poison.str(); }
            else if (TypeChoice == "ground") { std::cout << "\n\nPicked Ground:" << Defense_Ground.str(); }
            else if (TypeChoice == "flying") { std::cout << "\n\nPicked Flying:" << Defense_Flying.str(); }
            else if (TypeChoice == "psychic") { std::cout << "\n\nPicked Psychic:" << Defense_Psychic.str(); }
            else if (TypeChoice == "bug") { std::cout << "\n\nPicked Bug:" << Defense_Bug.str(); }
            else if (TypeChoice == "rock") { std::cout << "\n\nPicked Rock:" << Defense_Rock.str(); }
            else if (TypeChoice == "ghost") { std::cout << "\n\nPicked Ghost:" << Defense_Ghost.str(); }
            else if (TypeChoice == "dragon") { std::cout << "\n\nPicked Dragon:" << Defense_Dragon.str(); }
            else if (TypeChoice == "dark") { std::cout << "\n\nPicked Dark:" << Defense_Dark.str(); }
            else if (TypeChoice == "steel") { std::cout << "\n\nPicked Steel:" << Defense_Steel.str(); }
            else if (TypeChoice == "fairy") { std::cout << "\n\nPicked Fairy:" << Defense_Fairy.str(); }
            else { std::cout << "\n\n" << TypeChoice << "is not a valid type"; }
        }
        else if (Offense_Defense == 'q')
        {
            break;
        }
        else
        {
            std::cout << Offense_Defense << " is not a valid choice";
        }
    }

    std::cout << "\n\n\n\n\n\n\n\n\t\t\t\t\tThank You For Using PokemonTypeMatchups";
    Sleep(5000);
    return 0;
}
