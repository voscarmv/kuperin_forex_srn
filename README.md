# A refutation to Kuperin's paper on forecasting Forex using an Elman RNN

> This program demonstrates how [Kuperin's RNN for forecasting Forex](https://arxiv.org/abs/cond-mat/0304469) can be outperformed by an empty Neural Network which simply outputs it's input unaltered.

The script downloads Foreign Exchange rates data from the [European Central Bank](https://www.ecb.europa.eu/) and performs the same statistical tests from [Kuperin's paper](https://arxiv.org/abs/cond-mat/0304469) on it, except using an "empty" neutral network.

Instead of performing calculations and data propagation on the input, the empty network simply "predicts" that tomorrow's exchange rate will be the exact same as today. In other words, it outputs the input directly, without alterations.

Even with an empty neural network it's possible to outperform Kuperin's Elman RNN, using the same statistical measures from his paper.

[This article](https://docs.google.com/document/d/1PE2vJcHmYtQNk5GS110QhNYIVHj6k80hiZdO12mv11w/pub) contains more details about this refutation.

See [my other repo](https://github.com/voscarmv/elman_rnn) for code implementations of Kuperin's RNN.

## Installation

You will need these packages to run the example script:

```sh
apt-get install build-essential wget
```

## Usage example

Just run:

```sh
./experiment.sh
```

The R squared results will be saved in R2.data

## Contact info

**Oscar Mier**
- Github: [@voscarmv](https://github.com/voscarmv)
- Twitter: [@voscarmv](https://twitter.com/voscarmv)
- Linkedin: [Oscar Mier](https://www.linkedin.com/in/oscar-mier-072984196/) 

## 🤝 Contributing

Contributions, issues and feature requests are welcome!

Feel free to check the [issues page](../../issues/).

## Show your support

Give a ⭐️ if you like this project!
