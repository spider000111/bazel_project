import unittest
from python_project.calculator import calculator

class TestSum(unittest.TestCase):
    def test_sum(self):
        cal = calculator()
        self.assertEqual(cal.add(1,1),2)


if __name__ == '__main__':
    unittest.main()