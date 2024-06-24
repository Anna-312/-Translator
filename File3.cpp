#include "File1.cpp"

int New(int *mas)
{
	mas[99] += 1;
	return mas[99] - 1;
}
void Analysis(char *text, char *answer, int *kom, int *dan, int *met)
{
	int lastkom = 0;
	char leksema[100];
	met[99] = 0;
	dan[99] = 0;
	int ids[100];
	for (int i = 0; i < 100; i++)
		ids[i] = -1;
	int cons[100];
	for (int i = 0; i < 100; i++)
		cons[i] = -1;
	int j = 0;
	int type = 0;
	bool newleksema = true;
	int magazin[100];
	magazin[0] = -1;
	int i = 1;
	magazin[1] = 16;
	while (i >= 0)
	{
		 if (newleksema)
			SKANER(text, &type, leksema, &j);
		 if (info->Error)
			return;
		 switch (magazin[i])
		 {
			case 16:
				switch (type)
				{
					case 1:
					{
						magazin[i] = 17;
						i++;
						magazin[i] = 18;
						newleksema = false;
						break;
					}
					case 2:
					{
						magazin[i] = 17;
						i++;
						magazin[i] = 18;
						newleksema = false;
						break;
					}
					case 5:
					{
						magazin[i] = 17;
						i++;
						magazin[i] = 18;
						newleksema = false;
						break;
					}
					default:
					{
						strcpy(answer, "Отвергнуть!");
						return;
					}
				}
				break;
			case 17:
				switch (type)
				{
					case 1:
					{
						magazin[i] = 17;
						i++;
						magazin[i] = 18;
						newleksema = false;
						break;
					}
					case 2:
					{
						magazin[i] = 17;
						i++;
						magazin[i] = 18;
						newleksema = false;
						break;
					}
					case 5:
					{
						magazin[i] = 17;
						i++;
						magazin[i] = 18;
						newleksema = false;
						break;
					}
					case -1:
					{
						i--;
						newleksema = false;
						break;
					}
					case 6:
					{
						i--;
						newleksema = false;
						break;
					}
					default:
					{
						strcpy(answer, "Отвергнуть!");
						return;
					}
				}
				break;
			case 18:
				switch (type)
					{
						case 1:
						{
							int num = Num_In_Indifiers(leksema);
							int p;
							if (ids[num] != -1)
								p = ids[num];
							else
							{
								p = New(dan);
								ids[num] = p;
							}
							magazin[i] = 15;
							i++;
							magazin[i] = -1;
							i++;
							magazin[i] = p;
							i++;
							magazin[i] = 29;
							i++;
							magazin[i] = i-3;
							i++;
							magazin[i] = 20;
							i++;
							magazin[i] = 12;
							newleksema = true;
							break;
						}
						case 2:
						{
							int z;
							z = New(met);
							magazin[i] = z;
							i++;
							magazin[i] = 19;
							i++;
							magazin[i] = 18;
							i++;
							magazin[i] = 3;
							i++;
							magazin[i] = z;
							i++;
							magazin[i] = -1;
							i++;
							magazin[i] = 30;
							i++;
							magazin[i] = 9;
							i++;
							magazin[i] = i-3;
							i++;
							magazin[i] = 27;
							i++;
							magazin[i] = 8;
							newleksema = true;
							break;
						}
						case 5:
						{
							int z, w;
							z = New(met);
							w = New(met);
							magazin[i] = 6;
							i++;
							magazin[i] = z;
							i++;
							magazin[i] = 31;
							i++;
							magazin[i] = w;
							i++;
							magazin[i] = 32;
							i++;
							magazin[i] = 17;
							i++;
							magazin[i] = z;
							i++;
							magazin[i] = -1;
							i++;
							magazin[i] = 30;
							i++;
							magazin[i] = 9;
							i++;
							magazin[i] = i-3;
							i++;
							magazin[i] = 27;
							i++;
							magazin[i] = 8;
							i++;
							magazin[i] = w;
							i++;
							magazin[i] = 31;
							newleksema = true;
							break;
						}
						default:
						{
							strcpy(answer, "Отвергнуть!");
							return;
						}
					}
					break;
				case 19:
					switch (type)
						{
							case 1:
							{
								magazin[i] = 31;
								newleksema = false;
								break;
							}
							case 2:
							{
							{
								magazin[i] = 31;
								newleksema = false;
								break;
							}
							case -1:
							{
								magazin[i] = 31;
								newleksema = false;
								break;
							}
							case 5:
								magazin[i] = 31;
								newleksema = false;
								break;
							}
							case 4:
							{
								int w, z;
								w = New(met);
								z = magazin[i-1];
								i -= 1;
								magazin[i] = w;
								i++;
								magazin[i] = 31;
								i++;
								magazin[i] = 18;
								i++;
								magazin[i] = z;
								i++;
								magazin[i] = 31;
								i++;
								magazin[i] = w;
								i++;
								magazin[i] = 32;
								newleksema = true;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				case 20:
					switch (type)
						{
							case 1:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 21;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 22;
								newleksema = false;
								break;
							}
							case 7:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 21;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 22;
								newleksema = false;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				 case 21:
					switch (type)
						{
							case 10:
							{
								int r, p;
								r = New(dan);
								p = magazin[i-1];
								magazin[i-1] = r;
								magazin[i] = 21;
								i++;
								magazin[i] = r;
								i++;
								magazin[i] = -1;
								i++;
								magazin[i] = p;
								i++;
								magazin[i] = 33;
								i++;
								magazin[i] = i-3;
								i++;
								magazin[i] = 22;
								newleksema = true;
								break;
							}
							case 15:
							{
								i--;
								magazin[magazin[i-1]] = magazin[i];
								i--;
								i--;
								newleksema = false;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				 case 22:
					switch (type)
						{
							case 1:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 23;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 24;
								newleksema = false;
								break;
							}
							case 7:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 23;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 24;
								newleksema = false;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				 case 23:
					switch (type)
						{
							case 11:
							{
								int r, p;
								r = New(dan);
								p = magazin[i-1];
								magazin[i-1] = r;
								magazin[i] = 23;
								i++;
								magazin[i] = r;
								i++;
								magazin[i] = -1;
								i++;
								magazin[i] = p;
								i++;
								magazin[i] = 34;
								i++;
								magazin[i] = i-3;
								i++;
								magazin[i] = 24;
								newleksema = true;
								break;
							}
							case 10:
							{
								i--;
								magazin[magazin[i-1]] = magazin[i];
								i--;
								i--;
								newleksema = false;
								break;
							}
							case 15:
							{
								i--;
								magazin[magazin[i-1]] = magazin[i];
								i--;
								i--;
								newleksema = false;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				  case 24:
					switch (type)
						{
							case 1:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 25;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 26;
								newleksema = false;
								break;
							}
							case 7:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 25;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 26;
								newleksema = false;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				  case 25:
					switch (type)
						{
							case 10:
							{
								i--;
								magazin[magazin[i-1]] = magazin[i];
								i--;
								i--;
								newleksema = false;
								break;
							}
							case 11:
							{
								i--;
								magazin[magazin[i-1]] = magazin[i];
								i--;
								i--;
								newleksema = false;
								break;
							}
							case 15:
							{
								i--;
								magazin[magazin[i-1]] = magazin[i];
								i--;
								i--;
								newleksema = false;
								break;
							}
							case 14:
							{
								int r, p;
								r = New(dan);
								p = magazin[i-1];
								magazin[i-1] = r;
								magazin[i] = 25;
								i++;
								magazin[i] = r;
								i++;
								magazin[i] = -1;
								i++;
								magazin[i] = p;
								i++;
								magazin[i] = 35;
								i++;
								magazin[i] = i-3;
                                i++;
								magazin[i] = 26;
								newleksema = true;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				  case 26:
					switch (type)
						{
							case 1:
							{
								magazin[magazin[i-1]] = ids[Num_In_Indifiers(leksema)];
								i--;
								i--;
								newleksema = true;
								break;
							}
							case 7:
							{
								int num = Num_In_Constants(leksema);
								if (cons[num] == -1)
								{
									int p, a;
									String str;
									str = leksema;
									p = New(dan);
									magazin[magazin[i-1]] = p;
									dan[p] = StrToInt(str);
									cons[num] = p;
								}
								else
									magazin[magazin[i-1]] = cons[num];
								i--;
								i--;
								newleksema = true;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				  case 27:
					switch (type)
						{
							case 1:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 28;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 26;
								newleksema = false;
								break;
							}
							case 7:
							{
								magazin[i] = -1;
								i++;
								magazin[i] = 28;
								i++;
								magazin[i] = i-2;
								i++;
								magazin[i] = 26;
								newleksema = false;
								break;
							}
							default:
							{
								strcpy(answer, "Отвергнуть!");
								return;
							}
						}
						break;
				   case 28:
						switch (type)
							{
								case 12:
								{
									int p, t;
									t = New(dan);
									magazin[magazin[i-2]] = t;
									magazin[i-2] = t;
									p = magazin[i-1];
									magazin[i-1] = -1;
									magazin[i] = p;
									i++;
									magazin[i] = 36;
									i++;
									magazin[i] = i-3;
									i++;
									magazin[i] = 26;
									newleksema = true;
									break;
								}
								case 13:
								{
									int p, t;
									t = New(dan);
									magazin[magazin[i-2]] = t;
									magazin[i-2] = t;
									p = magazin[i-1];
									magazin[i-1] = -1;
									magazin[i] = p;
									i++;
									magazin[i] = 37;
									i++;
									magazin[i] = i-3;
									i++;
									magazin[i] = 26;
									newleksema = true;
									break;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
				   case 12:
						switch (type)
							{
								case 12:
								{
									i--;
									newleksema = true;
									break;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
				   case 8:
						switch (type)
							{
								case 8:
								{
									i--;
									newleksema = true;
									break;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
				   case 9:
						switch (type)
							{
								case 9:
								{
									i--;
									newleksema = true;
									break;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
				   case 3:
						switch (type)
							{
								case 3:
								{
									i--;
									newleksema = true;
									break;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
				   case 6:
						switch (type)
							{
								case 6:
								{
									i--;
									newleksema = true;
									break;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
					case 15:
						switch (type)
							{
								case 15:
								{
									i--;
									newleksema = true;
									break;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
					case 29:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   kom[lastkom] = magazin[i-1];
						   lastkom++;
						   kom[lastkom] = magazin[i-2];
						   lastkom++;
						   i -= 3;
						   newleksema = false;
						}
						break;
					case 30:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   newleksema = false;
						}
						break;
					 case 31:
						{
						   met[magazin[i-1]] = lastkom;
						   i--;
						   i--;
						   newleksema = false;
						}
						break;
					 case 32:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   i--;
						   lastkom++;
						   newleksema = false;
						}
						break;
					 case 33:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   newleksema = false;
						}
						break;
					 case 34:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   newleksema = false;
						}
						break;
					 case 35:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   newleksema = false;
						}
						break;
					 case 36:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   newleksema = false;
						}
						break;
					 case 37:
						{
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   kom[lastkom] = magazin[i];
						   lastkom++;
						   i--;
						   newleksema = false;
						}
						break;
					 case -1:
						switch (type)
							{
								case -1:
								{

									kom[lastkom] = -1;
									strcpy(answer, "Допустить!");
									return;
								}
								default:
								{
									strcpy(answer, "Отвергнуть!");
									return;
								}
							}
							break;
					default:
                    {
						strcpy(answer, "Отвергнуть!");
						return;
					}
		 }
	}
}


