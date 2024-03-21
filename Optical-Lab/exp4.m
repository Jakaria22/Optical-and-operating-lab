clc;
clear all;
n1 = input('Enter refractive index of core: ');
n2 = input('Enter refractive index of cladding: ')
a = input('Enter core radius in micrometer: ')

a=a*e-6;
% Define the operating wavelength range
lambda = linspace(0.8e-6, 1.6e-6, 1000)';

% Calculate the numerical aperture (NA)
NA = sqrt(power(n1,2) - power(n2,2));
printf('numerical aperture = %f\n',NA)


% Calculate the V number (V)
V = ((2 * pi * a*NA)/ lambda);
disp(['V number: ' num2str(V(1)) ' (at ' num2str(lambda(1)*1e9) ' nm)']);

% Determine if the fiber is single-mode or multi-mode
if V < 2.405
    disp('This is Single-mode Fiber');
else
    disp('This is Multi-mode Fiber');
end

% Calculate the cut-off wavelength (lambda_c)
lambda_c = 2 * pi * a * NA / sqrt(power(n1,2) - power(n2,2));
disp(['Cut-off wavelength: ' num2str(lambda_c*1e9) ' nm']);

% Calculate the number of modes traveling in the fiber
Ms = (2 * pi * a ./ lambda) .* sqrt(n1^2 - n2^2);
disp(['Number of modes: ' num2str(round(Ms(1))) ' (at ' num2str(lambda(1)*1e9) ' nm)']);

