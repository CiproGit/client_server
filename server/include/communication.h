#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include "server.h"

namespace communication {
	class Communication : public QObject {
		Q_OBJECT
	private:
		Server server;
	public:
		Communication();
		virtual ~Communication();
		bool start();
	public slots:
		void on_new_message();
	};
} // namespace communication

#endif // COMMUNICATION_H
