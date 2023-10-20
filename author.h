#ifndef AUTHOR_H
#define AUTHOR_H

class author {
	private :
		int authorid;
		string bookname,authorname;
	public:
		author();
		author(int authorID,string bookname,string authorname);
		int numOfBooks(int authorid);
		double saleOfBooks(string bookname);
		int getAuthorid();
		string getAuthorname();
		string getBookname();
		void setAuthorname();
		~author();
		
};
