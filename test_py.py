import streamlit as st
import pandas as pd
import numpy as np

st.title("FIRST LESSON WITH STREAMLIT")
st.subheader("Indraprhmbd")
angka1=st.number_input("Masukkan angka 1",min_value=0,value=0)
angka2=st.number_input("Masukkan angka 2",min_value=0,value=0)

st.write("Angka 1 : ",angka1)
st.write("Angka 2 : ",angka2)

if st.button("tambah") :
    st.write("Hasil : ",angka1+angka2)
elif st.button("Kurang"):
    st.write("Hasil : ",angka1-angka2)
elif st.button("Kali"):
    st.write("Hasil : ",angka1*angka2)
elif st.button("Bagi"):
    st.write("Hasil : ",angka1/angka2)
elif st.button("mod"):
    st.write("Hasil : ",angka1%angka2)

# if  st.write("Hasil :",angka1/angka2)
df1 = pd.DataFrame(
    np.random.randn(50, 20), columns=("col %d" % i for i in range(20))
)

df = pd.DataFrame(np.random.randn(10, 20), columns=("col %d" % i for i in range(20)))

st.dataframe(df.style.highlight_max(axis=0))

# result=st.
