# *Introduction to optimization*

The process of optimization is the process of finding the absolute highest points and absolute lowest points of a function. We've done this in the past with single variable functions, looking for the highest and lowest points along the two-dimensional curve.

Now that we've moved to multivariable functions, optimization is about finding the highest and lowest points along three-dimensional surface.

The optimization process is always the same. We satart by finding the first derivative and then the critical points of the function, which are the points where the function changes direction. Then we use the second derivative test to determine whether those points are maxima or minima. With multivariable functions, those points can also be saddle points.

In this section we'll look at the full optimization process. We'll start with the first derivative and how to determine where critical points can potentially exist.


# *Second derivative test*

Just as we did with single variable functions, we can use the second derivative test with multivariable functions to classify any critical points that the function might have.

To use the second derivative test, we'll need to take partial derivatives of function with respect to each variable. Once we have the partial derivatives, we'll set them equal to 0 and use these as a system of simultaneous equations to solve for the coordinates of all possible critical points.

In order to classify the critical points we find using the second derivative test, we'll need to find the second-order partial derivatives and plug them into the formula,

$$
D(x,y) = \frac{\partial²f}{\partial x²}\times\frac{\partial²f}{\partial y²} - (\frac{\partial²f}{\partial x \partial y})²
$$

if D(x,y) < 0, then f has a saddle point at (x,y)

if D(x,y) = 0, then the test is inconclusive

if D(x,y) > 0 and 

$$
\frac{\partial²f}{\partial x²} (x,y) > 0, \text{then f has a local minimum at (x,y)}
$$

$$
\frac{\partial²f}{\partial x²} (x,y) < 0, \text{then f has a local maximum at (x,y)}
$$

Let's try an example to see how we can use the seconf derivative test to classify the critical points of a multivariable function.

---