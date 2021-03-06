/// Poset.h
/// Shaun Harker
/// 2015-05-15

#ifndef DSGRN_POSET_H
#define DSGRN_POSET_H

#include "common.h"

#include "Graph/Digraph.h"

/// class Poset
class Poset : public Digraph {
public:
  /// reduction
  ///   Perform a transitive reduction
  ///   (i.e. use Hasse diagram representation)
  void
  reduction ( void );
private:
  /// serialize
  ///   For use with BOOST Serialization library,
  ///   which is used by the cluster-delegator MPI package
  friend class boost::serialization::access;
  template<class Archive>
  void serialize(Archive & ar, const unsigned int version) {
    ar & boost::serialization::base_object<Digraph>(*this);
  }
};

#endif
