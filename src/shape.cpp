
#include "chipmunkpp/shape.hpp"
#include "chipmunkpp/body.hpp"



namespace cp
{
    Shape::Shape(Body& body, std::vector<cpVect> vertices, cpFloat radius)
    {
        handle = cpPolyShapeNewRaw(body.getHandle(), vertices.size(), vertices.data(), radius);
    }

    Shape::Shape(Body& body, cpFloat radius, cpVect offset)
    {
        handle = cpCircleShapeNew(body.getHandle(), radius, offset);
    }

    Shape::~Shape()
    {
        cpShapeFree(handle);
    }

/*

    static cpShapeFilter Shape::filterNew(cpBitmask categories, cpBitmask mask)
    {
        return(cpShapeFilterNew(cpGroup group, categories, mask));
    }

    void Shape::destroy()
    {
        cpShapeDestroy(handle);
    }

    void Shape::free()
    {
        cpShapeFree(handle);
    }

    cpBB Shape::cacheBoundBox()
    {
        return(cpShapeCacheBB(handle));
    }

    cpBB Shape::update(cpTransform transform)
    {
        return(cpShapeUpdate(handle, transform));
    }

    cpFloat Shape::pointQuery(cpVect point, cpPointQueryInfo* pointQueryInfo)
    {
        return(cpShapePointQuery(handle, point, pointQueryInfo));
    }

    cpBool Shape::segmentQuery(cpVect pointA, cpVect pointB, cpFloat radius, cpSegmentQueryInfo* segmentQueryInfo)
    {
        return(cpShapeSegmentQuery(handle, pointA, pointB, radius, segmentQueryInfo));
    }

    cpContactPointSet Shape::collide(Shape& shape)
    {
        return(cpShapesCollide(handle, shape.getHandle()));
    }

    cpSpace* Shape::getSpace()
    {
        return(cpShapeGetSpace(handle));
    }

    cpBody* Shape::getBody()
    {
        return(cpShapeGetBody(handle));
    }

    void Shape::setBody(Body& body)
    {
        cpShapeSetBody(handle, body.getHandle());
    }

    cpFloat Shape::getMass()
    {
        return(cpShapeGetMass(handle));
    }

    void Shape::setMass(cpFloat mass)
    {
        cpShapeSetMass(handle, mass);
    }

    cpFloat Shape::getDensity()
    {
        return(cpShapeGetDensity(handle));
    }

    void Shape::setDensity(cpFloat density)
    {
        cpShapeSetDensity(handle, density);
    }

    cpFloat Shape::getMoment()
    {
        return(cpShapeGetMoment(handle));
    }

    cpFloat Shape::getArea()
    {
        return(cpShapeGetArea(handle));
    }

    cpVect Shape::getCenterOfGravity()
    {
        return(cpShapeGetCenterOfGravity(handle));
    }

    cpBB Shape::getBoundBox()
    {
        return(cpShapeGetBB(handle));
    }

    cpBool Shape::getSensor()
    {
        return(cpShapeGetSensor(handle));
    }

    void Shape::setSensor(cpBool sensor)
    {
        cpShapeSetSensor(handle, sensor);
    }

    cpFloat Shape::getElasticity()
    {
        return(cpShapeGetElasticity(handle));
    }

    void Shape::setElasticity(cpFloat elasticity)
    {
        cpShapeSetElasticity(handle, elasticity);
    }

    cpFloat Shape::getFriction()
    {
        return(cpShapeGetFriction(handle));
    }

    void Shape::setFriction(cpFloat friction)
    {
        cpShapeSetFriction(handle, friction);
    }

    cpVect Shape::getSurfaceVelocity()
    {
        return(cpShapeGetSurfaceVelocity(handle));
    }

    void Shape::setSurfaceVelocity(cpVect surfaceVelocity)
    {
        cpShapeSetSurfaceVelocity(handle, surfaceVelocity);
    }

    cpDataPointer Shape::getUserData()
    {
        return(cpShapeGetUserData(handle));
    }

    void Shape::setUserData(cpDataPointer userdata)
    {
        cpShapeSetUserData(handle, userData);
    }

    cpCollisionType Shape::getCollisionType()
    {
        return(cpShapeGetCollisionType(handle));
    }

    void Shape::setCollisionType(cpCollisionType collisionType)
    {
        cpShapeSetCollisionType(handle, collisionType);
    }

    cpShapeFilter Shape::getFilter()
    {
        return(cpShapeGetFilter(handle));
    }

    void Shape::setFilter(cpShapeFilter filter)
    {
        cpShapeSetFilter(handle, filter);
    }
*/
    cpShape* Shape::getHandle()
    {
        return(handle);
    }
}
