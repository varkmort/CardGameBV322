#pragma once

#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>


#include "Rules.h"
#include "Player.h"
#include "GameDesk.h"

class Game {
public:

	std::vector<std::string> PlayerType();
	std::vector<std::string> GameType();

	void Init();
	//����� �� ��������� ��������� ������� � ����������� �������
	void Add(std::string playerType, std::string name);
	void Set(std::string gameType);

	//��� ��������� ������ ������ ��������
	std::vector<std::pair<std::string, std::string>> CurrentPlayers();

	void ChangeName(std::string newName, int position);

	void Play();

	const GameDesk& CurrentEnvirement()const;

private:
	GameDesk desk_;
	Rules *rules_;
};


#endif // !GAME_H
