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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "expavg_ff_impl.h"

namespace gr {
  namespace exp_average {

    expavg_ff::sptr
    expavg_ff::make(float alpha)
    {
      return gnuradio::get_initial_sptr
        (new expavg_ff_impl(alpha));
    }

    /*
     * The private constructor
     */
    expavg_ff_impl::expavg_ff_impl(float alpha)
      : gr::sync_block("expavg_ff",
              gr::io_signature::make(1, 1, sizeof(float)),
              gr::io_signature::make(1, 1, sizeof(float)))
    {	set_taps(alpha);
    }

    /*
     * Our virtual destructor.
     */
    expavg_ff_impl::~expavg_ff_impl()
    {
    }
    
    void expavg_ff_impl::set_taps(float alpha)
    {
     d_alpha = alpha;
    }

    int
    expavg_ff_impl::work(int noutput_items,
			  gr_vector_const_void_star &input_items,
			  gr_vector_void_star &output_items)
    {
        const float *in = (const float *) input_items[0];
        float *out = (float *) output_items[0];
	d_last_value = in[0];
	for(int i=0; i<noutput_items; i++)
	{	
		out[i] = d_alpha*in[i] + (1-d_alpha)*d_last_value;
		d_last_value = out[i];
	}
        return noutput_items;
    }

  } /* namespace exp_average */
} /* namespace gr */

