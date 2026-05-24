## Snake Game Feature Spec

## Core Gameplay

    Player controls a snake using W A S D
    Snake moves continuously in a grid
    Food (F) appears randomly
    
# When snake eats food:
        score increases by 10
        snake grows by 1 segment
        new food spawns

# Game Over Conditions
Game ends if:
    Snake hits wall
    Snake hits itself
    Player presses X
    
# Rendering System
    Console-based grid
    Uses ASCII:
        # → walls
        O → snake head
        o → snake body
        F → food
        
# Game Loop
Each frame:

    draw board
    read input
    update logic
    sleep for smooth timing