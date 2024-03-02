# Temperature-Monitoring-System
Implementation of smart phone based temperature monioring system using LPC2129 Microcontroller , MCP9700 Temperature Sensor and UART protocol

By using Rhydolabz board, implementing a smart phone based temperature monitoring system using MCP9700 temperature sensor connected to the 2nd ADC channel(Total 4 channels) of lpc2129 microcontroller. The live temperature monitoring data is send to the smart phone using HC-05 bluetooth module. 

Debugging Result on Keil:
![Temp_ADC](https://github.com/officialmeliorate/Temperature-Monitoring-System/assets/157610672/784a5df3-ae5c-4d4e-9acf-425c3d22abcf)

Connections(MCP9700 to LPC2129 uC):

    VDD: 3.3V
    GND: GND
    Vout: P0.28(LPC2129)
