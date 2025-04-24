
#include "chipmunkpp/space.hpp"
#include "chipmunkpp/body.hpp"
#include "chipmunkpp/shape.hpp"



namespace cp
{


    Space::Space()
    {
        handle = cpSpaceNew();
    }

    Space::~Space()
    {
        cpSpaceFree(handle);
    }

    void Space::add(Body& body)
    {
        cpSpaceAddBody(handle, body.getHandle());
    }

    void Space::add(Shape& shape)
    {
        cpSpaceAddShape(handle, shape.getHandle());
    }

    void Space::setGravity(cpVect gravity)
    {
        cpSpaceSetGravity(handle, gravity);
    }

    cpVect Space::getGravity()
    {
        return(cpSpaceGetGravity(handle));
    }

    void Space::setIterations(int iterations)
    {
        cpSpaceSetIterations(handle, iterations);
    }

    int Space::getIterations()
    {
        return(cpSpaceGetIterations(handle));
    }

    void Space::setIdleSpeedThreshold(cpFloat idleSpeedThreshold)
    {
        cpSpaceSetIdleSpeedThreshold(handle, idleSpeedThreshold);
    }

    cpFloat Space::getIdleSpeedThreshold()
    {
        return(cpSpaceGetIdleSpeedThreshold(handle));
    }

    void Space::setSleepTimeThreshold(cpFloat sleepTimeThreshold)
    {
        cpSpaceSetSleepTimeThreshold(handle, sleepTimeThreshold);
    }

    cpFloat Space::getSleepTimeThreshold()
    {
        return(cpSpaceGetSleepTimeThreshold(handle));
    }


/*
    void Space::setGravity(cpVect gravity)
    {
        cpSpaceSetGravity(handle, gravity);
    }

    cpVect Space::getGravity()
    {
        return(cpSpaceGetGravity(handle));
    }

    void Space::setIterations(int iterations)
    {
        cpSpaceSetIterations(handle, iterations);
    }

    int Space::getIterations()
    {
        return(cpSpaceGetIterations(handle));
    }

    void Space::setIdleSpeedThreshold(cpFloat idleSpeedThreshold)
    {
        cpSpaceSetIdleSpeedThreshold(handle, idleSpeedThreshold);
    }

    cpFloat Space::getIdleSpeedThreshold()
    {
        return(cpSpaceGetIdleSpeedThreshold(handle));
    }

    void Space::setSleepTimeThreshold(cpFloat sleepTimeThreshold)
    {
        cpSpaceSetSleepTimeThreshold(handle, sleepTimeThreshold);
    }

    cpFloat Space::getSleepTimeThreshold()
    {
        return(cpSpaceGetSleepTimeThreshold(handle));
    }








    cpFloat Space::getDamping()
    {
        return(cpSpaceGetDamping(handle));
    }

    cpFloat Space::getCollisionSlop()
    {
        return(cpSpaceGetCollisionSlop(handle));
    }

    cpFloat Space::getCollisionBias()
    {
        return(cpSpaceGetCollisionBias(handle));
    }

    cpTimestamp Space::getCollisionPersistence()
    {
        return(cpSpaceGetCollisionPersistence(handle));
    }

    cpDataPointer Space::getUserData()
    {
        return(cpSpaceGetUserData(handle));
    }

    Body Space::getStaticBody()
    {
        return(Body(cpSpaceGetStaticBody(handle)));
    }

    cpFloat Space::getCurrentTimeStep()
    {
        return(cpSpaceGetCurrentTimeStep(handle));
    }

    cpBool Space::isLocked()
    {
        return(cpSpaceIsLocked(handle));
    }

    cpCollisionHandler* Space::addDefaultCollisionHandler()
    {
        return(cpSpaceAddDefaultCollisionHandler(handle));
    }

    cpCollisionHandler* Space::addCollisionHandler(cpCollisionType collisionTypeA, cpCollisionType collisionTypeB)
    {
        return(cpSpaceAddCollisionHandler(handle, collisionTypeA, collisionTypeB));
    }

    cpCollisionHandler* Space::addWildcardHandler(cpCollisionType collisionType)
    {
        return(cpSpaceAddWildcardHandler(handle, collisionType));
    }

    cpShape* Space::addShape(Shape& shape)
    {
        return(cpSpaceAddShape(handle, shape.getHandle()));
    }

    Body Space::addBody(Body& body)
    {
        return(Body(cpSpaceAddBody(handle, body.getHandle())));
    }

    Constraint Space::addConstraint(Constraint& constraint)
    {
        return(Constraint(cpSpaceAddConstraint(handle, constraint.getHandle())));
    }

    void Space::removeShape(Shape& shape)
    {
        cpSpaceRemoveShape(handle, shape.getHandle());
    }

    void Space::removeBody(Body& body)
    {
        cpSpaceRemoveBody(handle, body.getHandle());
    }

    void Space::removeConstraint(Constraint& constraint)
    {
        cpSpaceRemoveConstraint(handle, constraint.getHandle());
    }

    cpBool Space::containsShape(Shape& shape)
    {
        return(cpSpaceContainsShape(handle, shape.getHandle()));
    }

    cpBool Space::containsBody(Body& body)
    {
        return(cpSpaceContainsBody(handle, body.getHandle()));
    }

    cpBool Space::constainsConstraint(Constraint& constraint)
    {
        return(cpSpaceContainsConstraint(handle, constraint.getHandle()));
    }

    cpBool Space::addPostStepCallback(cpPostStepFunc function, void* key, void* data)
    {
        return(cpSpaceAddPostStepCallback(handle, function, key, data));
    }

    void Space::pointQuery(cpVect point, cpFloat maxDistance, cpShapeFilter filter, cpSpacePointQueryFunc function, void* data)
    {
        cpSpacePointQuery(handle, point, maxDistance, filter, function, data);
    }

    Shape Space::pointQueryNearest(cpVect point, cpFloat maxDistance, cpShapeFilter filter, cpPointQueryInfo* out)
    {
        return(Shape(cpSpacePointQueryNearest(handle, point, maxDistance, cfilter, out)));
    }

    void Space::segmentQuery(cpVect start, cpVect end, cpFloat radius, cpShapeFilter filter, cpSpaceSegmentQueryFunc function, void* data)
    {
        cpSpaceSegmentQuery(handle, start, end, radius, filter, function, data);
    }

    Shape Space::segmentQueryFirst(cpVect start, cpVect end, cpFloat radius, cpShapeFilter filter, cpSegmentQueryInfo* out)
    {
        return(Shape(cpSpaceSegmentQueryFirst(handle, start, end, radius, filter, out)));
    }

    void Space::boundingBoxQuery(cpBB boundingBox, cpShapeFilter filter, cpSpaceBBQueryFunc function, void* data)
    {
        cpSpaceBBQuery(handle, boundingBox, filter, function, data);
    }

    cpBool Space::shapeQuery(Shape& shape, cpSpaceShapeQueryFunc function, void* data)
    {
        return(cpSpaceShapeQuery(handle, shape.getHandle(), function, data));
    }

    void Space::eachBody(cpSpaceBodyIteratorFunc function, void* data)
    {
        cpSpaceEachBody(handle, function, data);
    }

    void Space::eachShape(cpSpaceShapeIteratorFunc function, void* data)
    {
        cpSpaceEachShape(handle, function, data);
    }

    void Space::eachConstraint(cpSpaceConstraintIteratorFunc function, void* data)
    {
        cpSpaceEachConstraint(handle, function, data);
    }

    void Space::reindexStatic()
    {
        cpSpaceReindexStatic(handle);
    }

    void Space::reindexShape(Shape& shape)
    {
        cpSpaceReindexShape(handle, shape.getHandle());
    }

    void Space::reindexShapesForBody(Body& body)
    {
        cpSpaceReindexShapesForBody(handle, body.getHandle());
    }

    void Space::useSpatialHash(cpFloat dimension, int count)
    {
        cpSpaceUseSpatialHash(handle, dimension, count);
    }

    void Space::step(cpFloat deltaTime)
    {
        cpSpaceStep(handle, deltaTime);
    }

    void Space::debugDraw(cpSpaceDebugDrawOptions* options)
    {
        cpSpaceDebugDraw(handle, options);
    }
    */


    /*void Space::add(cpBody* bodyPointer)
    {
        //std::cout << "void Space::add(cpBody* bodyPointer)" << std::endl;
        cpSpaceAddBody(pointer, bodyPointer);
    }

    void Space::add(cpShape* shapePointer)
    {
        //std::cout << "void Space::add(cpShape* shapePointer)" << std::endl;
        cpSpaceAddShape(pointer, shapePointer);
    }

    void Space::add(cpConstraint* constraintPointer)
    {
        //std::cout << "void Space::add(cpConstraint* constraintPointer)" << std::endl;
        cpSpaceAddConstraint(pointer, constraintPointer);
    }

    cpBool Space::contains(cpBody* bodyPointer)
    {
        //std::cout << "cpBool Space::contains(cpBody* bodyPointer)" << std::endl;
        return(cpSpaceContainsBody(pointer, bodyPointer));
    }

    cpBool Space::contains(cpShape* shapePointer)
    {
        //std::cout << "cpBool Space::contains(cpShape* shapePointer)" << std::endl;
        return(cpSpaceContainsShape(pointer, shapePointer));
    }

    cpBool Space::contains(cpConstraint* constraintPointer)
    {
        //std::cout << "cpBool Space::contains(cpConstraint* constraintPointer)" << std::endl;
        return(cpSpaceContainsConstraint(pointer, constraintPointer));
    }

    void Space::remove(cpBody* bodyPointer)
    {
        //std::cout << "void Space::remove(cpBody* bodyPointer)" << std::endl;
        cpSpaceRemoveBody(pointer, bodyPointer);
    }

    void Space::remove(cpShape* shapePointer)
    {
        //std::cout << "void Space::remove(cpShape* shapePointer)" << std::endl;
        cpSpaceRemoveShape(pointer, shapePointer);
    }

    void Space::remove(cpConstraint* constraintPointer)
    {
        //std::cout << "void Space::remove(cpConstraint* constraintPointer)" << std::endl;
        cpSpaceRemoveConstraint(pointer, constraintPointer);
    }*/

    
}
