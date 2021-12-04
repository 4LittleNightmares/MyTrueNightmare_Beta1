#include "Boss.hpp"

Boss::Boss()
{

}

Boss::~Boss()
{

}


//bool playerTurn = false;
//int choice = 0;
//




////Coin toss for turn to your witcher........
//int coinToss = rand() % 2 + 1;
//
//if (coinToss == 1)
//    playerTurn = true;
//else
//    playerTurn = false;
//


////END C
//bool escape = false;
//bool playerDefeated = false;
//bool enemiesDefeated = false;

////ENEMIES
//int nrOfEnemies = rand() % 5 + 1;

//for (size_t i = 0; i < nrOfEnemies; i++)
//{
//    enemies.push(Enemy(character.getLevel() + rand() % 3));
//}

////BATTLE V
//int damage = 0;
//int gainExp = 0;
//int gainGold = 0;
//int playerTotal = 0;
//int enemyTotal = 0;
//int combatTotal = 0;
//int combatRollPlayer = 0;
//int combatRollEnemy = 0;

//WHILE BOSS DON'T LET GO
//while (!escape && !playerDefeated && !enemiesDefeated)
//{
//    if (playerTurn && !playerDefeated)
//    {
//        //Menu
//        //system("CLS");

//        cout << "= PLAYER TURN =" << "\n\n";
//        cout << "Continue..." << "\n\n";
//        cin.get();
//        system("CLS");

//        cout << "= BATTLE MENU =" << "\n\n";
//        cout << "HP: " << character.getHP() << " / " << character.getHPMax() << "\n\n";

//        cout << "0: Escape" << "\n";
//        cout << "1: Attack" << "\n";
//        cout << "2: Defend" << "\n";
//        cout << "3: Use Item" << "\n";
//        cout << "\n";

//        cout << "Choice: ";

//        cin >> choice;

//        while (cin.fail() || choice > 3 || choice < 0)
//        {
//            system("CLS");

//            cout << "Faulty input!" << "\n";
//            cin.clear();
//            cin.ignore(100, '\n');

//            cout << "____ BATTLE MENU ____" << endl;

//            cout<<"0: Escape" <<endl;
//            cout<<"1: Attack" <<endl;
//            cout<<"2: Defend" <<endl;
//            cout<<"3: Use Item" <<endl;
//            cout<<endl;
//            cout<<endl;

//            cout << "Choice: ";
//            cin >> choice;
//        }

//        cin.ignore(100, '\n');
//        cout << "\n";

//        //Moves
//        switch (choice)
//        {
//        case 0: //ESCAPE
//            escape = true;
//            break;

//        case 1: //ATTACK

//                //Select enemy
//            cout << "Select enemy: " <<endl;

//            for (size_t i = 0; i < enemies.size(); i++)
//            {
//                cout << i << ": "
//                    << "Level: " << enemies[i].getLevel() << " - " <<
//                    "HP: " << enemies[i].getHp() << "/" << enemies[i].getHpMax() << " - " <<
//                    "Defence: " << enemies[i].getDefence() << " - " <<
//                    "Accuracy: " << enemies[i].getAccuracy() << " - " <<
//                    "Damage: " << enemies[i].getDamageMin() << " - " << enemies[i].getDamageMax() <<
//                    "\n";
//            }

//            cout<<endl;
//            cout<<endl;
//            cout<<"Choice: ";

//            cin>>choice;




//            WHILE Choise not go go...
//            while (cin.fail() || choice >= enemies.size() || choice < 0)
//            {
//                cout<<"Wrong character, I only accept numbers!!!"<<endl;
//                cin.clear();
//                cin.ignore(100, '\n');

//                cout<<"Select enemy: "<<endl;
//                cout<<"Choice: ";
//                cin>>choice;
//            }



//            cin.ignore(100, '\n');
//            cout << "\n";



//            //ATTACK ACTION
//            combatTotal = enemies[choice].getDefence() + character.getAccuracy();
//            enemyTotal = enemies[choice].getDefence() / (double)combatTotal * 100;
//            playerTotal = character.getAccuracy() / (double)combatTotal * 100;
//            combatRollPlayer = rand() % playerTotal + 1;
//            combatRollEnemy = rand() % enemyTotal + 1;

//            cout << "Combat total: " << combatTotal << "\n";
//            cout << "Enemy percent: " << enemyTotal << "\n";
//            cout << "Player percent: " << playerTotal << "\n\n";
//            cout << "Player roll: " << combatRollPlayer << "\n";
//            cout << "Enemy roll: " << combatRollEnemy << "\n\n";

//            if (combatRollPlayer > combatRollEnemy) //Hit
//            {
//                cout << "HIT! " << "\n\n";

//                damage = character.getDamage();
//                enemies[choice].takeDamage(damage);

//                cout << "Damage: " << damage << "!" << "\n\n";

//                if (!enemies[choice].isAlive())
//                {
//                    cout << "ENEMY DEFEATED!" << "\n\n";
//                    gainExp = enemies[choice].getExp();
//                    character.gainExp(gainExp);
//                    gainGold = rand() % enemies[choice].getLevel() * 10 + 1;
//                    character.gainGold(gainGold);
//                    cout << "EXP GAINED: " << gainExp << "\n";
//                    cout << "GOLD GAINED: " << gainGold << "\n\n";

//                    //Item roll
//                    int roll = rand() % 100 + 1;
//                    int rarity = -1;

//                    if (roll > 20)
//                    {
//                        rarity = 0; //Common

//                        roll = rand() % 100 + 1;
//                        if (roll > 30)
//                        {
//                            rarity = 1; //Uncommon

//                            roll = rand() % 100 + 1;
//                            if (roll > 50)
//                            {
//                                rarity = 2; //Rare

//                                roll = rand() % 100 + 1;
//                                if (roll > 70)
//                                {
//                                    rarity = 3; //Legendary

//                                    roll = rand() % 100 + 1;
//                                    if (roll > 90)
//                                    {
//                                        rarity = 4; //Mythic
//                                    }
//                                }
//                            }
//                        }
//                    }

//                    if (roll >= 0)
//                    {
//                        roll = rand() % 100 + 1;

//                        if (roll > 50)
//                        {
//                            Weapon tempW(character.getLevel(), rarity);
//                            character.addItem(tempW);
//                            cout << "WEAPON DROP!" << "\n";
//                        }
//                        else
//                        {
//                            Armor tempA(character.getLevel(), rarity);
//                            character.addItem(tempA);
//                            cout << "ARMOR DROP!" << "\n";
//                        }
//                    }

//                    enemies.remove(choice);
//                }
//            }
//            else //Miss
//            {
//                cout << "MISSED! \n\n";
//            }

//            break;

//        case 2: //DEFEND

//            break;

//        case 3: //ITEM

//            break;

//        default:
//            break;
//        }

//        //End turn
//        playerTurn = false;
//    }
//    else if (!playerTurn && !playerDefeated && !escape && !enemiesDefeated)
//    {
//        cout << "____ ENEMY TURN ____" << "\n";

//        cout << "Continue..." << "\n\n";
///        (REMEMBER, "System pause" is's a no in XCode
//        cin.get();
//        system("CLS");

//        //ENEMY ATTACK
//        for (size_t i = 0; i < enemies.size(); i++)
//        {
//            cout << "Continue..." <<endl;
//            cin.get();
//            system("CLS");

//            cout << "Enemy: " << i <<endl;



//            //ATTACK RANDOM
//            combatTotal = enemies[i].getAccuracy() + (character.getDefence() + character.getAddedDefence());
//            enemyTotal = enemies[i].getAccuracy() / (double)combatTotal * 100;
//            playerTotal = (character.getDefence() + character.getAddedDefence()) / (double)combatTotal * 100;
//            combatRollPlayer = rand() % playerTotal + 1;
//            combatRollEnemy = rand() % enemyTotal + 1;

//            cout << "Combat total: " << combatTotal << "\n";
//            cout << "Enemy percent: " << enemyTotal << "\n";
//            cout << "Player percent: " << playerTotal << "\n\n";
//            cout << "Player roll: " << combatRollPlayer << "\n";
//            cout << "Enemy roll: " << combatRollEnemy << "\n\n";

//            if (combatRollPlayer < combatRollEnemy) //Hit
//            {
//                cout << "HIT! " << "\n\n";

//                damage = enemies[i].getDamage();
//                character.takeDamage(damage);

//                cout << "Damage: " << damage << "!" << "\n";
//                cout << "HP: " << character.getHP() << " / " << character.getHPMax() << "\n\n";

//                if (!character.isAlive())
//                {
//                    cout << "YOU ARE DEFEATED!" << "\n\n";
//                    playerDefeated = true;
//                }
//            }
//            else //Miss
//            {
//                cout << "MISSED! <<endl;
//            }
//        }

//        //END Player & Enemy TURN
//        playerTurn = true;
//    }

//    //Conditions
//    if (!character.isAlive())
//    {
//        playerDefeated = true;
//    }
//    else if (enemies.size() <= 0)
//    {
//        enemiesDefeated = true;
//    }
//}
