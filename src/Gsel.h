/* Copyright (C) 2016-2018, Stanford University
 * This file is part of MESH
 * Written by Kaifeng Chen (kfchen@stanford.edu)
 *
 * MESH is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MESH is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _GSEL_H
#define _GSEL_H

#include "Rcwa.h"
#include "Common.h"
#include "Sort.h"
#include <cmath>

namespace GSEL{
  using RCWA::RCWArMatrix;
  using RCWA::RCWAcMatrix;

  void getGMatrices(
    int& nG,
    const Lattice& lattice,
    RCWArMatrix& Gx_mat,
    RCWArMatrix& Gy_mat,
    const DIMENSION d,
    const TRUNCATION truncation
  );
}
#endif