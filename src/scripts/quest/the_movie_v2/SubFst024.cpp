// This is an automatically generated C++ script template
// SapphireTheMovieQuestReparser.ParserV2
//[switches]A: False, A2: False, A3: False, S: False, R: False, DM: False, L: False, DBM: False
//parsingResult: 0
#include "Manager/TerritoryMgr.h"
#include <Actor/Player.h>
#include "Manager/EventMgr.h"
#include <ScriptObject.h>
#include <Service.h>

// Quest Script: SubFst024_00099
// Quest Name: The Kindness of Strangers
// Quest ID: 65635
// Start NPC: 1000324
// End NPC: 1000100

using namespace Sapphire;

class SubFst024 : public Sapphire::ScriptAPI::EventScript
{
  private:
    // Basic quest information 
    // Quest vars / flags used
    // GetQuestBitFlag8
    // GetQuestUI8AL
    // GetQuestUI8BH

    // Steps in this quest ( 0 is before accepting, 
    // 1 is first, 255 means ready for turning it in
    enum Sequence : uint8_t
    {
//      Seq0 = 0,
//      Seq1 = 1,
//      Seq2 = 2,
//      SeqFinish = 255,
    };

    // Entities found in the script data of the quest
//    static constexpr auto Actor0 = 1000324;
//    static constexpr auto Actor1 = 1000100;
//    static constexpr auto Enemy0 = 2313265;
//    static constexpr auto Eobject0 = 2000009;
//    static constexpr auto EventActionSearch = 1;
//    static constexpr auto EventActionWaiting2Middle = 12;
//    static constexpr auto Item0 = 2000076;
//    static constexpr auto LocFace1 = 617;
//    static constexpr auto LocFace2 = 604;
//    static constexpr auto Motion0 = 1;
//    static constexpr auto Motion1 = 34;
//    static constexpr auto NqChara01 = 1001503;
//    static constexpr auto NqChara02 = 1001504;
//    static constexpr auto NqChara03 = 1001505;
//    static constexpr auto NqCharaNoName = 1006185;
//    static constexpr auto NqPoint001 = 1556884;
//    static constexpr auto NqPoint002 = 1556885;
//    static constexpr auto NqPoint003 = 2029185;
//    static constexpr auto NqPoint1000 = 2154510;
//    static constexpr auto NqPoint1001 = 2154536;
//    static constexpr auto NqPoint1002 = 2154537;
//    static constexpr auto NqPoint1003 = 2154514;
//    static constexpr auto NqPoint1004 = 2154513;
//    static constexpr auto NqPoint1005 = 2154542;
//    static constexpr auto NqPoint1006 = 2154543;

  public:
    SubFst024() : Sapphire::ScriptAPI::EventScript( 65635 ){}; 
    ~SubFst024() = default; 

  //////////////////////////////////////////////////////////////////////
  // Event Handlers
  void onTalk( uint32_t eventId, Entity::Player& player, uint64_t actorId ) override
  {
    auto& eventMgr = Common::Service< World::Manager::EventMgr >::ref();
    auto actor = eventMgr.mapEventActorToRealActor( static_cast< uint32_t >( actorId ) );
switch( player.getQuestSeq( getId() ) ){
case 0:{
Scene00000( player );
break;
}
case 1:{
//EOBJECT0, null, 0, -2, False
if( actor == 2000009 ) { Scene00002( player ); }
//if( actorId == 2313265 && player.getQuestUI8AL( getId() ) != 1 ) { Scene?????( player ); }
break;
}
case 2:{
Scene00004( player );
break;
}
case 255:{
Scene00007( player );
break;
}
default: { player.sendUrgent( "seq {} not defined.", player.getQuestSeq( getId() ) ); break; }
}
  }

  void onBNpcKill( uint32_t npcId, Entity::Player& player ) override
  {
//    switch( npcId )
//    {
//      case Enemy0: { break; }
//    }
onTalk( getId(), player, npcId );
  }

  private:
  //////////////////////////////////////////////////////////////////////
  // Available Scenes in this quest, not necessarly all are used
  void Scene00000( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
if( result.param2 == 1 ){
player.updateQuest( getId(), 1 );
player.setQuestUI8BH( getId(), 1 );
}
    };
player.sendDebug( "questId: {}, calling Talk, QuestOffer, QuestAccept:Scene00000 ", getId() );

    player.playScene( getId(), 0, NONE, callback );
  }

  void Scene00001( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
//Target: EOBJECT0
//no valid quest var detected
player.updateQuest( getId(), 2 );
player.setQuestUI8BH( getId(), 1 );
    };
player.sendDebug( "questId: {}, calling [sub:SkippedMsg](2)Unknown:Scene00001 EOBJECT0", getId() );

    player.playScene( getId(), 1, NONE, callback );
  }

  void Scene00002( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
player.updateQuest( getId(), 2 );
player.setQuestUI8BH( getId(), 1 );
    };
player.sendDebug( "questId: {}, calling Message:Scene00002 +2 ", getId() );

    player.playScene( getId(), 2, NONE, callback );
  }

  void Scene00003( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
//don't know how to do with this sub scene
    };
player.sendDebug( "questId: {}, calling [sub:SkippedMsg](2)Empty:Scene00003 ", getId() );

    player.playScene( getId(), 3, NONE, callback );
  }

  void Scene00004( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
if( result.param1 > 0 && result.param2 == 1 )
{ Scene00005( player ); }
 else { Scene00006( player ); }
    };
player.sendDebug( "questId: {}, calling Talk, NpcTrade:Scene00004 +2 ", getId() );

    player.playScene( getId(), 4, NONE, callback );
  }

  void Scene00005( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
player.updateQuest( getId(), 255 );
player.setQuestUI8BH( getId(), 1 );
    };
player.sendDebug( "questId: {}, calling [sub:Execute](4)Talk, FadeOut:Scene00005 ", getId() );

    player.playScene( getId(), 5, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
  }

  void Scene00006( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
//exit event
    };
player.sendDebug( "questId: {}, calling [sub:Cancel](4)Empty:Scene00006 ", getId() );

    player.playScene( getId(), 6, NONE, callback );
  }

  void Scene00007( Entity::Player& player )
  {
    auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
    {
if( result.param2 == 1 ){
if( player.giveQuestRewards( getId(), result.param3 ) ) player.finishQuest( getId() );
}
    };
player.sendDebug( "questId: {}, calling Talk, QuestReward, QuestComplete:Scene00007 ", getId() );

    player.playScene( getId(), 7, NONE, callback );
  }

};

EXPOSE_SCRIPT( SubFst024 );
