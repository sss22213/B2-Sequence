#include <stdio.h>



int main()

{

	int isB2Seq,N,nCase=0;

	int i,j,b[100],tComp;

	int ti,tj;



	while(scanf("%d",&N)!=EOF) {

		nCase++;

		isB2Seq=1;

		// Input Bi

		for (i=0;i<N;i++)

			scanf("%d",&b[i]);

		// Check Condition #1: bi<bi+1

		for (i=1;i<N;i++)

			if (b[i-1]>b[i])

				isB2Seq=0;

		if (isB2Seq==1) {

			for (i=0;i<N;i++) {

				for (j=i+2;j<N;j++) {

					tComp=b[i]+b[j];

					ti=i+1;

					tj=j-1;

					do {

						if(b[ti]+b[tj]==tComp)

							isB2Seq=0;

						else if (b[ti]+b[tj]>tComp)

							tj--;

						else

							ti++;

					}while(ti<=tj & isB2Seq==1);

				}

			}

		}



		// Output the Results

		if (isB2Seq==1)

			printf("Case #%d: It is a B2-Sequence.\n\n",nCase);

		else

			printf("Case #%d: It is not a B2-Sequence.\n\n",nCase);

	}

	return 0;

}
