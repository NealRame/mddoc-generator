import os
import re
import sys

def mdline_matcher():
	p = re.compile(r"^\s*///\s(.*)$")
	def mdline(line):
		m = p.match(line)
		return m.group(1) if m else ''
	return mdline

if __name__ == "__main__":
	filepath = sys.argv[1]

	if not os.path.isfile(filepath):
		print("File path {} does not exist. Exiting...".format(filepath), file=sys.stderr)
		sys.exit(1)

	with open(filepath) as fp:
		p = re.compile(r"^\s*///\s(.*)$")
		print('\n'.join(list(map(mdline_matcher(), fp))))

