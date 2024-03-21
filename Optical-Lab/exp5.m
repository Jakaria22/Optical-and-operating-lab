clc;
clear all;
a=input('Radius of core in micrometer=');%4.5
n1=input('index of core='); %1.47
n2=input('index of cladding='); %1.46
Lamda = input('operating Wavelength at which number of modes to be calculated in nanometer=');%1.2

%numerical apperture
NA=sqrt(power(n1,2)-power(n2,2));
%V number
V = (2*pi*a*NA)/Lamda;
%mfd
MFD = 2*a*(0.65+(1.619/power(V,(3/2)))+2.879/power(V,6));
MFD = round(MFD);
printf('mode field diameter in micrometer = %d\n',MFD);
