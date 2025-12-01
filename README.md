# 🧩 So Long: A 2D Maze Adventure Game

[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Graphics Library](https://img.shields.io/badge/Graphics-MiniLibX-darkgreen.svg)](https://gfycat.com/jovialunacceptableantlion)
[![Status](https://img.shields.io/badge/Status-Completed-success.svg)](https://github.com/Mabelzzz/42bangkok_SoLong)
[![42 Project](https://img.shields.io/badge/Curriculum-42_Bangkok-red.svg)](https://www.42bangkok.com/)
[![License](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

<br>

## 🌟 Project Summary

**"So Long"** is a concise **2D maze exploration game** developed as a core project for the 42 curriculum. Built entirely in **C** and utilizing the **MiniLibX** graphic library, this project serves as a comprehensive exercise in foundational graphics programming and robust data validation.

Your objective is simple: **navigate the player (P) through the rectangular map, collect all items (C), and safely reach the exit (E), all while minimizing the number of steps taken.**

---

## 🎯 Key Learning Outcomes

The project was designed to demonstrate proficiency in several critical programming areas:

* **Map Parsing & Validation:** Implementing strict checks to ensure map integrity (rectangular, fully enclosed by walls, correct number of game elements).
* **Pathfinding Logic:** Employing the **Flood Fill algorithm** (or equivalent) to guarantee that all collectibles and the exit are **reachable** from the player's starting position, preventing unsolvable maps.
* **Event-Driven Programming:** Handling graphic events such as window initialization, keyboard inputs (W, A, S, D, ESC), and window close events.
* **2D Rendering:** Loading and rendering complex textures (sprites) efficiently onto the game window using the basic graphic context provided by MiniLibX.

---

## 🧱 Tech Stack & Tools

| Category | Technology | Description |
| :--- | :--- | :--- |
| **Primary Language** | **C** (C99) | The core language used for all game logic and rendering functions. |
| **Graphics Library** | **MiniLibX** | A lightweight graphical interface wrapper for X-Window/macOS used for window management and rendering. |
| **Dependencies** | **Custom Libft/GNL** | Utilizing 42's essential utility libraries (`libft`) and the `get_next_line` function for reliable map file reading. |
| **Build System** | **Makefile (gcc)** | Standardized script for compilation, linking, and project cleaning. |
| **Operating System** | **macOS / Linux** | The required environment for MiniLibX compatibility. |
| **Quality Assurance** | **Valgrind** | Used for debugging and checking for memory leaks and memory management errors. |

---

## 🕹️ Game Features

1.  **Custom Map Input:** Loads game levels from external `.ber` text files.
2.  **Win/Loss Conditions:** The game is won only after all collectibles are gathered and the player reaches the exit tile.
3.  **Real-time Move Counter:** Displays the total number of moves taken by the player directly on the game window or to the console.
4.  **Solid Collision:** Implements a collision system to prevent the player from passing through wall tiles (`'1'`).
5.  **Clean Exit:** Supports graceful program termination via the `ESC` key or closing the window, ensuring no memory leaks.

---

## 🚀 Installation & Usage

### Prerequisites

* A C compiler (e.g., **GCC** or **Clang**).
* The **MiniLibX** library (must be configured on your system, typical for 42 environments).

### Building the Game

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/Mabelzzz/42bangkok_SoLong.git](https://github.com/Mabelzzz/42bangkok_SoLong.git)
    cd 42bangkok_SoLong
    ```
2.  **Compile the source code:**
    ```bash
    make
    ```
    This command will create the executable file named `so_long`.

### Running the Game

Run the executable and provide a valid map file (`.ber`) as the first argument:

```bash
./so_long maps/map1.ber
