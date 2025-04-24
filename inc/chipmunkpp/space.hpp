
#ifndef __CPPP_SPACE_HPP_INCLUDED__
#define __CPPP_SPACE_HPP_INCLUDED__

#include "chipmunk/chipmunk.h"

namespace cp
{
    class Body;
    class Shape;

    class Space
    {
    public:

        Space();
        ~Space();

        void add(Body& body);
        void add(Shape& shape);

        void setGravity(cpVect gravity);
        cpVect getGravity();
        void setIterations(int iterations);
        int getIterations();
        void setIdleSpeedThreshold(cpFloat idleSpeedThreshold);
        cpFloat getIdleSpeedThreshold();
        void setSleepTimeThreshold(cpFloat sleepTimeThreshold);
        cpFloat getSleepTimeThreshold();
/*
    void setGravity(cpVect gravity);
    cpVect getGravity();
    void setIterations(int iterations);
    int getIterations();
    void setIdleSpeedThreshold(cpFloat idleSpeedThreshold);
    cpFloat getIdleSpeedThreshold();
    void setSleepTimeThreshold(cpFloat sleepTimeThreshold);
    cpFloat getSleepTimeThreshold();
    cpFloat getDamping();
    cpFloat getCollisionSlop();
    cpFloat getCollisionBias();
    cpTimestamp getCollisionPersistence();
    cpDataPointer getUserData();
    Body getStaticBody();
    cpFloat getCurrentTimeStep();
    cpBool isLocked();
    cpCollisionHandler* addDefaultCollisionHandler();
    cpCollisionHandler* addCollisionHandler(cpCollisionType collisionTypeA, cpCollisionType collisionTypeB);
    cpCollisionHandler* addWildcardHandler(cpCollisionType collisionType);
    cpShape* addShape(Shape& shape);
    Body addBody(Body& body);
    Constraint addConstraint(Constraint& constraint);
    void removeShape(Shape& shape);
    void removeBody(Body& body);
    void removeConstraint(Constraint& constraint);
    cpBool containsShape(Shape& shape);
    cpBool containsBody(Body& body);
    cpBool constainsConstraint(Constraint& constraint);
    cpBool addPostStepCallback(cpPostStepFunc function, void* key, void* data);
    void pointQuery(cpVect point, cpFloat maxDistance, cpShapeFilter filter, cpSpacePointQueryFunc function, void* data);
    Shape pointQueryNearest(cpVect point, cpFloat maxDistance, cpShapeFilter filter, cpPointQueryInfo* out);
    void segmentQuery(cpVect start, cpVect end, cpFloat radius, cpShapeFilter filter, cpSpaceSegmentQueryFunc function, void* data);
    Shape segmentQueryFirst(cpVect start, cpVect end, cpFloat radius, cpShapeFilter filter, cpSegmentQueryInfo* out);
    void boundingBoxQuery(cpBB boundingBox, cpShapeFilter filter, cpSpaceBBQueryFunc function, void* data);
    cpBool shapeQuery(Shape& shape, cpSpaceShapeQueryFunc function, void* data);
    void eachBody(cpSpaceBodyIteratorFunc function, void* data);
    void eachShape(cpSpaceShapeIteratorFunc function, void* data);
    void eachConstraint(cpSpaceConstraintIteratorFunc function, void* data);
    void reindexStatic();
    void reindexShape(Shape& shape);
    void reindexShapesForBody(Body& body);
    void useSpatialHash(cpFloat dimension, int count);
    void step(cpFloat deltaTime);
    void debugDraw(cpSpaceDebugDrawOptions* options);
    void step();
    void add(cpBody* bodyPointer);
    void add(cpShape* shapePointer);
    void add(cpConstraint* constraintPointer);
    cpBool contains(cpBody* bodyPointer);
    cpBool contains(cpShape* shapePointer);
    cpBool contains(cpConstraint* constraintPointer);
    void remove(cpBody* bodyPointer);
    void remove(cpShape* shapePointer);
    void remove(cpConstraint* constraintPointer);
    void setGravity(float gravity);
        */
    private:
        cpSpace* handle;
    };

}

#endif
