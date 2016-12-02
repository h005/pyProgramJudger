# by h005
import os
import subprocess
import threading
import time


# set parameters here


problemList = {'1','2','3'}

dir = '.\\wu'

filetestDictPath = {'.\\input\\in1.txt':'1',
	'.\\input\\in2.txt':'2',
	'.\\input\\in3.txt':'3'}

filetestDictOutPath = {'.\\output\\out1.txt':'1',
	'.\\output\\out2.txt':'2',
	'.\\output\\out3.txt':'3'}

summaryFilePath = '.\\summary.txt'

testInDict = {}
testOutDict = {}



# ========================

summaryFile = open(summaryFilePath,'w')
# read in the test file for different problems
for filePath in filetestDictPath:
	# print filePath + ' ' + filetestDictPath[filePath]
	file = open(filePath,'r')

	line = file.readline()
	line = line.strip()

	while line =='':
		line = file.readline()
		line = line.strip()

	index = 1
	# testInDict 
	tmpSet = {}
	tmpstr = line
	while line:
		# tmpSet.add(line)
		line = file.readline()
		line = line.strip()
		# another test case
		if line == '':
			tmpSet[index] = tmpstr
			index = index + 1
			line = file.readline()
			line = line.strip()
			while line == '':
				line = file.readline()
				if not line:
					break
				line = line.strip()
			tmpstr = line
		else:
			tmpstr = tmpstr + '\n' + line


	file.close()

	testInDict[filetestDictPath[filePath]] = tmpSet

# for ele in testInDict:
# 	print ele + '.......\\'
# 	for el in testInDict[ele]:
# 		print testInDict[ele][el] + '\n'


# read in the sample output file
for filePath in filetestDictOutPath:
	file = open(filePath,'r')

	line = file.readline()
	if not line:
		file.close()
		tmpSet = {}
		testOutDict[filetestDictOutPath[filePath]] = tmpSet
		continue
	line = line.strip()

	while line == '':
		line = file.readline()
		line = line.strip()

	index = 1
	# testOutDict
	tmpSet = {}
	tmpstr = line

	while line:
		# tmpSet.add(line)
		line = file.readline()
		line = line.strip()
		# another test case
		if line == '':
			tmpSet[index] = tmpstr
			index = index + 1
			line = file.readline()
			line = line.strip()
			while line == '':
				line = file.readline()
				if not line:
					break
				line = line.strip()
			tmpstr = line
		else:
			tmpstr = tmpstr + '\n' + line

	file.close()

	testOutDict[filetestDictOutPath[filePath]] = tmpSet

# for ele in testOutDict:
# 	print ele + '......./'
# 	for el in testOutDict[ele]:
# 		print testOutDict[ele][el] + '\n'


'''
check whether the process in p was terminated
if not, kill the process 
else do nothing
where p is the subThread created in subprocess.Popen
'''


def checkProgram(p):
	# print 'call this function....................'	
	if p.poll() == None:
		# print p.returncode
		# print 'kill the thread..'
		# the program in dead lock can't be terminated
		# p.terminated()
		p.kill()
	# print 'function result .........'
	# print p.returncode



filelist = os.listdir(dir)

# assume the cpp file names as [file].cpp
# then the compiled the file named as [file]o
# compile the cpp file and generate the [file]o file,
# if there is an error when compiled the file of [file]o
# won't appeared.

# compile all and generate compiled file
for folder in filelist:
	# filter the folders
	if not os.path.isfile(folder):
		# print folder + '/'

		pFilelist = os.listdir(dir+'\\'+folder)
		for pfile in pFilelist:
			# print pfile
			name,ext = os.path.splitext(pfile)
			if ext == '.cpp':
				# print name,ext
				# print dir
				p = subprocess.Popen(['g++',dir+'\\'+folder+'\\'+pfile,'-o',dir+'\\'+folder+'\\'+name+'o'],stdout=subprocess.PIPE, stderr=subprocess.PIPE)
				# print '================'


# print '===================== test ==============='
# test all

for folder in filelist:
	# filter the folders
	if not os.path.isfile(folder):
		# print folder + '/'
		summaryFile.write('%s/\n' % folder)
		pFilelist = os.listdir(dir + '\\' + folder)
		for pfile in pFilelist:
			name,ext = os.path.splitext(pfile)
			if ext == '.cpp':
				summaryFile.write('		%s\n' % name)
				print dir + '\\' + folder + '\\' + name + 'o.exe'
				if os.path.isfile(dir+'\\'+folder+'\\'+name+'o.exe'):
					# test the cases with different input
					if name[-1] in problemList:
						summaryFile.write('		problem %s\n' % name[-1])
						for inputCase in testInDict[name[-1]]:
							# print 'input case ' + name[-1]
							# print testInDict[name[-1]][inputCase]
							# print dir+'\\'+folder+'\\'+name+'o'+'\n'
							p = subprocess.Popen([dir+'\\'+folder+'\\'+name+'o.exe'], stdin = subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
							stdout, stderr = p.communicate(testInDict[name[-1]][inputCase])
							# wait the program for n seconds to run the result
							time.sleep(2)
 						    # = p.communicate()
							# print '...............get reuslt.........'
							# print inputCase + ' ' + stdout
							# print stdout
							# print stderr
							checkProgram(p)
							summaryFile.write('		input:\n')
							summaryFile.write('		%s\n' % testInDict[name[-1]][inputCase])
							summaryFile.write('		std answer:\n')
							summaryFile.write('		%s\n' % testOutDict[name[-1]][inputCase])
							summaryFile.write('		...........\n')
							summaryFile.write('		program output:\n')
							summaryFile.write('		%s\n' % stdout)
					else:
						print 'file named error\n'
						print name
				else:
					summaryFile.write('		compile error\n')


summaryFile.close()
print 'done'

