#include<bits/stdc++.h>
using namespace std;

class main{
	private:
		int user_choice;
	public:
		void cities_choice(){	 
	    cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED CITY FOR MOVIE.";
	    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN DELHI";
	    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN HYDERABAD";
	    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 3 TO BOOK TICKET IN CHENNAI ";
	    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 4 TO BOOK TICKET IN PUNE";
	    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
	    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
	    cin>>user_choice;
		}
		void city_display();
friend class delhi;
friend class hyderabad;
friend class chennai;
friend class pune;
};
main u1;

class delhi{
	private:
		int delhi_cinema_choice;
		int delhi_hall_choice;
		string delhi_cinema_name;
		string delhi_hall_name;
		string movie_name;
		int delhi_movie_choice;
	public:
		void delhi_cinemas();
		void delhi_halls(int);
		void delhi_halls_seats(int);
		void delhi_movies_list();
};

class hyderabad{
	private:
		int hyderabad_cinema_choice;
		int hyderabad_hall_choice;
		string hyderabad_cinema_name;
		string hyderabad_hall_name;
		string movie_name;
		int hyderabad_movie_choice;
	public:
		void hyderabad_cinemas();
		void hyderabad_halls(int);
		void hyderabad_halls_seats(int);
		void hyderabad_movies_list();
};

class chennai{
	private:
		int chennai_cinema_choice;
		int chennai_hall_choice;
		string chennai_cinema_name;
		string chennai_hall_name;
		int chennai_movie_choice;
		string movie_name;
	public:
		void chennai_cinemas();
		void chennai_halls(int);
		void chennai_halls_seats(int);
		void chennai_movies_list();
};

class pune{
	private:
		int pune_cinema_choice;
		int pune_hall_choice;
		string pune_cinema_name;
		string pune_hall_name;
		int pune_movie_choice;
		string movie_name;
	public:
		void pune_cinemas();
		void pune_halls(int);
		void pune_halls_seats(int);
		void pune_movies_list();
};

class ticket{
	public:
		string user_choice_hall_name;
		string user_choice_movie_name;
		string user_choice_cinema_name;
		string user_choice_city_name;
		string user_choice_time;
		int user_choice_no_of_seats;
		string first_name;
		string last_name;
		string show_time;
		string show_date;
		void price();	
		void user_details();
		void ticket_display();
};
ticket t1;

class halls{
	public:
	int seats[12][12];
	int no_of_seats;
	int seat_number;
	void halls_seats_display();
	void book_the_seats(int);
	void display();
	halls(){
			for(int i=0;i<9;i++){
			    for(int j=0;j<9;j++){
			    	seats[i][j]=(i+1)*10+(j+1);
			    }
	        }
		}
};
halls ha1;


void delhi::delhi_halls(int delhi_cinema_choice){
	t1.user_choice_city_name="DELHI";
	switch(delhi_cinema_choice){
		case 1: {
			delhi_cinema_name="PVR PLAZA CINEMA";
			break;
		}
		case 2:{
			delhi_cinema_name="DLF CINEMA";
			break;
		}
		case 3:{
			delhi_cinema_name="AMBA CINEMA";
			break;
		}
		case 4:{
			delhi_cinema_name="GOLD CINEMA";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!"<<endl;
	}
	system("clear");
	t1.user_choice_cinema_name = delhi_cinema_name;
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED CINEMA IS "<<delhi_cinema_name << " IN DELHI. "<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED HALL FOR MOVIE .";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN HALL A";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN HALL B";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
    cin>>delhi_hall_choice;
    switch(delhi_hall_choice){
	case 1:{
		delhi_hall_name="A";
		break;
	}
	case 2:{
		delhi_hall_name="B";
		break;
	}
	case 0:{
		exit(0);
		break;
	}
	default : cout<<"PLEASE ENTER A VALID CHOICE !"<<endl;
	}
	system("clear");
	t1.user_choice_hall_name=delhi_hall_name;
    cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<delhi_hall_name <<" in "<<delhi_cinema_name<<", DELHI."<<endl<<endl;
    delhi_movies_list();	
}

void delhi::delhi_halls_seats(int delhi_movie_choice){
	switch(delhi_movie_choice){
		case 1: {
			movie_name = "SPIDER-MAN:NO WAY HOME";
			t1.show_date="20210101";
			t1.show_time="09:00AM";
			break;
		}
		case 2: {
			movie_name = "WEST SIDE STORY";
			t1.show_date="20210101";
			t1.show_time="12:00PM";
			break;
		}
		case 3: {
			movie_name = "CLIFFORD THE BIG RED DOG";
			t1.show_date="20210101";
			t1.show_time="03:00PM";
			break;
		}
		case 4: {
			movie_name = "ENCANTO";
			t1.show_date="20210101";
			t1.show_time="06:00PM";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!";
	}
	system("clear");
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<delhi_hall_name <<" in "<<delhi_cinema_name<<", DELHI."<<endl;
	t1.user_choice_movie_name=movie_name;
	cout<<"\n\t\t\t\t\t\t\tYOUR PREFERRED MOVIE IS "<<movie_name<<".";
	ha1.halls_seats_display();
}

void delhi::delhi_movies_list(){
	cout<<"\n\n\t\t\t\t\t\t\tMOVIES LIST IN HALL "<<delhi_hall_name<<" IN "<<delhi_cinema_name<<", DELHI."<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\tDATE : "<<"01 JAN 2021 "<<endl;
    cout<<endl<<"\n\n\t\t\t\t\t\t\t1. SPIDER-MAN:NO WAY HOME (GENRE : Action) "<<endl<<endl<<"\n\t\t\t\t\t\t\t     TIMING : 9:00 AM - 12:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t2. WEST SIDE STORY (GENRE: Drama) "<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 12:00 PM - 3:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t3. CLIFFORD THE BIG RED DOG (GENRE: Adventure) "<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 3:00 PM - 6:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t4. ENCANTO (GENRE: Animation) "<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 6:00 PM - 9:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\tENTER YOUR NUMBER OF MOVIE : ";
	cin>>delhi_movie_choice;
	delhi_halls_seats(delhi_movie_choice);
}

void delhi::delhi_cinemas(){
	system("clear");
	cout<<"\n\n\t\t\t\t\t\t\t  WELCOME TO DELHI CINEMAS ! "<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED CINEMA FOR MOVIE.";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN PVR PLAZA CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN DLF CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 3 TO BOOK TICKET IN AMBA CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 4 TO BOOK TICKET IN GOLD CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
    cin>>delhi_cinema_choice;
    delhi_halls(delhi_cinema_choice);
}
delhi d1;

void hyderabad::hyderabad_halls_seats(int hyderabad_movie_choice){
	switch(hyderabad_movie_choice){
		case 1: {
			movie_name = "HOUSE OF GUCCI";
			t1.show_date="20210101";
			t1.show_time="09:00AM";
			break;
		}
		case 2: {
			movie_name = "SPENCER";
			t1.show_date="20210101";
			t1.show_time="12:00PM";
			break;
		}
		case 3: {
			movie_name = "TOP GUN:MAVERICK";
			t1.show_date="20210101";
			t1.show_time="03:00PM";
			break;
		}
		case 4: {
			movie_name = "LAST NIGHT IN SOHO";
			t1.show_date="20210101";
			t1.show_time="06:00PM";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!";
	}
	system("clear");
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<hyderabad_hall_name <<" in "<<hyderabad_cinema_name<<", HYDERABAD."<<endl;
	t1.user_choice_movie_name=movie_name;
	cout<<"\n\t\t\t\t\t\t\tYOUR PREFERRED MOVIE IS "<<movie_name<<".";
	ha1.halls_seats_display();

}
void hyderabad::hyderabad_movies_list(){
	cout<<"\n\n\t\t\t\t\t\t\tMOVIES LIST IN HALL "<<hyderabad_hall_name<<" IN "<<hyderabad_cinema_name<<", HYDERABAD."<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\tDATE : "<<"01 JAN 2021 "<<endl;
    cout<<endl<<"\n\n\t\t\t\t\t\t\t1. HOUSE OF GUCCI (GENRE : Drama)"<<endl<<endl<<"\n\t\t\t\t\t\t\t     TIMING : 9:00 AM - 12:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t2. SPENCER (GENRE : Drama)"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 12:00 PM - 3:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t3. TOP GUN:MAVERICK (GENRE : Drama+Action)"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 3:00 PM - 6:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t4. LAST NIGHT IN SOHO (GENRE : Horror)"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 6:00 PM - 9:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\tENTER YOUR CHOICE OF MOVIE : ";
	cin>>hyderabad_movie_choice;
	hyderabad_halls_seats(hyderabad_movie_choice);
}
void hyderabad::hyderabad_halls(int hyderabad_cinema_choice){
	t1.user_choice_city_name="HYDERABAD";
	switch(hyderabad_cinema_choice){
		case 1: {
			hyderabad_cinema_name="UPSTAGE CINEMA";
			break;
		}
		case 2:{
			hyderabad_cinema_name="SKYLAB CINEMA";
			break;
		}
		case 3:{
			hyderabad_cinema_name="AMB CINEMA";
			break;
		}
		case 4:{
			hyderabad_cinema_name="RKV CINEMA";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!"<<endl;
	}
	system("clear");
	t1.user_choice_cinema_name = hyderabad_cinema_name;
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED CINEMA IS "<<hyderabad_cinema_name << " IN HYDERABAD. "<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED HALL FOR MOVIE .";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN HALL A";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN HALL B";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
    cin>>hyderabad_hall_choice;
    switch(hyderabad_hall_choice){
	case 1:{
		hyderabad_hall_name="A";
		break;
	}
	case 2:{
		hyderabad_hall_name="B";
		break;
	}
	case 0:{
		exit(0);
		break;
	}
	default : cout<<"PLEASE ENTER A VALID CHOICE !"<<endl;
	}
	system("clear");
	t1.user_choice_hall_name=hyderabad_hall_name;
    cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<hyderabad_hall_name <<" in "<<hyderabad_cinema_name<<", HYDERABAD."<<endl;
    hyderabad_movies_list();	
	
}
void hyderabad::hyderabad_cinemas(){
	system("clear");
	cout<<"\n\n\n\t\t\t\t\t\t\t  WELCOME TO HYDERABAD CINEMAS ! "<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED HALL FOR MOVIE.";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN UPSTAGE CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN SKYLAB CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 3 TO BOOK TICKET IN AMB CINEMA ";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 4 TO BOOK TICKET IN RKV CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : "; 
    cin>>hyderabad_cinema_choice;
    hyderabad_halls(hyderabad_cinema_choice);
}
hyderabad h1;


void chennai::chennai_halls_seats(int chennai_movie_choice){
	switch(chennai_movie_choice){
		case 1: {
			movie_name = "ETERNALS";
			t1.show_date="20210101";
			t1.show_time="09:00AM";
			break;
		}
		case 2: {
			movie_name = "HALLOWEEN KILLS";
			t1.show_date="20210101";
			t1.show_time="12:00PM";
			break;
		}
		case 3: {
			movie_name = "THE LAST DUEL";
			t1.show_date="20210101";
			t1.show_time="03:00PM";
			break;
		}
		case 4: {
			movie_name = "DUNE";
			t1.show_date="20210101";
			t1.show_time="06:00PM";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!";
	}
	system("clear");
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<chennai_hall_name <<" in "<<chennai_cinema_name<<", CHENNAI."<<endl;
	t1.user_choice_movie_name=movie_name;
	cout<<"\n\t\t\t\t\t\t\tYOUR PREFERRED MOVIE IS "<<movie_name<<".";
	ha1.halls_seats_display();

}

void chennai::chennai_movies_list(){
	cout<<"\n\n\t\t\t\t\t\t\tMOVIES LIST IN HALL "<<chennai_hall_name<<" IN "<<chennai_cinema_name<<", CHENNAI."<<endl;
    cout<<endl<<"\n\n\t\t\t\t\t\t\tDATE : "<<"01 JAN 2021 "<<endl;
    cout<<endl<<"\n\n\t\t\t\t\t\t\t1. ETERNALS (GENRE: Action)"<<endl<<endl<<"\n\t\t\t\t\t\t\t     TIMING : 9:00 AM - 12:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t2. HALLOWEEN KILLS (GENRE: Drama) "<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 12:00 PM - 3:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t3. THE LAST DUEL (GENRE: Drama)"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 3:00 PM - 6:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t4. DUNE (GENRE: Adventure)"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 6:00 PM - 9:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\tENTER YOUR CHOICE OF MOVIE : ";
	cin>>chennai_movie_choice;
	chennai_halls_seats(chennai_movie_choice);
}

void chennai::chennai_halls(int chennai_cinema_choice){
	t1.user_choice_city_name="CHENNAI";
	switch(chennai_cinema_choice){
		case 1: {
		    chennai_cinema_name="VNS CINEMA";
			break;
		}
		case 2:{
			chennai_cinema_name="SANGAM CINEMA";
			break;
		}
		case 3:{
			chennai_cinema_name="LUXE CINEMA";
			break;
		}
		case 4:{
			chennai_cinema_name="PALAZZO CINEMA";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!"<<endl;
	}
	system("clear");
	t1.user_choice_cinema_name = chennai_cinema_name;
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED CINEMA IS "<<chennai_cinema_name << " IN CHENNAI. "<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED HALL FOR MOVIE .";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN HALL A";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN HALL B";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
    cin>>chennai_hall_choice;
    switch(chennai_hall_choice){
	case 1:{
		chennai_hall_name="A";
		break;
	}
	case 2:{
		chennai_hall_name="B";
		break;
	}
	case 0:{
		exit(0);
		break;
	}
	default : cout<<"PLEASE ENTER A VALID CHOICE !"<<endl;
	}
	system("clear");
	t1.user_choice_hall_name=chennai_hall_name;
    cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<chennai_hall_name <<" in "<<chennai_cinema_name<<", CHENNAI."<<endl;
	chennai_movies_list();	
}

void chennai::chennai_cinemas(){
	system("clear");
	cout<<"\n\n\n\t\t\t\t\t\t\t  WELCOME TO CHENNAI CINEMAS ! "<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED HALL FOR MOVIE.";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN VNS CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN SANGAM CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 3 TO BOOK TICKET IN LUXE CINEMA ";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 4 TO BOOK TICKET IN PALAZZO CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
    cin>>chennai_cinema_choice;
    chennai_halls(chennai_cinema_choice);
}
chennai c1;

void pune::pune_halls_seats(int pune_movie_choice){
	switch(pune_movie_choice){
		case 1: {
			movie_name = "A QUIET PLACE";
			t1.show_date="20210101";
			t1.show_time="09:00AM";
			break;
		}
		case 2: {
			movie_name = "NO TIME TO DIE";
			t1.show_date="20210101";
			t1.show_time="12:00PM";
			break;
		}
		case 3: {
			movie_name = "JUNGLE CRUISE";
			t1.show_date="20210101";
			t1.show_time="03:00PM";
			break;
		}
		case 4: {
			movie_name = "PALM SPRINGS";
			t1.show_date="20210101";
			t1.show_time="06:00PM";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!";
	}
	system("clear");
	t1.user_choice_hall_name=pune_hall_name;
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<pune_hall_name <<" in "<<pune_cinema_name<<", PUNE."<<endl;
	t1.user_choice_movie_name=movie_name;
	cout<<"\n\t\t\t\t\t\t\tYOUR PREFERRED MOVIE IS "<<movie_name<<".";
	ha1.halls_seats_display();
}

void pune::pune_movies_list(){
	cout<<"\n\n\t\t\t\t\t\t\tMOVIES LIST IN HALL "<<pune_hall_name<<" IN "<<pune_cinema_name<<", PUNE."<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\tDATE : "<<"01 JAN 2021 "<<endl;
    cout<<endl<<"\n\n\t\t\t\t\t\t\t1. A QUIET PLACE (GENRE : Horror )"<<endl<<endl<<"\n\t\t\t\t\t\t\t     TIMING : 9:00 AM - 12:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t2. NO TIME TO DIE (GENRE : Action )"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 12:00 PM - 3:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t3. JUNGLE CRUISE (GENRE : Adventure )"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 3:00 PM - 6:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\t4. PALM SPRINGS (GENRE : Comedy )"<<endl<<endl<<" \n\t\t\t\t\t\t\t    TIMING : 6:00 PM - 9:00 PM "<<endl;
	cout<<endl<<"\n\n\t\t\t\t\t\t\tENTER YOUR CHOICE OF MOVIE : ";
	cin>>pune_movie_choice;
	pune_halls_seats(pune_movie_choice);
}

void pune::pune_halls(int pune_cinema_choice){
	t1.user_choice_city_name="PUNE";
	switch(pune_cinema_choice){
		case 1: {
		    pune_cinema_name="INOX CINEMA";
			break;
		}
		case 2:{
			pune_cinema_name="MANGALA CINEMA";
			break;
		}
		case 3:{
			pune_cinema_name="E SQUARE CINEMA";
			break;
		}
		case 4:{
			pune_cinema_name="CINEPOLIS CINEMA";
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!"<<endl;
	}
	system("clear");
	t1.user_choice_cinema_name = pune_cinema_name;
	cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED CINEMA IS "<<pune_cinema_name << " IN PUNE. "<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED HALL FOR MOVIE .";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN HALL A";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN HALL B";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
    cin>>pune_hall_choice;
    switch(pune_hall_choice){
	case 1:{
		pune_hall_name="A";
		break;
	}
	case 2:{
		pune_hall_name="B";
		break;
	}
	case 0:{
		exit(0);
		break;
	}
	default : cout<<"PLEASE ENTER A VALID CHOICE !"<<endl;
	}
	system("clear");
    cout<<"\n\n\t\t\t\t\t\t\tYOUR PREFERRED HALL IS HALL "<<pune_hall_name <<" in "<<pune_cinema_name<<", PUNE."<<endl;
	pune_movies_list();	
	
}


void pune::pune_cinemas(){
	system("clear");
	cout<<"\n\n\n\t\t\t\t\t\t\t  WELCOME TO PUNE CINEMAS ! "<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t SELECT YOUR PREFERRED HALL FOR MOVIE.";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 1 TO BOOK TICKET IN INOX CINEMA ";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 2 TO BOOK TICKET IN MANGALA CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 3 TO BOOK TICKET IN E SQUARE CINEMA ";
    cout<<"\n\n\t\t\t\t\t\t\t ->PRESS 4 TO BOOK TICKET IN CINEPOLIS CINEMA";
    cout<<"\n\n\t\t\t\t\t\t\t TO EXIT , PRESS 0 ";
    cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR CHOICE : ";
    cin>>pune_cinema_choice;
    pune_halls(pune_cinema_choice);
}
pune p1;

void main::city_display(){
	switch(user_choice){
		case 1: {
			d1.delhi_cinemas();
			
			break;
		}
		case 2:{
			h1.hyderabad_cinemas();
			
			break;
		}
		case 3:{
			c1.chennai_cinemas();
			
			break;
		}
		case 4:{
			p1.pune_cinemas();
			
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default : cout<<"PLEASE ENTER A VALID NUMBER!"<<endl;
	}
}

void halls::halls_seats_display(){
	cout<<"\n\n\t\t\t\t\t\t\t\tHALL SEAT MATRIX "<<endl;
	cout<<"\n\n\t\t\t\t\t\t\tSeats marked with [0] are already booked ."<<endl<<endl;
    for(int i=0;i<9;i++){
    	cout<<"\n\n\t\t\t\t\t\t\t";
		for(int j=0;j<9;j++){
			cout<<"  "<<"["<<seats[i][j]<<"]"<<"  ";
		}
		cout<<endl;
	}
	cout<<"   \n\n\t\t\t\t\t\t\t -------------------------SCREEN THIS WAY-------------------------";
	cout<<"\n\n\t\t\t\t\t\t\t\tHOW MANY SEATS YOU WANT TO BOOK? : ";
	cin>>no_of_seats;
	int y =no_of_seats;
	while(y--){
		cout<<"\n\t\t\t\t\t\t\tENTER THE SEAT NUMBER YOU WANT TO BOOK : ";
		cin>>seat_number;
		book_the_seats(seat_number);		
	}
	display();

}
void halls::display(){
	cout<<"\n\n\t\t\t\t\t\t\t\t           HALL SEAT MATRIX "<<endl;
	for(int i=0;i<9;i++){
    	cout<<"\n\n\t\t\t\t\t\t\t";
		for(int j=0;j<9;j++){
			cout<<"  "<<"["<<seats[i][j]<<"]"<<"  ";
		}
		cout<<endl;
	}
	t1.price();
}
void halls::book_the_seats(int seat_number){
	bool booked=false;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(seats[i][j]==seat_number && seats[i][j]!=0){
				seats[i][j]=0;
				booked=true;
				break;
			}
		}
	}
	if(!booked) {
	cout<<"\n\n\t\t\t\t\t\t\t SORRY , THE SEAT IS ALREADY BOOKED !";
	cout<<"\n\n\t\t\t\t\t\t\t DO YOU WISH TO BOOK ANOTHER SEAT? (PRESS 1 else 0): ";
	int one;
	cin>>one;
	if(one==1) 	halls_seats_display();
	else exit(0);
	}		
}


void ticket::price(){
	cout<<"\n\n\t\t\t\t\t\t\tARE YOU SURE YOU WANT TO BOOK THESE SEATS ? "<<endl;
	cout<<"\n\n\t\t\t\t\t\t\tPRICE OF TICKET : 500(per seat)"<<endl;
	cout<<"\n\n\t\t\t\t\t\t\tYOUR TOTAL PRICE : "<<ha1.no_of_seats*500<<endl;
	cout<<"\n\n\t\t\t\t\t\t\tPRESS 'Y' OR 'y' TO CONFIRM : ";
	char ch;
	cin>>ch;
	if(ch=='y' || ch=='Y') {
		user_details();
	}
	else exit(0);
}

void ticket::user_details(){
	cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR FIRST NAME : ";
	cin>>first_name;
	cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR LAST NAME : ";
	cin>>last_name;
	ticket_display();
}

void ticket::ticket_display(){
system("clear");
cout<<"\n\n\n\n\t\t\t\t\t________________________________________________________________________\n";
cout<<"\t\t\t\t\t|                                                                       |\n";
cout<<"\t\t\t\t\t|   Dear Customer,                                                      |\n";
cout<<"\t\t\t\t\t|                     Congratulations!! Your tickets has been booked.   |\n";
cout<<"\t\t\t\t\t|                                                                       |\n";
cout<<"\t\t\t\t\t|                  THE DETAILS:                                         |\n";
cout<<"\t\t\t\t\t|                            FIRST NAME: "<<first_name<<"    \n";
cout<<"\t\t\t\t\t|                            LAST NAME: "<<last_name<<"     \n";
cout<<"\t\t\t\t\t|                            CINEMA NAME: "<<user_choice_cinema_name<<","<<user_choice_city_name<<" \n";
cout<<"\t\t\t\t\t|                            MOVIE HALL: "<<user_choice_hall_name<<"    \n";
cout<<"\t\t\t\t\t|                            MOVIE NAME: "<<user_choice_movie_name<<"   \n";
cout<<"\t\t\t\t\t|                            SHOW DATE: "<<show_date<<"    \n";
cout<<"\t\t\t\t\t|                            SHOW STARTS:"<<show_time<<"         \n";
cout<<"\t\t\t\t\t|                            NUMBER OF TICKETS BOOKED: "<<ha1.no_of_seats<<" \n";
cout<<"\t\t\t\t\t|                            TOTAL PRICE:"<<500*ha1.no_of_seats<<"         \n";
cout<<"\t\t\t\t\t|_______________________________________________________________________|\n";
}


int main()
{
cout<<"\n\n\t\t\t\t\t\t\t WELCOME TO BOOK MY SHOW ! "<<endl;
u1.cities_choice();
u1.city_display();
return 0;
}

