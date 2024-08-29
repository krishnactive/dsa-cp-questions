import pandas as pd
import numpy as np
section=['A','B','C','D','E']
contri1=np.array([6700,5600,5000,5200,np.NaN])

S=pd.Series(contri1*2,index=section,dtype=np.float32)
print(S)
