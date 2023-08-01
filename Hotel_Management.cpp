#include <iostream>
#include <vector>
using namespace std;

class Guest {
    private:
        int guestId;
        string name;
        int guestContact;
        int roomId;
    public:
        Guest(int guestid, string name, int guestcontact, int roomid): guestId(guestid), name(name),guestContact(guestcontact),roomId(roomid) {}

        int getGuestId(){
            return guestId;
        }

        string getName(){
            return name;
        }

        int getContact(){
            return guestContact;
        }

        int getRoomId(){
            return roomId;
        }
};

class Room {
    private:    
        int roomId;
        string roomType;
        int roomPrice;
        int roomCapacity;
        bool isOccupied;
        vector<Guest*> occupants;
    public:
        Room(int roomid, string roomtype, int roomprice, int roomcapacity): roomId(roomid), roomType(roomtype),roomPrice(roomprice), roomCapacity(roomcapacity), isOccupied(false){}

        int getRoomId(){
            return roomId;
        }

        string getRoomType(){
            return roomType;
        }

        bool isRoomOccupied(){
            return isOccupied; 
            cout << "\nRoom is not available.";
        }

        void assignOccupant(Guest *guest){
            isOccupied = true;
            occupants.push_back(guest);
        }

        void removeOccupant(Guest *guest){
            for (auto indv = occupants.begin(); indv != occupants.end(); ++indv){
                if (*indv == guest){
                    occupants.erase(indv);
                    break;
                }
            }
            if (occupants.empty()){
                isOccupied = false;
            }
        }  
        vector<Guest*> getOccupants(){
            cout << "\n\nroomId: " << roomId << "\nroomType: " << roomType << "\nStatus: " << isOccupied << "\nOccupants: ";
            return occupants;
        }
};

class Hotel {
    private:
    vector<Room*> rooms;

    public:
    void addRoom(Room* room){
        rooms.push_back(room);
    }

    void removeRoom(Room* room){
        for (auto indv = rooms.begin(); indv != rooms.end(); ++indv){
            if (*indv == room){
                    rooms.erase(indv);
                    break;
            }
        }
    }

    vector<Room*> searchRooms(){
        vector<Room*> availableRooms;
        for (Room* room : rooms){
            if (!room->isRoomOccupied()){
                availableRooms.push_back(room);
            }
        }
        return availableRooms;
    }
};

int main(){
    cout << "\n\n\tWELCOME TO GROUP I's HOTEL.\n";
    

}
