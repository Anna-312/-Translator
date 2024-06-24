 class Info
{
	public:
		static inline char KeyWords[5][15] = {"if", "then", "else", "ÖÈÊË_ÏÎÊÀ", "ÊÎÍÅÖ"};
		static inline char Constants[100][100];
		static inline int CountConstants = 0;
		static inline char Indifiers[100][100];
		static inline int CountIndifiers = 0;
		static inline char Symbols[] = {"QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuiopasdfghjklzxcvbnm¨ÉÖÓÊÅÍÃØÙÇÕÚİÆÄËÎĞÏÀÂÛÔß×ÑÌÈÒÜÁŞ¸éöóêåíãøùçõúıæäëîğïàâûôÿ÷ñìèòüáş_"};
		static inline char Integers[] = {"0123456789"};
		static inline char Dels[] = {'(', ')', '+', '*', '=', '#', '^', ';'};
		static inline bool Error = false;
		static inline char Message[100];
};

Info *info = new Info();

bool Is_Symbol(char ch)
{
   if (strchr(info->Symbols, ch) == nullptr)
		return false;
	return true;
}

bool Is_Integer(char ch)
{
	if (strchr(info->Integers, ch) == nullptr)
		return false;
	return true;
}

int Is_Del(char ch)
{
	for (int i = 0; i < 8; i++)
		if (info->Dels[i] == ch)
			return i + 8;
	return -1;
}

int Is_KeyWord(char *str)
{
	for (int i = 0; i < 5; i++)
		if (strcmp(info->KeyWords[i], str) == 0)
			return 2 + i;
	return -1;
}

bool In_Indifiers(char *str)
{
	for (int i = 0; i < info->CountIndifiers; i++)
		if (strcmp(info->Indifiers[i], str) == 0)
			return true;
	return false;
}
int Num_In_Indifiers(char *str)
{
	for (int i = 0; i < info->CountIndifiers; i++)
		if (strcmp(info->Indifiers[i], str) == 0)
			return i;
	return -1;
}

int Num_In_Constants(char *str)
{
	for (int i = 0; i < info->CountConstants; i++)
		if (strcmp(info->Constants[i], str) == 0)
			return i;
	return -1;
}

 bool In_Constants(char *str)
{
	for (int i = 0; i < info->CountConstants; i++)
		if (strcmp(info->Constants[i], str) == 0)
			return true;
	return false;
}

void SKANER(char *str, int *type, char *leksema, int *j)
{
	info->Error = false;
	int i = 0;
	while (str[*j] == ' ')
		(*j)++;
	if (str[*j] == '\0')
	{
		*type = -1;
		return;
	}
	if (Is_Symbol(str[*j]))
	{
		leksema[i] = str[*j];
		i++;
		(*j)++;
		while ((str[*j] != '\0') && ((Is_Symbol(str[*j])) || (Is_Integer(str[*j]))))
		{
			leksema[i] = str[*j];
			(*j)++;
			i++;
		}
		leksema[i] = '\0';
		int n;
		n = Is_KeyWord(leksema);
		if (n != -1)
			*type = n;
		else
		{
			if (strlen(leksema) > 10)
			{
				info->Error = true;
				char mes[] = {"Ïğåâûøåíà ìàêñèìàëüíàÿ äëèíà èäåíòèôèêàòîğà: "};
				strcpy(info->Message, mes);
				return;
			}
			*type = 1;
			if (!In_Indifiers(leksema))
			{
				strcpy(info->Indifiers[info->CountIndifiers], leksema);
				info->CountIndifiers += 1;
			}
		}
	}
	else
		if (Is_Integer(str[*j]))
		{
			leksema[i] = str[*j];
			i++;
			(*j)++;
			if (Is_Symbol(str[*j]))
			{
				leksema[i] = str[*j];
				info->Error = true;
				char mes[] = {"Íåâåğíîå âûğàæåíèå: "};
				strcpy(info->Message, mes);
				return;
			}
			while (Is_Integer(str[*j]))
			{
				leksema[i] = str[*j];
				(*j)++;
				i++;
			}
			leksema[i] = '\0';
			*type = 7;
			if (!In_Constants(leksema))
			{
				strcpy(info->Constants[info->CountConstants], leksema);
				info->CountConstants += 1;
			}
		}
		else
		{
			int n;
			n = Is_Del(str[*j]);
			if (n != -1)
			{
				leksema[i] = str[*j];
				(*j)++;
				i++;
				leksema[i] = '\0';
				*type = n;
			}
			else
			{
				info->Error = true;
				char mes[] = {"Íåâîçìîæíî îïğåäåëèòü òèï ëåêñåìû: "};
				leksema[i] = str[*j];
				strcpy(info->Message, mes);
				return;
			}

		}
}
