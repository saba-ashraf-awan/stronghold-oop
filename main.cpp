// main.cpp
#include "game.h"
#include "multiplayer.h"

int main() {
    srand((unsigned int)time(0));

    string playerNames[2] = {"Saba", "Fasiha"};
    Kingdom k1(playerNames[0]), k2(playerNames[1]);
    MultiplayerEngine engine(playerNames, 2);

    int choice;
    bool endGame = false;
    int turn = 0;

    while (!endGame) {
        Kingdom& current = (turn % 2 == 0) ? k1 : k2;
        cout << "\nTurn of: " << current.name << endl;

        current.buildMenu();
        cout << "13. Diplomacy/Warfare\n> ";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: current.buildBarracks(); break;
            case 2: current.trade(); break;
            case 3: current.buildFarm(); break;
            case 4: current.buildHouse(); break;
            case 5: current.buildMine(); break;
            case 6: current.buildWoodcutter(); break;
            case 7: current.buildWorkshop(); break;
            case 8: current.trainSoldiers(); break;
            case 9: current.status(); break;
            case 10: current.saveGame(); break;
            case 11: current.loadGame(); break;
            case 12: current.showTradeRecords(); break;
            case 13: {
                cout << "1. Send Message\n2. Form Alliance\n3. Break Alliance\n4. Attack\n5. Move\n6. View Map\n7. View Alliances\n> ";
                int action; cin >> action;
                string target;
                switch (action) {
                    case 1: {
                        cout << "Send message to: "; cin >> target;
                        engine.sendMessage(current.name, target);
                        break;
                    }
                    case 2: {
                        cout << "Form alliance with: "; cin >> target;
                        engine.formAlliance(current.name, target);
                        break;
                    }
                    case 3: {
                        cout << "Break alliance with: "; cin >> target;
                        engine.breakAlliance(current.name, target);
                        break;
                    }
                    case 4: {
                        cout << "Attack whom? "; cin >> target;
                        int atk = current.archers + current.swordsmen + current.macemen;
                        int def = (target == k1.name) ? (k1.archers + k1.swordsmen + k1.macemen) : (k2.archers + k2.swordsmen + k2.macemen);
                        if (target == k1.name)
                            engine.attackKingdom(current.name, target, atk, def, current.gold, k1.gold, current.food);
                        else
                            engine.attackKingdom(current.name, target, atk, def, current.gold, k2.gold, current.food);
                        break;
                    }
                    case 5: {
                        cout << "Move X and Y direction (dx dy): ";
                        int dx, dy; cin >> dx >> dy;
                        engine.moveKingdom(current.name, dx, dy);
                        break;
                    }
                    case 6: {
                        engine.showMap();
                        break;
                    }
                    case 7: {
                        engine.showAlliances();
                        break;
                    }
                    default:
                        cout << "Invalid diplomacy option.\n"; break;
                }
                break;
            }
            default: cout << "Invalid option.\n"; break;
        }

        turn++;
        cout << "\nContinue playing? (1 = Yes, 0 = No): ";
        cin >> endGame;
        endGame = !endGame;
    }

    cout << "Game over. Saving progress...\n";
    k1.saveGame();
    k2.saveGame();
    return 0;
}
