import sympy as sp
x=sp.symbols('x')
exp=x**3+2*x**2+5*x+3
print('Derivative:',sp.diff(exp,x))