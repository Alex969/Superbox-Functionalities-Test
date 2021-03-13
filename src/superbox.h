#ifndef SUPERBOX_H
#define SUPERBOX_H

#include "ofMain.h"

class SuperBox
{
public:
    SuperBox(float x, float y, float z);

    void draw();

    void moveTo(float x, float y, float z);

    void rotateXDeg(float angle);

    void setMaterialColor(ofFloatColor col);

    void setTexture(ofImage tex);

    void setWidth(float w);
    void setHeight(float h);
    void setDepth(float d);

private:
    float xPos;
    float yPos;
    float zPos;

    float xRot;

    bool useTexture;
    ofMaterial material;
    ofBoxPrimitive box;
    ofImage texture;

};

#endif // SUPERBOX_H
