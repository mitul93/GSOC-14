#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# Copyright 2014 <+YOU OR YOUR COMPANY+>.
# 
# This is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
# 
# This software is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this software; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.
# 

from gnuradio import gr, gr_unittest
from gnuradio import blocks
import exp_average_swig as exp_average

class qa_expavg_ff (gr_unittest.TestCase):

    def setUp (self):
        self.tb = gr.top_block ()

    def tearDown (self):
        self.tb = None

    def test_001_t (self):
        src_data = (100, 1000, 2000, 200, 3000, 5000)
	expected_result = (100, 212.5, 435.9375, 406.4453125, 730.6396484, 1264.309692)
	src = blocks.vector_source_f(src_data)
	expo = exp_average.expavg_ff(0.125)
	dst = blocks.vector_sink_f()
	self.tb.connect(src,expo)
	self.tb.connect(expo,dst)	
        self.tb.run()
	result_data = dst.data()
        self.assertFloatTuplesAlmostEqual(expected_result, result_data, 3)


if __name__ == '__main__':
    gr_unittest.run(qa_expavg_ff, "qa_expavg_ff.xml")
