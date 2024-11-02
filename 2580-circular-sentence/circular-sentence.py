class Solution(object):
    def isCircularSentence(self, sentence):
        """
        :type sentence: str
        :rtype: bool
        """
        word_list=sentence.split()
        if len(word_list)<2:
            return sentence[0]==sentence[-1]
        else:
            for i in range(len(word_list)-1):
                if word_list[i][-1]!=word_list[i+1][0]:
                    return False
                else:
                    flag=True
            if flag==True:
                return word_list[-1][-1]==word_list[0][0]