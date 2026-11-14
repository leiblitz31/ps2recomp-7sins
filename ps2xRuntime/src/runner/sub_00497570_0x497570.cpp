#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497570
// Address: 0x497570 - 0x4979e8
void sub_00497570_0x497570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497570_0x497570");
#endif

    switch (ctx->pc) {
        case 0x497570u: goto label_497570;
        case 0x497574u: goto label_497574;
        case 0x497578u: goto label_497578;
        case 0x49757cu: goto label_49757c;
        case 0x497580u: goto label_497580;
        case 0x497584u: goto label_497584;
        case 0x497588u: goto label_497588;
        case 0x49758cu: goto label_49758c;
        case 0x497590u: goto label_497590;
        case 0x497594u: goto label_497594;
        case 0x497598u: goto label_497598;
        case 0x49759cu: goto label_49759c;
        case 0x4975a0u: goto label_4975a0;
        case 0x4975a4u: goto label_4975a4;
        case 0x4975a8u: goto label_4975a8;
        case 0x4975acu: goto label_4975ac;
        case 0x4975b0u: goto label_4975b0;
        case 0x4975b4u: goto label_4975b4;
        case 0x4975b8u: goto label_4975b8;
        case 0x4975bcu: goto label_4975bc;
        case 0x4975c0u: goto label_4975c0;
        case 0x4975c4u: goto label_4975c4;
        case 0x4975c8u: goto label_4975c8;
        case 0x4975ccu: goto label_4975cc;
        case 0x4975d0u: goto label_4975d0;
        case 0x4975d4u: goto label_4975d4;
        case 0x4975d8u: goto label_4975d8;
        case 0x4975dcu: goto label_4975dc;
        case 0x4975e0u: goto label_4975e0;
        case 0x4975e4u: goto label_4975e4;
        case 0x4975e8u: goto label_4975e8;
        case 0x4975ecu: goto label_4975ec;
        case 0x4975f0u: goto label_4975f0;
        case 0x4975f4u: goto label_4975f4;
        case 0x4975f8u: goto label_4975f8;
        case 0x4975fcu: goto label_4975fc;
        case 0x497600u: goto label_497600;
        case 0x497604u: goto label_497604;
        case 0x497608u: goto label_497608;
        case 0x49760cu: goto label_49760c;
        case 0x497610u: goto label_497610;
        case 0x497614u: goto label_497614;
        case 0x497618u: goto label_497618;
        case 0x49761cu: goto label_49761c;
        case 0x497620u: goto label_497620;
        case 0x497624u: goto label_497624;
        case 0x497628u: goto label_497628;
        case 0x49762cu: goto label_49762c;
        case 0x497630u: goto label_497630;
        case 0x497634u: goto label_497634;
        case 0x497638u: goto label_497638;
        case 0x49763cu: goto label_49763c;
        case 0x497640u: goto label_497640;
        case 0x497644u: goto label_497644;
        case 0x497648u: goto label_497648;
        case 0x49764cu: goto label_49764c;
        case 0x497650u: goto label_497650;
        case 0x497654u: goto label_497654;
        case 0x497658u: goto label_497658;
        case 0x49765cu: goto label_49765c;
        case 0x497660u: goto label_497660;
        case 0x497664u: goto label_497664;
        case 0x497668u: goto label_497668;
        case 0x49766cu: goto label_49766c;
        case 0x497670u: goto label_497670;
        case 0x497674u: goto label_497674;
        case 0x497678u: goto label_497678;
        case 0x49767cu: goto label_49767c;
        case 0x497680u: goto label_497680;
        case 0x497684u: goto label_497684;
        case 0x497688u: goto label_497688;
        case 0x49768cu: goto label_49768c;
        case 0x497690u: goto label_497690;
        case 0x497694u: goto label_497694;
        case 0x497698u: goto label_497698;
        case 0x49769cu: goto label_49769c;
        case 0x4976a0u: goto label_4976a0;
        case 0x4976a4u: goto label_4976a4;
        case 0x4976a8u: goto label_4976a8;
        case 0x4976acu: goto label_4976ac;
        case 0x4976b0u: goto label_4976b0;
        case 0x4976b4u: goto label_4976b4;
        case 0x4976b8u: goto label_4976b8;
        case 0x4976bcu: goto label_4976bc;
        case 0x4976c0u: goto label_4976c0;
        case 0x4976c4u: goto label_4976c4;
        case 0x4976c8u: goto label_4976c8;
        case 0x4976ccu: goto label_4976cc;
        case 0x4976d0u: goto label_4976d0;
        case 0x4976d4u: goto label_4976d4;
        case 0x4976d8u: goto label_4976d8;
        case 0x4976dcu: goto label_4976dc;
        case 0x4976e0u: goto label_4976e0;
        case 0x4976e4u: goto label_4976e4;
        case 0x4976e8u: goto label_4976e8;
        case 0x4976ecu: goto label_4976ec;
        case 0x4976f0u: goto label_4976f0;
        case 0x4976f4u: goto label_4976f4;
        case 0x4976f8u: goto label_4976f8;
        case 0x4976fcu: goto label_4976fc;
        case 0x497700u: goto label_497700;
        case 0x497704u: goto label_497704;
        case 0x497708u: goto label_497708;
        case 0x49770cu: goto label_49770c;
        case 0x497710u: goto label_497710;
        case 0x497714u: goto label_497714;
        case 0x497718u: goto label_497718;
        case 0x49771cu: goto label_49771c;
        case 0x497720u: goto label_497720;
        case 0x497724u: goto label_497724;
        case 0x497728u: goto label_497728;
        case 0x49772cu: goto label_49772c;
        case 0x497730u: goto label_497730;
        case 0x497734u: goto label_497734;
        case 0x497738u: goto label_497738;
        case 0x49773cu: goto label_49773c;
        case 0x497740u: goto label_497740;
        case 0x497744u: goto label_497744;
        case 0x497748u: goto label_497748;
        case 0x49774cu: goto label_49774c;
        case 0x497750u: goto label_497750;
        case 0x497754u: goto label_497754;
        case 0x497758u: goto label_497758;
        case 0x49775cu: goto label_49775c;
        case 0x497760u: goto label_497760;
        case 0x497764u: goto label_497764;
        case 0x497768u: goto label_497768;
        case 0x49776cu: goto label_49776c;
        case 0x497770u: goto label_497770;
        case 0x497774u: goto label_497774;
        case 0x497778u: goto label_497778;
        case 0x49777cu: goto label_49777c;
        case 0x497780u: goto label_497780;
        case 0x497784u: goto label_497784;
        case 0x497788u: goto label_497788;
        case 0x49778cu: goto label_49778c;
        case 0x497790u: goto label_497790;
        case 0x497794u: goto label_497794;
        case 0x497798u: goto label_497798;
        case 0x49779cu: goto label_49779c;
        case 0x4977a0u: goto label_4977a0;
        case 0x4977a4u: goto label_4977a4;
        case 0x4977a8u: goto label_4977a8;
        case 0x4977acu: goto label_4977ac;
        case 0x4977b0u: goto label_4977b0;
        case 0x4977b4u: goto label_4977b4;
        case 0x4977b8u: goto label_4977b8;
        case 0x4977bcu: goto label_4977bc;
        case 0x4977c0u: goto label_4977c0;
        case 0x4977c4u: goto label_4977c4;
        case 0x4977c8u: goto label_4977c8;
        case 0x4977ccu: goto label_4977cc;
        case 0x4977d0u: goto label_4977d0;
        case 0x4977d4u: goto label_4977d4;
        case 0x4977d8u: goto label_4977d8;
        case 0x4977dcu: goto label_4977dc;
        case 0x4977e0u: goto label_4977e0;
        case 0x4977e4u: goto label_4977e4;
        case 0x4977e8u: goto label_4977e8;
        case 0x4977ecu: goto label_4977ec;
        case 0x4977f0u: goto label_4977f0;
        case 0x4977f4u: goto label_4977f4;
        case 0x4977f8u: goto label_4977f8;
        case 0x4977fcu: goto label_4977fc;
        case 0x497800u: goto label_497800;
        case 0x497804u: goto label_497804;
        case 0x497808u: goto label_497808;
        case 0x49780cu: goto label_49780c;
        case 0x497810u: goto label_497810;
        case 0x497814u: goto label_497814;
        case 0x497818u: goto label_497818;
        case 0x49781cu: goto label_49781c;
        case 0x497820u: goto label_497820;
        case 0x497824u: goto label_497824;
        case 0x497828u: goto label_497828;
        case 0x49782cu: goto label_49782c;
        case 0x497830u: goto label_497830;
        case 0x497834u: goto label_497834;
        case 0x497838u: goto label_497838;
        case 0x49783cu: goto label_49783c;
        case 0x497840u: goto label_497840;
        case 0x497844u: goto label_497844;
        case 0x497848u: goto label_497848;
        case 0x49784cu: goto label_49784c;
        case 0x497850u: goto label_497850;
        case 0x497854u: goto label_497854;
        case 0x497858u: goto label_497858;
        case 0x49785cu: goto label_49785c;
        case 0x497860u: goto label_497860;
        case 0x497864u: goto label_497864;
        case 0x497868u: goto label_497868;
        case 0x49786cu: goto label_49786c;
        case 0x497870u: goto label_497870;
        case 0x497874u: goto label_497874;
        case 0x497878u: goto label_497878;
        case 0x49787cu: goto label_49787c;
        case 0x497880u: goto label_497880;
        case 0x497884u: goto label_497884;
        case 0x497888u: goto label_497888;
        case 0x49788cu: goto label_49788c;
        case 0x497890u: goto label_497890;
        case 0x497894u: goto label_497894;
        case 0x497898u: goto label_497898;
        case 0x49789cu: goto label_49789c;
        case 0x4978a0u: goto label_4978a0;
        case 0x4978a4u: goto label_4978a4;
        case 0x4978a8u: goto label_4978a8;
        case 0x4978acu: goto label_4978ac;
        case 0x4978b0u: goto label_4978b0;
        case 0x4978b4u: goto label_4978b4;
        case 0x4978b8u: goto label_4978b8;
        case 0x4978bcu: goto label_4978bc;
        case 0x4978c0u: goto label_4978c0;
        case 0x4978c4u: goto label_4978c4;
        case 0x4978c8u: goto label_4978c8;
        case 0x4978ccu: goto label_4978cc;
        case 0x4978d0u: goto label_4978d0;
        case 0x4978d4u: goto label_4978d4;
        case 0x4978d8u: goto label_4978d8;
        case 0x4978dcu: goto label_4978dc;
        case 0x4978e0u: goto label_4978e0;
        case 0x4978e4u: goto label_4978e4;
        case 0x4978e8u: goto label_4978e8;
        case 0x4978ecu: goto label_4978ec;
        case 0x4978f0u: goto label_4978f0;
        case 0x4978f4u: goto label_4978f4;
        case 0x4978f8u: goto label_4978f8;
        case 0x4978fcu: goto label_4978fc;
        case 0x497900u: goto label_497900;
        case 0x497904u: goto label_497904;
        case 0x497908u: goto label_497908;
        case 0x49790cu: goto label_49790c;
        case 0x497910u: goto label_497910;
        case 0x497914u: goto label_497914;
        case 0x497918u: goto label_497918;
        case 0x49791cu: goto label_49791c;
        case 0x497920u: goto label_497920;
        case 0x497924u: goto label_497924;
        case 0x497928u: goto label_497928;
        case 0x49792cu: goto label_49792c;
        case 0x497930u: goto label_497930;
        case 0x497934u: goto label_497934;
        case 0x497938u: goto label_497938;
        case 0x49793cu: goto label_49793c;
        case 0x497940u: goto label_497940;
        case 0x497944u: goto label_497944;
        case 0x497948u: goto label_497948;
        case 0x49794cu: goto label_49794c;
        case 0x497950u: goto label_497950;
        case 0x497954u: goto label_497954;
        case 0x497958u: goto label_497958;
        case 0x49795cu: goto label_49795c;
        case 0x497960u: goto label_497960;
        case 0x497964u: goto label_497964;
        case 0x497968u: goto label_497968;
        case 0x49796cu: goto label_49796c;
        case 0x497970u: goto label_497970;
        case 0x497974u: goto label_497974;
        case 0x497978u: goto label_497978;
        case 0x49797cu: goto label_49797c;
        case 0x497980u: goto label_497980;
        case 0x497984u: goto label_497984;
        case 0x497988u: goto label_497988;
        case 0x49798cu: goto label_49798c;
        case 0x497990u: goto label_497990;
        case 0x497994u: goto label_497994;
        case 0x497998u: goto label_497998;
        case 0x49799cu: goto label_49799c;
        case 0x4979a0u: goto label_4979a0;
        case 0x4979a4u: goto label_4979a4;
        case 0x4979a8u: goto label_4979a8;
        case 0x4979acu: goto label_4979ac;
        case 0x4979b0u: goto label_4979b0;
        case 0x4979b4u: goto label_4979b4;
        case 0x4979b8u: goto label_4979b8;
        case 0x4979bcu: goto label_4979bc;
        case 0x4979c0u: goto label_4979c0;
        case 0x4979c4u: goto label_4979c4;
        case 0x4979c8u: goto label_4979c8;
        case 0x4979ccu: goto label_4979cc;
        case 0x4979d0u: goto label_4979d0;
        case 0x4979d4u: goto label_4979d4;
        case 0x4979d8u: goto label_4979d8;
        case 0x4979dcu: goto label_4979dc;
        case 0x4979e0u: goto label_4979e0;
        case 0x4979e4u: goto label_4979e4;
        default: break;
    }

    ctx->pc = 0x497570u;

label_497570:
    // 0x497570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_497574:
    // 0x497574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x497574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_497578:
    // 0x497578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x497578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49757c:
    // 0x49757c: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x49757cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_497580:
    // 0x497580: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x497580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_497584:
    // 0x497584: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_497588:
    if (ctx->pc == 0x497588u) {
        ctx->pc = 0x49758Cu;
        goto label_49758c;
    }
    ctx->pc = 0x497584u;
    {
        const bool branch_taken_0x497584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x497584) {
            ctx->pc = 0x4975B8u;
            goto label_4975b8;
        }
    }
    ctx->pc = 0x49758Cu;
label_49758c:
    // 0x49758c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49758cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497590:
    // 0x497590: 0x10000006  b           . + 4 + (0x6 << 2)
label_497594:
    if (ctx->pc == 0x497594u) {
        ctx->pc = 0x497598u;
        goto label_497598;
    }
    ctx->pc = 0x497590u;
    {
        const bool branch_taken_0x497590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x497590) {
            ctx->pc = 0x4975ACu;
            goto label_4975ac;
        }
    }
    ctx->pc = 0x497598u;
label_497598:
    // 0x497598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x497598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49759c:
    // 0x49759c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49759cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4975a0:
    // 0x4975a0: 0xc125d14  jal         func_497450
label_4975a4:
    if (ctx->pc == 0x4975A4u) {
        ctx->pc = 0x4975A8u;
        goto label_4975a8;
    }
    ctx->pc = 0x4975A0u;
    SET_GPR_U32(ctx, 31, 0x4975A8u);
    ctx->pc = 0x497450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497450u, 0x4975A0u, 0x4975A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4975A8u;
label_4975a8:
    // 0x4975a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4975a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4975ac:
    // 0x4975ac: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x4975acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4975b0:
    // 0x4975b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4975b4:
    if (ctx->pc == 0x4975B4u) {
        ctx->pc = 0x4975B8u;
        goto label_4975b8;
    }
    ctx->pc = 0x4975B0u;
    {
        const bool branch_taken_0x4975b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4975b0) {
            ctx->pc = 0x497598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497598;
        }
    }
    ctx->pc = 0x4975B8u;
label_4975b8:
    // 0x4975b8: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x4975b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_4975bc:
    // 0x4975bc: 0xa383b7a4  sb          $v1, -0x485C($gp)
    ctx->pc = 0x4975bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948772), (uint8_t)GPR_U32(ctx, 3));
label_4975c0:
    // 0x4975c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4975c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4975c4:
    // 0x4975c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4975c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4975c8:
    // 0x4975c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4975c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4975cc:
    // 0x4975cc: 0x3e00008  jr          $ra
label_4975d0:
    if (ctx->pc == 0x4975D0u) {
        ctx->pc = 0x4975D4u;
        goto label_4975d4;
    }
    ctx->pc = 0x4975CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4975CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4975D4u;
label_4975d4:
    // 0x4975d4: 0x0  nop
    ctx->pc = 0x4975d4u;
    // NOP
label_4975d8:
    // 0x4975d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4975d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4975dc:
    // 0x4975dc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4975dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4975e0:
    // 0x4975e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4975e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4975e4:
    // 0x4975e4: 0x34a50809  ori         $a1, $a1, 0x809
    ctx->pc = 0x4975e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
label_4975e8:
    // 0x4975e8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4975e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_4975ec:
    // 0x4975ec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4975ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4975f0:
    // 0x4975f0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4975f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_4975f4:
    // 0x4975f4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4975f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_4975f8:
    // 0x4975f8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4975f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_4975fc:
    // 0x4975fc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4975fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_497600:
    // 0x497600: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x497600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_497604:
    // 0x497604: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x497604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_497608:
    // 0x497608: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x497608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_49760c:
    // 0x49760c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x49760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_497610:
    // 0x497610: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x497610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_497614:
    // 0x497614: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x497614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_497618:
    // 0x497618: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x497618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_49761c:
    // 0x49761c: 0x945e000c  lhu         $fp, 0xC($v0)
    ctx->pc = 0x49761cu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_497620:
    // 0x497620: 0xc127ca4  jal         func_49F290
label_497624:
    if (ctx->pc == 0x497624u) {
        ctx->pc = 0x497624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497620u;
        // 0x497624: 0x1e20c0  sll         $a0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497628u;
        goto label_497628;
    }
    ctx->pc = 0x497620u;
    SET_GPR_U32(ctx, 31, 0x497628u);
    ctx->pc = 0x497624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497620u;
    // 0x497624: 0x1e20c0  sll         $a0, $fp, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x497620u, 0x497628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497628u;
label_497628:
    // 0x497628: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49762c:
    if (ctx->pc == 0x49762Cu) {
        ctx->pc = 0x49762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497628u;
        // 0x49762c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497630u;
        goto label_497630;
    }
    ctx->pc = 0x497628u;
    {
        const bool branch_taken_0x497628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497628u;
        // 0x49762c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497628) {
            ctx->pc = 0x497638u;
            goto label_497638;
        }
    }
    ctx->pc = 0x497630u;
label_497630:
    // 0x497630: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_497634:
    if (ctx->pc == 0x497634u) {
        ctx->pc = 0x497634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497630u;
        // 0x497634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497638u;
        goto label_497638;
    }
    ctx->pc = 0x497630u;
    {
        const bool branch_taken_0x497630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497630u;
        // 0x497634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497630) {
            ctx->pc = 0x4979B8u;
            goto label_4979b8;
        }
    }
    ctx->pc = 0x497638u;
label_497638:
    // 0x497638: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x497638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_49763c:
    // 0x49763c: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x49763cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_497640:
    // 0x497640: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x497640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497644:
    // 0x497644: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x497644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_497648:
    // 0x497648: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
label_49764c:
    if (ctx->pc == 0x49764Cu) {
        ctx->pc = 0x49764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497648u;
        // 0x49764c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497650u;
        goto label_497650;
    }
    ctx->pc = 0x497648u;
    {
        const bool branch_taken_0x497648 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x49764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497648u;
        // 0x49764c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497648) {
            ctx->pc = 0x497674u;
            goto label_497674;
        }
    }
    ctx->pc = 0x497650u;
label_497650:
    // 0x497650: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x497650u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497654:
    // 0x497654: 0x0  nop
    ctx->pc = 0x497654u;
    // NOP
label_497658:
    // 0x497658: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x497658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_49765c:
    // 0x49765c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x49765cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_497660:
    // 0x497660: 0x23e102b  sltu        $v0, $s1, $fp
    ctx->pc = 0x497660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_497664:
    // 0x497664: 0x0  nop
    ctx->pc = 0x497664u;
    // NOP
label_497668:
    // 0x497668: 0x0  nop
    ctx->pc = 0x497668u;
    // NOP
label_49766c:
    // 0x49766c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_497670:
    if (ctx->pc == 0x497670u) {
        ctx->pc = 0x497670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49766Cu;
        // 0x497670: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497674u;
        goto label_497674;
    }
    ctx->pc = 0x49766Cu;
    {
        const bool branch_taken_0x49766c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49766Cu;
        // 0x497670: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49766c) {
            ctx->pc = 0x497658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497658;
        }
    }
    ctx->pc = 0x497674u;
label_497674:
    // 0x497674: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x497674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_497678:
    // 0x497678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x497678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49767c:
    // 0x49767c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x49767cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_497680:
    // 0x497680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x497680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497684:
    // 0x497684: 0xc12675a  jal         func_499D68
label_497688:
    if (ctx->pc == 0x497688u) {
        ctx->pc = 0x497688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497684u;
        // 0x497688: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49768Cu;
        goto label_49768c;
    }
    ctx->pc = 0x497684u;
    SET_GPR_U32(ctx, 31, 0x49768Cu);
    ctx->pc = 0x497688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497684u;
    // 0x497688: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499D68u, 0x497684u, 0x49768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49768Cu;
label_49768c:
    // 0x49768c: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
label_497690:
    if (ctx->pc == 0x497690u) {
        ctx->pc = 0x497690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49768Cu;
        // 0x497690: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x497694u;
        goto label_497694;
    }
    ctx->pc = 0x49768Cu;
    {
        const bool branch_taken_0x49768c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x497690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49768Cu;
        // 0x497690: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49768c) {
            ctx->pc = 0x4976B8u;
            goto label_4976b8;
        }
    }
    ctx->pc = 0x497694u;
label_497694:
    // 0x497694: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x497694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_497698:
    // 0x497698: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x497698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49769c:
    // 0x49769c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x49769cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4976a0:
    // 0x4976a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4976a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4976a4:
    // 0x4976a4: 0x23e182b  sltu        $v1, $s1, $fp
    ctx->pc = 0x4976a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4976a8:
    // 0x4976a8: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x4976a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4976ac:
    // 0x4976ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4976b0:
    if (ctx->pc == 0x4976B0u) {
        ctx->pc = 0x4976B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976ACu;
        // 0x4976b0: 0x82800b  movn        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4976B4u;
        goto label_4976b4;
    }
    ctx->pc = 0x4976ACu;
    {
        const bool branch_taken_0x4976ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4976B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976ACu;
        // 0x4976b0: 0x82800b  movn        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4976ac) {
            ctx->pc = 0x497698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497698;
        }
    }
    ctx->pc = 0x4976B4u;
label_4976b4:
    // 0x4976b4: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x4976b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4976b8:
    // 0x4976b8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_4976bc:
    if (ctx->pc == 0x4976BCu) {
        ctx->pc = 0x4976BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976B8u;
        // 0x4976bc: 0xafbd0004  sw          $sp, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4976C0u;
        goto label_4976c0;
    }
    ctx->pc = 0x4976B8u;
    {
        const bool branch_taken_0x4976b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4976b8) {
            ctx->pc = 0x4976BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4976B8u;
            // 0x4976bc: 0xafbd0004  sw          $sp, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4976F0u;
            goto label_4976f0;
        }
    }
    ctx->pc = 0x4976C0u;
label_4976c0:
    // 0x4976c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4976c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4976c4:
    // 0x4976c4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4976c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4976c8:
    // 0x4976c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4976c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4976cc:
    // 0x4976cc: 0x34a50809  ori         $a1, $a1, 0x809
    ctx->pc = 0x4976ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
label_4976d0:
    // 0x4976d0: 0xc127ca4  jal         func_49F290
label_4976d4:
    if (ctx->pc == 0x4976D4u) {
        ctx->pc = 0x4976D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976D0u;
        // 0x4976d4: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4976D8u;
        goto label_4976d8;
    }
    ctx->pc = 0x4976D0u;
    SET_GPR_U32(ctx, 31, 0x4976D8u);
    ctx->pc = 0x4976D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4976D0u;
    // 0x4976d4: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4976D0u, 0x4976D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4976D8u;
label_4976d8:
    // 0x4976d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4976dc:
    if (ctx->pc == 0x4976DCu) {
        ctx->pc = 0x4976DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976D8u;
        // 0x4976dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4976E0u;
        goto label_4976e0;
    }
    ctx->pc = 0x4976D8u;
    {
        const bool branch_taken_0x4976d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4976DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976D8u;
        // 0x4976dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4976d8) {
            ctx->pc = 0x4976F4u;
            goto label_4976f4;
        }
    }
    ctx->pc = 0x4976E0u;
label_4976e0:
    // 0x4976e0: 0xc127cae  jal         func_49F2B8
label_4976e4:
    if (ctx->pc == 0x4976E4u) {
        ctx->pc = 0x4976E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976E0u;
        // 0x4976e4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4976E8u;
        goto label_4976e8;
    }
    ctx->pc = 0x4976E0u;
    SET_GPR_U32(ctx, 31, 0x4976E8u);
    ctx->pc = 0x4976E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4976E0u;
    // 0x4976e4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4976E0u, 0x4976E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4976E8u;
label_4976e8:
    // 0x4976e8: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_4976ec:
    if (ctx->pc == 0x4976ECu) {
        ctx->pc = 0x4976ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976E8u;
        // 0x4976ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4976F0u;
        goto label_4976f0;
    }
    ctx->pc = 0x4976E8u;
    {
        const bool branch_taken_0x4976e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4976ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4976E8u;
        // 0x4976ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4976e8) {
            ctx->pc = 0x4979B8u;
            goto label_4979b8;
        }
    }
    ctx->pc = 0x4976F0u;
label_4976f0:
    // 0x4976f0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x4976f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_4976f4:
    // 0x4976f4: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x4976f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_4976f8:
    // 0x4976f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4976f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4976fc:
    // 0x4976fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4976fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497700:
    // 0x497700: 0x13c00037  beqz        $fp, . + 4 + (0x37 << 2)
label_497704:
    if (ctx->pc == 0x497704u) {
        ctx->pc = 0x497704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497700u;
        // 0x497704: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497708u;
        goto label_497708;
    }
    ctx->pc = 0x497700u;
    {
        const bool branch_taken_0x497700 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x497704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497700u;
        // 0x497704: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497700) {
            ctx->pc = 0x4977E0u;
            goto label_4977e0;
        }
    }
    ctx->pc = 0x497708u;
label_497708:
    // 0x497708: 0x8fb40014  lw          $s4, 0x14($sp)
    ctx->pc = 0x497708u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_49770c:
    // 0x49770c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x49770cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497710:
    // 0x497710: 0x8fb30010  lw          $s3, 0x10($sp)
    ctx->pc = 0x497710u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_497714:
    // 0x497714: 0x0  nop
    ctx->pc = 0x497714u;
    // NOP
label_497718:
    // 0x497718: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x497718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_49771c:
    // 0x49771c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x49771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_497720:
    // 0x497720: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x497720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_497724:
    // 0x497724: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x497724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_497728:
    // 0x497728: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x497728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_49772c:
    // 0x49772c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x49772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_497730:
    // 0x497730: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x497730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_497734:
    // 0x497734: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_497738:
    if (ctx->pc == 0x497738u) {
        ctx->pc = 0x497738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497734u;
        // 0x497738: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49773Cu;
        goto label_49773c;
    }
    ctx->pc = 0x497734u;
    {
        const bool branch_taken_0x497734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497734u;
        // 0x497738: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497734) {
            ctx->pc = 0x497790u;
            goto label_497790;
        }
    }
    ctx->pc = 0x49773Cu;
label_49773c:
    // 0x49773c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x49773cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_497740:
    // 0x497740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x497740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497744:
    // 0x497744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497748:
    // 0x497748: 0xc127140  jal         func_49C500
label_49774c:
    if (ctx->pc == 0x49774Cu) {
        ctx->pc = 0x49774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497748u;
        // 0x49774c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497750u;
        goto label_497750;
    }
    ctx->pc = 0x497748u;
    SET_GPR_U32(ctx, 31, 0x497750u);
    ctx->pc = 0x49774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497748u;
    // 0x49774c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C500u, 0x497748u, 0x497750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497750u;
label_497750:
    // 0x497750: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x497750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_497754:
    // 0x497754: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x497754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_497758:
    // 0x497758: 0xc12a3ec  jal         func_4A8FB0
label_49775c:
    if (ctx->pc == 0x49775Cu) {
        ctx->pc = 0x49775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497758u;
        // 0x49775c: 0x24452018  addiu       $a1, $v0, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497760u;
        goto label_497760;
    }
    ctx->pc = 0x497758u;
    SET_GPR_U32(ctx, 31, 0x497760u);
    ctx->pc = 0x49775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497758u;
    // 0x49775c: 0x24452018  addiu       $a1, $v0, 0x2018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x497758u, 0x497760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497760u;
label_497760:
    // 0x497760: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_497764:
    if (ctx->pc == 0x497764u) {
        ctx->pc = 0x497764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497760u;
        // 0x497764: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497768u;
        goto label_497768;
    }
    ctx->pc = 0x497760u;
    {
        const bool branch_taken_0x497760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497760u;
        // 0x497764: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497760) {
            ctx->pc = 0x4977A4u;
            goto label_4977a4;
        }
    }
    ctx->pc = 0x497768u;
label_497768:
    // 0x497768: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x497768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49776c:
    // 0x49776c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x49776cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_497770:
    // 0x497770: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x497770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_497774:
    // 0x497774: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x497774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_497778:
    // 0x497778: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x497778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_49777c:
    // 0x49777c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x49777cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_497780:
    // 0x497780: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x497780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_497784:
    // 0x497784: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x497784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_497788:
    // 0x497788: 0x10000006  b           . + 4 + (0x6 << 2)
label_49778c:
    if (ctx->pc == 0x49778Cu) {
        ctx->pc = 0x49778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497788u;
        // 0x49778c: 0xb4650008  sdr         $a1, 0x8($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x497790u;
        goto label_497790;
    }
    ctx->pc = 0x497788u;
    {
        const bool branch_taken_0x497788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497788u;
        // 0x49778c: 0xb4650008  sdr         $a1, 0x8($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x497788) {
            ctx->pc = 0x4977A4u;
            goto label_4977a4;
        }
    }
    ctx->pc = 0x497790u;
label_497790:
    // 0x497790: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x497790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_497794:
    // 0x497794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x497794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497798:
    // 0x497798: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49779c:
    // 0x49779c: 0xc127140  jal         func_49C500
label_4977a0:
    if (ctx->pc == 0x4977A0u) {
        ctx->pc = 0x4977A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49779Cu;
        // 0x4977a0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4977A4u;
        goto label_4977a4;
    }
    ctx->pc = 0x49779Cu;
    SET_GPR_U32(ctx, 31, 0x4977A4u);
    ctx->pc = 0x4977A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49779Cu;
    // 0x4977a0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C500u, 0x49779Cu, 0x4977A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4977A4u;
label_4977a4:
    // 0x4977a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4977a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4977a8:
    // 0x4977a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4977a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4977ac:
    // 0x4977ac: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_4977b0:
    if (ctx->pc == 0x4977B0u) {
        ctx->pc = 0x4977B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4977ACu;
        // 0x4977b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4977B4u;
        goto label_4977b4;
    }
    ctx->pc = 0x4977ACu;
    {
        const bool branch_taken_0x4977ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4977B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4977ACu;
        // 0x4977b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4977ac) {
            ctx->pc = 0x4977C8u;
            goto label_4977c8;
        }
    }
    ctx->pc = 0x4977B4u;
label_4977b4:
    // 0x4977b4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4977b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4977b8:
    // 0x4977b8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4977b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4977bc:
    // 0x4977bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4977bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4977c0:
    // 0x4977c0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x4977c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_4977c4:
    // 0x4977c4: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x4977c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4977c8:
    // 0x4977c8: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x4977c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_4977cc:
    // 0x4977cc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4977ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4977d0:
    // 0x4977d0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4977d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4977d4:
    // 0x4977d4: 0x23e102b  sltu        $v0, $s1, $fp
    ctx->pc = 0x4977d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4977d8:
    // 0x4977d8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_4977dc:
    if (ctx->pc == 0x4977DCu) {
        ctx->pc = 0x4977DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4977D8u;
        // 0x4977dc: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4977E0u;
        goto label_4977e0;
    }
    ctx->pc = 0x4977D8u;
    {
        const bool branch_taken_0x4977d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4977DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4977D8u;
        // 0x4977dc: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4977d8) {
            ctx->pc = 0x497718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497718;
        }
    }
    ctx->pc = 0x4977E0u;
label_4977e0:
    // 0x4977e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4977e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4977e4:
    // 0x4977e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4977e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4977e8:
    // 0x4977e8: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x4977e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4977ec:
    // 0x4977ec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4977ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4977f0:
    // 0x4977f0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x4977f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4977f4:
    // 0x4977f4: 0x680c0  sll         $s0, $a2, 3
    ctx->pc = 0x4977f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4977f8:
    // 0x4977f8: 0x40f809  jalr        $v0
label_4977fc:
    if (ctx->pc == 0x4977FCu) {
        ctx->pc = 0x4977FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4977F8u;
        // 0x4977fc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497800u;
        goto label_497800;
    }
    ctx->pc = 0x4977F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x497800u);
        ctx->pc = 0x4977FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4977F8u;
        // 0x4977fc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4977F8u, 0x497800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497800u;
label_497800:
    // 0x497800: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x497800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_497804:
    // 0x497804: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x497804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_497808:
    // 0x497808: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x497808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_49780c:
    // 0x49780c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49780cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_497810:
    // 0x497810: 0x94710044  lhu         $s1, 0x44($v1)
    ctx->pc = 0x497810u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
label_497814:
    // 0x497814: 0x34a50809  ori         $a1, $a1, 0x809
    ctx->pc = 0x497814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
label_497818:
    // 0x497818: 0xc127ca4  jal         func_49F290
label_49781c:
    if (ctx->pc == 0x49781Cu) {
        ctx->pc = 0x49781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497818u;
        // 0x49781c: 0x2112021  addu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497820u;
        goto label_497820;
    }
    ctx->pc = 0x497818u;
    SET_GPR_U32(ctx, 31, 0x497820u);
    ctx->pc = 0x49781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497818u;
    // 0x49781c: 0x2112021  addu        $a0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x497818u, 0x497820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497820u;
label_497820:
    // 0x497820: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x497820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497824:
    // 0x497824: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
label_497828:
    if (ctx->pc == 0x497828u) {
        ctx->pc = 0x49782Cu;
        goto label_49782c;
    }
    ctx->pc = 0x497824u;
    {
        const bool branch_taken_0x497824 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x497824) {
            ctx->pc = 0x497854u;
            goto label_497854;
        }
    }
    ctx->pc = 0x49782Cu;
label_49782c:
    // 0x49782c: 0xc127cae  jal         func_49F2B8
label_497830:
    if (ctx->pc == 0x497830u) {
        ctx->pc = 0x497830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49782Cu;
        // 0x497830: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497834u;
        goto label_497834;
    }
    ctx->pc = 0x49782Cu;
    SET_GPR_U32(ctx, 31, 0x497834u);
    ctx->pc = 0x497830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49782Cu;
    // 0x497830: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49782Cu, 0x497834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497834u;
label_497834:
    // 0x497834: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x497834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_497838:
    // 0x497838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x497838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49783c:
    // 0x49783c: 0x14e2005e  bne         $a3, $v0, . + 4 + (0x5E << 2)
label_497840:
    if (ctx->pc == 0x497840u) {
        ctx->pc = 0x497840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49783Cu;
        // 0x497840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497844u;
        goto label_497844;
    }
    ctx->pc = 0x49783Cu;
    {
        const bool branch_taken_0x49783c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x497840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49783Cu;
        // 0x497840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49783c) {
            ctx->pc = 0x4979B8u;
            goto label_4979b8;
        }
    }
    ctx->pc = 0x497844u;
label_497844:
    // 0x497844: 0xc127cae  jal         func_49F2B8
label_497848:
    if (ctx->pc == 0x497848u) {
        ctx->pc = 0x497848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497844u;
        // 0x497848: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49784Cu;
        goto label_49784c;
    }
    ctx->pc = 0x497844u;
    SET_GPR_U32(ctx, 31, 0x49784Cu);
    ctx->pc = 0x497848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497844u;
    // 0x497848: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x497844u, 0x49784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49784Cu;
label_49784c:
    // 0x49784c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_497850:
    if (ctx->pc == 0x497850u) {
        ctx->pc = 0x497850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49784Cu;
        // 0x497850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497854u;
        goto label_497854;
    }
    ctx->pc = 0x49784Cu;
    {
        const bool branch_taken_0x49784c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49784Cu;
        // 0x497850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49784c) {
            ctx->pc = 0x4979B8u;
            goto label_4979b8;
        }
    }
    ctx->pc = 0x497854u;
label_497854:
    // 0x497854: 0xc12a4ce  jal         func_4A9338
label_497858:
    if (ctx->pc == 0x497858u) {
        ctx->pc = 0x497858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497854u;
        // 0x497858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49785Cu;
        goto label_49785c;
    }
    ctx->pc = 0x497854u;
    SET_GPR_U32(ctx, 31, 0x49785Cu);
    ctx->pc = 0x497858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497854u;
    // 0x497858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x497854u, 0x49785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49785Cu;
label_49785c:
    // 0x49785c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x49785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_497860:
    // 0x497860: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_497864:
    if (ctx->pc == 0x497864u) {
        ctx->pc = 0x497864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497860u;
        // 0x497864: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497868u;
        goto label_497868;
    }
    ctx->pc = 0x497860u;
    {
        const bool branch_taken_0x497860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497860u;
        // 0x497864: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497860) {
            ctx->pc = 0x497880u;
            goto label_497880;
        }
    }
    ctx->pc = 0x497868u;
label_497868:
    // 0x497868: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x497868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49786c:
    // 0x49786c: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x49786cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_497870:
    // 0x497870: 0xc0bb778  jal         func_2EDDE0
label_497874:
    if (ctx->pc == 0x497874u) {
        ctx->pc = 0x497874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497870u;
        // 0x497874: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497878u;
        goto label_497878;
    }
    ctx->pc = 0x497870u;
    SET_GPR_U32(ctx, 31, 0x497878u);
    ctx->pc = 0x497874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497870u;
    // 0x497874: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x497870u, 0x497878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497878u;
label_497878:
    // 0x497878: 0x10000003  b           . + 4 + (0x3 << 2)
label_49787c:
    if (ctx->pc == 0x49787Cu) {
        ctx->pc = 0x49787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497878u;
        // 0x49787c: 0xae51001c  sw          $s1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497880u;
        goto label_497880;
    }
    ctx->pc = 0x497878u;
    {
        const bool branch_taken_0x497878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497878u;
        // 0x49787c: 0xae51001c  sw          $s1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497878) {
            ctx->pc = 0x497888u;
            goto label_497888;
        }
    }
    ctx->pc = 0x497880u;
label_497880:
    // 0x497880: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x497880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_497884:
    // 0x497884: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x497884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
label_497888:
    // 0x497888: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x497888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_49788c:
    // 0x49788c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x49788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_497890:
    // 0x497890: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x497890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_497894:
    // 0x497894: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x497894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_497898:
    // 0x497898: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x497898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49789c:
    // 0x49789c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x49789cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_4978a0:
    // 0x4978a0: 0x2b39821  addu        $s3, $s5, $s3
    ctx->pc = 0x4978a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_4978a4:
    // 0x4978a4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x4978a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_4978a8:
    // 0x4978a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4978a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4978ac:
    // 0x4978ac: 0x13c0002c  beqz        $fp, . + 4 + (0x2C << 2)
label_4978b0:
    if (ctx->pc == 0x4978B0u) {
        ctx->pc = 0x4978B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978ACu;
        // 0x4978b0: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4978B4u;
        goto label_4978b4;
    }
    ctx->pc = 0x4978ACu;
    {
        const bool branch_taken_0x4978ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4978B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978ACu;
        // 0x4978b0: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978ac) {
            ctx->pc = 0x497960u;
            goto label_497960;
        }
    }
    ctx->pc = 0x4978B4u;
label_4978b4:
    // 0x4978b4: 0x8fb70010  lw          $s7, 0x10($sp)
    ctx->pc = 0x4978b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4978b8:
    // 0x4978b8: 0x8fb40014  lw          $s4, 0x14($sp)
    ctx->pc = 0x4978b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4978bc:
    // 0x4978bc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x4978bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_4978c0:
    // 0x4978c0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4978c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4978c4:
    // 0x4978c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4978c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4978c8:
    // 0x4978c8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x4978c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4978cc:
    // 0x4978cc: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x4978ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_4978d0:
    // 0x4978d0: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4978d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4978d4:
    // 0x4978d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4978d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4978d8:
    // 0x4978d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4978d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4978dc:
    // 0x4978dc: 0x14a70018  bne         $a1, $a3, . + 4 + (0x18 << 2)
label_4978e0:
    if (ctx->pc == 0x4978E0u) {
        ctx->pc = 0x4978E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978DCu;
        // 0x4978e0: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4978E4u;
        goto label_4978e4;
    }
    ctx->pc = 0x4978DCu;
    {
        const bool branch_taken_0x4978dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x4978E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978DCu;
        // 0x4978e0: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978dc) {
            ctx->pc = 0x497940u;
            goto label_497940;
        }
    }
    ctx->pc = 0x4978E4u;
label_4978e4:
    // 0x4978e4: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x4978e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
label_4978e8:
    // 0x4978e8: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x4978e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_4978ec:
    // 0x4978ec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4978ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4978f0:
    // 0x4978f0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x4978f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_4978f4:
    // 0x4978f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4978f8:
    if (ctx->pc == 0x4978F8u) {
        ctx->pc = 0x4978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978F4u;
        // 0x4978f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4978FCu;
        goto label_4978fc;
    }
    ctx->pc = 0x4978F4u;
    {
        const bool branch_taken_0x4978f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978F4u;
        // 0x4978f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978f4) {
            ctx->pc = 0x497924u;
            goto label_497924;
        }
    }
    ctx->pc = 0x4978FCu;
label_4978fc:
    // 0x4978fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4978fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497900:
    // 0x497900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497904:
    // 0x497904: 0xc127140  jal         func_49C500
label_497908:
    if (ctx->pc == 0x497908u) {
        ctx->pc = 0x497908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497904u;
        // 0x497908: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49790Cu;
        goto label_49790c;
    }
    ctx->pc = 0x497904u;
    SET_GPR_U32(ctx, 31, 0x49790Cu);
    ctx->pc = 0x497908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497904u;
    // 0x497908: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C500u, 0x497904u, 0x49790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49790Cu;
label_49790c:
    // 0x49790c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x49790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_497910:
    // 0x497910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x497910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_497914:
    // 0x497914: 0xc0bb778  jal         func_2EDDE0
label_497918:
    if (ctx->pc == 0x497918u) {
        ctx->pc = 0x497918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497914u;
        // 0x497918: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49791Cu;
        goto label_49791c;
    }
    ctx->pc = 0x497914u;
    SET_GPR_U32(ctx, 31, 0x49791Cu);
    ctx->pc = 0x497918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497914u;
    // 0x497918: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x497914u, 0x49791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49791Cu;
label_49791c:
    // 0x49791c: 0x10000006  b           . + 4 + (0x6 << 2)
label_497920:
    if (ctx->pc == 0x497920u) {
        ctx->pc = 0x497920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49791Cu;
        // 0x497920: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497924u;
        goto label_497924;
    }
    ctx->pc = 0x49791Cu;
    {
        const bool branch_taken_0x49791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49791Cu;
        // 0x497920: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49791c) {
            ctx->pc = 0x497938u;
            goto label_497938;
        }
    }
    ctx->pc = 0x497924u;
label_497924:
    // 0x497924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x497924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497928:
    // 0x497928: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49792c:
    // 0x49792c: 0xc127140  jal         func_49C500
label_497930:
    if (ctx->pc == 0x497930u) {
        ctx->pc = 0x497930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49792Cu;
        // 0x497930: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497934u;
        goto label_497934;
    }
    ctx->pc = 0x49792Cu;
    SET_GPR_U32(ctx, 31, 0x497934u);
    ctx->pc = 0x497930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49792Cu;
    // 0x497930: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C500u, 0x49792Cu, 0x497934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497934u;
label_497934:
    // 0x497934: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x497934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_497938:
    // 0x497938: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x497938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_49793c:
    // 0x49793c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x49793cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_497940:
    // 0x497940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x497940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_497944:
    // 0x497944: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x497944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_497948:
    // 0x497948: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x497948u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_49794c:
    // 0x49794c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x49794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_497950:
    // 0x497950: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x497950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_497954:
    // 0x497954: 0x23e102b  sltu        $v0, $s1, $fp
    ctx->pc = 0x497954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_497958:
    // 0x497958: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_49795c:
    if (ctx->pc == 0x49795Cu) {
        ctx->pc = 0x49795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497958u;
        // 0x49795c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497960u;
        goto label_497960;
    }
    ctx->pc = 0x497958u;
    {
        const bool branch_taken_0x497958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497958u;
        // 0x49795c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497958) {
            ctx->pc = 0x4978C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4978c0;
        }
    }
    ctx->pc = 0x497960u;
label_497960:
    // 0x497960: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x497960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_497964:
    // 0x497964: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x497964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_497968:
    // 0x497968: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x497968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_49796c:
    // 0x49796c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x49796cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_497970:
    // 0x497970: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x497970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_497974:
    // 0x497974: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x497974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_497978:
    // 0x497978: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x497978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49797c:
    // 0x49797c: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x49797cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
label_497980:
    // 0x497980: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x497980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_497984:
    // 0x497984: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x497984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_497988:
    // 0x497988: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x497988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_49798c:
    // 0x49798c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x49798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_497990:
    // 0x497990: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x497990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_497994:
    // 0x497994: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x497994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_497998:
    // 0x497998: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x497998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_49799c:
    // 0x49799c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x49799cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_4979a0:
    // 0x4979a0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x4979a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4979a4:
    // 0x4979a4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4979a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4979a8:
    // 0x4979a8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x4979a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_4979ac:
    // 0x4979ac: 0xc127cae  jal         func_49F2B8
label_4979b0:
    if (ctx->pc == 0x4979B0u) {
        ctx->pc = 0x4979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979ACu;
        // 0x4979b0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4979B4u;
        goto label_4979b4;
    }
    ctx->pc = 0x4979ACu;
    SET_GPR_U32(ctx, 31, 0x4979B4u);
    ctx->pc = 0x4979B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4979ACu;
    // 0x4979b0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4979ACu, 0x4979B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4979B4u;
label_4979b4:
    // 0x4979b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4979b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4979b8:
    // 0x4979b8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4979b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4979bc:
    // 0x4979bc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4979bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4979c0:
    // 0x4979c0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4979c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4979c4:
    // 0x4979c4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4979c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4979c8:
    // 0x4979c8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4979c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4979cc:
    // 0x4979cc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4979ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4979d0:
    // 0x4979d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4979d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4979d4:
    // 0x4979d4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4979d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4979d8:
    // 0x4979d8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x4979d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4979dc:
    // 0x4979dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4979dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4979e0:
    // 0x4979e0: 0x3e00008  jr          $ra
label_4979e4:
    if (ctx->pc == 0x4979E4u) {
        ctx->pc = 0x4979E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979E0u;
        // 0x4979e4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4979E8u;
        goto label_fallthrough_0x4979e0;
    }
    ctx->pc = 0x4979E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4979E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979E0u;
        // 0x4979e4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4979E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4979e0:
    ctx->pc = 0x4979E8u;
}
