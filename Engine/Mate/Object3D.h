#ifndef OBJECT3D_H
#define OBJECT3D_H

#include <gl/freeglut.h>
#include "../Mate/Vector3D.h"
#include "../Mate/Vector4D.h"

#define MAXIMUM_LOD 10

class Object3D {


private:


protected:
	Vector3D translation;
	Vector3D rotation;
	Vector3D scale;
	Vector3D color;

	float levelOfDetail;


public:

	Object3D();
	Object3D(Vector3D *);
	Object3D(Vector3D *, Vector3D *, Vector3D *);

	void virtual Draw();

	
	void SetPosition(Vector3D *);
	void SetRotation(Vector3D *);
	void Steer(float degrees);
	void SetScale(Vector3D *);
	void SetColor(Vector3D *);
	void SetLevelOfDetail(float);

	Vector3D GetRotation();
	Vector3D GetScale();
	Vector3D GetPosition();
	float GetLevelOfDetail();

protected:
	void virtual customDraw();
	void defaultSettings();

};

#endif
