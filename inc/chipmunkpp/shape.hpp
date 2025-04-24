
#ifndef __CPPP_SHAPE_HPP_INCLUDED__
#define __CPPP_SHAPE_HPP_INCLUDED__

#include "chipmunk/chipmunk.h"
#include "chipmunk/chipmunk_structs.h"
#include <vector>


namespace cp
{
    class Body;

    enum Type
    {
        CIRCLE = CP_CIRCLE_SHAPE,
        SEGMENT = CP_SEGMENT_SHAPE,
        POLYGON = CP_POLY_SHAPE
    };

    class Shape
    {
    public:



        Shape(Body& body, std::vector<cpVect> vertices, cpFloat radius);
        Shape(Body& body, cpFloat radius, cpVect offset);
        ~Shape();





/*
    static cpShapeFilter filterNew(cpBitmask categories, cpBitmask mask)
    void destroy()
    void free()
    cpBB cacheBoundBox()
    cpBB update(cpTransform transform)
    cpFloat pointQuery(cpVect point, cpPointQueryInfo* pointQueryInfo)
    cpBool segmentQuery(cpVect pointA, cpVect pointB, cpFloat radius, cpSegmentQueryInfo* segmentQueryInfo)
    cpContactPointSet collide(Shape& shape)
    cpSpace* getSpace()
    cpBody* getBody()
    void setBody(Body& body)
    cpFloat getMass()
    void setMass(cpFloat mass)
    cpFloat getDensity()
    void setDensity(cpFloat density)
    cpFloat getMoment()
    cpFloat getArea()
    cpVect getCenterOfGravity()
    cpBB getBoundBox()
    cpBool getSensor()
    void setSensor(cpBool sensor)
    cpFloat getElasticity()
    void setElasticity(cpFloat elasticity)
    cpFloat getFriction()
    void setFriction(cpFloat friction)
    cpVect getSurfaceVelocity()
    void setSurfaceVelocity(cpVect surfaceVelocity)
    cpDataPointer getUserData()
    void setUserData(cpDataPointer userdata)
    cpCollisionType getCollisionType()
    void setCollisionType(cpCollisionType collisionType)
    cpShapeFilter getFilter()
    void setFilter(cpShapeFilter filter)*/

    cpShape* getHandle();
        
    private:
        cpShape* handle;
    };

}

#endif
