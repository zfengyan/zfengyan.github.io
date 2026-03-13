
### Improved Prompt

Hi, I am learning the board game **Go (围棋)**. A short introduction can be found here:
[https://en.wikipedia.org/wiki/Go_(game)](https://en.wikipedia.org/wiki/Go_%28game%29)

In Go, the board is a **19×19 grid**, and players place **black and white stones alternately** on the grid intersections.

I have created a new page called **`@blog-Go.html`**, I already have added some basic skeletons, and I want to implement a simple **Go board setup tool** with the following features:

#### 1. Board Rendering

* Display a **19×19 Go board grid**.
* Stones are placed on **grid intersections**, not inside the squares.
* The board should visually resemble a standard Go board.

#### 2. Stone Placement

* Next to the board, provide a **selection control** that allows the user to choose:

  * Black stone
  * White stone
* After selecting a stone color, the user should be able to **click on any intersection of the grid to place a stone**.
* Optional but helpful: clicking an occupied intersection could either **do nothing or remove the stone**.

#### 3. Export Function

Below the board setup, include a **button to export the current board state**.

The export should include:

* The **grid**
* All **placed black and white stones**
* The **exact current layout**

Supported export formats:

* **SVG (preferred, because it keeps the file small and scalable)**
* **PNG**
* **WEBP**

Requirements for export:

* The image should be **clear enough for insertion into documents**.
* The **file size should be as small as reasonably possible**.
* The exported image should preserve **sharp lines and readable stones**.

#### 4. Technical Preferences

If possible:

* Use **SVG rendering** for the board and stones.
* Maintain an internal **data structure storing the board state** (e.g., coordinates and stone color).
* Generate the export image **directly from the current board state**.
* Avoid complex code, use clear and readable code.

#### 5. Goal

The goal is to allow users to **quickly create Go board diagrams** and export them as **small, high-quality images suitable for documents**.
