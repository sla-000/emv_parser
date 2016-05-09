# emv_parser

Utility used to parse TLV EMV files

# How to compile

Import project to configured for C/C++ Eclipse IDE, or if You don't have it or don't want to start it cd to Debug directory and execute make.

# Usage

Type 
./tlv_parse --help

Usage: tlv_parse [OPTION...] 
TLV format parse tool

  -i, --input=FILE           Input file name
  -o, --output=FILE          Output file name, stdout if none
  -a, --auto                 Auto output file name
  -s, --offset=INTEGER       Offset or shift in input file (0)
  -?, --help                 Give this help list
      --usage                Give a short usage message
  -V, --version              Print program version

Mandatory or optional arguments to long options are also mandatory or optional
for any corresponding short options.

# Example

Create file with content:

9F160F11223344556677889900AABBCCDDFF9F4E104341524454454B2D495354414E42554C9F1B0400000AF09F3501159F1C0811223344556677885F57009F01009F400500000000009F09020002DF810400DF810500DF81170100DF81180160DF81190108DF811A039F6A04DF8130009F
1E080001020304050607DF810C01029F6D020001DF811E0110DF812C0100DF811C020000DF811D01009F15020102DF812D009F7E00DF812306000000010000DF812406000000030000DF812506000000030000DF811F0108DF8120050000000000DF8121050000000000DF812205000000
00009F1A020840DF814A0101DF814B0101DF814C0101DF814D0101DF814E01009F390107DF81470108

Name it qwerty.txt

./tlv_parse -i qwerty.txt

tag: 9F16 - Merchant Identifier (When concatenated with the Acquirer Identifier, uniquely identifies a given merchant)
len: 15
data: 11223344556677889900AABBCCDDFF

tag: 9F4E - Merchant Name and Location (Indicates the name and location of the merchant)
len: 16
data: 4341524454454B2D495354414E42554C

tag: 9F1B - Terminal Floor Limit (Indicates the floor limit in the terminal in conjunction with the AID)
len: 4
data: 00000AF0
...


./tlv_parse -a -i qwerty.txt

Output will be redirected to file parsed-qwerty.txt

./tlv_parse -o asdf.txt -i qwerty.txt

Output will be redirected to file asdf.txt

# Unknown tags

Some tags still unknown to me, please feel free to send me description of this tags if You know them.

# Commit messages

Sorry commit message was in russian and not survived when was imported from HG repository to GIT.
