import React from 'react'
import axios from 'axios'
import { withRouter } from 'react-router-dom'
import Editor from './Editor'
import Footer from './Footer';
import './coding.css'


class Body extends React.Component {
    constructor(props) {
        super(props)

        //console.log('Inside constructor\n', this.props)

        this.hostUrl = 'http://' + window.location.host
    }

    state = {
        questiontext: null,
        questionTitle: null,
        questionField: '#include<bits/stdc++.h>\nusing namespace std;\n\nint main()\n{\n\tios_base::sync_with_stdio(0);\n\tcin.tie(0);\n\tcout.tie(0);\n\nreturn 0;\n}',
        success: false,
        lang: 'cpp',
        q_id: this.props.match.params.pk,
        method: null,
        score:null 
    }

    componentDidMount() {
        //console.log('Coding Inside Did mount')
        if(this.props.location.state) {
            const submission = this.props.location.state.submission
            //console.log(submission)
            this.setState({
                questionField: submission,
                method:1,
            })
        }

        const url = this.hostUrl + '/Coding/' + this.props.match.params.pk

        axios.get(url, {headers: {'X-Requested-With': 'XMLHttpRequest'}})
            .then(res => {
                //console.log(res.data)
                if (res.status == 200) {
                    this.setState({
                        questiontext: res.data.questions,
                        questionTitle: res.data.questionTitle,
                        success: true,
                        score:res.data.totalScore
                    })
                }
            })
    }

    setInput = (event) => {
        const { name, value } = event.target

        this.setState({
            [name]: value
        })
    }

    getEditorValue = (value) => {
    
        this.setState({
            questionField: value,
            method:null,
        })
    }

    onClickHandler = () => {
        const url = '/Testcase/' + this.state.q_id
        this.props.history.push(url, this.state)
        
    }


    loadBuffer = () => {

        const url = this.hostUrl + '/loadbuffer/' + this.props.match.params.pk
        axios.get(url).then(
            response => {
                this.setState({
                    questionField:response.data.text,
                    method:1
                })
            }
        )
    }

    loadFileAsText = () => {
        //console.log('in here')
        let fileToLoad = document.getElementById("fileToLoad").files[0];
        let fileReader = new FileReader();
        if (/\.(c|cpp)$/i.test(fileToLoad.name) === false) { alert("ENTER ONLY .c or .cpp FILES"); }
        else {
            
            fileReader.onload = (fileLoadedEvent) => {
            const textFromFileLoaded = fileLoadedEvent.target.result;
            
            this.setState({
                questionField: textFromFileLoaded,
                method:1
            })
        };
        
        fileReader.readAsText(fileToLoad, "UTF-8");
        
        }
    }

    render() {
        //console.log('Coding Inside render')
        const text = this.state.success ? (
            <div>
                <p>{this.state.questiontext}</p>
            </div>

        ) : (
                <p>Loading Page Please Wait !!!</p>
            )
        
        const score = this.state.success ? (
            <div>
                <p>{this.state.score}</p>
            </div>

        ) : (
                <p></p>
            )
        

        return (
            <div>
                <section className="container-fluid bigbody">
                    <div className="row BodY">
                        <div className="insideBody mt-3">
                            <div className="scorekey mr-3">SCORE</div>
                            <div className="scoreval ">
                                {score}
                            </div>

                            <div className="custom-file choose" >
                                <input type="file" className="custom-file-input choosefile" id="fileToLoad" name="filename" onChange={this.loadFileAsText} />
                                <label className="custom-file-label" htmlFor="customFile" style={{backgroundColor:"rgba(0,0,0,0.6)",color:"white",border:"none"}} >Choose file</label>
                            </div>
                        </div>
                        <div className="row insidecenterbody mt-3">
                            <div className="text">{text}</div>
                            <div id="editor">
                                <Editor 
                                    onChangeEditor={this.getEditorValue} 
                                    questionField={this.state.questionField}
                                    method={this.state.method}
                                />
                            </div>

                        </div>
                        <div className="insideBodydown mt-3 row">
                            <div
                                className="radiobox">
                                <input
                                    onClick={this.setInput}
                                    type="radio"
                                    name="lang"
                                    value='c'
                                    style={{ cursor: 'pointer', transform: 'scale(1.5)' }} />
                            </div>
                            <div
                                className="Cbox">
                                C
                            </div>
                            <div
                                className="radiobox">
                                <input
                                    onClick={this.setInput}
                                    defaultChecked
                                    type="radio"
                                    name="lang"
                                    value='cpp'
                                    style={{ cursor: 'pointer', transform: 'scale(1.5)' }}
                                />
                            </div>
                            <div
                                className="Cbox">
                                C++
                            </div>
                            <div className="loadbox ">
                                <button
                                    className="btn submit"
                                    name="buffer"
                                    onClick={this.loadBuffer}>
                                    LOAD BUFFER
                                </button>
                            </div>
                            <div
                                className="submitbox ">
                                <button
                                    onClick={this.onClickHandler}
                                    className=" btn submit"
                                    name="Submit">
                                    SUBMIT
                                    </button>
                            </div>
                        </div>
                    </div>
                </section>
                <Footer />
            </div>
        )
    }
}

export default withRouter(Body)