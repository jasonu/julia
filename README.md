# julia
simple julia set generator

This is a simple C++ code to generate Julia sets of quadratic functions such as f(z) = z^2 + c. The algorithm used is the "backwards iteration algorithm" with each root weighted equally.  You should know that this algorithm often misses a good portion of the Julia set. I have also implemented the "modified inverse iteration method" (see repository julia-miim) as described in:

<pre>
Heinz-Otto Peitgen, Dietmar Saupe, eds., The Science of Fractal Images
Springer-Verlag, New York, 1988. pp. 178
ISBN 0-387-96608-0
</pre>
