This project aims to perform an analysis of the best neural network model to implement in an embedded device in order to classify different types of bearing failures.

The first part of this project was to build the test bench, which is located in the following repository: https://github.com/Andresf28/BancoPruebas

![image](https://github.com/user-attachments/assets/cde62cfb-547b-48b7-98fb-87a9ad4cfbdb)

In this case, data was collected to build a dataset, then build, train and validate deep learning models to select the most optimal one in terms of precision metrics, f1 score and recall.

Dataset classes:
- Normal bearing
- No lubrication bearing
- Motor off
- No 1 ball bearing
- No 2 ball bearing

Implemented models:
- CNN
- LSTM
- MLP
- Transformer

The selected model was deployed on an embedded device (ESP32), and tests were performed to validate its correct operation. A 94% accuracy was obtained.
