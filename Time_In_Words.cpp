#include <iostream>
using namespace std;
int main()
{
	int h , m;
	cin>>h>>m;
	string time_str;
	if(m==15)
		time_str = "quarter";
	else if(m==30)
		time_str = "half";
	else if(m==45)
		time_str = "quarter";
	
	switch(m)
	{
		case 1:
		case 59:
			time_str = "one minute";
			break;
		case 2:
		case 58:
			time_str = "two minutes";
			break;
		case 3:
		case 57:
			time_str = "three minutes";
			break;
		case 4:
		case 56:
			time_str = "four minutes";
			break;
		case 5:
		case 55:
			time_str = "five minutes";
			break;
		case 6:
		case 54:
			time_str = "six minutes";
			break;
		case 7:
		case 53:
			time_str = "seven minutes";
			break;
		case 8:
		case 52:
			time_str = "eight minutes";
			break;
		case 9:
		case 51:
			time_str = "nine minutes";
			break;
		case 10:
		case 50:
			time_str = "ten minutes";
			break;
		case 11:
		case 49:
			time_str = "eleven minutes";
			break;
		case 12:
		case 48:
			time_str = "twelve minutes";
			break;
		case 13:
		case 47:
			time_str = "thirteen minutes";
			break;
		case 14:
		case 46:
			time_str = "fourteen minutes";
			break;
		case 16:
		case 44:
			time_str = "sixteen minutes";
			break;
		case 17:
		case 43:
			time_str = "seventeen minutes";
			break;
		case 18:
		case 42:
			time_str = "eighteen minutes";
			break;
		case 19:
		case 41:
			time_str = "nineteen minutes";
			break;
		case 20:
		case 40:
			time_str = "twenty minutes";
			break;
		case 21:
		case 39:
			time_str = "twenty one minutes";
			break;
		case 22:
		case 38:
			time_str = "twenty two minutes";
			break;
		case 23:
		case 37:
			time_str = "twenty three minutes";
			break;
		case 24:
		case 36:
			time_str = "twenty four minutes";
			break;
		case 25:
		case 35:
			time_str = "twenty five minutes";
			break;
		case 26:
		case 34:
			time_str = "twenty six minutes";
			break;
		case 27:
		case 33:
			time_str = "twenty seven minutes";
			break;
		case 28:
		case 32:
			time_str = "twenty eight minutes";
			break;
		case 29:
		case 31:
			time_str = "twenty nine minutes";
			break;
	}
	if(m>=0 && m<=30)
	{
		if(m!=0)
			time_str+=" past ";
		switch(h)
		{
			case 1:
				time_str+= "one";
				break;
			case 2:
				time_str+="two";
				break;
			case 3:
				time_str+="three";
				break;
			case 4:
				time_str+="four";
				break;
			case 5:
				time_str+= "five";
				break;
			case 6:
				time_str+= "six";
				break;
			case 7:
				time_str+= "seven";
				break;
			case 8:
				time_str+="eight";
				break;
			case 9:
				time_str+="nine";
				break;
			case 10:
				time_str+="ten";
				break;
			case 11:
				time_str+="eleven";
				break;
			case 12:
				time_str+="twelve";
				break;
		}
	}
	else if(m>30 && m<60)
	{
		time_str+=" to";
		switch(h)
		{
			case 0:
				time_str+=" one";
				break;
                        case 1:
                                time_str+=" two";
                                break;
                        case 2:
                                time_str+=" three";
                                break;
                        case 3:
                                time_str+=" four";
                                break;
                        case 4:
                                time_str+= " five";
                                break;
                        case 5:
                                time_str+= " six";
                                break;
                        case 6:
                                time_str+= " seven";
                                break;
                        case 7:
                                time_str+=" eight";
                                break;
                        case 8:
                                time_str+=" nine";
                                break;
                        case 9:
                                time_str+=" ten";
                                break;
                        case 10:
                                time_str+=" eleven";
                                break;
                        case 11:
                                time_str+=" twelve";
                                break;
		}
	}
		if(m==0)
			time_str+=" o' clock";
		cout<<time_str;
	return 0;
}


