class PasswordFile
{
	public:
	PasswordFile(string filename);
	void addpw(string newuser, string newpassword);
	bool checkpw(string user, string password);

	private:
	string filename;
	vector<string> users;
	vector<string> passwords;
	vodie synch();
};

