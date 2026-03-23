# Intelligent Bearing Fault Detection: Deep Learning Model Assessment and Embedded System Deployment

**Manuscript ID:** 10411

**Authors:**
- Andrés Felipe Cotrino Herrera¹
- Jesús Alfonso López Sotelo¹
- Alonso Toro Lazo²
- Juan Carlos Blandón Andrade²

**Affiliations:**
1. School of Engineering and Basic Sciences, Universidad Autónoma de Occidente, Cali, Colombia 
2. Systems and Telecommunications Engineering Program, Universidad Católica de Pereira, Pereira, 
Colombia

---

## About the repository

This project aims to perform an analysis of the best neural network model to implement in an embedded device in order to classify different types of bearing failures.

The first part of this project was to build the test bench, which is located in the following repository: https://github.com/Andresf28/BancoPruebas

![image](https://github.com/user-attachments/assets/cde62cfb-547b-48b7-98fb-87a9ad4cfbdb)

In this case, data was collected to build a dataset, then build, train and validate deep learning models to select the most optimal one based on accuracy, f1 score and recall.

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

The selected model (CNN) was deployed on an embedded device (ESP32), and tests were performed to validate its correct operation. A 94% accuracy was obtained.

---

### Included Scripts

This repository contains all the scripts and databases required to reproduce all the results in the paper.

| File / Folder | Description |
|---------------|-------------|
| `MLP_tested.ipynb` ||
| `CNN_tested.ipynb` ||
| `LSTM_tested.ipynb` ||
| `Transformer_tested.ipynb` ||
| `Dataset` | This folder contains  |
