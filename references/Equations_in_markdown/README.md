## Typing Equations in Markdown

Based on [this gist](https://gist.github.com/a-rodin/fef3f543412d6e1ec5b6cf55bf197d7b) and [this post](https://stackoverflow.com/questions/35498525/latex-rendering-in-readme-md-on-github),
we can show formulae in markdown file by inserting equation in LaTeX format.
```
<img src="https://latex.codecogs.com/svg.latex?PLACE_EQUATION_HERE" />       (recommended)
  OR
<img src="https://render.githubusercontent.com/render/math?math=PLACE_EQUATION_HERE" />
```
You might, however, want to use some other tool to generate the LaTeX formula if you don't want to type by hand.

[LateX syntax reference](https://en.wikibooks.org/wiki/LaTeX/Mathematics)

### Basic

Pythagoras' theorem

<img src="https://latex.codecogs.com/svg.latex?a^2%20+%20b^2%20=%20c^2" />

Quadratic formula

<img src="https://latex.codecogs.com/svg.latex?x=\frac{-b%20\pm%20\sqrt{b^2-4ac}}{2a}" />

Multi-line equation

<img src="https://latex.codecogs.com/svg.latex?\begin{align*}%20(a+b)(a-b)&=a^2-ab+ba-b^2\\%20&=a^2-b^2%20\end{}" />


Trigonometry

<img src="https://latex.codecogs.com/svg.latex?cos(2\theta)=cos^2\theta-sin^2\theta=\frac{1-tan^2\theta}{1+tan^2\theta}" />

Factorial (this is Stirling's approximation)

<img src="https://latex.codecogs.com/svg.latex?n!\approx%20\sqrt{2\pi%20n}(\frac{n}{e})^n" />


Bold, underline, italic, font size


### Function

Kronecker delta

<img src="https://latex.codecogs.com/svg.latex?\delta_{ij}=%20\begin{cases}%200&\text{%20if%20}%20i\neq%20j%20\\%201&\text{%20if%20}%20i%20=%20j%20\end{cases}" />





### Calculus, Summation

Sum of natural number<br />
<img src="https://latex.codecogs.com/svg.latex?1+2+3+...+(n-1)+n%20=\sum_{i=1}^{n}i=\frac{n(n+1)}{2}" />


Fundamental theorem of Calculus<br />
<img src="https://latex.codecogs.com/svg.latex?F(x)=\int_{a}^{x}f(t)dt" /><br />
<img src="https://latex.codecogs.com/svg.latex?\int_{a}^{b}f(t)dt=F(b)-F(a)" />

Chain rule






### Linear Algebra, Determinant, Matrice



Determinant<br />
<img src="https://latex.codecogs.com/svg.latex?\begin{vmatrix}%205%20&%207\\%203%20&%204%20\end{vmatrix}=-1" />

Matrix multiplication<br />
<img src="https://latex.codecogs.com/svg.latex?\begin{pmatrix}%202%20&%203\\%205%20&%207%20\end{pmatrix}%20\begin{pmatrix}%201%20&%20-2\\%200%20&%204%20\end{pmatrix}%20=%20\begin{pmatrix}%202%20&%208\\%205%20&%2018%20\end{pmatrix}" />



### Vector

Triple product<br />
<img src="https://latex.codecogs.com/svg.latex?\vec{a}\times%20\vec{b}\cdot%20\vec{c}%20=\vec{a}\cdot%20\vec{b}%20\times%20\vec{c}%20=%20\begin{vmatrix}%20a_{1}%20&%20a_{2}%20&%20a_{3}\\%20b_{1}%20&%20b_{2}%20&%20b_{3}\\%20c_{1}%20&%20c_{2}%20&%20c_{3}%20\end{vmatrix}">


### Multivariable Calculus

Partial derivative


Spherical coordinate



Maxwell equations


### Set, Number Theory, Logic

Some common sets



De Morgan's laws<br />
<img src="https://latex.codecogs.com/svg.latex?\overline{A\cup%20B}%20=%20\overline{A}%20\cap%20\overline{B}" /><br />
<img src="https://latex.codecogs.com/svg.latex?\overline{A\cap%20B}%20=%20\overline{A}%20\cup%20\overline{B}" />

Bayes' theorem

### Complex number




### Quantum Mechanics

Scrödinger's equation

### Chemical Equation

Displacement reaction


Redox reaction

Chemical equilibrium