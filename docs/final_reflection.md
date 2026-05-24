## Final Reflection — Mini Game Hub

## Prompt 1: Plan vs. Reality

At the start of the project, I planned to build a simple multi-game console application with a menu system and at least two games. The final project includes the GameMenu system, Tic Tac Toe, and Snake Game.

## Done:

GameMenu system (menu display and input handling)
Tic Tac Toe (fully implemented with win/tie logic)
Snake Game (fully implemented with movement, scoring, and collision detection)

## Changes from original plan:

The Snake Game turned out to be more complex than expected, especially handling real-time movement, input detection, and tail movement logic. I originally thought it would be simple, but it required careful handling of game state and timing.
Tic Tac Toe was more straightforward than expected, but required debugging of input validation and win conditions.

Overall, I completed more than I originally expected and ended up with two fully playable games instead of just a basic structure.

## Prompt 2: Design Decisions I Would Change

If I restarted the project, I would change how I structured the GameManager.

Right now, GameManager directly calls each game. In a better design, I would separate responsibilities more clearly, such as having a dedicated controller for each game or using a cleaner interface system.

I would also improve separation between game logic and input/output. For example, SnakeGame mixes rendering, input handling, and logic in one class, which makes it harder to read and maintain.

Another improvement would be making the menu system more flexible instead of hardcoding choices.

## Prompt 3: What I Learned
Technical Learning

I learned how to use CMake and CTest properly to build and test a multi-file C++ project. I also learned how to connect multiple source files and manage builds across different components.

Design Learning

I learned the importance of separating responsibilities between classes. For example, GameMenu handles input, GameManager handles control flow, and each game handles its own logic. This made the project easier to manage.

Process Learning

I learned how important testing and debugging step-by-step is. Instead of trying to fix everything at once, running small builds and tests helped me find issues faster, especially with compilation and linking errors.

## Prompt 4: What’s Left to Finish

There are still some improvements that could be made:

    Add a better GameManager structure
    Would improve code organization and make adding new games easier
    Improve Snake Game design
    Separate rendering, logic, and input handling
    Improve TicTacToe design
    display player names nand their turns
    Improve input validation in menu system
    Prevent invalid inputs more cleanly

These improvements would make the project more scalable and polished, but the current version is fully functional.

## Prompt 5: Workflow Reflection

The feature-branch and merge workflow became easier over time. Creating branches, committing changes, and running tests became more natural after repeating it several times.

What still feels a bit slow is resolving merge conflicts and understanding CMake errors when they happen.

If I worked with another developer, clear branch naming and frequent commits would be very important. The testing workflow would also be critical to avoid breaking existing features.

## Prompt 6: AI Use

I used AI tools during this project to help with debugging, understanding errors, and assisting with implementation of game logic, especially for the Snake Game.

It was helpful in explaining CMake issues, fixing compilation errors, and suggesting ways to structure the game loop. However, I made sure to review all generated code and understand it before using it in my project.

In some cases, I had to adjust or simplify AI suggestions to match the style and structure of my own code. Overall, AI was useful as a support tool, but all final decisions and integration were done by me.