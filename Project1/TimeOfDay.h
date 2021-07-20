#pragma once
class TimeOfDay
{
public:
	//Constructors
	TimeOfDay();
	TimeOfDay(int initHours, int initMinutes, int initSeconds);
	//TimeOfDay(int initHours, int initMinutes, int initSeconds);
	TimeOfDay Increment() const;
	void Write() const;
	bool Equal(TimeOfDay otherTimeOfDay) const;
	bool LessThan(TimeOfDay otherTimeOfDay) const;

private:
	int hours;
	int minutes;
	int seconds;

};

