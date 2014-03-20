###Google Summer of Code - 2014
------------------------------------

This repo contains my proposal for GNU Radio project **"Vector Network Analyzer"** for google summer of code 2014.


###Files and Directories
---------------------------------------

* **gr-exp_average/**

  This directory contains GNU Radio OOT (Out-Of-Tree) module to perform exponential averaging. To know more about exponential averaging visit [Wikipedia](https://www.google.co.in/url?sa=t&rct=j&q=&esrc=s&source=web&cd=4&cad=rja&uact=8&ved=0CD4QFjAD&url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FExponential_smoothing&ei=k8IqU5ydIoWQrgel7YG4Bg&usg=AFQjCNFPVOagXDYTzgrCKGEAeaL9hVKNpg&bvm=bv.62922401,d.bmk)

* **VNA_GSOC14_proposal.docx**

  GSOC 14 proposal for VNA project in .docx format

* **VNA_GSOC14_proposal.pdf**

  GSOC 14 proposal for VNA project in .pdf format
  
### GNU Radio OOT module - *gr-exp_average*
---------------------------------------------

This module performs **exponential averaging** on the input data of type **float**.

To use this OOT, open the terminal and do the following:

1. git clone https://github.com/mitul93/GSOC-14
2. cd GSOC-14/gr-exp_average/build
5. cmake ../
6. make
7. make test
8. make install or sudo make install
9. cd ../examples
10. ./expavg_stock.py

After successful execution of all steps, you'll get plot like this. For more details of examples read [README](https://github.com/mitul93/GSOC-14/tree/master/gr-exp_average/examples) file in examples folder
  
![alt tag](https://github.com/mitul93/GSOC-14/blob/master/gr-exp_average/examples/expavg_stock.png?raw=true)

###Any doubt related to proposal?

* **E-mail address :** vekariya93@gmail.com or 10bec062@nirmauni.ac.in
* **IRC Nickname :** mitul93
