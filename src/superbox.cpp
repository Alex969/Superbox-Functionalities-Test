#include "superbox.h"
#include <iostream>

SuperBox::SuperBox(float x, float y, float z)
{
    std::cout << "3 param cons called " << std::endl;
    moveTo(x, y, z);
    setMaterialColor(ofFloatColor(1.0, 0, 0));
    useTexture = false;
}

void SuperBox::moveTo(float x, float y, float z)
{
    xPos = x;
    yPos = y;
    zPos = z;
}

void SuperBox::setWidth(float w){
    box.setWidth(w);
}

void SuperBox::setHeight(float h){
    box.setHeight(h);
}

void SuperBox::setDepth(float d){
    box.setDepth(d);
}

void SuperBox::draw()
{
    ofPushMatrix();

    ofTranslate(xPos, yPos, zPos);

    ofRotateXDeg(xRot);

    if (useTexture){
        texture.getTexture().bind();
        box.draw();
        texture.getTexture().unbind();
    }
    else {
        material.begin();
        box.draw();
        material.end();
    }

    ofPopMatrix();
}

void SuperBox::rotateXDeg(float angle)
{
    xRot += angle;
}

void SuperBox::setMaterialColor(ofFloatColor col)
{
    material.setDiffuseColor(col);
    useTexture = false; // they just set the material color so
                        // assume they don't want to use the texture
}

void SuperBox::setTexture(ofImage tex)
{
    texture = tex;
    useTexture = true;// they just set the texture, so
                      // assume they want to use it!
}
