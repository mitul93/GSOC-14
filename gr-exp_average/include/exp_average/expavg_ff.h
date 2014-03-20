/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_EXP_AVERAGE_EXPAVG_FF_H
#define INCLUDED_EXP_AVERAGE_EXPAVG_FF_H

#include <exp_average/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace exp_average {

    /*!
     * \brief <+description of block+>
     * \ingroup exp_average
     *
     */
    class EXP_AVERAGE_API expavg_ff : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<expavg_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of exp_average::expavg_ff.
       *
       * To avoid accidental use of raw pointers, exp_average::expavg_ff's
       * constructor is in a private implementation
       * class. exp_average::expavg_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make(float alpha);
    };

  } // namespace exp_average
} // namespace gr

#endif /* INCLUDED_EXP_AVERAGE_EXPAVG_FF_H */

