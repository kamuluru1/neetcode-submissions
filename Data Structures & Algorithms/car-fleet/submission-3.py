class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        road = [] # [[7, 1], [4, 2], [1. 2], [0, 1]] [pos, speed, time]
        s = []

        for i in range(len(position)):
            road.append([position[i], speed[i]])
        
        road.sort(key=lambda x: x[0], reverse=True)

        for car in road:
            time = (target - car[0]) / car[1]
            car.append(time)

        for car in road:
            if not s:
                s.append(car[2])
            else:
                if car[2] <= s[-1]:
                    continue
                else:
                    s.append(car[2])
        
        return len(s)


