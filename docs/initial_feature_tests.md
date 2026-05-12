# Initial Feature Test Cases

## Feature: GameMenu

### Test 1: Normal Operation
- What it tests: Creating GameMenu object
- Expected result: Object is created successfully
- Result: Pass

### Test 2: Menu Display
- What it tests: Displaying menu options
- Expected result: Menu prints correctly to terminal
- Result: Pass

### Test 3: User Input
- What it tests: Accepting valid menu input (1–3)
- Expected result: Input is accepted and returned correctly
- Result: Pass

### CTest Output
aleenakhan@Aleenas-MacBook-Pro Mini-Game-Hub % ctest --test-dir build --verbose
UpdateCTestConfiguration  from :/Users/aleenakhan/Desktop/FinalProject/Mini-Game-Hub/build/DartConfiguration.tcl
Test project /Users/aleenakhan/Desktop/FinalProject/Mini-Game-Hub/build
Constructing a list of tests
Done constructing a list of tests
Updating test list for fixtures
Added 0 tests to meet fixture requirements
Checking test dependency graph...
Checking test dependency graph end
test 1
    Start 1: FeatureTests

1: Test command: /Users/aleenakhan/Desktop/FinalProject/Mini-Game-Hub/build/tests
1: Working Directory: /Users/aleenakhan/Desktop/FinalProject/Mini-Game-Hub/build
1: Test timeout computed to be: 10000000
1: Running tests...
1: Test 1: creation... PASS
1: Test 2: display... 
1: ===== MINI GAME HUB =====
1: 1. Play Snake
1: 2. Play Tic Tac Toe
1: 3. Exit
1: =========================
1: PASS
