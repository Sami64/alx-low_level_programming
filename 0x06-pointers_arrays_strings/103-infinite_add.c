#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: pointer to string
* @n2: pointer to string
* @r: pointer to string
* @size_r: buffer size
* Return: 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n, o, p, q, s, t, u, v, w, x, y, z;
int a[1000], b[1000], c[1000];

i = 0;
j = 0;
k = 0;
l = 0;
m = 0;
n = 0;
o = 0;
p = 0;
q = 0;
s = 0;
t = 0;
u = 0;
v = 0;
w = 0;
x = 0;
y = 0;
z = 0;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i > size_r || j > size_r)
return (0);
for (k = 0; k < i; k++)
{
a[k] = n1[k] - '0';
}
for (l = 0; l < j; l++)
{
b[l] = n2[l] - '0';
}
if (i > j)
{
for (m = 0; m < i; m++)
{
c[m] = a[m];
}
for (n = 0; n < j; n++)
{
c[i - n - 1] = c[i - n - 1] + b[j - n - 1];
}
for (o = 0; o < i; o++)
{
if (c[i - o - 1] > 9)
{
c[i - o - 2] = c[i - o - 2] + 1;
c[i - o - 1] = c[i - o - 1] - 10;
}
}
for (p = 0; p < i; p++)
{
r[p] = c[p] + '0';
}
r[i] = '\0';
}
else
{
for (q = 0; q < j; q++)
{
c[q] = b[q];
}
for (s = 0; s < i; s++)
{
c[j - s - 1] = c[j - s - 1] + a[i - s - 1];
}
for (t = 0; t < j; t++)
{
if (c[j - t - 1] > 9)
{
c[j - t - 2] = c[j - t - 2] + 1;
c[j - t - 1] = c[j - t - 1] - 10;
}
}
for (u = 0; u < j; u++)
{
r[u] = c[u] + '0';
}
r[j] = '\0';
}
if (i > j)
{
for (v = 0; v < i; v++)
{
if (c[v] != 0)
{
w = 1;
}
}
if (w == 0)
{
r[0] = '0';
r[1] = '\0';
}
}
else
{
for (x = 0; x < j; x++)
{
if (c[x] != 0)
{
y = 1;
}
}
if (y == 0)
{
r[0] = '0';
r[1] = '\0';
}
}
return (r);
}
