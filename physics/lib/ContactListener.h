#ifndef PHYSICS_LIB_LISTENER_H
#define PHYSICS_LIB_LISTENER_H

class Listener: public b2ContactListener{
 public:
   Listener();
  // Callbacks for derived classes.
  virtual void BeginContact(b2Contact* contact);
  virtual void EndContact(b2Contact* contact);
  //virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold);
  virtual void PostSolve(const b2Contact* contact, const b2ContactImpulse* impulse);
};

#endif /* PHYSICS_LIB_LISTENER */