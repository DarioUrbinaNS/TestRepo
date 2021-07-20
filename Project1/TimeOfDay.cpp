//This file implements TimeOfDay memeber functions

#include "TimeOfDay.h"
#include <iostream>

using namespace std;

TimeOfDay::TimeOfDay()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

TimeOfDay::TimeOfDay(int initHours, int initMinutes, int initSeconds)
{
	hours = initHours;
	minutes = initMinutes;
	seconds = initSeconds;
}

TimeOfDay TimeOfDay::Increment() const
{
	TimeOfDay result(hours, minutes, seconds);
	result.seconds = result.seconds++;
	if (result.seconds > 59)
	{
		result.seconds = 0;
		result.minutes = result.minutes++;
		if (result.minutes > 59)
		{
			result.minutes = 0;
			result.hours = result.hours++;
		}
		if (result.hours > 23)
			result.hours = 0;
	}
	return result;
}
void TimeOfDay::Write() const
{
	if (hours < 10)
		cout << '0';
	cout << hours << ':';
	if (minutes < 10)
		cout << '0';
	cout << minutes << ':';
	if (seconds < 10)
		cout << '0';
	cout << seconds;
}

bool TimeOfDay::Equal(TimeOfDay otherTimeOfDay) const
{
	return (hours == otherTimeOfDay.hours
		&& minutes == otherTimeOfDay.minutes
		&& seconds == otherTimeOfDay.seconds);
}

bool TimeOfDay::LessThan(TimeOfDay otherTime) const
{
	return (hours, otherTime.hours || hours == otherTime.hours
		&& minutes < otherTime.minutes || hours == otherTime.hours
		&& minutes == otherTime.minutes
		&& seconds < otherTime.seconds);
}