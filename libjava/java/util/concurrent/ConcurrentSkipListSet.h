
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ConcurrentSkipListSet__
#define __java_util_concurrent_ConcurrentSkipListSet__

#pragma interface

#include <java/util/AbstractSet.h>
extern "Java"
{
  namespace sun
  {
    namespace misc
    {
        class Unsafe;
    }
  }
}

class java::util::concurrent::ConcurrentSkipListSet : public ::java::util::AbstractSet
{

public:
  ConcurrentSkipListSet();
  ConcurrentSkipListSet(::java::util::Comparator *);
  ConcurrentSkipListSet(::java::util::Collection *);
  ConcurrentSkipListSet(::java::util::SortedSet *);
public: // actually package-private
  ConcurrentSkipListSet(::java::util::concurrent::ConcurrentNavigableMap *);
public:
  virtual ::java::util::concurrent::ConcurrentSkipListSet * ConcurrentSkipListSet$clone();
  virtual jint size();
  virtual jboolean isEmpty();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean add(::java::lang::Object *);
  virtual jboolean remove(::java::lang::Object *);
  virtual void clear();
  virtual ::java::util::Iterator * iterator();
  virtual ::java::util::Iterator * descendingIterator();
  virtual jboolean equals(::java::lang::Object *);
  virtual jboolean removeAll(::java::util::Collection *);
  virtual ::java::lang::Object * lower(::java::lang::Object *);
  virtual ::java::lang::Object * floor(::java::lang::Object *);
  virtual ::java::lang::Object * ceiling(::java::lang::Object *);
  virtual ::java::lang::Object * higher(::java::lang::Object *);
  virtual ::java::lang::Object * pollFirst();
  virtual ::java::lang::Object * pollLast();
  virtual ::java::util::Comparator * comparator();
  virtual ::java::lang::Object * first();
  virtual ::java::lang::Object * last();
  virtual ::java::util::NavigableSet * subSet(::java::lang::Object *, jboolean, ::java::lang::Object *, jboolean);
  virtual ::java::util::NavigableSet * headSet(::java::lang::Object *, jboolean);
  virtual ::java::util::NavigableSet * tailSet(::java::lang::Object *, jboolean);
  virtual ::java::util::NavigableSet * ConcurrentSkipListSet$subSet(::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::util::NavigableSet * ConcurrentSkipListSet$headSet(::java::lang::Object *);
  virtual ::java::util::NavigableSet * ConcurrentSkipListSet$tailSet(::java::lang::Object *);
  virtual ::java::util::NavigableSet * descendingSet();
private:
  void setMap(::java::util::concurrent::ConcurrentNavigableMap *);
public:
  virtual ::java::lang::Object * clone();
  virtual ::java::util::SortedSet * subSet(::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::util::SortedSet * tailSet(::java::lang::Object *);
  virtual ::java::util::SortedSet * headSet(::java::lang::Object *);
private:
  static const jlong serialVersionUID = -2479143111061671589LL;
  ::java::util::concurrent::ConcurrentNavigableMap * __attribute__((aligned(__alignof__( ::java::util::AbstractSet)))) m;
  static ::sun::misc::Unsafe * unsafe;
  static jlong mapOffset;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_ConcurrentSkipListSet__
