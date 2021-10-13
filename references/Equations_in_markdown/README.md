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

The following examples should suffice for most circumstances.

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

Sum of natural number

<img src="https://latex.codecogs.com/svg.latex?1+2+3+...+(n-1)+n%20=\sum_{i=1}^{n}i=\frac{n(n+1)}{2}" />


Fundamental theorem of Calculus

<img src="https://latex.codecogs.com/svg.latex?F(x)=\int_{a}^{x}f(t)dt" />

<img src="https://latex.codecogs.com/svg.latex?\int_{a}^{b}f(t)dt=F(b)-F(a)" />

Chain rule

<img src="https://latex.codecogs.com/svg.latex?\begin{align*}%20Given\hspace{5mm}z&=f(y)\hspace{2mm},\hspace{2mm}y=g(x)\\%20\frac{dz}{dx}\Big|_{x_{0}}&=\frac{dz}{dy}\Big|_{y_{0}=g(x_{0})}\cdot\frac{dy}{dx}\Big|_{x_{0}}%20\end{}" />

Fourier transform

<img src="https://latex.codecogs.com/svg.latex?\hat{f}(\xi)=\int_{-\infty}^{\infty}f(x)e^{-2\pi%20ix\xi}\hspace{3mm}dx" />


### Linear Algebra, Determinant, Matrice

Determinant

<img src="https://latex.codecogs.com/svg.latex?\begin{vmatrix}%205%20&%207\\%203%20&%204%20\end{vmatrix}=-1" />

Matrix multiplication

<img src="https://latex.codecogs.com/svg.latex?\begin{pmatrix}%202%20&%203\\%205%20&%207%20\end{pmatrix}%20\begin{pmatrix}%201%20&%20-2\\%200%20&%204%20\end{pmatrix}%20=%20\begin{pmatrix}%202%20&%208\\%205%20&%2018%20\end{pmatrix}" />

System of linear equations

<img src="https://latex.codecogs.com/svg.latex?\left\{%20\begin{aligned}%20x_1+3x_2+5x_3&=5\\%203x_1+5x_2+7x_3&=17\\%208x_1-2x_2+4x_3&=10\\%20\end{}%20\hspace{5mm}%20=%3E%20\hspace{3mm}%20\begin{pmatrix}%201&3&5\\%203&5&7\\%208&-2&4%20\end{}%20\begin{pmatrix}%20x_1\\%20x_2\\%20x_3%20\end{}%20=%20\begin{pmatrix}%205\\%2017\\%2010%20\end{}%20\right." />

### Vector

Triple product

<img src="https://latex.codecogs.com/svg.latex?\vec{a}\times%20\vec{b}\cdot%20\vec{c}%20=\vec{a}\cdot%20\vec{b}%20\times%20\vec{c}%20=%20\begin{vmatrix}%20a_{1}%20&%20a_{2}%20&%20a_{3}\\%20b_{1}%20&%20b_{2}%20&%20b_{3}\\%20c_{1}%20&%20c_{2}%20&%20c_{3}%20\end{vmatrix}">

Cauchy-Schwarz inequality

<img src="https://latex.codecogs.com/svg.latex?|\langle\vec{u},\vec{v}\rangle|^2\le\langle\vec{u},\vec{u}\rangle\cdot\langle\vec{v},\vec{v}\rangle" />


### Multivariable Calculus

Laplace's equation

<img src="https://latex.codecogs.com/svg.latex?\Delta%20f(x,y,z)=\nabla^2f=\frac{\partial^2f}{\partial%20x^2}+\frac{\partial^2f}{\partial%20y^2}+\frac{\partial^2f}{\partial%20z^2}=0" />


Stokes' theorem

<img src="https://latex.codecogs.com/svg.latex?\iint_{\Sigma}(\nabla\times\vec{A})\cdot%20d\vec{a}=\oint_{\partial%20\Sigma}(\vec{A}\cdot%20d\vec{l})" />




### Set, Number Theory, Logic

Some common sets

<img src="https://latex.codecogs.com/svg.latex?\emptyset\subset\mathbb{N}\subset\mathbb{Z}\subset\mathbb{Q}\subset\mathbb{R}\subset\mathbb{C}" />

De Morgan's laws

<img src="https://latex.codecogs.com/svg.latex?\overline{A\cup%20B}%20=%20\overline{A}%20\cap%20\overline{B}" />

<img src="https://latex.codecogs.com/svg.latex?\overline{A\cap%20B}%20=%20\overline{A}%20\cup%20\overline{B}" />

Bayes' theorem

<img src="https://latex.codecogs.com/svg.latex?P(A|B)=\frac{P(B|A)\cdot%20P(A)}{P(B)}" />

### Complex number

<img src="https://latex.codecogs.com/svg.latex?z=\overbrace{a}^\text{real%20part}+\underbrace{b}_\text{imaginary%20part}i" />

### Physics

Newtonian mechanics

<img src="https://latex.codecogs.com/svg.latex?\vec{F}=m\vec{a}" />

<!-- Lagragian mechanics

Hamiltonian mechanics

Maxwell equations -->



<!-- ### Quantum Mechanics

Scrödinger's equation -->


### Chemical Equation

Displacement reaction

<img src="https://latex.codecogs.com/svg.latex?Fe+CuSO_4\rightarrow%20FeSO_4+Cu\hspace{1cm}(Cu^{2+}\text{%20ion%20is%20blue},Fe^{2+}\text{%20ion%20is%20greenish})" />

Formation of C14 isotope (carbon dating)

<img src="https://latex.codecogs.com/svg.latex?n+{}^{14}_{7}x={}^{14}_{6}C+p" />

It is possible to draw chemical compounds, such as organic compounds, in LaTeX. Checkout [this guide](https://www.overleaf.com/learn/latex/Chemistry_formulae) and [this post](https://tex.stackexchange.com/questions/52722/can-you-make-chemical-structure-diagrams-in-latex).