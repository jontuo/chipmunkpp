
#include "chipmunkpp/body.hpp"
#include <iostream>

namespace cp
{
    Body::Body(): owner(true)
    {
        std::cout << "ctor" << std::endl;
        //handle = cpBodyNew(0, 0);
    }

    Body::Body(double mass, double moment): owner(true)
    {
        //handle = cpBodyNew(mass, moment);
        std::cout << "ctor" << std::endl;
    }

    Body::~Body()
    {
        std::cout << "dtor" << std::endl;

        if(owner == true)
        {
            std::cout << "free" << std::endl;
            //cpBodyFree(handle);
        }
    }

    Body::Body(Body&& body):
        handle(body.handle),
        owner(true)
    {
        body.handle = nullptr;
        body.owner = false;
    }

    Body& Body::operator=(Body&& body)
    {
        handle = body.handle;
        owner = true;
        body.handle = nullptr;
        body.owner = false;
        return(*this);
    }






    cpBody* Body::getHandle()
    {
        return(handle);
    }

/*
    cpBody* cpBodyAlloc(void);
    cpBody* cpBodyInit(cpBody *body, cpFloat mass, cpFloat moment);
    cpBody* cpBodyNew(cpFloat mass, cpFloat moment);
    cpBody* cpBodyNewKinematic(void);
    cpBody* cpBodyNewStatic(void);
    void cpBodyDestroy(cpBody *body);
    void cpBodyFree(cpBody *body);
*/


/*
    void Body::activate()
    {
        cpBodyActivate(handle);
    }

    void Body::activateStatic(Shape& filter)
    {
        cpBodyActivateStatic(handle, shape.getHandle());
    }

    void Body::sleep()
    {
        cpBodySleep(handle);
    }

    void Body::sleepWithGroup(Body& group)
    {
        cpBodySleepWithGroup(handle, group.getHandle());
    }

    cpBool Body::isSleeping()
    {
        cpBodyIsSleeping(handle);
    }

    cpBodyType Body::getType()
    {
        cpBodyGetType(handle);
    }

    void Body::setType(cpBodyType type)
    {
        cpBodySetType(handle, type);
    }

    cpSpace* Body::getSpace()
    {
        cpBodyGetSpace(handle);
    }

    cpFloat Body::getMass()
    {
        cpBodyGetMass(handle);
    }

    void Body::setMass(cpFloat mass)
    {
        cpBodySetMass(handle, mass);
    }

    cpFloat Body::getMoment()
    {
        cpBodyGetMoment(handle);
    }

    void Body::setMoment(cpFloat moment)
    {
        cpBodySetMoment(handle, moment);
    }

    cpVect Body::getPosition()
    {
        cpBodyGetPosition(handle);
    }

    void Body::setPosition(cpVect position)
    {
        cpBodySetPosition(handle, position);
    }

    cpVect Body::getCenterOfGravity()
    {
        cpBodyGetCenterOfGravity(handle);
    }

    void Body::setCenterOfGravity(cpVect centerOfGravity)
    {
        cpBodySetCenterOfGravity(handle, centerOfGravity);
    }

    cpVect Body::getVelocity()
    {
        cpBodyGetVelocity(handle);
    }

    void Body::setVelocity(cpVect velocity)
    {
        cpBodySetVelocity(handle, velocity);
    }

    cpVect Body::getForce()
    {
        cpBodyGetForce(handle);
    }

    void Body::setForce(cpVect force)
    {
        cpBodySetForce(handle, force);
    }

    cpFloat Body::getAngle()
    {
        cpBodyGetAngle(handle);
    }

    void Body::setAngle(cpFloat angle)
    {
        cpBodySetAngle(handle, angle);
    }

    cpFloat Body::getAngularVelocity()
    {
        cpBodyGetAngularVelocity(handle);
    }

    void Body::setAngularVelocity(cpFloat angularVelocity)
    {
        cpBodySetAngularVelocity(handle, angularVelocity);
    }

    cpFloat Body::getTorque()
    {
        cpBodyGetTorque(handle);
    }

    void Body::setTorque(cpFloat torque)
    {
        cpBodySetTorque(handle, torque);
    }

    cpVect Body::getRotation()
    {
        cpBodyGetRotation(handle);
    }

    cpDataPointer Body::getUserData()
    {
        cpBodyGetUserData(handle);
    }

    void Body::setUserData(cpDataPointer userData)
    {
        cpBodySetUserData(handle, userData);
    }

    void Body::setVelocityUpdateFunction(cpBodyVelocityFunc velocityFunction)
    {
        cpBodySetVelocityUpdateFunc(handle, velocityFunc);
    }

    void Body::setPositionUpdateFunction()
    {
        cpBodySetPositionUpdateFunc(handle, cpBodyPositionFunc positionFunction);
    }

    void Body::updateVelocity(cpVect gravity, cpFloat damping, cpFloat deltaTime)
    {
        cpBodyUpdateVelocity(handle, gravity, damping, deltaTime);
    }

    void Body::updatePosition(cpFloat deltaTime)
    {
        cpBodyUpdatePosition(handle, deltaTime);
    }

    cpVect Body::localToWorld(const cpVect point)
    {
        cpBodyLocalToWorld(handle, point);
    }

    cpVect Body::worldToLocal(const cpVect point)
    {
        cpBodyWorldToLocal(handle, point);
    }

    void Body::applyForceAtWorldPoint(cpVect force, cpVect point)
    {
        cpBodyApplyForceAtWorldPoint(handle, force, point);
    }

    void Body::applyForceAtLocalPoint(cpVect force, cpVect point)
    {
        cpBodyApplyForceAtLocalPoint(handle, force, point);
    }

    void Body::applyImpulseAtWorldPoint(cpVect impulse, cpVect point)
    {
        cpBodyApplyImpulseAtWorldPoint(handle, impulse, point);
    }

    void Body::applyImpulseAtLocalPoint(cpVect impulse, cpVect point)
    {
        cpBodyApplyImpulseAtLocalPoint(handle, impulse, point);
    }

    cpVect Body::getVelocityAtWorldPoint(cpVect point)
    {
        cpBodyGetVelocityAtWorldPoint(handle, point);
    }

    cpVect Body::getVelocityAtLocalPoint(cpVect point)
    {
        cpBodyGetVelocityAtLocalPoint(handle, point);
    }

    cpFloat Body::kineticEnergy()
    {
        cpBodyKineticEnergy(handle);
    }

    void Body::eachShape(cpBodyShapeIteratorFunc function, void *data)
    {
        cpBodyEachShape(handle, function, data);
    }

    void Body::eachConstraint(cpBodyConstraintIteratorFunc function, void *data)
    {
        cpBodyEachConstraint(handle, function, data);
    }

    void Body::eachArbiter(cpBodyArbiterIteratorFunc function, void *data)
    {
        cpBodyEachArbiter(handle, function, data);
    }
*/
    //cpBody* Body::getHandle()
    //{
    //    return(handle);
//



}
