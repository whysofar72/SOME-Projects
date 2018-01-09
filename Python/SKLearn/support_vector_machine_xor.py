#Support Vector Machine

from sklearn import svm

#Result data for XOR boolean calc
#P, Q, R
xor_data = [[0, 0, 0],
                [0, 1, 1],
                [1, 0, 1],
                [1, 1, 0]]

#Separate data & label for learning (label means result val)
data = []
label = []
for row in xor_data:
    p = row[0]
    q = row[1]
    r = row[2]
    data.append([p, q])
    label.append(r)

#Learning data
clf = svm.SVC()
clf.fit(data, label)

#Prediction
pred_data = data
pre = clf.predict(pred_data)
print("Prediction Result : ", pre)

#Checking Output
succ = 0
total = 0
for idx, answer in enumerate(label):
    p = pre[idx]
    if p == answer:
        succ += 1
    total += 1
print("Percentage of the correct answers : ", succ, "/", total, "=", succ/total)
    
