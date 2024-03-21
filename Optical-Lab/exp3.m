a = input('Enter radius of the core in micrometers: '); % 50
n1_core = input('Enter refractive index of core: '); % 1.47
n2_cladding = input('Enter refractive index of cladding: '); % 1.47

% Extend the range for visualization (positive and negative values)
r_range = linspace(-a, a, 200);

% Define different alpha values
alpha_values = [1, 2, 10];
NAaxis = sqrt(n1_core^2 - n2_cladding^2);
NA = zeros(size(r_range)); % Initialize NA array

% Generate plots with loop
figure(); % Create separate figure window for refractive index plots
for i = 1:length(alpha_values)
    alpha = alpha_values(i);
    delta = n1_core - n2_cladding;
    if alpha == 0
        n1_profile = sqrt(n1_core * (1 - (2 * delta)));
    else
        n1_profile = sqrt(n1_core * (1 - (2 * delta) * (abs(r_range) / a).^alpha));
    end
    plot(r_range, n1_profile);
    hold on;
end

xlabel('Radius (micrometers)');
ylabel('Refractive Index');
title('Refractive Index Profile for Different Alpha Values');
legend(strcat('alpha = ', num2str(alpha_values(1))), strcat('alpha = ', num2str(alpha_values(2))), strcat('alpha = ', num2str(alpha_values(3))));
hold off;

% Calculate and plot Numerical Aperture (NA) vs. radius
NA = NAaxis * sqrt(1 - (abs(r_range) / a).^alpha);
figure(); % Create separate figure window for NA plot
plot(r_range, NA);
title('Numerical Aperture in Graded Index Fiber w.r.t. Radius');
xlabel('Radius (micrometers)');
ylabel('Numerical Aperture');
grid on;
