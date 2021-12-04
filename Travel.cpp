#include "Travel.hpp"

int Event::nrOfEvents = 4;

using namespace std;;

Event::Event()
{
    
}

Event::~Event()
{

}

//Random Travel Code
void Event::generateEvent(Character &character, dArr<Enemy>& enemies)
{
    int i = rand() % Event::nrOfEvents;

    switch (i)
    {
    case 0:
        //Enemy encounter
        this->enemyEncouter(character, enemies);
        break;
    case 1:
        //Puzzle
        this->puzzleEncouter(character);
        break;
    case 2:
        //Shop
        this->shopEncouter(character);
        break;
    case 3:
        //Boss
            
        cout<<"                             __"<<endl;
        cout<<"                   _ ,___,-' ,-=-."<<endl;
        cout<<"       __,-- _ _,-'_)_  (""`'-._| `."<<endl;
        cout<<"    _,'  __ |,' ,-' __)  ,-     /. |"<<endl;
        cout<<"  ,'_,--'   |     -'  _)/         `\""<<endl;
        cout<<",','      ,'       ,-'_,`           :"<<endl;
        cout<<",'     ,-'       ,(,-(              :"<<endl;
        cout<<"     ,'       ,-' ,    _            ;"<<endl;
        cout<<"    /        ,-._/`---'            /"<<endl;
        cout<<"   /        (____)(----. )       ,'"<<endl;
        cout<<"  /         (      `.__,     /| /,"<<endl;
        cout<<" :           ;-.___         /__|||"<<endl;
        cout<<" |         ,'      `--.      -,| |"<<endl;
        cout<<" :        /            |    .__/"<<endl;
        cout<<"  |      (__            |    |_"<<endl;
        cout<<"   |       ,`-, *       /   _|,\""<<endl;
        cout<<"    |    ,'   `-.     ,'_,-'    \""<<endl;
        cout<<"   (_|,-'    ,'\")--,'-'       __\""<<endl;
        cout<<"    |       /  // ,'|      ,--'  `-."<<endl;
        cout<<"     `-.    `-/ \'  |   _,'         `."<<endl;
        cout<<"        `-._ /      `--'/             \""<<endl;
        cout<<"-hrr-      ,'           |              \""<<endl;
        cout<<"          /             |               \""<<endl;
        cout<<"       ,-'              |               /"<<endl;
        cout<<"      /                 |             -'"<<endl;

            cout<<""<<endl;
            cout<<""<<endl;
            
            
            
        cout<<"Game is still in development, Boss is still sleeping" <<endl;
        break;

    default:
        break;
    }
}







//Shop Menu and Travel
void Event::shopEncouter(Character &character)
{
    int choice = 0;
    bool shopping = true;
    Inventory merchantInv;
    string inv;
    
    //Init merchant inv
    int nrOfItems = rand() % 20 + 10;
    bool coinToss = false;

    for (size_t i = 0; i < nrOfItems; i++)
    {
        coinToss = rand() % 2;

        if(coinToss > 0)
            merchantInv.addItem(Weapon(character.getLevel() + rand() % 5, rand() % 4));
        else
            merchantInv.addItem(Armor(character.getLevel() + rand() % 5, rand() % 4));
    }

    while (shopping)
    {
        system("CLS");

        cout<<"                                                     ___"<<endl;
        cout<<"                                             ___..--'  .`."<<endl;
        cout<<"                                    ___...--'     -  .` `.`."<<endl;
        cout<<"                           ___...--' _      -  _   .` -   `.`."<<endl;
        cout<<"                  ___...--'  -       _   -       .`  `. - _ `.`."<<endl;
        cout<<"           __..--'_______________ -         _  .`  _   `.   - `.`."<<endl;
        cout<<"        .`    _ /|    -        .`      _     .`__________`. _  -`.`."<<endl;
        cout<<"      .` -   _ /  |_     -   .`  _         .` |   Shop!!  |`.   - `.`"<<endl;
        cout<<"    .`-    _  /   /|   -   .`        _   .`   |___________|  `. _   `.`."<<endl;
        cout<<"  .`________ /__ /_ |____.`____________.`     ___       ___  - `._____`|"<<endl;
        cout<<"    |   -  __  -|    | - |  ____  |   | | _  |   |  _  |   |  _ |"<<endl;
        cout<<"    | _   |  |  | -  |   | |.--.| |___| |    |___|     |___|    |"<<endl;
        cout<<"    |     |--|  |    | _ | |'--'| |---| |   _|---|     |---|_   |"<<endl;
        cout<<"    |   - |__| _|  - |   | |.--.| |   | |    |   |_  _ |   |    |"<<endl;
        cout<<" ---``--._      |    |   |=|'--'|=|___|=|====|___|=====|___|====|"<<endl;
        cout<<" -- . ''  ``--._| _  |  -|_|.--.|_______|_______________________|"<<endl;
        cout<<"`--._           '--- |_  |:|'--'|:::::::|:::::::::::::::::::::::|"<<endl;
        cout<<"_____`--._ ''      . '---'``--._|:::::::|:::::::::::::::::::::::|"<<endl;
        cout<<"----------`--._          ''      ``--.._|:::::::::::::::::::::::|"<<endl;
        cout<<"`--._ _________`--._'        --     .   ''-----..............LGB'"<<endl;
        cout<<"     `--._----------`--._.  _           -- . :''           -    ''"<<endl;
        cout<<"          `--._ _________`--._ :'              -- . :''      -- . ''"<<endl;
        cout<<" -- . ''       `--._ ---------`--._   -- . :''"<<endl;
        cout<<"          :'        `--._ _________`--._:'  -- . ''      -- . ''"<<endl;
        cout<<"  -- . ''     -- . ''    `--._----------`--._      -- . ''     -- . ''"<<endl;
        cout<<"                              `--._ _________`--._"<<endl;
        cout<<" -- . ''           :'              `--._ ---------`--._-- . ''    -- . ''"<<endl;
        cout<<"          -- . ''       -- . ''         `--._ _________`--._   -- . ''"<<endl;
        cout<<":'                 -- . ''          -- . ''  `--._----------`--._"<<endl;

        cout<<""<<endl;
        cout<<""<<endl;
        
        
        
        cout<<"____ SHOP MENU ____" <<endl;

        cout<<"0: Leave"<<endl;
        cout<<"1: Buy" <<endl;
        cout<<"2: Sell" <<endl;
        cout<<endl;
        cout<<endl;

        cout<<"Choice: ";

        cin >> choice;

        while (cin.fail() || choice > 3 || choice < 0)
        {
            system("CLS");

            cout << "Wrong character, I only accept numbers!!!" << "\n";
            cin.clear();
            cin.ignore(100, '\n');

            cout<<"____ SHOP MENU ____"<<endl;

            cout<<"0: Leave" <<endl;
            cout<<"1: Buy" <<endl;
            cout<<"2: Sell" <<endl;

            cout<<endl;
            cout<<endl;

            cout << "Choice: ";
            cin >> choice;
        }

        cin.ignore(100, '\n');
        cout<<endl;
        cout<<endl;

        //Shop
        switch (choice)
        {
        case 0: //Leave
            shopping = false;
            break;

        case 1: //Buy
                cout<<"######                  #     #"<<endl;
                cout<<"#     # #    # #   #    ##   ## ###### #    # #    #"<<endl;
                cout<<"#     # #    #  # #     # # # # #      ##   # #    #"<<endl;
                cout<<"######  #    #   #      #  #  # #####  # #  # #    #"<<endl;
                cout<<"#     # #    #   #      #     # #      #  # # #    #"<<endl;
                cout<<"#     # #    #   #      #     # #      #   ## #    #"<<endl;
                cout<<"######   ####    #      #     # ###### #    #  ####"<<endl;

                cout<<""<<endl;
                cout<<""<<endl;
                

            cout << "____ BUY MENU ____" <<endl;

            cout << " - Gold: " <<character.getGold() <<endl;

            inv.clear();

            for (size_t i = 0; i < merchantInv.size(); i++)
            {
                inv += to_string(i) + ": " + merchantInv[i].toString() + "\n - PRICE: " + to_string(merchantInv[i].getBuyValue()) + "\n";
            }

            cout << inv <<endl;

            cout << "Gold: " << character.getGold() <<endl;
            cout << "Choice of item (-1 to cancel): ";

            cin >> choice;

            while (cin.fail() || choice > merchantInv.size() || choice < -1)
            {
                system("CLS");

                cout<<"Wrong character, I only accept numbers!!!"<<endl;
                cin.clear();
                cin.ignore(100, '\n');

                cout << "Gold: " << character.getGold() <<endl;
                cout << "Choice of item (-1 to cancel): ";
                cin >> choice;
            }

            cin.ignore(100, '\n');
            cout << "\n";

            if (choice == -1)
            {
                cout << "Cancelled..." <<endl;
            }
            else if (character.getGold() >= merchantInv[choice].getBuyValue())
            {
                character.payGold(merchantInv[choice].getBuyValue());
                character.addItem(merchantInv[choice]);
                
                cout << "Bought item " << merchantInv[choice].getName() << " -" << merchantInv[choice].getBuyValue() << "\n";
                
                merchantInv.removeItem(choice);
            }
            else
            {
                cout<<"Can't afford this item!" <<endl;
            }

            break;

                
                
                
                
        case 2: //Sell

            cout << character.getInvAsString(true) <<endl;

                cout<<" #####                          #     #"<<endl;
                cout<<"#     # ###### #      #         ##   ## ###### #    # #    #"<<endl;
                cout<<"#       #      #      #         # # # # #      ##   # #    #"<<endl;
                cout<<" #####  #####  #      #         #  #  # #####  # #  # #    #"<<endl;
                cout<<"      # #      #      #         #     # #      #  # # #    #"<<endl;
                cout<<"#     # #      #      #         #     # #      #   ## #    #"<<endl;
                cout<<" #####  ###### ###### ######    #     # ###### #    #  ####"<<endl;

                cout<<""<<endl;
                cout<<""<<endl;
                
                
            cout << "____ SELL MENU ____" <<endl;

            cout << " - Gold: " << character.getGold() << "\n\n";

            if (character.getInventorySize() > 0)
            {
                cout << "Gold: " << character.getGold() << "\n";
                cout << "Choice of item (-1 to cancel): ";

                cin >> choice;

                while (cin.fail() || choice > character.getInventorySize() || choice < -1)
                {
                    system("CLS");

                    cout<<"Wrong character, I only accept numbers!!!"<<endl;
                    cin.clear();
                    cin.ignore(100, '\n');

                    cout << "Gold: " << character.getGold() << "\n";
                    cout << "Choice of item (-1 to cancel): ";
                    cin >> choice;
                }

                cin.ignore(100, '\n');
                cout << "\n";

                if (choice == -1)
                {
                    cout << "Cancelled..." << "\n";
                }
                else
                {
                    character.gainGold(character.getItem(choice).getSellValue());

                    cout << "Item sold!" <<endl;
                    cout << "Gold earned: " << character.getItem(choice).getSellValue() <<endl;
                    character.removeItem(choice);
                }
            }
            else
            {
                cout << "Inventory empty..." <<endl;
            }

            break;

        default:
            break;
        }

        cout << "Press RETURN to continue..." <<endl;
        cin.get();
    }

    cout << "You left the shop.." <<endl;
}




//Combat Menu and Travel

void Event::enemyEncouter(Character &character, dArr<Enemy>& enemies)
{
    bool playerTurn = false;
    int choice = 0;

    //Coin toss for turn
    int coinToss = rand() % 2 + 1;

    if (coinToss == 1)
        playerTurn = true;
    else
        playerTurn = false;

    //End conditions
    bool escape = false;
    bool playerDefeated = false;
    bool enemiesDefeated = false;

    //Enemies
    int nrOfEnemies = rand() % 5 + 1;

    for (size_t i = 0; i < nrOfEnemies; i++)
    {
        enemies.push(Enemy(character.getLevel() + rand()%3));
    }

    //Battle variables
    int damage = 0;
    int gainExp = 0;
    int gainGold = 0;
    int playerTotal = 0;
    int enemyTotal = 0;
    int combatTotal = 0;
    int combatRollPlayer = 0;
    int combatRollEnemy = 0;

    while (!escape && !playerDefeated && !enemiesDefeated)
    {
        if (playerTurn && !playerDefeated)
        {
            //Menu
            //system("CLS");
            cout<<"######                                       #######"<<endl;
            cout<<"#     # #        ##   #   # ###### #####        #    #    # #####  #    #"<<endl;
            cout<<"#     # #       #  #   # #  #      #    #       #    #    # #    # ##   #"<<endl;
            cout<<"######  #      #    #   #   #####  #    #       #    #    # #    # # #  #"<<endl;
            cout<<"#       #      ######   #   #      #####        #    #    # #####  #  # #"<<endl;
            cout<<"#       #      #    #   #   #      #   #        #    #    # #   #  #   ##"<<endl;
            cout<<"#       ###### #    #   #   ###### #    #       #     ####  #    # #    #"<<endl;
            
            cout<<""<<endl;
            cout<<""<<endl;
            
            
            
            cout << "____ PLAYER TURN ____" <<endl;
            cout << "Continue..." <<endl;
            cin.get();
            system("CLS");

            
            cout<<"                                           _.gd8888888bp._"<<endl;
            cout<<"                                        .g88888888888888888p."<<endl;
            cout<<"                                      .d8888P""       ""Y8888b."<<endl;
            cout<<"                                      ´Y8P`              ´Y8P`"<<endl;
            cout<<"                                         `.               ,'"<<endl;
            cout<<"                                           |     .-.     /"<<endl;
            cout<<"                                            |   (___)   /"<<endl;
            cout<<" .------------------._______________________:__________j"<<endl;
            cout<<"|                   |                      |           |`-.,_"<<endl;
            cout<<"|###################|######################|###########|,-'`"<<endl;
            cout<<" `------------------'                       :    ___   l"<<endl;
            cout<<"                                            /   (   )   \""<<endl;
            cout<<"                                   fsc     /     `-'     \""<<endl;
            cout<<"                                         ,'               `."<<endl;
            cout<<"                                      .d8b.               .d8b."<<endl;
            cout<<"                                      ´Y8888p..       ,.d8888P`"<<endl;
            cout<<"                                        ´Y88888888888888888P`"<<endl;
            cout<<"                                           ""YY8888888PP"""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            
            
            cout << "____ BATTLE MENU ____" <<endl;
            cout << "HP: " << character.getHP() << " / " << character.getHPMax() <<endl;

            cout << "0: Escape" <<endl;
            cout << "1: Attack" <<endl;
            cout << "2: Defend" <<endl;
            cout << "3: Use Item" <<endl;
            
            cout <<endl;
            cout <<endl;

            cout << "Choice: ";

            cin >> choice;

            while (cin.fail() || choice > 3 || choice < 0)
            {
                system("CLS");

                cout<<"Wrong character, I only accept numbers!!!"<<endl;

                cin.clear();
                cin.ignore(100, '\n');

                
                cout<<"                                           _.gd8888888bp._"<<endl;
                cout<<"                                        .g88888888888888888p."<<endl;
                cout<<"                                      .d8888P""       ""Y8888b."<<endl;
                cout<<"                                      ´Y8P`              ´Y8P`"<<endl;
                cout<<"                                         `.               ,'"<<endl;
                cout<<"                                           |     .-.     /"<<endl;
                cout<<"                                            |   (___)   /"<<endl;
                cout<<" .------------------._______________________:__________j"<<endl;
                cout<<"|                   |                      |           |`-.,_"<<endl;
                cout<<"|###################|######################|###########|,-'`"<<endl;
                cout<<" `------------------'                       :    ___   l"<<endl;
                cout<<"                                            /   (   )   \""<<endl;
                cout<<"                                   fsc     /     `-'     \""<<endl;
                cout<<"                                         ,'               `."<<endl;
                cout<<"                                      .d8b.               .d8b."<<endl;
                cout<<"                                      ´Y8888p..       ,.d8888P`"<<endl;
                cout<<"                                        ´Y88888888888888888P`"<<endl;
                cout<<"                                           ""YY8888888PP"""<<endl;
                cout<<""<<endl;
                cout<<""<<endl;
                
                
                
                cout << "____ BATTLE MENU ____" <<endl;

                cout << "0: Escape" <<endl;
                cout << "1: Attack" <<endl;
                cout << "2: Defend" <<endl;
                cout << "3: Use Item" <<endl;
                cout <<endl;

                cout << "Choice: ";
                cin >> choice;
            }

            cin.ignore(100, '\n');
            cout << "\n";

            //Moves
            switch (choice)
            {
            case 0: //ESCAPE
                escape = true;
                break;

            case 1: //ATTACK

                //Select enemy
                cout << "Select enemy: " <<endl;

                for (size_t i = 0; i < enemies.size(); i++)
                {
                    cout << i << ": "
                        << "Level: " << enemies[i].getLevel() << " - " <<
                        "HP: " << enemies[i].getHp() << "/" << enemies[i].getHpMax() << " - " <<
                        "Defence: " << enemies[i].getDefence() << " - " <<
                        "Accuracy: " << enemies[i].getAccuracy() << " - " <<
                        "Damage: " << enemies[i].getDamageMin() << " - " << enemies[i].getDamageMax() <<
                        "\n";
                }

                cout <<endl;
                cout << "Choice: ";

                cin >> choice;

                while (cin.fail() || choice >= enemies.size() || choice < 0)
                {
                    cout<<"Wrong character, I only accept numbers!!!"<<endl;
                    cin.clear();
                    cin.ignore(100, '\n');

                    cout << "Select enemy: " << endl;
                    cout << "Choice: ";
                    cin >> choice;
                }

                cin.ignore(100, '\n');
                cout << endl;

                //Attack roll
                combatTotal = enemies[choice].getDefence() + character.getAccuracy();
                enemyTotal = enemies[choice].getDefence() / (double)combatTotal * 100;
                playerTotal = character.getAccuracy() / (double)combatTotal * 100;
                combatRollPlayer = rand() % playerTotal + 1;
                combatRollEnemy = rand() % enemyTotal + 1;

                cout << "Combat total: " << combatTotal << "\n";
                cout << "Enemy percent: " << enemyTotal << "\n";
                cout << "Player percent: " << playerTotal << "\n\n";
                cout << "Player roll: " << combatRollPlayer << "\n";
                cout << "Enemy roll: " << combatRollEnemy << "\n\n";

                if (combatRollPlayer > combatRollEnemy) //Hit
                {
                    cout<<" _,-,"<<endl;
                    cout<<"T_  |"<<endl;
                    cout<<"||`-'"<<endl;
                    cout<<"||"<<endl;
                    cout<<"||"<<endl;
                    cout<<"~~"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    
                    cout << "HIT! " << "\n\n";
                    
                    damage = character.getDamage();
                    enemies[choice].takeDamage(damage);

                    cout << "Damage: " << damage << "!" << "\n\n";

                    if (!enemies[choice].isAlive())
                    {
                        cout<<"#     #                  #     #          ###"<<endl;
                        cout<<" #   #   ####  #    #    #  #  # # #    # ###"<<endl;
                        cout<<"  # #   #    # #    #    #  #  # # ##   # ###"<<endl;
                        cout<<"   #    #    # #    #    #  #  # # # #  #  #"<<endl;
                        cout<<"   #    #    # #    #    #  #  # # #  # #"<<endl;
                        cout<<"   #    #    # #    #    #  #  # # #   ## ###"<<endl;
                        cout<<"   #     ####   ####      ## ##  # #    # ###"<<endl;
                        cout<<""<<endl;
                        cout<<""<<endl;
                        
                        cout << "ENEMY DEFEATED!" << "\n\n";
                        gainExp = enemies[choice].getExp();
                        character.gainExp(gainExp);
                        gainGold = rand() % enemies[choice].getLevel() * 10 + 1;
                        character.gainGold(gainGold);
                        cout << "EXP GAINED: " << gainExp << "\n";
                        cout << "GOLD GAINED: " << gainGold << "\n\n";

                        //Item roll
                        int roll = rand() % 100 + 1;
                        int rarity = -1;

                        if (roll > 20)
                        {
                            rarity = 0; //Common
                            
                            roll = rand() % 100 + 1;
                            if (roll > 30)
                            {
                                rarity = 1; //Uncommon

                                roll = rand() % 100 + 1;
                                if (roll > 50)
                                {
                                    rarity = 2; //Rare

                                    roll = rand() % 100 + 1;
                                    if (roll > 70)
                                    {
                                        rarity = 3; //Legendary

                                        roll = rand() % 100 + 1;
                                        if (roll > 90)
                                        {
                                            rarity = 4; //Mythic
                                        }
                                    }
                                }
                            }
                        }

                        if (roll >= 0)
                        {
                            roll = rand() % 100 + 1;

                            if (roll > 50)
                            {
                                Weapon tempW(character.getLevel(), rarity);
                                character.addItem(tempW);
                                cout << "WEAPON DROP!" << "\n";
                            }
                            else
                            {
                                Armor tempA(character.getLevel(), rarity);
                                character.addItem(tempA);
                                cout << "ARMOR DROP!" << "\n";
                            }
                        }

                         enemies.remove(choice);
                    }
                }
                else //Miss
                {
                    cout<<" _,-,"<<endl;
                    cout<<"T_  |"<<endl;
                    cout<<"||`-'"<<endl;
                    cout<<"||"<<endl;
                    cout<<"||"<<endl;
                    cout<<"~~"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    
                    cout << "MISSED!"<<endl;
                }

                break;

            case 2: //DEFEND

                break;

            case 3: //ITEM

                break;

            default:
                break;
            }

            //End turn
            playerTurn = false;
        }
        else if(!playerTurn && !playerDefeated && !escape && !enemiesDefeated)
        {
            cout << "___ ENEMY TURN ___" <<endl;

            cout << "Continue..." <<endl;
            cin.get();
            system("CLS");

            //Enemy attack
            for (size_t i = 0; i < enemies.size(); i++)
            {
                cout << "Continue..." <<endl;
                cin.get();
                system("CLS");
                
                cout << "Enemy: " << i <<endl;

                //Attack roll
                combatTotal = enemies[i].getAccuracy() + (character.getDefence() + character.getAddedDefence());
                enemyTotal = enemies[i].getAccuracy() / (double)combatTotal * 100;
                playerTotal = (character.getDefence() + character.getAddedDefence()) / (double)combatTotal * 100;
                combatRollPlayer = rand() % playerTotal + 1;
                combatRollEnemy = rand() % enemyTotal + 1;

                cout << "Combat total: " << combatTotal <<endl;
                cout << "Enemy percent: " << enemyTotal <<endl;
                cout << "Player percent: " << playerTotal <<endl;
                cout << "Player roll: " << combatRollPlayer <<endl;
                cout << "Enemy roll: " << combatRollEnemy <<endl;

                if (combatRollPlayer < combatRollEnemy) //Hit
                {
                    cout<<" _,-,"<<endl;
                    cout<<"T_  |"<<endl;
                    cout<<"||`-'"<<endl;
                    cout<<"||"<<endl;
                    cout<<"||"<<endl;
                    cout<<"~~"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    
                    cout << "HIT! " <<endl;

                    damage = enemies[i].getDamage();
                    character.takeDamage(damage);

                    cout << "Damage: " << damage << "!" << "\n";
                    cout << "HP: " << character.getHP() << " / " << character.getHPMax() << "\n\n";

                    if (!character.isAlive())
                    {
                        cout<<"X        X"<<endl;
                        cout<<" X      X "<<endl;
                        cout<<"  X    X"<<endl;
                        cout<<"    XX   "<<endl;
                        cout<<"   X  X"<<endl;
                        cout<<" X      X"<<endl;
                        cout<<"X        X"<<endl;
                        cout<<endl;
                        cout<<endl;
                        
                        cout << "YOU ARE DEFEATED!" << "\n\n";
                        playerDefeated = true;
                    }
                }
                else //Miss
                {
                    cout<<" _,-,"<<endl;
                    cout<<"T_  |"<<endl;
                    cout<<"||`-'"<<endl;
                    cout<<"||"<<endl;
                    cout<<"||"<<endl;
                    cout<<"~~"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout << "MISSED! \n\n";
                }
            }

            //End turn
            playerTurn = true;
        }

        //Conditions
        if (!character.isAlive())
        {
            playerDefeated = true;
        }
        else if (enemies.size() <= 0)
        {
            enemiesDefeated = true;
        }
    }
}










//Puzzle Menu and Travel
void Event::puzzleEncouter(Character &character)
{
    bool completed = false;
    int userAns = 0;
    int chances = 3;
    int gainExp = (chances * character.getLevel() * (rand()%10 + 1));
    int gainGold = (chances * character.getLevel() * (rand() % 10 + 1));
    //H:\ConsoleRPG\ConsoleRPG\
    
    
//    For this to work you need to past 1.txt path from your computer
    Puzzle puzzle("/Users/pedromatos/Documents/Xcode/MyNightmareFinale/1.txt");

    while (!completed && chances > 0)
    {
        std::cout << "Chances: " << chances << "\n\n";
        chances--;
        std::cout << puzzle.getAsString() << "\n";

        cout << "\nYour ANSWER: ";
        cin >> userAns;

        while (cin.fail())
        {
            cout << "Faulty input!" << "\n";
            cin.clear();
            cin.ignore(100, '\n');

            cout << "\nYour ANSWER: ";
            cin >> userAns;
        }
        
        cin.ignore(100, '\n');
        cout <<endl;

        if (puzzle.getCorrectAns() == userAns)
        {
            completed = true;

            character.gainExp(gainExp);
            character.gainExp(gainGold);
            std::cout << "YOU GAINED " << gainExp << " EXP!" <<endl;
            std::cout << "YOU GAINED " << gainGold << " GOLD!" <<endl;
        }
    }

    if (completed)
    {
        std::cout << "CONGRATZ YOU SUCCEDED!"<<endl;
    }
    else
    {
        std::cout << "YOU FAILED AHAHAHAH!"<<endl;
    }
}












//  Under Construction

void Event::bossEncouter(Character & character, Boss & boss)
{
    
}
