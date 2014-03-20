#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# Copyright 2014 Mitul Vekariya <vekariya93@gmail.com>.
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
import exp_average
import matplotlib.pyplot as plt

class example_expavg (gr.top_block):
    def __init__(self):
	gr.top_block.__init__(self)
    
        src_data = (100, 1000, 2000, 200, 3000, 5000)
	self.src = blocks.vector_source_f(src_data)
	self.expo = exp_average.expavg_ff(0.125)
	self.dst = blocks.vector_sink_f()
	self.connect(self.src,self.expo)
	self.connect(self.expo,self.dst)

if __name__ == '__main__':
	
    	tb1 = example_expavg()
	try:
		tb1.run()
		result_data = tb1.dst.data()
		print result_data
	except KeyboardInterrupt:
		pass

