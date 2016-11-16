# julia
simple julia set generator

This is a simple C++ code to generate Julia sets of quadratic
functions such as f(z) = z^2 + c. The algorithm used is the "backwards
iteration algorithm" with each root weighted equally.  You should know
that this algorithm often misses a good portion of the Julia set. I
have also implemented the "modified inverse iteration method" (see
repository julia-miim). Both algorithms are described in:

<pre>
Heinz-Otto Peitgen, Dietmar Saupe, eds., The Science of Fractal Images
Springer-Verlag, New York, 1988. pp. 178
ISBN 0-387-96608-0
</pre>

Assuming you have `git` and `g++` the GNU C++ compiler installed on
your system, you can download, compile and run the program with:

```
$ git clone https://github.com/jasonu/julia
$ g++ julia.cc -o julia
$ ./julia > julia.dat
```

You will have to input three numbers, for example:


```
.25 <return>
.5 <return>
5000 <return>
```

The above will create a data file named "julia.dat" which just
contains coordinates for points in the Julia set. To plot those points
you can use the <code>plot-data.gp</code> gnuplot script assuming you
have <code>gnuplot</code> installed on your system.

```
$ gnuplot < plot-data.png
```

The previous command should create a file named "julia.png", that
looks like the following image.

![julia set fractal](https://github.com/jasonu/julia/julia.png "Julia set fractal")
