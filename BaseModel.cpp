// +------------------------------------------------------------+
// |                      University Racer                      |
// |         Projekt do PGR a GMU, FIT VUT v Brne, 2011         |
// +------------------------------------------------------------+
// |  Autori:  Tom� Kimer,  xkimer00@stud.fit.vutbr.cz         |
// |           Tom� Sychra, xsychr03@stud.fit.vutbr.cz         |
// |           David �abata, xsabat01@stud.fit.vutbr.cz         |
// +------------------------------------------------------------+

#include "BaseModel.h"
#include <iostream>
#include <string>

#ifdef _DEBUG
	#define new MYDEBUG_NEW
#endif

using namespace std;



BaseModel::~BaseModel() 
{
	// uvolnit z pameti vsechny meshe
	for (vector<Mesh*>::iterator it = meshes.begin(); it != meshes.end(); it++)
	{
		delete (*it);
	}
}



void BaseModel::setMeshes(vector<Mesh*> meshes)
{
	this->meshes = meshes;

	vertexCount = 0;
	faceCount = 0;

	// spocitat vrcholy a facy
	for (vector<Mesh*>::iterator it = meshes.begin(); it != meshes.end(); it++)
	{
		vertexCount += (*it)->getVertices().size();
		faceCount += (*it)->getFaces().size();
	}
}



vector<Mesh*> &BaseModel::getMeshes()
{
	return meshes;
}
