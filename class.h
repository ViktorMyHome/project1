#ifndef CLASS_H
#define CLASS_H

class Point{
public:
	int get_x() const
	{
		return this->x;
	}
	int get_y() const
	{
		return this->y;
	}
	void set_x(int xx)
	{
		this->x=xx;
	}
	void set_y(int yy)
	{
		this->y=yy;
	}
	Point(int xx,int yy)
	{
		x=xx;y=yy;
	}
	Point()
	{
		Point(0,0);
	}
	Point(const Point &a)
	{
		x=a.x;y=a.y;
	}
	float get_distance(const Point &a, const Point &b);
private:
	int x;
	int y;
};

#endif

