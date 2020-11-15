[![GitHub contributors](https://img.shields.io/github/contributors/HorebParraud/push_swap?style=for-the-badge)](https://github.com/HorebParraud/push_swap/graphs/contributors)
[![GitHub forks](https://img.shields.io/github/forks/HorebParraud/push_swap?style=for-the-badge)](https://github.com/HorebParraud/push_swap/network)
[![GitHub stars](https://img.shields.io/github/stars/HorebParraud/push_swap?style=for-the-badge)](https://github.com/HorebParraud/push_swap/stargazers)
[![GitHub issues](https://img.shields.io/github/issues/HorebParraud/push_swap?style=for-the-badge)](https://github.com/HorebParraud/push_swap/issues)
[![GitHub license](https://img.shields.io/github/license/HorebParraud/push_swap?style=for-the-badge)](https://github.com/HorebParraud/push_swap)
[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a>
    <img src=".CPE.png" alt="Logo">
  </a>

  <h1 align="center">Push_swap</h1>

  <p align="center">
    EPITECH project - Elementary Programming in C
    <br />
    <br />
    <a href="https://github.com/HorepParraud/push_swap/issues">Report Bug</a>
    ·
    <a href="https://github.com/HorebParraud/push_swap/issues">Request Feature</a>
  </p>
</p>


<!-- IMPORTANT -->
## Important!
**If you are seeing this repository, please just star it! It will not take much time! :)**

<!-- ABOUT THE PROJECT -->
## About The Project
The program is made up  of two lists of numbers named *l_a* and *l_b*.
In the biginning, *l_b* will be empty and *l_a* will contain a certain amount of positive or negative numbers.
The obective of the game is to sort *l_a*

##### In order to accomplish this, i will only have access to the following operation:
* `sa` swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
* `sb` swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
* `sc` sa and sb at the same time.
* `pa` take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).
* `pb` take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).
* `ra` rotate l_a toward the beginning, the first element will become the last.
* `rb` rotate l_b toward the beginning, the first element will become the last.
* `rr` ra and rb at the same time.
* `rra` rotate l_a toward the end, the last element will become the first.
* `rrb` rotate l_b toward the end, the last element will become the first.
* `rrr` rra and rrb at the same time.

### Built With
* Makefile using gcc

##### Authorized Functions
* write
* malloc
* free

<!-- GETTING STARTED -->
## Getting Started
Test the program with your list of number as parameter
```shh
./push_swap 1 12 3 -4 [...]
```
<!--USEFULL LINKS-->
##
[![LinkedIn][linkedin-shield]][linkedin-url] [![GitHub][github-shield]][github-url]

<!-- MARKDOWN LINKS, ALIAS & IMAGES -->
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/horeb-parraud/
[github-shield]: https://img.shields.io/badge/-other_repositories-black.svg?style=for-the-badge&logo=github&colorB=555
[github-url]: https://github.com/HorebParraud?tab=repositories
