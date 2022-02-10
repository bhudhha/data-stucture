const mongoose = require('mongoose');
mongoose.connect("mongodb://localhost:27017/rahul", { useNewUrlParser: true, useCreateIndex: true, useFindAndModify: true, useUnifiedTopology: true })
.then(() => console.log('connection successfully...'))
.catch((err) => console.log(err))
const playlistSchema = new mongoose.Schema({
    name: String,
    ctype: String,
    videos: {
        type:Number,
        validate(value){
            if(value<0){
                throw new Error("negative not valid");
            }
        }
    },
    authour: String,
    date: {
        type: Date,
        default: Date.now
    }
})
const Playlist = new mongoose.model("Playlist", playlistSchema)
const createDocument = async () => {
    try {
        const reactPlaylist =new Playlist( {
            name: "React Js",
            ctype: "Front End",
            videos: 80,
            authour: "rahul kumar"
        })
        const expressPlaylist = new Playlist({
            name: "Express Js",
            ctype: "back End",
            videos: 20,
            authour: "rahul kumar"
        })
        const nodejsPlaylist =new Playlist({
            name: "node Js",
            ctype: "back End",
            videos: 50,
            authour: "rahul kumar"
        })
        const mongooosePlaylist =new Playlist({
            name: "mongoose",
            ctype: "database",
            videos: 100,
            authour: "rahul kumar"
        })
        const mongoPlaylist =new Playlist({
            name: "mongoose",
            ctype: "database",
            videos: 100,
            authour: "rahul kumar"
        })
        const result =await Playlist.insertMany([reactPlaylist,mongooosePlaylist,expressPlaylist,nodejsPlaylist,mongoPlaylist]);
        console.log(result)
    } catch (err) {
        console.log(err);
    }
}
// createDocument();
const getDocument=async ()=>{
    try{
       const result=await Playlist.find({$and:[{authour:"rahul kumar"}]})
    //    .countDocuments();
       console.log(result);
    }catch(err){
        console.log(err);
    }
}
// getDocument();
const deleteDocument=async ()=>{
    try{
       const result=await Playlist.deleteMany({$and:[{authour:"rahul kumar"}]});
    }catch(err){
        console.log(err);
    }
}
// deleteDocument();