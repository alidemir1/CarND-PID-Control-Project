# PID Control Project
## Effects of P-I-D Parameters
Following the completion of PID code, I observed the P-I-D parameter effects.
### P = 1.0 and I = D = 0.0
As a result vehicle was trying to reduce the cross track error but vehicle was oscillating and after some point vehicle was out of the track because of increasing oscillations. Reducing speed of vehicle and/or P coefficient might help for more smooth behavior such that amplitude of oscillations might be reduces. But this time when vehicle comes to curvy road, P coefficient might not be enough to even oscillate around reference track. 
### I = 1.0 and P = D = 0.0
Control input to steering was too high, since the control output was only the summation of the cross track errors from all measured cross track errors since the simulation is started. Therefore, only “I” term could not be enough to reduce the error and also the cumulative error reduce the response time of the controller to transitions of the cross track error (cte), such as from positive (cte) to negative (-cte). 
### D = 1.0 and P = I = 0.0
Control input to steering was too small to follow the track, this is the result of the derivative of the cte, because cte derivative was not high enough. But let’s think that derivative of cte is big enough which means that vehicle is quickly getting away from the reference track (also can be said that yaw angle of the vehicle relative to the reference track is high). Therefore, in this case D will not be enough by itself to keep the vehicle on the track since control input to system will still remain small relative to its movement.
## Parameter Tuning
Different configurations of P, I and D has been tried and observed on simulation and lastly current version in the code was selected. Since it successfully drove the vehicle around the track.

  