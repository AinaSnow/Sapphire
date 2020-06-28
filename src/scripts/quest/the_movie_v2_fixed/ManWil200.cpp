// This is an automatically generated C++ script template
// Content needs to be added by hand to make it function
// In order for this script to be loaded, move it to the correct folder in <root>/scripts/

#include <Actor/Player.h>
#include "Manager/EventMgr.h"
#include <ScriptObject.h>
#include <Service.h>

// Quest Script: ManWil200_00528
// Quest Name: The Ul'dahn Envoy
// Quest ID: 66064
// Start NPC: 1004004
// End NPC: 1000460

using namespace Sapphire;

class ManWil200 : public Sapphire::ScriptAPI::EventScript
{
  private:
    // Basic quest information 
    // Quest vars / flags used
    // GetQuestBitFlag8
    // GetQuestUI8AL
    // GetQuestUI8BH
    // GetQuestUI8BL

    // Steps in this quest ( 0 is before accepting, 
    // 1 is first, 255 means ready for turning it in
    enum Sequence : uint8_t
    {
      Seq0 = 0,
      Seq1 = 1,
      Seq2 = 2,
      Seq3 = 3,
      Seq4 = 4,
      Seq5 = 5,
      Seq6 = 6,
      Seq7 = 7,
      Seq8 = 8,
      SeqFinish = 255,
    };

    // Entities found in the script data of the quest
    static constexpr auto Actor0 = 1004004;
    static constexpr auto Actor1 = 1001353;
    static constexpr auto Actor3 = 1004433;
    static constexpr auto Actor4 = 1002693;
    static constexpr auto Actor5 = 1002703;
    static constexpr auto Actor6 = 1001029;
    static constexpr auto Actor7 = 1002695;
    static constexpr auto Actor8 = 1002830;
    static constexpr auto Actor9 = 1000109;
    static constexpr auto Actor10 = 1000460;
    static constexpr auto Eobject0 = 2001673;
    static constexpr auto Eobject1 = 2001667;
    static constexpr auto Eobject2 = 2001676;
    static constexpr auto Eobject3 = 2001670;
    static constexpr auto Eobject4 = 2001686;
    static constexpr auto EventActionWaitingShor = 11;
    static constexpr auto Item0 = 2000445;
    static constexpr auto Item1 = 2000446;
    static constexpr auto NcutEvent001 = 198;
    static constexpr auto NcutEvent002 = 225;
    static constexpr auto NcutEvent003 = 199;
    static constexpr auto NcutEvent004 = 154;
    static constexpr auto NcutEvent005 = 67;
    static constexpr auto NcutEvent006 = 101;
    static constexpr auto NcutEvent007 = 157;
    static constexpr auto NcutEvent008 = 102;
    static constexpr auto NcutEvent009 = 160;
    static constexpr auto NcutEvent010 = 230;
    static constexpr auto NcutEvent011 = 229;
    static constexpr auto NcutEvent012 = 232;
    static constexpr auto NcutEvent013 = 227;
    static constexpr auto NcutEvent014 = 231;
    static constexpr auto NcutEvent015 = 229;
    static constexpr auto Poprange0 = 4103351;
    static constexpr auto Poprange1 = 4102790;
    static constexpr auto Poprange2 = 4103399;
    static constexpr auto Poprange3 = 4103402;
    static constexpr auto Poprange4 = 4102803;
    static constexpr auto Poprange5 = 4103382;
    static constexpr auto Territorytype0 = 130;
    static constexpr auto Territorytype1 = 128;
    static constexpr auto Territorytype2 = 132;
    static constexpr auto UnlockImageAirship = 68;

  public:
    ManWil200() : Sapphire::ScriptAPI::EventScript( 66064 ){}; 
    ~ManWil200() = default; 

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
          Scene00002( player );
          break;
        }
        case 2:{
          if( actor == Actor3 && player.getQuestUI8AL( getId() ) != 1 ) { Scene00004( player ); }
          break;
        }
        case 3:{
          if( actor == Eobject1 && player.getQuestUI8AL( getId() ) != 1 ) { Scene00007( player ); }
          if( actor == Actor3 ) { Scene00007( player ); }
          break;
        }
        case 4:{
          if( actor == Actor4 && player.getQuestUI8AL( getId() ) != 1 ) { Scene00011( player ); }
          break;
        }
        case 5:{
          if( actor == Actor6 && player.getQuestUI8AL( getId() ) != 1 ) { Scene00016( player ); }
          if( actor == Actor4 ) { Scene00020( player ); }
          break;
        }
        case 6:{
          if( actor == Actor7 && player.getQuestUI8AL( getId() ) != 1 ) { Scene00024( player ); }
          break;
        }
        case 7:{
          if( actor == Eobject3 && player.getQuestUI8AL( getId() ) != 1 ) { Scene00029( player ); }
          if( actor == Actor7 ) { Scene00029( player ); }
          break;
        }
        case 8:{
          if( actor == Actor8 && player.getQuestUI8AL( getId() ) != 1 ) { Scene00035( player ); }
          break;
        }
        case 255:{
          if( actor == Actor10 ) { Scene00042( player ); }
          if( actor == Actor8 ) { Scene00047( player ); }
          break;
        }
        default: { player.sendUrgent( "seq {} not defined.", player.getQuestSeq( getId() ) ); break; }
      }
    }

  private:
  //////////////////////////////////////////////////////////////////////
  // Available Scenes in this quest, not necessarly all are used
    void Scene00000( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        if( result.param2 == 1 )
          Scene00001( player );
      };
      player.sendDebug( "questId: {}, calling Talk, QuestOffer:Scene00000 +1 ", getId() );

      player.playScene( getId(), 0, NONE, callback );
    }

    void Scene00001( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        player.updateQuest( getId(), 1 );
        player.setQuestUI8BH( getId(), 1 );
        player.setQuestUI8BL( getId(), 1 );
      };
      player.sendDebug( "questId: {}, calling [sub:Accept](0)QuestAccept, CutScene:Scene00001 ", getId() );

      player.playScene( getId(), 1, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00002( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        player.updateQuest( getId(), 2 );
        player.setQuestUI8BH( getId(), 1 );
        player.setQuestUI8BL( getId(), 1 );
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00002 +1 ", getId() );

      player.playScene( getId(), 2, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00003( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {

      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](2)CutScene:Scene00003 ", getId() );

      player.playScene( getId(), 3, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00004( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR3
        if( result.param1 == 0 ){
          player.setQuestUI8AL( getId(), 1 );
          if( player.getQuestUI8AL( getId() ) == 1 ){
            player.setQuestUI8AL( getId(), 0 );
            player.updateQuest( getId(), 3 );
            player.setQuestUI8BH( getId(), 1 );
            player.setQuestUI8BL( getId(), 1 );
          }
        }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00004 ACTOR3:UI8AL=-2, 1", getId() );

      player.playScene( getId(), 4, NONE, callback );
    }

    void Scene00005( Entity::Player& player )
    {


      //Target: EOBJECT0
      //does not modify quest vars

      player.sendDebug( "questId: {}, calling Empty:Scene00005 EOBJECT0", getId() );


    }

    void Scene00006( Entity::Player& player )
    {


      //Target: EOBJECT1
      player.setQuestUI8AL( getId(), 1 );
      if( player.getQuestUI8AL( getId() ) == 1 ){
        player.setQuestUI8AL( getId(), 0 );
        player.updateQuest( getId(), 4 );
        player.setQuestUI8BH( getId(), 1 );
        player.setQuestUI8BL( getId(), 1 );
      }

      player.sendDebug( "questId: {}, calling Empty:Scene00006 EOBJECT1:UI8AL=-2, 1", getId() );


    }

    void Scene00007( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        if( result.param1 == 0)
        { Scene00008( player ); }
      };
      player.sendDebug( "questId: {}, calling YesNo:Scene00007 +1 ", getId() );

      player.playScene( getId(), 7, NONE, callback );
    }

    void Scene00008( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR3
        //does not modify quest vars
        Scene00006( player );
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](7)CutScene:Scene00008 ACTOR3", getId() );

      player.playScene( getId(), 8, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00009( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: EOBJECT0
        //does not modify quest vars
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00009 EOBJECT0", getId() );

      player.playScene( getId(), 9, NONE, callback );
    }

    void Scene00010( Entity::Player& player )
    {


      //Target: ACTOR4
      player.setQuestUI8AL( getId(), 1 );
      if( player.getQuestUI8AL( getId() ) == 1 ){
        player.setQuestUI8AL( getId(), 0 );
        player.updateQuest( getId(), 5 );
        player.setQuestUI8BH( getId(), 1 );
        player.setQuestUI8BL( getId(), 1 );
      }

      player.sendDebug( "questId: {}, calling Empty:Scene00010 ACTOR4:UI8AL=-2, 1", getId() );


    }

    void Scene00011( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR5
        //does not modify quest vars
        player.updateQuest( getId(), 5 );
      };
      player.sendDebug( "questId: {}, calling Talk:Scene00011 ACTOR5", getId() );

      player.playScene( getId(), 11, NONE, callback );
    }

    void Scene00012( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: EOBJECT2
        //does not modify quest vars
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00012 EOBJECT2", getId() );

      player.playScene( getId(), 12, NONE, callback );
    }

    void Scene00013( Entity::Player& player )
    {


      //Target: ACTOR3
      //does not modify quest vars

      player.sendDebug( "questId: {}, calling Empty:Scene00013 ACTOR3", getId() );


    }

    void Scene00014( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00015( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00014 +1 ", getId() );

      player.playScene( getId(), 14, NONE, callback );
    }

    void Scene00015( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR6
        if( result.param2 == 1 ){
          player.setQuestUI8AL( getId(), 1 );
          if( player.getQuestUI8AL( getId() ) == 1 ){
            player.setQuestUI8AL( getId(), 0 );
            player.updateQuest( getId(), 6 );
            player.setQuestUI8BH( getId(), 1 );
          }
        }
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](14)CutScene:Scene00015 ACTOR6:UI8AL=-2, 1", getId() );

      player.playScene( getId(), 15, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00016( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        if( result.param1 > 0 && result.param2 == 1 )
        { Scene00017( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, NpcTrade:Scene00016 +1 ", getId() );

      player.playScene( getId(), 16, NONE, callback );
    }

    void Scene00017( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR4
        //does not modify quest vars
        Scene00018( player );
      };
      player.sendDebug( "questId: {}, calling [sub:Execute](16)Talk:Scene00017 ACTOR4", getId() );

      player.playScene( getId(), 17, NONE, callback );
    }

    void Scene00018( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: EOBJECT2
        //does not modify quest vars
        player.setQuestUI8AL( getId(), 0 );
        player.updateQuest( getId(), 6 );
        player.setQuestUI8BH( getId(), 1 );
      };
      player.sendDebug( "questId: {}, calling CutScene:Scene00018 EOBJECT2", getId() );

      player.playScene( getId(), 18, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00019( Entity::Player& player )
    {


      //Target: ACTOR3
      //does not modify quest vars

      player.sendDebug( "questId: {}, calling Empty:Scene00019 ACTOR3", getId() );


    }

    void Scene00020( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR7

      };
      player.sendDebug( "questId: {}, calling Talk:Scene00020 ACTOR7:UI8AL=-2, 1", getId() );

      player.playScene( getId(), 20, NONE, callback );
    }

    void Scene00021( Entity::Player& player )
    {


      //Target: EOBJECT2
      //does not modify quest vars

      player.sendDebug( "questId: {}, calling Empty:Scene00021 EOBJECT2", getId() );


    }

    void Scene00022( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00023( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00022 +1 ", getId() );

      player.playScene( getId(), 22, NONE, callback );
    }

    void Scene00023( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR3
        //does not modify quest vars
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](22)CutScene:Scene00023 ACTOR3", getId() );

      player.playScene( getId(), 23, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00024( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: EOBJECT3
        if( result.param1 == 0)
          player.updateQuest( getId(), 7 );
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00024 EOBJECT3:UI8AL=-2, 1", getId() );

      player.playScene( getId(), 24, NONE, callback );
    }

    void Scene00025( Entity::Player& player )
    {

      Scene00026( player );
      //Target: ACTOR7
      //does not modify quest vars

      player.sendDebug( "questId: {}, calling Empty:Scene00025 ACTOR7", getId() );


    }

    void Scene00026( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        if( result.param1 == 0)
        { Scene00027( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00026 +1 ", getId() );

      player.playScene( getId(), 26, NONE, callback );
    }

    void Scene00027( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: EOBJECT2
        //does not modify quest vars
        player.updateQuest( getId(), 8 );
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](26)CutScene:Scene00027 EOBJECT2", getId() );

      player.playScene( getId(), 27, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00028( Entity::Player& player )
    {


      //Target: ACTOR3
      //does not modify quest vars

      player.sendDebug( "questId: {}, calling Empty:Scene00028 ACTOR3", getId() );


    }

    void Scene00029( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        if( result.param1 == 0)
        { Scene00030( player ); }
      };
      player.sendDebug( "questId: {}, calling YesNo:Scene00029 +1 ", getId() );

      player.playScene( getId(), 29, NONE, callback );
    }

    void Scene00030( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR8
        player.updateQuest( getId(), 8 );
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](29)CutScene:Scene00030 ACTOR8:UI8AL=-2, 1", getId() );

      player.playScene( getId(), 30, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00031( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR9
        //does not modify quest vars
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00031 ACTOR9", getId() );

      player.playScene( getId(), 31, NONE, callback );
    }

    void Scene00032( Entity::Player& player )
    {


      //Target: EOBJECT4
      //does not modify quest vars

      player.sendDebug( "questId: {}, calling Empty:Scene00032 EOBJECT4", getId() );


    }

    void Scene00033( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00034( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00033 +1 ", getId() );

      player.playScene( getId(), 33, NONE, callback );
    }

    void Scene00034( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR3
        //does not modify quest vars
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](33)CutScene:Scene00034 ACTOR3", getId() );

      player.playScene( getId(), 34, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00035( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR7
        //does not modify quest vars
        player.updateQuest( getId(), 255 );
      };
      player.sendDebug( "questId: {}, calling Talk:Scene00035 ACTOR7", getId() );

      player.playScene( getId(), 35, NONE, callback );
    }

    void Scene00036( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        if( result.param2 == 1 ){
          player.updateQuest( getId(), 255 );
          player.setQuestUI8BH( getId(), 1 );
        }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00036 ", getId() );

      player.playScene( getId(), 36, NONE, callback );
    }

    void Scene00037( Entity::Player& player )
    {


      player.updateQuest( getId(), 255 );
      player.setQuestUI8BH( getId(), 1 );

      player.sendDebug( "questId: {}, calling Empty:Scene00037 ", getId() );


    }

    void Scene00038( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00039( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00038 +1 ", getId() );

      player.playScene( getId(), 38, NONE, callback );
    }

    void Scene00039( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        player.updateQuest( getId(), 255 );
        player.setQuestUI8BH( getId(), 1 );
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](38)CutScene:Scene00039 ", getId() );

      player.playScene( getId(), 39, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00040( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00041( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00040 +1 ", getId() );

      player.playScene( getId(), 40, NONE, callback );
    }

    void Scene00041( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        player.updateQuest( getId(), 255 );
        player.setQuestUI8BH( getId(), 1 );
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](40)CutScene:Scene00041 ", getId() );

      player.playScene( getId(), 41, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00042( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        if( result.param1 > 0 && result.param2 == 1 )
        { Scene00043( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, NpcTrade:Scene00042 +1 ", getId() );

      player.playScene( getId(), 42, NONE, callback );
    }

    void Scene00043( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        Scene00044( player );
      };
      player.sendDebug( "questId: {}, calling [sub:Execute](42)Talk:Scene00043 ", getId() );

      player.playScene( getId(), 43, NONE, callback );
    }

    void Scene00044( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00045( player ); }
      };
      player.sendDebug( "questId: {}, calling CutScene:Scene00044 +1 ", getId() );

      player.playScene( getId(), 44, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00045( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR10
        if( result.param2 == 1 ){
          if( player.giveQuestRewards( getId(), result.param3 ) ) player.finishQuest( getId() );
        }
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedComplete](44)QuestReward, QuestComplete:Scene00045 ACTOR10", getId() );

      player.playScene( getId(), 45, NONE, callback );
    }

    void Scene00046( Entity::Player& player )
    {


      //Target: ACTOR8
      //no valid quest var detected
      //next scene not found

      player.sendDebug( "questId: {}, calling Empty:Scene00046 ACTOR8", getId() );


    }

    void Scene00047( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: EOBJECT4
        //no valid quest var detected
        //next scene not found
      };
      player.sendDebug( "questId: {}, calling Talk:Scene00047 EOBJECT4", getId() );

      player.playScene( getId(), 47, NONE, callback );
    }

    void Scene00048( Entity::Player& player )
    {


      //Target: ACTOR3
      //no valid quest var detected
      //next scene not found

      player.sendDebug( "questId: {}, calling Empty:Scene00048 ACTOR3", getId() );


    }

    void Scene00049( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00050( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00049 +1 ", getId() );

      player.playScene( getId(), 49, NONE, callback );
    }

    void Scene00050( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //Target: ACTOR7
        //no valid quest var detected
        //next scene not found
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](49)CutScene:Scene00050 ACTOR7", getId() );

      player.playScene( getId(), 50, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }

    void Scene00051( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        { Scene00052( player ); }
      };
      player.sendDebug( "questId: {}, calling Talk, YesNo:Scene00051 +1 ", getId() );

      player.playScene( getId(), 51, NONE, callback );
    }

    void Scene00052( Entity::Player& player )
    {
      auto callback = [ & ]( Entity::Player& player, const Event::SceneResult& result )
      {
        //next scene not found
      };
      player.sendDebug( "questId: {}, calling [sub:CombinedCutScene](51)CutScene:Scene00052 ", getId() );

      player.playScene( getId(), 52, FADE_OUT | CONDITION_CUTSCENE | HIDE_UI, callback );
    }


};

EXPOSE_SCRIPT( ManWil200 );