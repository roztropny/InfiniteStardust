//#include <fmt/format.h>
#include <spdlog\spdlog.h>


int main() {


	fmt::print("Hello World\n");
	fmt::print("Mam {} lata!\n", 42);

	auto logger = spdlog::stdout_logger_mt("InfiniteStardust", true);
	logger->set_level(spdlog::level::debug);
	logger->info("Dzisiaj mamy techday");
	logger->debug("Mowimy o c++");
	logger->error("Mielismy opoznienia");


	return 0;
}