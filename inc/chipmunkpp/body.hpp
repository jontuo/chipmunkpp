
#ifndef __CPPP_BODY_HPP_INCLUDED__
#define __CPPP_BODY_HPP_INCLUDED__

#include "chipmunk/chipmunk.h"



namespace cp
{

    class Body
    {
    public:

        enum class Type
        {
            DYNAMIC = CP_BODY_TYPE_DYNAMIC,
            KINEMATIC = CP_BODY_TYPE_KINEMATIC,
            STATIC = CP_BODY_TYPE_STATIC
        };

        Body();
        Body(double mass, double moment);
        ~Body();
        Body(Body&& body);
        Body& operator=(Body&& body);

        

        cpBody* getHandle();

/*
        void activate();
        void activateStatic(Shape& filter);

        void sleep();
        void sleepWithGroup(Body& group);
        cpBool isSleeping();

        Type getType();
        void setType(Type type);

        cpFloat getMass();
        void setMass(cpFloat mass);
        cpFloat getMoment();
        void setMoment(cpFloat moment);

        cpVect getPosition();
        void setPosition(cpVect position);

        cpVect getCenterOfGravity();
        void setCenterOfGravity(cpVect centerOfGravity);

        cpVect getVelocity();
        void setVelocity(cpVect velocity);

        cpVect getForce();
        void setForce(cpVect force);

        cpFloat getAngle();
        void setAngle(cpFloat angle);

        cpFloat getAngularVelocity();
        void setAngularVelocity(cpFloat angularVelocity);

        cpFloat getTorque();
        void setTorque(cpFloat torque);

        cpVect getRotation();

        cpDataPointer getUserData();
        void setUserData(cpDataPointer userData);

        void setVelocityUpdateFunction(cpBodyVelocityFunc velocityFunction);
        void setPositionUpdateFunction();
        void updateVelocity(cpVect gravity, cpFloat damping, cpFloat deltaTime);
        void updatePosition(cpFloat deltaTime);

        cpVect localToWorld(const cpVect point);
        cpVect worldToLocal(const cpVect point);

        void applyForceAtWorldPoint(cpVect force, cpVect point);
        void applyForceAtLocalPoint(cpVect force, cpVect point);

        void applyImpulseAtWorldPoint(cpVect impulse, cpVect point);
        void applyImpulseAtLocalPoint(cpVect impulse, cpVect point);

        cpVect getVelocityAtWorldPoint(cpVect point);
        cpVect getVelocityAtLocalPoint(cpVect point);

        cpFloat kineticEnergy();

        void eachShape(cpBodyShapeIteratorFunc function, void *data);
        void eachConstraint(cpBodyConstraintIteratorFunc function, void *data);
        void eachArbiter(cpBodyArbiterIteratorFunc function, void *data);
*/
        
    private:
        cpBody* handle;
        bool owner;
    };

}

#endif
