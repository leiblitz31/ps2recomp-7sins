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

// Function: sub_001635B0
// Address: 0x1635b0 - 0x163a30
void sub_001635B0_0x1635b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001635B0_0x1635b0");
#endif

    switch (ctx->pc) {
        case 0x1635b0u: goto label_1635b0;
        case 0x1635b4u: goto label_1635b4;
        case 0x1635b8u: goto label_1635b8;
        case 0x1635bcu: goto label_1635bc;
        case 0x1635c0u: goto label_1635c0;
        case 0x1635c4u: goto label_1635c4;
        case 0x1635c8u: goto label_1635c8;
        case 0x1635ccu: goto label_1635cc;
        case 0x1635d0u: goto label_1635d0;
        case 0x1635d4u: goto label_1635d4;
        case 0x1635d8u: goto label_1635d8;
        case 0x1635dcu: goto label_1635dc;
        case 0x1635e0u: goto label_1635e0;
        case 0x1635e4u: goto label_1635e4;
        case 0x1635e8u: goto label_1635e8;
        case 0x1635ecu: goto label_1635ec;
        case 0x1635f0u: goto label_1635f0;
        case 0x1635f4u: goto label_1635f4;
        case 0x1635f8u: goto label_1635f8;
        case 0x1635fcu: goto label_1635fc;
        case 0x163600u: goto label_163600;
        case 0x163604u: goto label_163604;
        case 0x163608u: goto label_163608;
        case 0x16360cu: goto label_16360c;
        case 0x163610u: goto label_163610;
        case 0x163614u: goto label_163614;
        case 0x163618u: goto label_163618;
        case 0x16361cu: goto label_16361c;
        case 0x163620u: goto label_163620;
        case 0x163624u: goto label_163624;
        case 0x163628u: goto label_163628;
        case 0x16362cu: goto label_16362c;
        case 0x163630u: goto label_163630;
        case 0x163634u: goto label_163634;
        case 0x163638u: goto label_163638;
        case 0x16363cu: goto label_16363c;
        case 0x163640u: goto label_163640;
        case 0x163644u: goto label_163644;
        case 0x163648u: goto label_163648;
        case 0x16364cu: goto label_16364c;
        case 0x163650u: goto label_163650;
        case 0x163654u: goto label_163654;
        case 0x163658u: goto label_163658;
        case 0x16365cu: goto label_16365c;
        case 0x163660u: goto label_163660;
        case 0x163664u: goto label_163664;
        case 0x163668u: goto label_163668;
        case 0x16366cu: goto label_16366c;
        case 0x163670u: goto label_163670;
        case 0x163674u: goto label_163674;
        case 0x163678u: goto label_163678;
        case 0x16367cu: goto label_16367c;
        case 0x163680u: goto label_163680;
        case 0x163684u: goto label_163684;
        case 0x163688u: goto label_163688;
        case 0x16368cu: goto label_16368c;
        case 0x163690u: goto label_163690;
        case 0x163694u: goto label_163694;
        case 0x163698u: goto label_163698;
        case 0x16369cu: goto label_16369c;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636a4u: goto label_1636a4;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636acu: goto label_1636ac;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636b4u: goto label_1636b4;
        case 0x1636b8u: goto label_1636b8;
        case 0x1636bcu: goto label_1636bc;
        case 0x1636c0u: goto label_1636c0;
        case 0x1636c4u: goto label_1636c4;
        case 0x1636c8u: goto label_1636c8;
        case 0x1636ccu: goto label_1636cc;
        case 0x1636d0u: goto label_1636d0;
        case 0x1636d4u: goto label_1636d4;
        case 0x1636d8u: goto label_1636d8;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636e0u: goto label_1636e0;
        case 0x1636e4u: goto label_1636e4;
        case 0x1636e8u: goto label_1636e8;
        case 0x1636ecu: goto label_1636ec;
        case 0x1636f0u: goto label_1636f0;
        case 0x1636f4u: goto label_1636f4;
        case 0x1636f8u: goto label_1636f8;
        case 0x1636fcu: goto label_1636fc;
        case 0x163700u: goto label_163700;
        case 0x163704u: goto label_163704;
        case 0x163708u: goto label_163708;
        case 0x16370cu: goto label_16370c;
        case 0x163710u: goto label_163710;
        case 0x163714u: goto label_163714;
        case 0x163718u: goto label_163718;
        case 0x16371cu: goto label_16371c;
        case 0x163720u: goto label_163720;
        case 0x163724u: goto label_163724;
        case 0x163728u: goto label_163728;
        case 0x16372cu: goto label_16372c;
        case 0x163730u: goto label_163730;
        case 0x163734u: goto label_163734;
        case 0x163738u: goto label_163738;
        case 0x16373cu: goto label_16373c;
        case 0x163740u: goto label_163740;
        case 0x163744u: goto label_163744;
        case 0x163748u: goto label_163748;
        case 0x16374cu: goto label_16374c;
        case 0x163750u: goto label_163750;
        case 0x163754u: goto label_163754;
        case 0x163758u: goto label_163758;
        case 0x16375cu: goto label_16375c;
        case 0x163760u: goto label_163760;
        case 0x163764u: goto label_163764;
        case 0x163768u: goto label_163768;
        case 0x16376cu: goto label_16376c;
        case 0x163770u: goto label_163770;
        case 0x163774u: goto label_163774;
        case 0x163778u: goto label_163778;
        case 0x16377cu: goto label_16377c;
        case 0x163780u: goto label_163780;
        case 0x163784u: goto label_163784;
        case 0x163788u: goto label_163788;
        case 0x16378cu: goto label_16378c;
        case 0x163790u: goto label_163790;
        case 0x163794u: goto label_163794;
        case 0x163798u: goto label_163798;
        case 0x16379cu: goto label_16379c;
        case 0x1637a0u: goto label_1637a0;
        case 0x1637a4u: goto label_1637a4;
        case 0x1637a8u: goto label_1637a8;
        case 0x1637acu: goto label_1637ac;
        case 0x1637b0u: goto label_1637b0;
        case 0x1637b4u: goto label_1637b4;
        case 0x1637b8u: goto label_1637b8;
        case 0x1637bcu: goto label_1637bc;
        case 0x1637c0u: goto label_1637c0;
        case 0x1637c4u: goto label_1637c4;
        case 0x1637c8u: goto label_1637c8;
        case 0x1637ccu: goto label_1637cc;
        case 0x1637d0u: goto label_1637d0;
        case 0x1637d4u: goto label_1637d4;
        case 0x1637d8u: goto label_1637d8;
        case 0x1637dcu: goto label_1637dc;
        case 0x1637e0u: goto label_1637e0;
        case 0x1637e4u: goto label_1637e4;
        case 0x1637e8u: goto label_1637e8;
        case 0x1637ecu: goto label_1637ec;
        case 0x1637f0u: goto label_1637f0;
        case 0x1637f4u: goto label_1637f4;
        case 0x1637f8u: goto label_1637f8;
        case 0x1637fcu: goto label_1637fc;
        case 0x163800u: goto label_163800;
        case 0x163804u: goto label_163804;
        case 0x163808u: goto label_163808;
        case 0x16380cu: goto label_16380c;
        case 0x163810u: goto label_163810;
        case 0x163814u: goto label_163814;
        case 0x163818u: goto label_163818;
        case 0x16381cu: goto label_16381c;
        case 0x163820u: goto label_163820;
        case 0x163824u: goto label_163824;
        case 0x163828u: goto label_163828;
        case 0x16382cu: goto label_16382c;
        case 0x163830u: goto label_163830;
        case 0x163834u: goto label_163834;
        case 0x163838u: goto label_163838;
        case 0x16383cu: goto label_16383c;
        case 0x163840u: goto label_163840;
        case 0x163844u: goto label_163844;
        case 0x163848u: goto label_163848;
        case 0x16384cu: goto label_16384c;
        case 0x163850u: goto label_163850;
        case 0x163854u: goto label_163854;
        case 0x163858u: goto label_163858;
        case 0x16385cu: goto label_16385c;
        case 0x163860u: goto label_163860;
        case 0x163864u: goto label_163864;
        case 0x163868u: goto label_163868;
        case 0x16386cu: goto label_16386c;
        case 0x163870u: goto label_163870;
        case 0x163874u: goto label_163874;
        case 0x163878u: goto label_163878;
        case 0x16387cu: goto label_16387c;
        case 0x163880u: goto label_163880;
        case 0x163884u: goto label_163884;
        case 0x163888u: goto label_163888;
        case 0x16388cu: goto label_16388c;
        case 0x163890u: goto label_163890;
        case 0x163894u: goto label_163894;
        case 0x163898u: goto label_163898;
        case 0x16389cu: goto label_16389c;
        case 0x1638a0u: goto label_1638a0;
        case 0x1638a4u: goto label_1638a4;
        case 0x1638a8u: goto label_1638a8;
        case 0x1638acu: goto label_1638ac;
        case 0x1638b0u: goto label_1638b0;
        case 0x1638b4u: goto label_1638b4;
        case 0x1638b8u: goto label_1638b8;
        case 0x1638bcu: goto label_1638bc;
        case 0x1638c0u: goto label_1638c0;
        case 0x1638c4u: goto label_1638c4;
        case 0x1638c8u: goto label_1638c8;
        case 0x1638ccu: goto label_1638cc;
        case 0x1638d0u: goto label_1638d0;
        case 0x1638d4u: goto label_1638d4;
        case 0x1638d8u: goto label_1638d8;
        case 0x1638dcu: goto label_1638dc;
        case 0x1638e0u: goto label_1638e0;
        case 0x1638e4u: goto label_1638e4;
        case 0x1638e8u: goto label_1638e8;
        case 0x1638ecu: goto label_1638ec;
        case 0x1638f0u: goto label_1638f0;
        case 0x1638f4u: goto label_1638f4;
        case 0x1638f8u: goto label_1638f8;
        case 0x1638fcu: goto label_1638fc;
        case 0x163900u: goto label_163900;
        case 0x163904u: goto label_163904;
        case 0x163908u: goto label_163908;
        case 0x16390cu: goto label_16390c;
        case 0x163910u: goto label_163910;
        case 0x163914u: goto label_163914;
        case 0x163918u: goto label_163918;
        case 0x16391cu: goto label_16391c;
        case 0x163920u: goto label_163920;
        case 0x163924u: goto label_163924;
        case 0x163928u: goto label_163928;
        case 0x16392cu: goto label_16392c;
        case 0x163930u: goto label_163930;
        case 0x163934u: goto label_163934;
        case 0x163938u: goto label_163938;
        case 0x16393cu: goto label_16393c;
        case 0x163940u: goto label_163940;
        case 0x163944u: goto label_163944;
        case 0x163948u: goto label_163948;
        case 0x16394cu: goto label_16394c;
        case 0x163950u: goto label_163950;
        case 0x163954u: goto label_163954;
        case 0x163958u: goto label_163958;
        case 0x16395cu: goto label_16395c;
        case 0x163960u: goto label_163960;
        case 0x163964u: goto label_163964;
        case 0x163968u: goto label_163968;
        case 0x16396cu: goto label_16396c;
        case 0x163970u: goto label_163970;
        case 0x163974u: goto label_163974;
        case 0x163978u: goto label_163978;
        case 0x16397cu: goto label_16397c;
        case 0x163980u: goto label_163980;
        case 0x163984u: goto label_163984;
        case 0x163988u: goto label_163988;
        case 0x16398cu: goto label_16398c;
        case 0x163990u: goto label_163990;
        case 0x163994u: goto label_163994;
        case 0x163998u: goto label_163998;
        case 0x16399cu: goto label_16399c;
        case 0x1639a0u: goto label_1639a0;
        case 0x1639a4u: goto label_1639a4;
        case 0x1639a8u: goto label_1639a8;
        case 0x1639acu: goto label_1639ac;
        case 0x1639b0u: goto label_1639b0;
        case 0x1639b4u: goto label_1639b4;
        case 0x1639b8u: goto label_1639b8;
        case 0x1639bcu: goto label_1639bc;
        case 0x1639c0u: goto label_1639c0;
        case 0x1639c4u: goto label_1639c4;
        case 0x1639c8u: goto label_1639c8;
        case 0x1639ccu: goto label_1639cc;
        case 0x1639d0u: goto label_1639d0;
        case 0x1639d4u: goto label_1639d4;
        case 0x1639d8u: goto label_1639d8;
        case 0x1639dcu: goto label_1639dc;
        case 0x1639e0u: goto label_1639e0;
        case 0x1639e4u: goto label_1639e4;
        case 0x1639e8u: goto label_1639e8;
        case 0x1639ecu: goto label_1639ec;
        case 0x1639f0u: goto label_1639f0;
        case 0x1639f4u: goto label_1639f4;
        case 0x1639f8u: goto label_1639f8;
        case 0x1639fcu: goto label_1639fc;
        case 0x163a00u: goto label_163a00;
        case 0x163a04u: goto label_163a04;
        case 0x163a08u: goto label_163a08;
        case 0x163a0cu: goto label_163a0c;
        case 0x163a10u: goto label_163a10;
        case 0x163a14u: goto label_163a14;
        case 0x163a18u: goto label_163a18;
        case 0x163a1cu: goto label_163a1c;
        case 0x163a20u: goto label_163a20;
        case 0x163a24u: goto label_163a24;
        case 0x163a28u: goto label_163a28;
        case 0x163a2cu: goto label_163a2c;
        default: break;
    }

    ctx->pc = 0x1635b0u;

label_1635b0:
    // 0x1635b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1635b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1635b4:
    // 0x1635b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1635b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1635b8:
    // 0x1635b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1635b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1635bc:
    // 0x1635bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1635bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1635c0:
    // 0x1635c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1635c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1635c4:
    // 0x1635c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1635c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1635c8:
    // 0x1635c8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1635c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1635cc:
    // 0x1635cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1635ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1635d0:
    // 0x1635d0: 0xc055974  jal         func_1565D0
label_1635d4:
    if (ctx->pc == 0x1635D4u) {
        ctx->pc = 0x1635D8u;
        goto label_1635d8;
    }
    ctx->pc = 0x1635D0u;
    SET_GPR_U32(ctx, 31, 0x1635D8u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x1635D0u, 0x1635D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635D8u;
label_1635d8:
    // 0x1635d8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1635d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1635dc:
    // 0x1635dc: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1635dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1635e0:
    // 0x1635e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1635e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1635e4:
    // 0x1635e4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1635e8:
    if (ctx->pc == 0x1635E8u) {
        ctx->pc = 0x1635ECu;
        goto label_1635ec;
    }
    ctx->pc = 0x1635E4u;
    {
        const bool branch_taken_0x1635e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1635e4) {
            ctx->pc = 0x163608u;
            goto label_163608;
        }
    }
    ctx->pc = 0x1635ECu;
label_1635ec:
    // 0x1635ec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1635ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1635f0:
    // 0x1635f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1635f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1635f4:
    // 0x1635f4: 0x24a537b0  addiu       $a1, $a1, 0x37B0
    ctx->pc = 0x1635f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14256));
label_1635f8:
    // 0x1635f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1635f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1635fc:
    // 0x1635fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1635fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_163600:
    // 0x163600: 0x320f809  jalr        $t9
label_163604:
    if (ctx->pc == 0x163604u) {
        ctx->pc = 0x163608u;
        goto label_163608;
    }
    ctx->pc = 0x163600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x163608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163600u, 0x163608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163608u;
label_163608:
    // 0x163608: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16360c:
    // 0x16360c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163610:
    // 0x163610: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_163614:
    // 0x163614: 0xc056708  jal         func_159C20
label_163618:
    if (ctx->pc == 0x163618u) {
        ctx->pc = 0x16361Cu;
        goto label_16361c;
    }
    ctx->pc = 0x163614u;
    SET_GPR_U32(ctx, 31, 0x16361Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x163614u, 0x16361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16361Cu;
label_16361c:
    // 0x16361c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x16361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163620:
    // 0x163620: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_163624:
    // 0x163624: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x163624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_163628:
    // 0x163628: 0xc056708  jal         func_159C20
label_16362c:
    if (ctx->pc == 0x16362Cu) {
        ctx->pc = 0x163630u;
        goto label_163630;
    }
    ctx->pc = 0x163628u;
    SET_GPR_U32(ctx, 31, 0x163630u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x163628u, 0x163630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163630u;
label_163630:
    // 0x163630: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163634:
    // 0x163634: 0x27858e18  addiu       $a1, $gp, -0x71E8
    ctx->pc = 0x163634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938136));
label_163638:
    // 0x163638: 0xc0552e4  jal         func_154B90
label_16363c:
    if (ctx->pc == 0x16363Cu) {
        ctx->pc = 0x163640u;
        goto label_163640;
    }
    ctx->pc = 0x163638u;
    SET_GPR_U32(ctx, 31, 0x163640u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x163638u, 0x163640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163640u;
label_163640:
    // 0x163640: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163644:
    // 0x163644: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163648:
    // 0x163648: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x163648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_16364c:
    // 0x16364c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16364cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163650:
    // 0x163650: 0xc05612c  jal         func_1584B0
label_163654:
    if (ctx->pc == 0x163654u) {
        ctx->pc = 0x163658u;
        goto label_163658;
    }
    ctx->pc = 0x163650u;
    SET_GPR_U32(ctx, 31, 0x163658u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163650u, 0x163658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163658u;
label_163658:
    // 0x163658: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x163658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_16365c:
    // 0x16365c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x16365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163660:
    // 0x163660: 0x27858e20  addiu       $a1, $gp, -0x71E0
    ctx->pc = 0x163660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938144));
label_163664:
    // 0x163664: 0xc0552e4  jal         func_154B90
label_163668:
    if (ctx->pc == 0x163668u) {
        ctx->pc = 0x16366Cu;
        goto label_16366c;
    }
    ctx->pc = 0x163664u;
    SET_GPR_U32(ctx, 31, 0x16366Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x163664u, 0x16366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16366Cu;
label_16366c:
    // 0x16366c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16366cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163670:
    // 0x163670: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163674:
    // 0x163674: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x163674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163678:
    // 0x163678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16367c:
    // 0x16367c: 0xc05612c  jal         func_1584B0
label_163680:
    if (ctx->pc == 0x163680u) {
        ctx->pc = 0x163684u;
        goto label_163684;
    }
    ctx->pc = 0x16367Cu;
    SET_GPR_U32(ctx, 31, 0x163684u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16367Cu, 0x163684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163684u;
label_163684:
    // 0x163684: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x163684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163688:
    // 0x163688: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16368c:
    // 0x16368c: 0x27858e28  addiu       $a1, $gp, -0x71D8
    ctx->pc = 0x16368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938152));
label_163690:
    // 0x163690: 0xc0552e4  jal         func_154B90
label_163694:
    if (ctx->pc == 0x163694u) {
        ctx->pc = 0x163698u;
        goto label_163698;
    }
    ctx->pc = 0x163690u;
    SET_GPR_U32(ctx, 31, 0x163698u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x163690u, 0x163698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163698u;
label_163698:
    // 0x163698: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16369c:
    // 0x16369c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x16369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1636a0:
    // 0x1636a0: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1636a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_1636a4:
    // 0x1636a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1636a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1636a8:
    // 0x1636a8: 0xc05612c  jal         func_1584B0
label_1636ac:
    if (ctx->pc == 0x1636ACu) {
        ctx->pc = 0x1636B0u;
        goto label_1636b0;
    }
    ctx->pc = 0x1636A8u;
    SET_GPR_U32(ctx, 31, 0x1636B0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1636A8u, 0x1636B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636B0u;
label_1636b0:
    // 0x1636b0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1636b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1636b4:
    // 0x1636b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1636b8:
    // 0x1636b8: 0x27858e30  addiu       $a1, $gp, -0x71D0
    ctx->pc = 0x1636b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
label_1636bc:
    // 0x1636bc: 0xc0552e4  jal         func_154B90
label_1636c0:
    if (ctx->pc == 0x1636C0u) {
        ctx->pc = 0x1636C4u;
        goto label_1636c4;
    }
    ctx->pc = 0x1636BCu;
    SET_GPR_U32(ctx, 31, 0x1636C4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1636BCu, 0x1636C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636C4u;
label_1636c4:
    // 0x1636c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1636c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1636c8:
    // 0x1636c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1636c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1636cc:
    // 0x1636cc: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1636ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_1636d0:
    // 0x1636d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1636d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1636d4:
    // 0x1636d4: 0xc05612c  jal         func_1584B0
label_1636d8:
    if (ctx->pc == 0x1636D8u) {
        ctx->pc = 0x1636DCu;
        goto label_1636dc;
    }
    ctx->pc = 0x1636D4u;
    SET_GPR_U32(ctx, 31, 0x1636DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1636D4u, 0x1636DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1636dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1636e0:
    // 0x1636e0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1636e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1636e4:
    // 0x1636e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1636e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1636e8:
    // 0x1636e8: 0x24a537d0  addiu       $a1, $a1, 0x37D0
    ctx->pc = 0x1636e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
label_1636ec:
    // 0x1636ec: 0xc0552e4  jal         func_154B90
label_1636f0:
    if (ctx->pc == 0x1636F0u) {
        ctx->pc = 0x1636F4u;
        goto label_1636f4;
    }
    ctx->pc = 0x1636ECu;
    SET_GPR_U32(ctx, 31, 0x1636F4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1636ECu, 0x1636F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636F4u;
label_1636f4:
    // 0x1636f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1636f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1636f8:
    // 0x1636f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1636f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1636fc:
    // 0x1636fc: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163700:
    // 0x163700: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x163700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_163704:
    // 0x163704: 0xc05612c  jal         func_1584B0
label_163708:
    if (ctx->pc == 0x163708u) {
        ctx->pc = 0x16370Cu;
        goto label_16370c;
    }
    ctx->pc = 0x163704u;
    SET_GPR_U32(ctx, 31, 0x16370Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163704u, 0x16370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16370Cu;
label_16370c:
    // 0x16370c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x16370cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163710:
    // 0x163710: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163714:
    // 0x163714: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163718:
    // 0x163718: 0x24a537e0  addiu       $a1, $a1, 0x37E0
    ctx->pc = 0x163718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14304));
label_16371c:
    // 0x16371c: 0xc0552e4  jal         func_154B90
label_163720:
    if (ctx->pc == 0x163720u) {
        ctx->pc = 0x163724u;
        goto label_163724;
    }
    ctx->pc = 0x16371Cu;
    SET_GPR_U32(ctx, 31, 0x163724u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16371Cu, 0x163724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163724u;
label_163724:
    // 0x163724: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163728:
    // 0x163728: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16372c:
    // 0x16372c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163730:
    // 0x163730: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x163730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_163734:
    // 0x163734: 0xc05612c  jal         func_1584B0
label_163738:
    if (ctx->pc == 0x163738u) {
        ctx->pc = 0x16373Cu;
        goto label_16373c;
    }
    ctx->pc = 0x163734u;
    SET_GPR_U32(ctx, 31, 0x16373Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163734u, 0x16373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16373Cu;
label_16373c:
    // 0x16373c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x16373cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163740:
    // 0x163740: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163744:
    // 0x163744: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163748:
    // 0x163748: 0x24a537f0  addiu       $a1, $a1, 0x37F0
    ctx->pc = 0x163748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14320));
label_16374c:
    // 0x16374c: 0xc0552e4  jal         func_154B90
label_163750:
    if (ctx->pc == 0x163750u) {
        ctx->pc = 0x163754u;
        goto label_163754;
    }
    ctx->pc = 0x16374Cu;
    SET_GPR_U32(ctx, 31, 0x163754u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16374Cu, 0x163754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163754u;
label_163754:
    // 0x163754: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163758:
    // 0x163758: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16375c:
    // 0x16375c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163760:
    // 0x163760: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_163764:
    // 0x163764: 0xc05612c  jal         func_1584B0
label_163768:
    if (ctx->pc == 0x163768u) {
        ctx->pc = 0x16376Cu;
        goto label_16376c;
    }
    ctx->pc = 0x163764u;
    SET_GPR_U32(ctx, 31, 0x16376Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163764u, 0x16376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16376Cu;
label_16376c:
    // 0x16376c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x16376cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163770:
    // 0x163770: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163774:
    // 0x163774: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163778:
    // 0x163778: 0x24a53800  addiu       $a1, $a1, 0x3800
    ctx->pc = 0x163778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14336));
label_16377c:
    // 0x16377c: 0xc0552e4  jal         func_154B90
label_163780:
    if (ctx->pc == 0x163780u) {
        ctx->pc = 0x163784u;
        goto label_163784;
    }
    ctx->pc = 0x16377Cu;
    SET_GPR_U32(ctx, 31, 0x163784u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16377Cu, 0x163784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163784u;
label_163784:
    // 0x163784: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163788:
    // 0x163788: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16378c:
    // 0x16378c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163790:
    // 0x163790: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_163794:
    // 0x163794: 0xc05612c  jal         func_1584B0
label_163798:
    if (ctx->pc == 0x163798u) {
        ctx->pc = 0x16379Cu;
        goto label_16379c;
    }
    ctx->pc = 0x163794u;
    SET_GPR_U32(ctx, 31, 0x16379Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163794u, 0x16379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16379Cu;
label_16379c:
    // 0x16379c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x16379cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1637a0:
    // 0x1637a0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1637a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1637a4:
    // 0x1637a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1637a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1637a8:
    // 0x1637a8: 0x24a53810  addiu       $a1, $a1, 0x3810
    ctx->pc = 0x1637a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14352));
label_1637ac:
    // 0x1637ac: 0xc0552e4  jal         func_154B90
label_1637b0:
    if (ctx->pc == 0x1637B0u) {
        ctx->pc = 0x1637B4u;
        goto label_1637b4;
    }
    ctx->pc = 0x1637ACu;
    SET_GPR_U32(ctx, 31, 0x1637B4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1637ACu, 0x1637B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637B4u;
label_1637b4:
    // 0x1637b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1637b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1637b8:
    // 0x1637b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1637b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1637bc:
    // 0x1637bc: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1637bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_1637c0:
    // 0x1637c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1637c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1637c4:
    // 0x1637c4: 0xc05612c  jal         func_1584B0
label_1637c8:
    if (ctx->pc == 0x1637C8u) {
        ctx->pc = 0x1637CCu;
        goto label_1637cc;
    }
    ctx->pc = 0x1637C4u;
    SET_GPR_U32(ctx, 31, 0x1637CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1637C4u, 0x1637CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637CCu;
label_1637cc:
    // 0x1637cc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1637ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1637d0:
    // 0x1637d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1637d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1637d4:
    // 0x1637d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1637d8:
    // 0x1637d8: 0x24a53820  addiu       $a1, $a1, 0x3820
    ctx->pc = 0x1637d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14368));
label_1637dc:
    // 0x1637dc: 0xc0552e4  jal         func_154B90
label_1637e0:
    if (ctx->pc == 0x1637E0u) {
        ctx->pc = 0x1637E4u;
        goto label_1637e4;
    }
    ctx->pc = 0x1637DCu;
    SET_GPR_U32(ctx, 31, 0x1637E4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1637DCu, 0x1637E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637E4u;
label_1637e4:
    // 0x1637e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1637e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1637e8:
    // 0x1637e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1637e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1637ec:
    // 0x1637ec: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1637ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_1637f0:
    // 0x1637f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1637f4:
    // 0x1637f4: 0xc05612c  jal         func_1584B0
label_1637f8:
    if (ctx->pc == 0x1637F8u) {
        ctx->pc = 0x1637FCu;
        goto label_1637fc;
    }
    ctx->pc = 0x1637F4u;
    SET_GPR_U32(ctx, 31, 0x1637FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1637F4u, 0x1637FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637FCu;
label_1637fc:
    // 0x1637fc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1637fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163800:
    // 0x163800: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163804:
    // 0x163804: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163808:
    // 0x163808: 0x24a53830  addiu       $a1, $a1, 0x3830
    ctx->pc = 0x163808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14384));
label_16380c:
    // 0x16380c: 0xc0552e4  jal         func_154B90
label_163810:
    if (ctx->pc == 0x163810u) {
        ctx->pc = 0x163814u;
        goto label_163814;
    }
    ctx->pc = 0x16380Cu;
    SET_GPR_U32(ctx, 31, 0x163814u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16380Cu, 0x163814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163814u;
label_163814:
    // 0x163814: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163818:
    // 0x163818: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16381c:
    // 0x16381c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163820:
    // 0x163820: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x163820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_163824:
    // 0x163824: 0xc05612c  jal         func_1584B0
label_163828:
    if (ctx->pc == 0x163828u) {
        ctx->pc = 0x16382Cu;
        goto label_16382c;
    }
    ctx->pc = 0x163824u;
    SET_GPR_U32(ctx, 31, 0x16382Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163824u, 0x16382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16382Cu;
label_16382c:
    // 0x16382c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x16382cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163830:
    // 0x163830: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163834:
    // 0x163834: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x163834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163838:
    // 0x163838: 0x24a53840  addiu       $a1, $a1, 0x3840
    ctx->pc = 0x163838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14400));
label_16383c:
    // 0x16383c: 0xc0552e4  jal         func_154B90
label_163840:
    if (ctx->pc == 0x163840u) {
        ctx->pc = 0x163844u;
        goto label_163844;
    }
    ctx->pc = 0x16383Cu;
    SET_GPR_U32(ctx, 31, 0x163844u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16383Cu, 0x163844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163844u;
label_163844:
    // 0x163844: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x163844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163848:
    // 0x163848: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16384c:
    // 0x16384c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163850:
    // 0x163850: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x163850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_163854:
    // 0x163854: 0xc05612c  jal         func_1584B0
label_163858:
    if (ctx->pc == 0x163858u) {
        ctx->pc = 0x16385Cu;
        goto label_16385c;
    }
    ctx->pc = 0x163854u;
    SET_GPR_U32(ctx, 31, 0x16385Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163854u, 0x16385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16385Cu;
label_16385c:
    // 0x16385c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x16385cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163860:
    // 0x163860: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x163860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163864:
    // 0x163864: 0x1000000d  b           . + 4 + (0xD << 2)
label_163868:
    if (ctx->pc == 0x163868u) {
        ctx->pc = 0x16386Cu;
        goto label_16386c;
    }
    ctx->pc = 0x163864u;
    {
        const bool branch_taken_0x163864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163864) {
            ctx->pc = 0x16389Cu;
            goto label_16389c;
        }
    }
    ctx->pc = 0x16386Cu;
label_16386c:
    // 0x16386c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x16386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163870:
    // 0x163870: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x163870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_163874:
    // 0x163874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163878:
    // 0x163878: 0xc05612c  jal         func_1584B0
label_16387c:
    if (ctx->pc == 0x16387Cu) {
        ctx->pc = 0x163880u;
        goto label_163880;
    }
    ctx->pc = 0x163878u;
    SET_GPR_U32(ctx, 31, 0x163880u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163878u, 0x163880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163880u;
label_163880:
    // 0x163880: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_163884:
    // 0x163884: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163888:
    // 0x163888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16388c:
    // 0x16388c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_163890:
    // 0x163890: 0xc08c434  jal         func_2310D0
label_163894:
    if (ctx->pc == 0x163894u) {
        ctx->pc = 0x163898u;
        goto label_163898;
    }
    ctx->pc = 0x163890u;
    SET_GPR_U32(ctx, 31, 0x163898u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x163890u, 0x163898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163898u;
label_163898:
    // 0x163898: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16389c:
    // 0x16389c: 0x2e22000c  sltiu       $v0, $s1, 0xC
    ctx->pc = 0x16389cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_1638a0:
    // 0x1638a0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1638a4:
    if (ctx->pc == 0x1638A4u) {
        ctx->pc = 0x1638A8u;
        goto label_1638a8;
    }
    ctx->pc = 0x1638A0u;
    {
        const bool branch_taken_0x1638a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1638a0) {
            ctx->pc = 0x16386Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16386c;
        }
    }
    ctx->pc = 0x1638A8u;
label_1638a8:
    // 0x1638a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1638a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1638ac:
    // 0x1638ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1638acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1638b0:
    // 0x1638b0: 0x24a53850  addiu       $a1, $a1, 0x3850
    ctx->pc = 0x1638b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14416));
label_1638b4:
    // 0x1638b4: 0xc0552e4  jal         func_154B90
label_1638b8:
    if (ctx->pc == 0x1638B8u) {
        ctx->pc = 0x1638BCu;
        goto label_1638bc;
    }
    ctx->pc = 0x1638B4u;
    SET_GPR_U32(ctx, 31, 0x1638BCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1638B4u, 0x1638BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638BCu;
label_1638bc:
    // 0x1638bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1638bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1638c0:
    // 0x1638c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1638c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1638c4:
    // 0x1638c4: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1638c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_1638c8:
    // 0x1638c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1638c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1638cc:
    // 0x1638cc: 0xc05612c  jal         func_1584B0
label_1638d0:
    if (ctx->pc == 0x1638D0u) {
        ctx->pc = 0x1638D4u;
        goto label_1638d4;
    }
    ctx->pc = 0x1638CCu;
    SET_GPR_U32(ctx, 31, 0x1638D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1638CCu, 0x1638D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638D4u;
label_1638d4:
    // 0x1638d4: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1638d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1638d8:
    // 0x1638d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1638d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1638dc:
    // 0x1638dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1638dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1638e0:
    // 0x1638e0: 0x24a53860  addiu       $a1, $a1, 0x3860
    ctx->pc = 0x1638e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14432));
label_1638e4:
    // 0x1638e4: 0xc0552e4  jal         func_154B90
label_1638e8:
    if (ctx->pc == 0x1638E8u) {
        ctx->pc = 0x1638ECu;
        goto label_1638ec;
    }
    ctx->pc = 0x1638E4u;
    SET_GPR_U32(ctx, 31, 0x1638ECu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1638E4u, 0x1638ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638ECu;
label_1638ec:
    // 0x1638ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1638ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1638f0:
    // 0x1638f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1638f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1638f4:
    // 0x1638f4: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1638f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_1638f8:
    // 0x1638f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1638f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1638fc:
    // 0x1638fc: 0xc05612c  jal         func_1584B0
label_163900:
    if (ctx->pc == 0x163900u) {
        ctx->pc = 0x163904u;
        goto label_163904;
    }
    ctx->pc = 0x1638FCu;
    SET_GPR_U32(ctx, 31, 0x163904u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1638FCu, 0x163904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163904u;
label_163904:
    // 0x163904: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x163904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163908:
    // 0x163908: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16390c:
    // 0x16390c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16390cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163910:
    // 0x163910: 0x24a53870  addiu       $a1, $a1, 0x3870
    ctx->pc = 0x163910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14448));
label_163914:
    // 0x163914: 0xc0552e4  jal         func_154B90
label_163918:
    if (ctx->pc == 0x163918u) {
        ctx->pc = 0x16391Cu;
        goto label_16391c;
    }
    ctx->pc = 0x163914u;
    SET_GPR_U32(ctx, 31, 0x16391Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x163914u, 0x16391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16391Cu;
label_16391c:
    // 0x16391c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16391cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163920:
    // 0x163920: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163924:
    // 0x163924: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x163924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_163928:
    // 0x163928: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x163928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16392c:
    // 0x16392c: 0xc05612c  jal         func_1584B0
label_163930:
    if (ctx->pc == 0x163930u) {
        ctx->pc = 0x163934u;
        goto label_163934;
    }
    ctx->pc = 0x16392Cu;
    SET_GPR_U32(ctx, 31, 0x163934u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16392Cu, 0x163934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163934u;
label_163934:
    // 0x163934: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x163934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163938:
    // 0x163938: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16393c:
    // 0x16393c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16393cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163940:
    // 0x163940: 0x24a53880  addiu       $a1, $a1, 0x3880
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14464));
label_163944:
    // 0x163944: 0xc0552e4  jal         func_154B90
label_163948:
    if (ctx->pc == 0x163948u) {
        ctx->pc = 0x16394Cu;
        goto label_16394c;
    }
    ctx->pc = 0x163944u;
    SET_GPR_U32(ctx, 31, 0x16394Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x163944u, 0x16394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16394Cu;
label_16394c:
    // 0x16394c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16394cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163950:
    // 0x163950: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163954:
    // 0x163954: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x163954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_163958:
    // 0x163958: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16395c:
    // 0x16395c: 0xc05612c  jal         func_1584B0
label_163960:
    if (ctx->pc == 0x163960u) {
        ctx->pc = 0x163964u;
        goto label_163964;
    }
    ctx->pc = 0x16395Cu;
    SET_GPR_U32(ctx, 31, 0x163964u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16395Cu, 0x163964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163964u;
label_163964:
    // 0x163964: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x163964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163968:
    // 0x163968: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16396c:
    // 0x16396c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16396cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_163970:
    // 0x163970: 0x24a53890  addiu       $a1, $a1, 0x3890
    ctx->pc = 0x163970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
label_163974:
    // 0x163974: 0xc0552e4  jal         func_154B90
label_163978:
    if (ctx->pc == 0x163978u) {
        ctx->pc = 0x16397Cu;
        goto label_16397c;
    }
    ctx->pc = 0x163974u;
    SET_GPR_U32(ctx, 31, 0x16397Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x163974u, 0x16397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16397Cu;
label_16397c:
    // 0x16397c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16397cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163980:
    // 0x163980: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x163980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_163984:
    // 0x163984: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_163988:
    // 0x163988: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x163988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16398c:
    // 0x16398c: 0xc05612c  jal         func_1584B0
label_163990:
    if (ctx->pc == 0x163990u) {
        ctx->pc = 0x163994u;
        goto label_163994;
    }
    ctx->pc = 0x16398Cu;
    SET_GPR_U32(ctx, 31, 0x163994u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16398Cu, 0x163994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163994u;
label_163994:
    // 0x163994: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x163994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163998:
    // 0x163998: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x163998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16399c:
    // 0x16399c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16399cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1639a0:
    // 0x1639a0: 0x24a538a0  addiu       $a1, $a1, 0x38A0
    ctx->pc = 0x1639a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14496));
label_1639a4:
    // 0x1639a4: 0xc05621c  jal         func_158870
label_1639a8:
    if (ctx->pc == 0x1639A8u) {
        ctx->pc = 0x1639ACu;
        goto label_1639ac;
    }
    ctx->pc = 0x1639A4u;
    SET_GPR_U32(ctx, 31, 0x1639ACu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1639A4u, 0x1639ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639ACu;
label_1639ac:
    // 0x1639ac: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1639acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1639b0:
    // 0x1639b0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1639b4:
    // 0x1639b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1639b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1639b8:
    // 0x1639b8: 0x24a538b0  addiu       $a1, $a1, 0x38B0
    ctx->pc = 0x1639b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14512));
label_1639bc:
    // 0x1639bc: 0xc05621c  jal         func_158870
label_1639c0:
    if (ctx->pc == 0x1639C0u) {
        ctx->pc = 0x1639C4u;
        goto label_1639c4;
    }
    ctx->pc = 0x1639BCu;
    SET_GPR_U32(ctx, 31, 0x1639C4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1639BCu, 0x1639C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639C4u;
label_1639c4:
    // 0x1639c4: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1639c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_1639c8:
    // 0x1639c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1639c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1639cc:
    // 0x1639cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1639d0:
    if (ctx->pc == 0x1639D0u) {
        ctx->pc = 0x1639D4u;
        goto label_1639d4;
    }
    ctx->pc = 0x1639CCu;
    {
        const bool branch_taken_0x1639cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639cc) {
            ctx->pc = 0x1639F8u;
            goto label_1639f8;
        }
    }
    ctx->pc = 0x1639D4u;
label_1639d4:
    // 0x1639d4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1639d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1639d8:
    // 0x1639d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1639d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1639dc:
    // 0x1639dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1639dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1639e0:
    // 0x1639e0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1639e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1639e4:
    // 0x1639e4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1639e8:
    // 0x1639e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1639e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1639ec:
    // 0x1639ec: 0xc08c8dc  jal         func_232370
label_1639f0:
    if (ctx->pc == 0x1639F0u) {
        ctx->pc = 0x1639F4u;
        goto label_1639f4;
    }
    ctx->pc = 0x1639ECu;
    SET_GPR_U32(ctx, 31, 0x1639F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1639ECu, 0x1639F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639F4u;
label_1639f4:
    // 0x1639f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1639f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1639f8:
    // 0x1639f8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1639f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1639fc:
    // 0x1639fc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_163a00:
    if (ctx->pc == 0x163A00u) {
        ctx->pc = 0x163A04u;
        goto label_163a04;
    }
    ctx->pc = 0x1639FCu;
    {
        const bool branch_taken_0x1639fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1639fc) {
            ctx->pc = 0x1639D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1639d4;
        }
    }
    ctx->pc = 0x163A04u;
label_163a04:
    // 0x163a04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x163a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163a08:
    // 0x163a08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163a0c:
    // 0x163a0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_163a10:
    // 0x163a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163a14:
    // 0x163a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_163a18:
    // 0x163a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163a1c:
    // 0x163a1c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x163a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_163a20:
    // 0x163a20: 0x3e00008  jr          $ra
label_163a24:
    if (ctx->pc == 0x163A24u) {
        ctx->pc = 0x163A28u;
        goto label_163a28;
    }
    ctx->pc = 0x163A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163A28u;
label_163a28:
    // 0x163a28: 0x0  nop
    ctx->pc = 0x163a28u;
    // NOP
label_163a2c:
    // 0x163a2c: 0x0  nop
    ctx->pc = 0x163a2cu;
    // NOP
    ctx->pc = 0x163a30u;
}
