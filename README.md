🏰 Strong_Hold_Game_Project
Object Oriented Programming – Semester 2
⚔ Multiplayer Kingdom Simulation Game
This is a C++ terminal-based strategic simulation where two players manage medieval kingdoms, making decisions about building infrastructure, training armies, trading resources, and engaging in diplomatic or military encounters. The game uses a turn-based system and focuses on strategic depth with a dynamic map, alliances, and resource economy.

🎯 Project Synopsis
This game replicates a dual-player medieval kingdom simulator. Players can:

Construct and upgrade buildings (farms, barracks, houses, workshops)

Harvest and exchange resources (wood, food, gold)

Recruit and train military units

Engage in diplomacy—form alliances or betray them

Save and resume their kingdoms

Review comprehensive logs (battles, trades, alliances)

The system encourages tactical thinking with the balance of peaceful progress and aggressive conquest.

🧰 Tools & Technologies
Language: C++

Compiler: g++, GCC

Execution Environment: Terminal / Command Prompt

File I/O: Save/load via .txt files

Random Events: rand() function for unpredictability

Multiplayer: Turn-based state sharing

Logging: Files to track trades, diplomacy, battles

🗂 Directory Layout
less
Copy
Edit
├── game.h             // Kingdom class interface
├── game.cpp           // Core game mechanics (build, trade, train)
├── multiplayer.h      // Multiplayer system interface
├── multiplayer.cpp    // Multiplayer logic (chat, alliances, warfare)
├── main.cpp           // Game execution loop and UI
├── score.txt          // Records of scores/events
├── chat.txt           // Player messaging history
├── treaty.txt         // Logs of diplomatic relations
├── battle_log.txt     // Detailed battle records
├── market.txt         // Trade transactions
├── _save.txt          // Game save data
✅ Features Summary
Kingdom Mechanics
Resources: Gold, wood, food

Buildings: Houses (for population), farms, barracks, woodcutters, mines, workshops

Growth: House count increases population

Crafting: Weapons such as swords, bows, and maces via workshops

Army Training
Unit Types: Archers, macemen, swordsmen

Needs: Barracks + weapons + gold

Trade Engine
Legal and illegal trades of resources (food, wood)

Risk and reward involved in illicit trade

All trades documented in market.txt

Diplomacy & War
Chat system between players

Ability to create or sabotage alliances

Attack mechanics (penalties for betrayal)

Alliance status & player locations visible

Map Navigation
5x5 coordinate-based map system

Players can shift positions turn by turn

Logging System
Trade history in market.txt

Battle history in battle_log.txt

Diplomatic changes in treaty.txt

Player messages in chat.txt

💾 Running the Game
Compile the Code

bash
Copy
Edit
g++ main.cpp game.cpp multiplayer.cpp -o stronghold_game
Run the Executable

bash
Copy
Edit
./stronghold_game
Game Instructions

Turn-based actions for two players (e.g., Fasiha and Saba)

Choose from the menu options per turn

Use options 10/11 to save or load progress

👥 Team Contributions
Module	Contributor	Description
game.h/cpp	Developer 1	Core game development – resources, construction, military
multiplayer.*	Developer 2	Multiplayer design – chat, alliances, attacks, coordinates
main.cpp	Both Developers	Integrated UI, main loop, turn logic, user interaction

📚 Lessons & Skills Gained
Practical file I/O using ifstream and ofstream

Applying object-oriented principles to a live game

Turn-based logic in multiplayer systems

Data persistence with real-time log creation

Designing game systems with diplomacy and risk-reward dynamics

🎮 Step into your Kingdom – Build, Trade, Conquer, or Collaborate
