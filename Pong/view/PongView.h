#include "../model/model_headers/PongTable.h"
#ifndef PongView_H
#define PongView_H

class PongView{
	pongModel::PongTable model;
	
	public:
		PongView(const pongModel::PongTable &model);
		
		void initGLUT();
		
		void setModel(const pongModel::PongTable &model);
};
#endif