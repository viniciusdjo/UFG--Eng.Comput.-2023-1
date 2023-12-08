# *Introduction to gradient vectors*
The gradient vector for a function at a particular point tells you how steep the slope of the function is at that point.

In this section we'll look at how to find the gradient vector of a function at a point and how to use the gradient vector to find the direction that has the steepest slope. In other words, if I'm standing on the edge of a mountain, the gradient vector at the point where I'm standing will tell me which direction to walk if I want to take the steepest path, or shallowest path from that point.

Let's get started with a few examples of how to find a gradient vector.

# *Gradient Vectors*

The gradient vector is also called the maximum directional derivative.

To find the gradient vector of a two variable function, we'll need to find the direction in which it occurs using the formula

$$
\nabla f(x,y) = <\frac{\partial f}{\partial x}, \frac{\partial f}{\partial y}>
$$

where (x,y) is the point we're interested in

Once we have the direction at the specific point, we can find the gradient vector using the formula

$$
|| a,b|| = \sqrt{a²+b²}
$$

where a and b come from $\nabla f(x,y) = <a,b>$

Remember that the gradient vector is not limited to two variable functions. We can modify the two variable formulas to accommodate more then two variables as needed.

---

**Example**

Find the gradient vector of the function and the direction in which it occurs at given point

$$
f(x,y) = x³+ 2x²y + 4y²
$$

at P(1,1)

We'll start with the partial derivatives of the given function *f*

$$
\frac{\partial f}{\partial x} = 3x² + 4xy
\text{ and }
\frac{\partial f}{\partial y} = 2x² + 8y 
$$

To find the direction in which the gradient vector occurs, we'll plug the partial derivatives in to the formula for the direction

$$
\nabla f(x,y) = <\frac{\partial f}{\partial x}, \frac{\partial f}{\partial y}>
$$

$$
\nabla f(x,y) = <3x² + 4xy, 2x² + 8y>
$$

To find the direction at the point we're interested in, the given point P(1,1), we'll plug it in

$$
\nabla f(1,1) = <7,10>
$$

Now we know that a=7 and b=10, so we're ready to find the gradient vector of the given function at the given point.

$$
|| a,b || = \sqrt{a²+b²} \rightarrow || 7,10|| = \sqrt{49 + 100} = \sqrt{149}
$$

This is the gradient vector of the function $f(x,y) = x³ + 2x²y + 4y²$ at the point P(1,1)

# *Gradient Vectors and tangent plan*