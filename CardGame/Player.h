#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Deck.h"
#include "Controller.h"
#include "Action.h"
#include "GameDesk.h"


class iViewPlayer {
public:
	virtual std::string GetName()const=0;
	virtual int CurrentCards()const=0;
};

class Player:public iViewPlayer {
public:

	Player();
	
	Action Action(std::vector<Action> &actions, const iViewerDesk & env) {
		//return controller_->Action(actions, env);
	}

	void SetName(std::string name);
	std::string GetName()const;

	void Taik(Card obj);
	int CurrentCards()const;

private:
	std::string name_;
	Deck hand_;
	Controller controller_;
};

#endif // !PLAYER_H