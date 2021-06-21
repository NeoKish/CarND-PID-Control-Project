# CarND-Controls-PID

[//]: # (File References)

[Video1]: ./videos/P.wmv
[Video2]: ./videos/PD.wmv
[Video3]: ./videos/PID.wmv

## Introduction
This project is part of Udacity Self Driving Car Nanodegree which involves implementing a PID control in C++. The goal of the project is to traverse the track path in the Udacity provided simulator by implementing PID control.The method used for tuning is manual.The other method that can be used is twiddle which helps in setting the parameters automatically based on the crosstrack error.

![image](https://user-images.githubusercontent.com/66986430/122727933-3371fb00-d295-11eb-9e41-34a7f4d453f7.png)

                                        Image reference:https://en.wikipedia.org/wiki/PID_controller


I started with propotional Controller. It did work well in the beginning of the video [Video1] but as the error kept on increasing the oscillations increased as well which eventually led car to traverse around non-road areas. To reduce oscillations I added derivative controller which did help to reduce oscillations and car did traverse pretty well for most parts of the track as shown in [Video2] except during extreme turns where it went over non road areas. I tried increasing the d-controller but it didn't help mitigate the problem and increasing p-controller was not an option as that would have increased the oscillations. To combat the issue, I introduced i-controller which improved the overall controls and car was able to traverse without going over non-road sections as shown in [Video3]. In the beginning of the [Video3], you can see the oscillations getting better as the error goes down. This is similar to graph shown in the lessons where it takes time initially for the error to drop down and then PID control acts better.

![image](https://user-images.githubusercontent.com/66986430/122730260-a54b4400-d297-11eb-8c39-0148b1bb9532.png)


## Running the Code
This file src/main.cpp contains the code that will give be driving the car autonomously on th track based on the steering value which is calculated using the following formula

###                                             steering = -Kp * CTE - Kd * diff_CTE - Ki * int_CTE

where Kp,Kd and Ki and propotional, derviative and integral coefficients and CTE is the cross track error.diff_CTE keeps track of differences between previous and current CTE while int_cte takes into account of the error build up.









