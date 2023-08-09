%Lep pozdrav, tole je funkcija za O(log(n)), ker se
%tiste rekurzivne res ne da gledat, iskrene čestitke Davidu.
%Razlagal je ne bom, saj bi bil potem daljši od funkcije same.
%Bistvo je, da delo z matrikami opravi program.

function [fib]=fibonacci(n)
  k=n+1;MM = [[1, 1];[1,0]];fib=MM^k;fib = fib(2);
end

%Za poganjati predlagam GNU Octave(GUI), ker iz nekega razloga
%spodnja koda dela 10x hitreje:
%
%tic;for i=0:50
%  printf("%2d|%11d\n", i, fibonacci(i));
%endfor;toc
%
%Seveda mora biti datoteka fibonacci.m (še prej jo preimenuj,
%nekdo se je spomnil da mora biti drugačno ime) v delovni mapi,
%lahko pa uporabite tudi kake svoje rekurzivne rešitve.

%Skoraj bi pozabil:
%We're no strangers to love
%You know the rules, and so do I
%A full commitment is what I'm thinking of
%You wouldn't get this from any other guy
%
%I just wanna tell you how I'm feeling
%Gotta make you, understand
%
%Never gonna give you up
%Never gonna let you down
%Never gonna run around and desert you
%
%Never gonna make you cry
%Never gonna say goodbye
%Never gonna tell a lie, and hurt you
%
%We've known each other, for so long
%Your heart's been aching but, you're too shy to say it
%Inside we both know what's been going on
%We know the game and we're gonna play it
%
%And if you ask me how I'm feeling
%Don't tell me you're too hot to see
%
%Never gonna give you up
%Never gonna let you down
%Never gonna run around, and desert you
%
%Never gonna make you cry
%Never gonna say goodbye
%never gonna tell a lie, and hurt you
%
%Never gonna give you up
%Never gonna let you down
%Never gonna run around, and desert you
%
%Never gonna make you cry
%Never gonna say goodbye
%never gonna tell a lie, and hurt you
%
%Give you up
%Never gonna give, never gonna give
%Give you up
%Never gonna give, never gonna give
%
%We've known each other, for so long
%Your heart's been aching but, you're too shy to say it
%Inside we both know what's been going on
%We know the game and we're gonna play it
%
%I just wanna tell you how I'm feelin
%Gotta make you, understand
%Never gonna give you up
%Never gonna let you down
%Never gonna run around, and desert you
%Never gonna make you cry
%Never gonna say goodbye
%never gonna tell a lie, and hurt you
%Never gonna give you up
%Never gonna let you down
%Never gonna run around, and desert you
%Never gonna make you cry
%Never gonna say goodbye
%never gonna tell a lie, and hurt you
%
%Se vidimo na taboru!
