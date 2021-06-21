# CarND-Controls-PID

[//]: # (File References)

[Video1]: ./videos/P.wmv
[Video2]: ./videos/PD.wmv
[Video3]: ./videos/PID.wmv

This project is part of Udacity Self Driving Car Nanodegree which involves implementing a PID control in C++. The goal of the project is to traverse the track path in the Udacity provided simulator with the help of implemented PID control.The method used for tuning is manual.

I started with propotional Controller. It did work well in the beginning of the video [Video1] but as the error kept on increasing the oscillations kept on increasing which eventually led car to traverse around non-road areas. To reduce oscillations I added derivative controller which did help to reduce oscillations and car did traverse pretty well for most parts of the track as shown in [Video2] except during extreme turns where it went over non road areas. I tried increasing the d-controller but it didn't help mitigate the problem and increasing p-controller was not an option as that would have increased the oscillations. To combat the issue, I introduced i-controller which improved the overall controls and car was able to traverse without going over non-road sections as shown in [Video3]. In the beginning of the [Video3], you can see the oscillations getting better as the error goes down. This is similar to graph shown in the lessons where it takes time initially for the error to drop down and then PID control acts better. 




