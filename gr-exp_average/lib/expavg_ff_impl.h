/* -*- c++ -*- */
/* 
 * Copyright 2014 Mitul Vekariya <vekariya93@gmail.com>.
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

#ifndef INCLUDED_EXP_AVERAGE_EXPAVG_FF_IMPL_H
#define INCLUDED_EXP_AVERAGE_EXPAVG_FF_IMPL_H

#include <exp_average/expavg_ff.h>

namespace gr {
  namespace exp_average {

    class expavg_ff_impl : public expavg_ff
    {
     private:
      // Nothing to declare in this block.
     protected:
     float d_alpha;
     float d_last_value;

     public:
      expavg_ff_impl(float alpha);
      ~expavg_ff_impl();
      virtual void set_taps(float alpha);

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace exp_average
} // namespace gr

#endif /* INCLUDED_EXP_AVERAGE_EXPAVG_FF_IMPL_H */

