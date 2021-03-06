# libft
Проект по созданию своей библиотеки с основными стандартными функциями.
По мере написания универсальных функций, дополняю.

### Работа со строками и массивами
**ft_memset**			- заполнение массива указанным символом		\
**ft_bzero**			- заполнение массива символом '\0'			\
**ft_memcpy**			- копирование непересекающихся массивов		\
**ft_memccpy**			- копирование непересекающихся массивов (до символа)	\
**ft_memmove**			- копирование массивов (в том числе и пересекающихся)	\
**ft_memchr**			- поиск первого вхождения символа в массиве	\
**ft_memcmp**			- сравнение массивов		\
**ft_strlen**			- определение длины строки	\
**ft_strlcpy**			- копирование строки в начало строки из буфера	\
**ft_strlcat**			- копирование строки в конец строки из буфера	\
**ft_strchr**			- поиск первого вхождения символа в строку		\
**ft_strrchr**			- поиск последнего вхождения символа в строку	\
**ft_strnstr**			- поиск совпадение короткой строки в длинной	\
**ft_strncmp**			- сравнение строк с ограничением количества сравниваех символов	\
**ft_atoi**				- преобразование строки в число	\

### Работа с двумерными массивами
**ft_arrlen**				- определение длины массива	\
**ft_search_str_in_arr**	- поиск строки в массиве строк по полному совпадению	\
**ft_str_in_arrstr**		- поиск частичного совпадения строки в строках массива	\

### Работа с символами ASCII
**ft_isalpha**			- проверка символа на принадлежность к буквам таблицы ASCII	\
**ft_isdigit**			- проверка символа на принадлежность к числам таблицы ASCII	\
**ft_isalnum**			- проверка символа на принадлежность к буквам или цифрам таблицы ASCII	\
**ft_isascii**			- проверка символа на принадлежность к символам таблицы ASCII			\
**ft_isprint**			- проверка символа на принадлежность к печатным символам таблицы ASCII	\
**ft_toupper**			- повышает регистр символа, относящегося к буквам таблицы ASCII			\
**ft_tolower**			- понижает регистр символа, относящегося к буквам таблицы ASCII			\

### Работа со строками с выделением памяти
**ft_calloc**			- выделяет память заданного размера, заполняя ее символом '\0'	\
**ft_strdup**			- дублирование строки с выделением памяти под новую строку		\
**ft_substr**			- копирование части строки с выделением памяти под результат	\
**ft_strjoin**			- копирует (соединяет) две строки последовательно с выделением памяти под результат	\
**ft_strtrim**			- обрезает строку с двух сторон, если встречает символы из второй строки	\
**ft_split**			- разделяет строку на массив строк по указанному символу с выделением памяти под результат	\
**ft_itoa**				- преобразует число в строку с выделением памяти под результат	\
**ft_strmapi**			- обработка строки посимвольно функцией-аргументом с выделением памяти по результат	\
**ft_get_next_line**	- создает дубликат строки из источника по указанному fd, следующей за последней дублированной ранее	\

### Работа с двумерными массивами c выделением памяти
**ft_arrcpy_strdup**	- дублирование строк массива в другой массив с выделением памяти под новые строки	\
**ft_subarr_strdup**	- дублирование части строк массива в другой массив с выделением памяти под новые строки	\
**ft_add_str_to_arr**	- добавление строки в массив путем создания копии массива длинной N+1	\
**ft_del_str_from_arr**	- удаление строки из массива путем создания копии массива длинной N-1 без удаляемой строки	\
**ft_frmtrx**			- очистка памяти двумерного массива (например, результат ft_split)		\

### Вывод символов и строк
**ft_putchar_fd**		- вывод символа на указанный дескриптов потока	\
**ft_putstr_fd**		- вывод строки на указанный дескриптор потока	\
**ft_putendl_fd**		- вывод строки на указанный дескриптор потока с завершением переносом строки	\
**ft_putnbr_fd**		- вывод числа на указанный дескрипор потока		\

### Работа со односвязными списками
**ft_lstnew**			- создание нового элемента списка	\
**ft_lstsize**			- посчитать число элементов списка	\
**ft_lstlast**			- найти последний элемент списка	\
**ft_lstadd_back**		- добавить элемент в конец списка	\
**ft_lstadd_front**		- добавить элемент в начало списка	\
**ft_lstdelone**		- удаление контента одного элемента списка с применением функции-аргумента	\
**ft_lstclear**			- удаление контента всех элементов списка с применением функции-аргумента	\
**ft_lstiter**			- итерация всех элементов списка с применением функции-аргумента к коненту каждого	\
**ft_lstmap**			- создание копии списка с применением функции-аргумента к контенту каждого элемента оригинала и удалению копии в случае ошибки	\
