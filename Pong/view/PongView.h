#ifndef PongView_H
#define PongView_H

class PongView{
	pongModel::PongTable model;
	
	public:
		PongView(const pongModel::PongTable::PongTable &model);
		
		void initGLUT();
		
		void SetModel(const pongModel::PongTable::PongTable &model);
}
#endif