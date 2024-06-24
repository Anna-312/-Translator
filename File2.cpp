void Interpriate(int *kom, int *dan, int *met, int *res)
{
	int i = 0;
	int j = 0;
	bool end = false;
	int codkom, p, q, r, z;
	while (!end)
	{
		 codkom = kom[i];
		 switch (codkom)
		 {
			case 29:
			{
				p = kom[i+1];
				q = kom[i+2];
				dan[p] = dan[q];
				i += 3;
				res[j] = p;
				j++;
				res[j] = dan[p];
				j++;
				break;
			}
			case 32:
			{
				 z = kom[i+1];
				 i = met[z];
				 break;
			}
			case 33:
			{
				p = kom[i+1];
				q = kom[i+2];
				r = kom[i+3];
				dan[r] = dan[p] + dan[q];
				i += 4;
				break;
			}
			case 34:
			{
				p = kom[i+1];
				q = kom[i+2];
				r = kom[i+3];
				dan[r] = dan[p] * dan[q];
				i += 4;
				break;
			}
			case 35:
			{
				p = kom[i+1];
				q = kom[i+2];
				r = kom[i+3];
				dan[r] = 1;
				for (int i1 = 1; i1 < dan[q] + 1; i1++)
					dan[r] *= dan[p];
				i += 4;
				break;
			}
			case 30:
			{
				p = kom[i+1];
				if (dan[p] == 0)
				{
					z = kom[i+2];
					i = met[z];
				}
				else
					i += 3;
				break;
			}
			case 36:
			{
				p = kom[i+1];
				q = kom[i+2];
				r = kom[i+3];
				if (dan[p] == dan[q])
					dan[r] = 1;
				else
					dan[r] = 0;
				i += 4;
				break;
			}
			case 37:
			{
				p = kom[i+1];
				q = kom[i+2];
				r = kom[i+3];
				if (dan[p] != dan[q])
					dan[r] = 1;
				else
					dan[r] = 0;
				i += 4;
				break;
			}
			case -1:
			{
				end = true;
				break;
			}
		 }

	}
	res[99] = j;
}
