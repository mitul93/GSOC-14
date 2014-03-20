/* -*- c++ -*- */

#define EXP_AVERAGE_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "exp_average_swig_doc.i"

%{
#include "exp_average/expavg_ff.h"
%}


%include "exp_average/expavg_ff.h"
GR_SWIG_BLOCK_MAGIC2(exp_average, expavg_ff);
