#pragma once


#ifndef FOOL_H
#define FOOL_h

#include "Rules.h"



class Fool :public Rules {
public:
	void PlayMove(const GameDesk& obj) override {
		auto &current = obj.PlayerN(this->activePlayer);
		Action act = current.Action(
			obj, 
			this->Actions()
			);
		if (this->IsPossible(act, obj)) {
			//������ ��������
		}
	}
};



#endif // !FOOL_H
