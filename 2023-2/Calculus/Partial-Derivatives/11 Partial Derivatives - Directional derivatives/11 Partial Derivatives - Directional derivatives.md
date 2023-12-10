# *Introduction to directional derivatives*
---
Remember thar, by definition, the derivative of a function at a particular point is the slope of the function at that point. Which means then that if the derivative is positive, then the slope is positive, which means the functiojns is increasing. If the derivarive is negative, then the slope is negative, which means the function is decreasing.

With single variable functions, you can find the derivative at a particular point, but there will only ever be one derivative, because the two-dimensional function is either increasing, decreasing, or staying the same. It can't be both increasing and decreasing at the same time.

But with multivariable functions, because the function represents a three-dimensional surface, you can be standing at one point the surface, and depending on which direction you walk, the slope can different in different directions. Which means the slope can be positive in one direction and negative in another direction.

In this section we'll learn how to find the derivative of a multivariable function, but in different directions, giving us the directional derivatives of the function at a particular point.

Let's get started by looking at how to find directional derivatives in the same direction as a vector.


#  *Directional derivatives in the direction of the vector*
---
The directional derivative of a multivariable function takes into account the direction (given by the unit vector $\vec u$) as well as the partial derivatives of the function with respect to each of the variables.

In a two variable function, the formula for the directional derivative is 

$$
D_uf(x,y) = a (\frac{\partial f}{\partial x}) + b(\frac{\partial f}{\partial y})
$$

where *a* and *b* come from the unit vector $\vec u = <a,b>$

If asked to find the directional derivative in the direction of $\vec v = <c,d>$, we'll need to convert $\vec v = <c,d>$ to unit vector using

$$
\vec u = <\frac{c}{\sqrt{c²+d²}}, \frac{d}{\sqrt{c²+d²}}>
$$
---
**Example**
Find the directional derivative of the function.

$$
f(x,y) = 2x³+3x²y+y² \text{ in the direction } \vec{v} = <1,2> \text{ at the point P(-1,2)}
$$
