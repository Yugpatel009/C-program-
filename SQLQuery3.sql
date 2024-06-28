--3.1--

declare @n int 
set @n=1
if(@n>0)
begin
print concat(@n,'no is positive')
end
else
print concat(@n,'no is negative')

--3.2--

declare @n1 int, @n2 int
set @n1=10
set @n2=20
if(@n2>@n1)
print concat(@n2,'n2 is max')
else
print concat(@n1,'n1 is max')

--3.3--
declare @a int, @b int,@c int
set @a=5
set @b=10
set @c=15
if(@a>@b and @a>@c)
print concat(@a, 'a is max')
else if(@b>@a and @b>@c)
print concat(@b, 'b is max')
else if(@c>@a and @c>@b)
print concat(@c, 'c is max')

--3.4--

declare @n5 int
set @n5=1
while(@n5<=25)
begin
print @n5
set @n5+=1
end


--3.5--
declare @n4 int
set @n4=1
while(@n4<=100)
begin
print @n4
set @n4+=2
end

--3.6--

declare @i int,@sum int
set @i=1
set @sum=0
while(@i<=100)
begin
set @sum=@sum+@i
set @i+=1
end 
print @sum

--3.7--
declare @n1 int
set @n1=15
if(@n1%2=0)
print 'the no is even'
else
print 'the no is odd'

--3.8--
declare @n1 int
set @n1=50
while(@n1>=1)
begin
if(@n1%2!=0)
print @n1
set @n1-=1
end

--3.9--

declare @marks int