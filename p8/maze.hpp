#pragma once

const int WIDTH = 6;
const int HEIGHT = 5;

struct Cell
{
    Cell();
    void Draw(int x, int y);
    bool left, top, right, bottom;
    bool visited;
};

class Maze
{
public:
    Maze();
    void RemoveWalls();
    void RemoveWallsR(int i, int j);
    void Draw();
    bool IsSafe(double x, double y, double r);

private:
    Cell cells[WIDTH][HEIGHT];
};

