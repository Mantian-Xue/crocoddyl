#include "crocoddyl/core/state-base.hpp"

namespace crocoddyl {

StateAbstract::StateAbstract(const unsigned int& nx, const unsigned int& ndx) : nx_(nx), ndx_(ndx) {
  nv_ = ndx / 2;
  nq_ = nx_ - nv_;
}

StateAbstract::~StateAbstract() {}

const unsigned int& StateAbstract::get_nx() const { return nx_; }

const unsigned int& StateAbstract::get_ndx() const { return ndx_; }

const unsigned int& StateAbstract::get_nq() const { return nq_; }

const unsigned int& StateAbstract::get_nv() const { return nv_; }

}  // namespace crocoddyl