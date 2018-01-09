import pandas as pd

#P, Q, R
xor_data = [[0, 1, 1], [1, 0, 1], [1, 1, 0]]
xor_df = pd.DataFrame(xor_data)
print(xor_data)
print(xor_df)
print("-----------------")
print(xor_df[0:2])
print("-----------------")
print(xor_df[1:2])
print("-----------------")
xor_data_ix = xor_df.ix[:, 0:1]
xor_label_ix = xor_df.ix[:, 2]
print(xor_data_ix)
print("-----------------")
print(xor_label_ix)
print("-----------------")

#SKLearn Metrics Comparison
from sklearn import metrics
ac_score = metrics.accuracy_score([1,2,3,4], [1,2,4,2])
print("Matching Rate : ", ac_score)
print("-----------------")
ac_score = metrics.accuracy_score([1,2,3,4], [1,2,3,4])
print("Matching Rate : ", ac_score)
