clc;
clear all;
n1= input('Enter refractive index of core: '); %1.47
n2= input('Enter refractive index of cladding: '); %1.46
a= input('Enter radius of core(nm): '); %4.5
lamda= input('Enter wavelength(nm): '); %1.2
a= a*e-6;
lamda= lamda*e-6;

%numerical apperture
NA=sqrt(power(n1,2)-power(n2,2));

%acceptance angle
theta= asind(NA);

%propagation constant
k = 2*pi/lamda;
beta = k*n1*cosd(theta);

%nirmalized propagation constant
b=(power(beta/k,2)-power(n2,2))/(power(n1,2)-power(n2,2));

%V number
V_number= (2*pi*a*NA)/lamda;
printf("V number: %f\n",V_number);

%check fiber single or multi-mode
if V_number<=2.406
  mode_type='single mode';
else
  mode_type='multi mode';
end

%cutoff frequency
Vc=2.405;
cutoff= (2*pi*a*NA)/Vc;

%number of modes
Ms= round(power(V_number,2)/2);

%display all data
printf('Propagation constant of fiber is = %f\n',beta);
printf('Normalized propagation constant: %f\n',b);
printf("V number: %f\n",V_number);
printf('%s\n',mode_type);
printf('Cutoff frequency: %f\n',cutoff);
printf('Number of modes %f\n',Ms);
