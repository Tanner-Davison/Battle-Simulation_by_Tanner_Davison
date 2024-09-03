# Character Battle Simulation

This C++ project simulates a battle between a player and an enemy, where the player can choose different attack strategies to defeat the enemy. The game includes features like tracking health, stamina, and hits allowed, and it provides a summary of the battle results.

## Features

- **Battle Simulation:** Players can choose from multiple attack types, each with different stamina costs and effects on the enemy.
- **Game Results:** The program provides feedback on the battle outcome based on the player's and enemy's health.
- **Player and Enemy Status Tracking:** Keep track of health, stamina, and hits allowed for both the player and the enemy.
- **Array Operations:** The project includes examples of working with 2D arrays, including summing elements in rows and columns.

## Code Overview

### Main Functionalities

1. **Battle Logic:**
   - `gameResults(int health, int enemyHealth, int stamina)`: Determines the outcome of the battle based on the player's and enemy's remaining health.

2. **Battle Loop:**
   - Allows the player to repeatedly choose attack strategies until the battle is over.

3. **Array Operations:**
   - Includes a 2D array example to demonstrate array operations such as printing elements and summing columns.

### Custom Modules

- **Character Functions:** Located in `Character/CharacterFuncs.h`, handles player-related actions and statuses.
- **Custom Math Functions:** Located in `Math/customMath.h`, includes custom mathematical operations like checking equality.
- **Entity Functions:** Located in `entity/EntityFunctions.h`, manages enemy-related actions and statuses.

## Dependencies

- **Standard C++ Library:** Utilized for basic I/O operations and standard functions.
- **fmt Library:** Used for advanced string formatting (if included in your actual implementation).
- **Windows API:** Utilized for any system-specific operations (e.g., setting console color or other Windows-specific functionalities).

## Setup

1. Clone the repository:

    ```bash
    git clone https://github.com/Tanner-Davison/Battle-Simulation_by_Tanner_Davison.git
    ```

2. Compile the code using a C++ compiler.

3. Run the executable to start the battle simulation.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

For any questions or feedback, feel free to reach out at tanner.davison95@gmail.com.
