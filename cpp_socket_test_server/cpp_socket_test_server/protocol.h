enum PROTOCOL {
	HELLO=100,

	FILE_LENGTH = 101,
	FILE_NAME,
	FILE_ERR,

	LOGIN=200,
	LOGIN_ACCEPT,
	LOGIN_DENY,
	LOGIN_SESSION_EXIST,

	LOGOUT = 210,
	LOGOUT_OK,
	LOGOUT_ERR,

	SIGNUP = 290,
	SIGNUP_OK,
	SIGNUP_ERR_ID,
	SIGNUP_ERR_UNKNOWN,

	TANK_JOIN = 300,
	TANK_MOVE,
	TANK_LEAVE,

	VAR_NEW = 310,
	VAR_CHANGE,
	VAR_DELETE,

	CHAT_AREA = 400,
	CHAT_CHANNEL,
	CHAT_ALL,
	CHAT_SYSTEM,

	PING=998,
	PING_NOTIFY
};

