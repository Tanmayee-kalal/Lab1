import csv
import matplotlib.pyplot as plt

threads = []
execution_time = []
speedup = []
efficiency = []

with open("results/results.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        threads.append(int(row["Threads"]))
        execution_time.append(float(row["Execution Time (s)"]))
        speedup.append(float(row["Speedup"]))
        efficiency.append(float(row["Efficiency (%)"]))

# Graph 1: Execution Time
plt.figure()
plt.plot(threads, execution_time, marker="o")
plt.xlabel("Number of Threads")
plt.ylabel("Execution Time (seconds)")
plt.title("Threads vs Execution Time")
plt.xticks(threads)
plt.grid(True)
plt.savefig("graphs/execution_time.png", dpi=300)
plt.show()

# Graph 2: Speedup
plt.figure()
plt.plot(threads, speedup, marker="o")
plt.xlabel("Number of Threads")
plt.ylabel("Speedup")
plt.title("Threads vs Speedup")
plt.xticks(threads)
plt.grid(True)
plt.savefig("graphs/speedup.png", dpi=300)
plt.show()

# Graph 3: Efficiency
plt.figure()
plt.plot(threads, efficiency, marker="o")
plt.xlabel("Number of Threads")
plt.ylabel("Efficiency (%)")
plt.title("Threads vs Efficiency")
plt.xticks(threads)
plt.grid(True)
plt.savefig("graphs/efficiency.png", dpi=300)
plt.show()