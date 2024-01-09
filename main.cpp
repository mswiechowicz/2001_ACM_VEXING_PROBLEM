#include <iostream>
#include <list>
#include <vector>

struct Board {
    int rows{};
    int cols{};
    std::string name;
    std::vector<std::string> data;
};

Board readBoard() {
    Board board;
    std::cin >> board.rows >> board.cols >> board.name;

    board.data.resize(board.rows);
    for (int i = 0; i < board.rows; ++i) {
        std::cin >> board.data[i];
    }

    return board;
}

int main() {
    std::vector<Board> boards;

    while (true) {
        Board board = readBoard();

        if (board.rows == 0 && board.cols == 0) {
            break;
        }

        boards.push_back(board);
    }

    std::cout << std::endl;
    for (const Board& board : boards) {
        std::cout << board.name << " (" << board.rows << " x " << board.cols << ") " << std::endl;

        for(const std::string& row: board.data) {
            std::cout << row << std::endl;
        }
    }

    return 0;
}

//4 5 SAMPLE-01
//#A--#
//##-B#
//#AB##
//#####
//6 7 SAMPLE-02
//#--Y--#
//#-ZX-X#
//#-##-##
//#-XZ--#
//####YZ#
//#######
//0 0 END