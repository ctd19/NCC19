import React from 'react'
import Footer from '../CodingPage/Footer';
import axios from 'axios'
import './leaderboard.css'
import Cell from './cell'
import Lock from '../../../frontend/static/frontend/lock.png'
class Leaderboard extends React.Component {

    constructor(props) {
        super(props)

        this.hostUrl = 'http://' + window.location.host
    }

    state = {
        users: [
        ],
        promise: false,
        flag:false
    }

    componentDidMount() {
        const url = this.hostUrl + '/Leaderboard/'
        axios.get(url, {headers: {'X-Requested-With': 'XMLHttpRequest'}}).then(
            response => {
                console.log(response)
                this.setState({
                    users: [...response.data.users.users],
                    promise: true,
                    flag: response.data.flag
                })
            }
        )
    }

    render() {
        const freezeSrc = this.state.flag ? (
            <img src={Lock} height="40px" width="40px"/>
        ) : (
            ""
        )
        return (
            <div>
                <section className="container-fluid leader1">
                    <div className="a">
                        <div className="Leaderbox">
                            <div className="heading text-center">
                                <h3>LEADERBOARD
                                    {freezeSrc}</h3>
                            </div>
                        </div>

                        <div className="LeaderLeaderbox">
                            <div className="Leaderboard">
                                <table className="ltableuplead">
                                    <tbody>
                                        <tr className="line1">
                                            <th className="teamrank">Rank</th>
                                            <th className="teamame">Team Name</th>
                                            <th className="quest">Q1</th>
                                            <th className="quest">Q2</th>
                                            <th className="quest">Q3</th>
                                            <th className="quest">Q4</th>
                                            <th className="quest">Q5</th>
                                            <th className="quest">Q6</th>
                                            <th className="totalsc">Total</th>
                                        </tr>
                                    </tbody>
                                </table>
                                <div className="leadertable">
                                    <table className="ltabledown table-striped">
                                        <tbody>
                                            {this.state.users.map((user, index) => (
                                                <tr className="line1" key={user.username}>
                                                    <td className="teamrankd">{index + 1}</td>
                                                    <td className="teamamed">{user.username}</td>
                                                    <td className="questd">
                                                        <Cell 
                                                            id="1" 
                                                            acQid={user.acQid} 
                                                            acTime={user.acTime} 
                                                            score={user.questionScores[0]}/>
                                                    </td>
                                                    <td className="questd">
                                                        <Cell 
                                                            id="2" 
                                                            acQid={user.acQid} 
                                                            acTime={user.acTime} 
                                                            score={user.questionScores[1]}/>
                                                    </td>
                                                    <td className="questd">
                                                        <Cell 
                                                            id="3" 
                                                            acQid={user.acQid} 
                                                            acTime={user.acTime} 
                                                            score={user.questionScores[2]}/>
                                                    </td>
                                                    <td className="questd">
                                                        <Cell 
                                                            id="4" 
                                                            acQid={user.acQid} 
                                                            acTime={user.acTime} 
                                                            score={user.questionScores[3]}/>
                                                    </td>
                                                    <td className="questd">
                                                        <Cell 
                                                            id="5" 
                                                            acQid={user.acQid} 
                                                            acTime={user.acTime} 
                                                            score={user.questionScores[4]}/>
                                                    </td>
                                                    <td className="questd">
                                                        <Cell 
                                                            id="6" 
                                                            acQid={user.acQid} 
                                                            acTime={user.acTime} 
                                                            score={user.questionScores[5]}/>
                                                    </td>
                                                    <td className="totalscd">{user.totalScore}</td>
                                                </tr>
                                            )
                                            )
                                            }
                                        </tbody>
                                    </table>
                                </div>
                            </div>
                        </div>
                    </div>

                </section>
                <Footer />
            </div>
        )
    }
}



export default Leaderboard