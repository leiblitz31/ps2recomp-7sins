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

// Function: sub_002866F0
// Address: 0x2866f0 - 0x286ac0
void sub_002866F0_0x2866f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002866F0_0x2866f0");
#endif

    switch (ctx->pc) {
        case 0x2866f0u: goto label_2866f0;
        case 0x2866f4u: goto label_2866f4;
        case 0x2866f8u: goto label_2866f8;
        case 0x2866fcu: goto label_2866fc;
        case 0x286700u: goto label_286700;
        case 0x286704u: goto label_286704;
        case 0x286708u: goto label_286708;
        case 0x28670cu: goto label_28670c;
        case 0x286710u: goto label_286710;
        case 0x286714u: goto label_286714;
        case 0x286718u: goto label_286718;
        case 0x28671cu: goto label_28671c;
        case 0x286720u: goto label_286720;
        case 0x286724u: goto label_286724;
        case 0x286728u: goto label_286728;
        case 0x28672cu: goto label_28672c;
        case 0x286730u: goto label_286730;
        case 0x286734u: goto label_286734;
        case 0x286738u: goto label_286738;
        case 0x28673cu: goto label_28673c;
        case 0x286740u: goto label_286740;
        case 0x286744u: goto label_286744;
        case 0x286748u: goto label_286748;
        case 0x28674cu: goto label_28674c;
        case 0x286750u: goto label_286750;
        case 0x286754u: goto label_286754;
        case 0x286758u: goto label_286758;
        case 0x28675cu: goto label_28675c;
        case 0x286760u: goto label_286760;
        case 0x286764u: goto label_286764;
        case 0x286768u: goto label_286768;
        case 0x28676cu: goto label_28676c;
        case 0x286770u: goto label_286770;
        case 0x286774u: goto label_286774;
        case 0x286778u: goto label_286778;
        case 0x28677cu: goto label_28677c;
        case 0x286780u: goto label_286780;
        case 0x286784u: goto label_286784;
        case 0x286788u: goto label_286788;
        case 0x28678cu: goto label_28678c;
        case 0x286790u: goto label_286790;
        case 0x286794u: goto label_286794;
        case 0x286798u: goto label_286798;
        case 0x28679cu: goto label_28679c;
        case 0x2867a0u: goto label_2867a0;
        case 0x2867a4u: goto label_2867a4;
        case 0x2867a8u: goto label_2867a8;
        case 0x2867acu: goto label_2867ac;
        case 0x2867b0u: goto label_2867b0;
        case 0x2867b4u: goto label_2867b4;
        case 0x2867b8u: goto label_2867b8;
        case 0x2867bcu: goto label_2867bc;
        case 0x2867c0u: goto label_2867c0;
        case 0x2867c4u: goto label_2867c4;
        case 0x2867c8u: goto label_2867c8;
        case 0x2867ccu: goto label_2867cc;
        case 0x2867d0u: goto label_2867d0;
        case 0x2867d4u: goto label_2867d4;
        case 0x2867d8u: goto label_2867d8;
        case 0x2867dcu: goto label_2867dc;
        case 0x2867e0u: goto label_2867e0;
        case 0x2867e4u: goto label_2867e4;
        case 0x2867e8u: goto label_2867e8;
        case 0x2867ecu: goto label_2867ec;
        case 0x2867f0u: goto label_2867f0;
        case 0x2867f4u: goto label_2867f4;
        case 0x2867f8u: goto label_2867f8;
        case 0x2867fcu: goto label_2867fc;
        case 0x286800u: goto label_286800;
        case 0x286804u: goto label_286804;
        case 0x286808u: goto label_286808;
        case 0x28680cu: goto label_28680c;
        case 0x286810u: goto label_286810;
        case 0x286814u: goto label_286814;
        case 0x286818u: goto label_286818;
        case 0x28681cu: goto label_28681c;
        case 0x286820u: goto label_286820;
        case 0x286824u: goto label_286824;
        case 0x286828u: goto label_286828;
        case 0x28682cu: goto label_28682c;
        case 0x286830u: goto label_286830;
        case 0x286834u: goto label_286834;
        case 0x286838u: goto label_286838;
        case 0x28683cu: goto label_28683c;
        case 0x286840u: goto label_286840;
        case 0x286844u: goto label_286844;
        case 0x286848u: goto label_286848;
        case 0x28684cu: goto label_28684c;
        case 0x286850u: goto label_286850;
        case 0x286854u: goto label_286854;
        case 0x286858u: goto label_286858;
        case 0x28685cu: goto label_28685c;
        case 0x286860u: goto label_286860;
        case 0x286864u: goto label_286864;
        case 0x286868u: goto label_286868;
        case 0x28686cu: goto label_28686c;
        case 0x286870u: goto label_286870;
        case 0x286874u: goto label_286874;
        case 0x286878u: goto label_286878;
        case 0x28687cu: goto label_28687c;
        case 0x286880u: goto label_286880;
        case 0x286884u: goto label_286884;
        case 0x286888u: goto label_286888;
        case 0x28688cu: goto label_28688c;
        case 0x286890u: goto label_286890;
        case 0x286894u: goto label_286894;
        case 0x286898u: goto label_286898;
        case 0x28689cu: goto label_28689c;
        case 0x2868a0u: goto label_2868a0;
        case 0x2868a4u: goto label_2868a4;
        case 0x2868a8u: goto label_2868a8;
        case 0x2868acu: goto label_2868ac;
        case 0x2868b0u: goto label_2868b0;
        case 0x2868b4u: goto label_2868b4;
        case 0x2868b8u: goto label_2868b8;
        case 0x2868bcu: goto label_2868bc;
        case 0x2868c0u: goto label_2868c0;
        case 0x2868c4u: goto label_2868c4;
        case 0x2868c8u: goto label_2868c8;
        case 0x2868ccu: goto label_2868cc;
        case 0x2868d0u: goto label_2868d0;
        case 0x2868d4u: goto label_2868d4;
        case 0x2868d8u: goto label_2868d8;
        case 0x2868dcu: goto label_2868dc;
        case 0x2868e0u: goto label_2868e0;
        case 0x2868e4u: goto label_2868e4;
        case 0x2868e8u: goto label_2868e8;
        case 0x2868ecu: goto label_2868ec;
        case 0x2868f0u: goto label_2868f0;
        case 0x2868f4u: goto label_2868f4;
        case 0x2868f8u: goto label_2868f8;
        case 0x2868fcu: goto label_2868fc;
        case 0x286900u: goto label_286900;
        case 0x286904u: goto label_286904;
        case 0x286908u: goto label_286908;
        case 0x28690cu: goto label_28690c;
        case 0x286910u: goto label_286910;
        case 0x286914u: goto label_286914;
        case 0x286918u: goto label_286918;
        case 0x28691cu: goto label_28691c;
        case 0x286920u: goto label_286920;
        case 0x286924u: goto label_286924;
        case 0x286928u: goto label_286928;
        case 0x28692cu: goto label_28692c;
        case 0x286930u: goto label_286930;
        case 0x286934u: goto label_286934;
        case 0x286938u: goto label_286938;
        case 0x28693cu: goto label_28693c;
        case 0x286940u: goto label_286940;
        case 0x286944u: goto label_286944;
        case 0x286948u: goto label_286948;
        case 0x28694cu: goto label_28694c;
        case 0x286950u: goto label_286950;
        case 0x286954u: goto label_286954;
        case 0x286958u: goto label_286958;
        case 0x28695cu: goto label_28695c;
        case 0x286960u: goto label_286960;
        case 0x286964u: goto label_286964;
        case 0x286968u: goto label_286968;
        case 0x28696cu: goto label_28696c;
        case 0x286970u: goto label_286970;
        case 0x286974u: goto label_286974;
        case 0x286978u: goto label_286978;
        case 0x28697cu: goto label_28697c;
        case 0x286980u: goto label_286980;
        case 0x286984u: goto label_286984;
        case 0x286988u: goto label_286988;
        case 0x28698cu: goto label_28698c;
        case 0x286990u: goto label_286990;
        case 0x286994u: goto label_286994;
        case 0x286998u: goto label_286998;
        case 0x28699cu: goto label_28699c;
        case 0x2869a0u: goto label_2869a0;
        case 0x2869a4u: goto label_2869a4;
        case 0x2869a8u: goto label_2869a8;
        case 0x2869acu: goto label_2869ac;
        case 0x2869b0u: goto label_2869b0;
        case 0x2869b4u: goto label_2869b4;
        case 0x2869b8u: goto label_2869b8;
        case 0x2869bcu: goto label_2869bc;
        case 0x2869c0u: goto label_2869c0;
        case 0x2869c4u: goto label_2869c4;
        case 0x2869c8u: goto label_2869c8;
        case 0x2869ccu: goto label_2869cc;
        case 0x2869d0u: goto label_2869d0;
        case 0x2869d4u: goto label_2869d4;
        case 0x2869d8u: goto label_2869d8;
        case 0x2869dcu: goto label_2869dc;
        case 0x2869e0u: goto label_2869e0;
        case 0x2869e4u: goto label_2869e4;
        case 0x2869e8u: goto label_2869e8;
        case 0x2869ecu: goto label_2869ec;
        case 0x2869f0u: goto label_2869f0;
        case 0x2869f4u: goto label_2869f4;
        case 0x2869f8u: goto label_2869f8;
        case 0x2869fcu: goto label_2869fc;
        case 0x286a00u: goto label_286a00;
        case 0x286a04u: goto label_286a04;
        case 0x286a08u: goto label_286a08;
        case 0x286a0cu: goto label_286a0c;
        case 0x286a10u: goto label_286a10;
        case 0x286a14u: goto label_286a14;
        case 0x286a18u: goto label_286a18;
        case 0x286a1cu: goto label_286a1c;
        case 0x286a20u: goto label_286a20;
        case 0x286a24u: goto label_286a24;
        case 0x286a28u: goto label_286a28;
        case 0x286a2cu: goto label_286a2c;
        case 0x286a30u: goto label_286a30;
        case 0x286a34u: goto label_286a34;
        case 0x286a38u: goto label_286a38;
        case 0x286a3cu: goto label_286a3c;
        case 0x286a40u: goto label_286a40;
        case 0x286a44u: goto label_286a44;
        case 0x286a48u: goto label_286a48;
        case 0x286a4cu: goto label_286a4c;
        case 0x286a50u: goto label_286a50;
        case 0x286a54u: goto label_286a54;
        case 0x286a58u: goto label_286a58;
        case 0x286a5cu: goto label_286a5c;
        case 0x286a60u: goto label_286a60;
        case 0x286a64u: goto label_286a64;
        case 0x286a68u: goto label_286a68;
        case 0x286a6cu: goto label_286a6c;
        case 0x286a70u: goto label_286a70;
        case 0x286a74u: goto label_286a74;
        case 0x286a78u: goto label_286a78;
        case 0x286a7cu: goto label_286a7c;
        case 0x286a80u: goto label_286a80;
        case 0x286a84u: goto label_286a84;
        case 0x286a88u: goto label_286a88;
        case 0x286a8cu: goto label_286a8c;
        case 0x286a90u: goto label_286a90;
        case 0x286a94u: goto label_286a94;
        case 0x286a98u: goto label_286a98;
        case 0x286a9cu: goto label_286a9c;
        case 0x286aa0u: goto label_286aa0;
        case 0x286aa4u: goto label_286aa4;
        case 0x286aa8u: goto label_286aa8;
        case 0x286aacu: goto label_286aac;
        case 0x286ab0u: goto label_286ab0;
        case 0x286ab4u: goto label_286ab4;
        case 0x286ab8u: goto label_286ab8;
        case 0x286abcu: goto label_286abc;
        default: break;
    }

    ctx->pc = 0x2866f0u;

label_2866f0:
    // 0x2866f0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2866f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_2866f4:
    // 0x2866f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2866f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2866f8:
    // 0x2866f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2866f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2866fc:
    // 0x2866fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2866fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_286700:
    // 0x286700: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x286700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_286704:
    // 0x286704: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x286704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_286708:
    // 0x286708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x286708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28670c:
    // 0x28670c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_286710:
    // 0x286710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x286710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_286714:
    // 0x286714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x286714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_286718:
    // 0x286718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x286718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28671c:
    // 0x28671c: 0xafa40200  sw          $a0, 0x200($sp)
    ctx->pc = 0x28671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
label_286720:
    // 0x286720: 0xafa50210  sw          $a1, 0x210($sp)
    ctx->pc = 0x286720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
label_286724:
    // 0x286724: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x286724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286728:
    // 0x286728: 0xc0a36d4  jal         func_28DB50
label_28672c:
    if (ctx->pc == 0x28672Cu) {
        ctx->pc = 0x286730u;
        goto label_286730;
    }
    ctx->pc = 0x286728u;
    SET_GPR_U32(ctx, 31, 0x286730u);
    ctx->pc = 0x28DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB50u, 0x286728u, 0x286730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286730u;
label_286730:
    // 0x286730: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x286730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_286734:
    // 0x286734: 0x100300d2  beq         $zero, $v1, . + 4 + (0xD2 << 2)
label_286738:
    if (ctx->pc == 0x286738u) {
        ctx->pc = 0x28673Cu;
        goto label_28673c;
    }
    ctx->pc = 0x286734u;
    {
        const bool branch_taken_0x286734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x286734) {
            ctx->pc = 0x286A80u;
            goto label_286a80;
        }
    }
    ctx->pc = 0x28673Cu;
label_28673c:
    // 0x28673c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x28673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286740:
    // 0x286740: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x286740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_286744:
    // 0x286744: 0x10020011  beq         $zero, $v0, . + 4 + (0x11 << 2)
label_286748:
    if (ctx->pc == 0x286748u) {
        ctx->pc = 0x28674Cu;
        goto label_28674c;
    }
    ctx->pc = 0x286744u;
    {
        const bool branch_taken_0x286744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x286744) {
            ctx->pc = 0x28678Cu;
            goto label_28678c;
        }
    }
    ctx->pc = 0x28674Cu;
label_28674c:
    // 0x28674c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x28674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286750:
    // 0x286750: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x286750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_286754:
    // 0x286754: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x286754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_286758:
    // 0x286758: 0xc1066de  jal         func_419B78
label_28675c:
    if (ctx->pc == 0x28675Cu) {
        ctx->pc = 0x286760u;
        goto label_286760;
    }
    ctx->pc = 0x286758u;
    SET_GPR_U32(ctx, 31, 0x286760u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x286758u, 0x286760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286760u;
label_286760:
    // 0x286760: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x286760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286764:
    // 0x286764: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x286764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_286768:
    // 0x286768: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x286768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_28676c:
    // 0x28676c: 0xc0e6ee0  jal         func_39BB80
label_286770:
    if (ctx->pc == 0x286770u) {
        ctx->pc = 0x286774u;
        goto label_286774;
    }
    ctx->pc = 0x28676Cu;
    SET_GPR_U32(ctx, 31, 0x286774u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x28676Cu, 0x286774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286774u;
label_286774:
    // 0x286774: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286778:
    // 0x286778: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_28677c:
    // 0x28677c: 0xc0e20da  jal         func_388368
label_286780:
    if (ctx->pc == 0x286780u) {
        ctx->pc = 0x286784u;
        goto label_286784;
    }
    ctx->pc = 0x28677Cu;
    SET_GPR_U32(ctx, 31, 0x286784u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x28677Cu, 0x286784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286784u;
label_286784:
    // 0x286784: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x286784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286788:
    // 0x286788: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x286788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_28678c:
    // 0x28678c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x28678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286790:
    // 0x286790: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x286790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_286794:
    // 0x286794: 0xc0a1848  jal         func_286120
label_286798:
    if (ctx->pc == 0x286798u) {
        ctx->pc = 0x28679Cu;
        goto label_28679c;
    }
    ctx->pc = 0x286794u;
    SET_GPR_U32(ctx, 31, 0x28679Cu);
    ctx->pc = 0x286120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286120u, 0x286794u, 0x28679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28679Cu;
label_28679c:
    // 0x28679c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28679cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2867a0:
    // 0x2867a0: 0x10000010  b           . + 4 + (0x10 << 2)
label_2867a4:
    if (ctx->pc == 0x2867A4u) {
        ctx->pc = 0x2867A8u;
        goto label_2867a8;
    }
    ctx->pc = 0x2867A0u;
    {
        const bool branch_taken_0x2867a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2867a0) {
            ctx->pc = 0x2867E4u;
            goto label_2867e4;
        }
    }
    ctx->pc = 0x2867A8u;
label_2867a8:
    // 0x2867a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2867a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2867ac:
    // 0x2867ac: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_2867b0:
    if (ctx->pc == 0x2867B0u) {
        ctx->pc = 0x2867B4u;
        goto label_2867b4;
    }
    ctx->pc = 0x2867ACu;
    {
        const bool branch_taken_0x2867ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2867ac) {
            ctx->pc = 0x2867E0u;
            goto label_2867e0;
        }
    }
    ctx->pc = 0x2867B4u;
label_2867b4:
    // 0x2867b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2867b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2867b8:
    // 0x2867b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2867b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2867bc:
    // 0x2867bc: 0xc1066de  jal         func_419B78
label_2867c0:
    if (ctx->pc == 0x2867C0u) {
        ctx->pc = 0x2867C4u;
        goto label_2867c4;
    }
    ctx->pc = 0x2867BCu;
    SET_GPR_U32(ctx, 31, 0x2867C4u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x2867BCu, 0x2867C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2867C4u;
label_2867c4:
    // 0x2867c4: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2867c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2867c8:
    // 0x2867c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2867c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2867cc:
    // 0x2867cc: 0xc0e6ee0  jal         func_39BB80
label_2867d0:
    if (ctx->pc == 0x2867D0u) {
        ctx->pc = 0x2867D4u;
        goto label_2867d4;
    }
    ctx->pc = 0x2867CCu;
    SET_GPR_U32(ctx, 31, 0x2867D4u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x2867CCu, 0x2867D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2867D4u;
label_2867d4:
    // 0x2867d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2867d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2867d8:
    // 0x2867d8: 0xc0e20da  jal         func_388368
label_2867dc:
    if (ctx->pc == 0x2867DCu) {
        ctx->pc = 0x2867E0u;
        goto label_2867e0;
    }
    ctx->pc = 0x2867D8u;
    SET_GPR_U32(ctx, 31, 0x2867E0u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x2867D8u, 0x2867E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2867E0u;
label_2867e0:
    // 0x2867e0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2867e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2867e4:
    // 0x2867e4: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x2867e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2867e8:
    // 0x2867e8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2867e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2867ec:
    // 0x2867ec: 0xc0a1840  jal         func_286100
label_2867f0:
    if (ctx->pc == 0x2867F0u) {
        ctx->pc = 0x2867F4u;
        goto label_2867f4;
    }
    ctx->pc = 0x2867ECu;
    SET_GPR_U32(ctx, 31, 0x2867F4u);
    ctx->pc = 0x286100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286100u, 0x2867ECu, 0x2867F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2867F4u;
label_2867f4:
    // 0x2867f4: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
label_2867f8:
    if (ctx->pc == 0x2867F8u) {
        ctx->pc = 0x2867FCu;
        goto label_2867fc;
    }
    ctx->pc = 0x2867F4u;
    {
        const bool branch_taken_0x2867f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2867f4) {
            ctx->pc = 0x2867A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2867a8;
        }
    }
    ctx->pc = 0x2867FCu;
label_2867fc:
    // 0x2867fc: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x2867fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286800:
    // 0x286800: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x286800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_286804:
    // 0x286804: 0xc0a17bc  jal         func_285EF0
label_286808:
    if (ctx->pc == 0x286808u) {
        ctx->pc = 0x28680Cu;
        goto label_28680c;
    }
    ctx->pc = 0x286804u;
    SET_GPR_U32(ctx, 31, 0x28680Cu);
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x286804u, 0x28680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28680Cu;
label_28680c:
    // 0x28680c: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x28680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_286810:
    // 0x286810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286814:
    // 0x286814: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x286814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_286818:
    // 0x286818: 0xc0a69b0  jal         func_29A6C0
label_28681c:
    if (ctx->pc == 0x28681Cu) {
        ctx->pc = 0x286820u;
        goto label_286820;
    }
    ctx->pc = 0x286818u;
    SET_GPR_U32(ctx, 31, 0x286820u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x286818u, 0x286820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286820u;
label_286820:
    // 0x286820: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x286820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_286824:
    // 0x286824: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x286824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_286828:
    // 0x286828: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x286828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28682c:
    // 0x28682c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x28682cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_286830:
    // 0x286830: 0x320f809  jalr        $t9
label_286834:
    if (ctx->pc == 0x286834u) {
        ctx->pc = 0x286838u;
        goto label_286838;
    }
    ctx->pc = 0x286830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x286838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286830u, 0x286838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286838u;
label_286838:
    // 0x286838: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x286838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_28683c:
    // 0x28683c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x28683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286840:
    // 0x286840: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x286840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_286844:
    // 0x286844: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x286844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_286848:
    // 0x286848: 0xc085538  jal         func_2154E0
label_28684c:
    if (ctx->pc == 0x28684Cu) {
        ctx->pc = 0x286850u;
        goto label_286850;
    }
    ctx->pc = 0x286848u;
    SET_GPR_U32(ctx, 31, 0x286850u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x286848u, 0x286850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286850u;
label_286850:
    // 0x286850: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x286850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_286854:
    // 0x286854: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x286854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_286858:
    // 0x286858: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_28685c:
    if (ctx->pc == 0x28685Cu) {
        ctx->pc = 0x286860u;
        goto label_286860;
    }
    ctx->pc = 0x286858u;
    {
        const bool branch_taken_0x286858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286858) {
            ctx->pc = 0x286878u;
            goto label_286878;
        }
    }
    ctx->pc = 0x286860u;
label_286860:
    // 0x286860: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x286860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_286864:
    // 0x286864: 0xc092d70  jal         func_24B5C0
label_286868:
    if (ctx->pc == 0x286868u) {
        ctx->pc = 0x28686Cu;
        goto label_28686c;
    }
    ctx->pc = 0x286864u;
    SET_GPR_U32(ctx, 31, 0x28686Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x286864u, 0x28686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28686Cu;
label_28686c:
    // 0x28686c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x28686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_286870:
    // 0x286870: 0x10000002  b           . + 4 + (0x2 << 2)
label_286874:
    if (ctx->pc == 0x286874u) {
        ctx->pc = 0x286878u;
        goto label_286878;
    }
    ctx->pc = 0x286870u;
    {
        const bool branch_taken_0x286870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286870) {
            ctx->pc = 0x28687Cu;
            goto label_28687c;
        }
    }
    ctx->pc = 0x286878u;
label_286878:
    // 0x286878: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x286878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_28687c:
    // 0x28687c: 0x8fb2012c  lw          $s2, 0x12C($sp)
    ctx->pc = 0x28687cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_286880:
    // 0x286880: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x286880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_286884:
    // 0x286884: 0x1003007e  beq         $zero, $v1, . + 4 + (0x7E << 2)
label_286888:
    if (ctx->pc == 0x286888u) {
        ctx->pc = 0x28688Cu;
        goto label_28688c;
    }
    ctx->pc = 0x286884u;
    {
        const bool branch_taken_0x286884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x286884) {
            ctx->pc = 0x286A80u;
            goto label_286a80;
        }
    }
    ctx->pc = 0x28688Cu;
label_28688c:
    // 0x28688c: 0x1012007c  beq         $zero, $s2, . + 4 + (0x7C << 2)
label_286890:
    if (ctx->pc == 0x286890u) {
        ctx->pc = 0x286894u;
        goto label_286894;
    }
    ctx->pc = 0x28688Cu;
    {
        const bool branch_taken_0x28688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x28688c) {
            ctx->pc = 0x286A80u;
            goto label_286a80;
        }
    }
    ctx->pc = 0x286894u;
label_286894:
    // 0x286894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286898:
    // 0x286898: 0xc0477e0  jal         func_11DF80
label_28689c:
    if (ctx->pc == 0x28689Cu) {
        ctx->pc = 0x2868A0u;
        goto label_2868a0;
    }
    ctx->pc = 0x286898u;
    SET_GPR_U32(ctx, 31, 0x2868A0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x286898u, 0x2868A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868A0u;
label_2868a0:
    // 0x2868a0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2868a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2868a4:
    // 0x2868a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2868a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2868a8:
    // 0x2868a8: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x2868a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_2868ac:
    // 0x2868ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2868acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2868b0:
    // 0x2868b0: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x2868b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_2868b4:
    // 0x2868b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2868b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2868b8:
    // 0x2868b8: 0xc0477d8  jal         func_11DF60
label_2868bc:
    if (ctx->pc == 0x2868BCu) {
        ctx->pc = 0x2868C0u;
        goto label_2868c0;
    }
    ctx->pc = 0x2868B8u;
    SET_GPR_U32(ctx, 31, 0x2868C0u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x2868B8u, 0x2868C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868C0u;
label_2868c0:
    // 0x2868c0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2868c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2868c4:
    // 0x2868c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2868c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2868c8:
    // 0x2868c8: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x2868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_2868cc:
    // 0x2868cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2868ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2868d0:
    // 0x2868d0: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x2868d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_2868d4:
    // 0x2868d4: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x2868d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2868d8:
    // 0x2868d8: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x2868d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2868dc:
    // 0x2868dc: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x2868dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_2868e0:
    // 0x2868e0: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x2868e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2868e4:
    // 0x2868e4: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x2868e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_2868e8:
    // 0x2868e8: 0xc0a1afc  jal         func_286BF0
label_2868ec:
    if (ctx->pc == 0x2868ECu) {
        ctx->pc = 0x2868F0u;
        goto label_2868f0;
    }
    ctx->pc = 0x2868E8u;
    SET_GPR_U32(ctx, 31, 0x2868F0u);
    ctx->pc = 0x286BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286BF0u, 0x2868E8u, 0x2868F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868F0u;
label_2868f0:
    // 0x2868f0: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x2868f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2868f4:
    // 0x2868f4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2868f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2868f8:
    // 0x2868f8: 0xc0a1848  jal         func_286120
label_2868fc:
    if (ctx->pc == 0x2868FCu) {
        ctx->pc = 0x286900u;
        goto label_286900;
    }
    ctx->pc = 0x2868F8u;
    SET_GPR_U32(ctx, 31, 0x286900u);
    ctx->pc = 0x286120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286120u, 0x2868F8u, 0x286900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286900u;
label_286900:
    // 0x286900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286904:
    // 0x286904: 0xafa001e0  sw          $zero, 0x1E0($sp)
    ctx->pc = 0x286904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
label_286908:
    // 0x286908: 0x10000058  b           . + 4 + (0x58 << 2)
label_28690c:
    if (ctx->pc == 0x28690Cu) {
        ctx->pc = 0x286910u;
        goto label_286910;
    }
    ctx->pc = 0x286908u;
    {
        const bool branch_taken_0x286908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286908) {
            ctx->pc = 0x286A6Cu;
            goto label_286a6c;
        }
    }
    ctx->pc = 0x286910u;
label_286910:
    // 0x286910: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x286910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
label_286914:
    // 0x286914: 0x1000004d  b           . + 4 + (0x4D << 2)
label_286918:
    if (ctx->pc == 0x286918u) {
        ctx->pc = 0x28691Cu;
        goto label_28691c;
    }
    ctx->pc = 0x286914u;
    {
        const bool branch_taken_0x286914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286914) {
            ctx->pc = 0x286A4Cu;
            goto label_286a4c;
        }
    }
    ctx->pc = 0x28691Cu;
label_28691c:
    // 0x28691c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x28691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_286920:
    // 0x286920: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x286920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_286924:
    // 0x286924: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x286924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_286928:
    // 0x286928: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x286928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_28692c:
    // 0x28692c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28692cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_286930:
    // 0x286930: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x286930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_286934:
    // 0x286934: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x286934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_286938:
    // 0x286938: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x286938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_28693c:
    // 0x28693c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_286940:
    // 0x286940: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x286940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_286944:
    // 0x286944: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x286944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_286948:
    // 0x286948: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x286948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28694c:
    // 0x28694c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286950:
    // 0x286950: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x286950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_286954:
    // 0x286954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286958:
    // 0x286958: 0xc0477e0  jal         func_11DF80
label_28695c:
    if (ctx->pc == 0x28695Cu) {
        ctx->pc = 0x286960u;
        goto label_286960;
    }
    ctx->pc = 0x286958u;
    SET_GPR_U32(ctx, 31, 0x286960u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x286958u, 0x286960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286960u;
label_286960:
    // 0x286960: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x286960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_286964:
    // 0x286964: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x286964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_286968:
    // 0x286968: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_28696c:
    if (ctx->pc == 0x28696Cu) {
        ctx->pc = 0x286970u;
        goto label_286970;
    }
    ctx->pc = 0x286968u;
    {
        const bool branch_taken_0x286968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x286968) {
            ctx->pc = 0x286988u;
            goto label_286988;
        }
    }
    ctx->pc = 0x286970u;
label_286970:
    // 0x286970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286974:
    // 0x286974: 0xc0477e0  jal         func_11DF80
label_286978:
    if (ctx->pc == 0x286978u) {
        ctx->pc = 0x28697Cu;
        goto label_28697c;
    }
    ctx->pc = 0x286974u;
    SET_GPR_U32(ctx, 31, 0x28697Cu);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x286974u, 0x28697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28697Cu;
label_28697c:
    // 0x28697c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_286980:
    // 0x286980: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x286980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286984:
    // 0x286984: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x286984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_286988:
    // 0x286988: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x286988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28698c:
    // 0x28698c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_286990:
    // 0x286990: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x286990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286994:
    // 0x286994: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x286994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_286998:
    // 0x286998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28699c:
    // 0x28699c: 0xc0477d8  jal         func_11DF60
label_2869a0:
    if (ctx->pc == 0x2869A0u) {
        ctx->pc = 0x2869A4u;
        goto label_2869a4;
    }
    ctx->pc = 0x28699Cu;
    SET_GPR_U32(ctx, 31, 0x2869A4u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x28699Cu, 0x2869A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869A4u;
label_2869a4:
    // 0x2869a4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2869a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2869a8:
    // 0x2869a8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2869a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2869ac:
    // 0x2869ac: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_2869b0:
    if (ctx->pc == 0x2869B0u) {
        ctx->pc = 0x2869B4u;
        goto label_2869b4;
    }
    ctx->pc = 0x2869ACu;
    {
        const bool branch_taken_0x2869ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2869ac) {
            ctx->pc = 0x2869CCu;
            goto label_2869cc;
        }
    }
    ctx->pc = 0x2869B4u;
label_2869b4:
    // 0x2869b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2869b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2869b8:
    // 0x2869b8: 0xc0477d8  jal         func_11DF60
label_2869bc:
    if (ctx->pc == 0x2869BCu) {
        ctx->pc = 0x2869C0u;
        goto label_2869c0;
    }
    ctx->pc = 0x2869B8u;
    SET_GPR_U32(ctx, 31, 0x2869C0u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x2869B8u, 0x2869C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869C0u;
label_2869c0:
    // 0x2869c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2869c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2869c4:
    // 0x2869c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2869c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2869c8:
    // 0x2869c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2869c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2869cc:
    // 0x2869cc: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2869d0:
    // 0x2869d0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2869d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2869d4:
    // 0x2869d4: 0xc0a1b60  jal         func_286D80
label_2869d8:
    if (ctx->pc == 0x2869D8u) {
        ctx->pc = 0x2869DCu;
        goto label_2869dc;
    }
    ctx->pc = 0x2869D4u;
    SET_GPR_U32(ctx, 31, 0x2869DCu);
    ctx->pc = 0x286D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D80u, 0x2869D4u, 0x2869DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869DCu;
label_2869dc:
    // 0x2869dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2869dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2869e0:
    // 0x2869e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2869e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2869e4:
    // 0x2869e4: 0x10030014  beq         $zero, $v1, . + 4 + (0x14 << 2)
label_2869e8:
    if (ctx->pc == 0x2869E8u) {
        ctx->pc = 0x2869ECu;
        goto label_2869ec;
    }
    ctx->pc = 0x2869E4u;
    {
        const bool branch_taken_0x2869e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2869e4) {
            ctx->pc = 0x286A38u;
            goto label_286a38;
        }
    }
    ctx->pc = 0x2869ECu;
label_2869ec:
    // 0x2869ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2869ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2869f0:
    // 0x2869f0: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x2869f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_2869f4:
    // 0x2869f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2869f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2869f8:
    // 0x2869f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x2869f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_2869fc:
    // 0x2869fc: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x2869fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
label_286a00:
    // 0x286a00: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_286a04:
    // 0x286a04: 0xc0e2628  jal         func_3898A0
label_286a08:
    if (ctx->pc == 0x286A08u) {
        ctx->pc = 0x286A0Cu;
        goto label_286a0c;
    }
    ctx->pc = 0x286A04u;
    SET_GPR_U32(ctx, 31, 0x286A0Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x286A04u, 0x286A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A0Cu;
label_286a0c:
    // 0x286a0c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x286a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_286a10:
    // 0x286a10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x286a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286a14:
    // 0x286a14: 0xc0e6ea6  jal         func_39BA98
label_286a18:
    if (ctx->pc == 0x286A18u) {
        ctx->pc = 0x286A1Cu;
        goto label_286a1c;
    }
    ctx->pc = 0x286A14u;
    SET_GPR_U32(ctx, 31, 0x286A1Cu);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x286A14u, 0x286A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A1Cu;
label_286a1c:
    // 0x286a1c: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x286a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_286a20:
    // 0x286a20: 0xc12246c  jal         func_4891B0
label_286a24:
    if (ctx->pc == 0x286A24u) {
        ctx->pc = 0x286A28u;
        goto label_286a28;
    }
    ctx->pc = 0x286A20u;
    SET_GPR_U32(ctx, 31, 0x286A28u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x286A20u, 0x286A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A28u;
label_286a28:
    // 0x286a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286a2c:
    // 0x286a2c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x286a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286a30:
    // 0x286a30: 0xc11fb08  jal         func_47EC20
label_286a34:
    if (ctx->pc == 0x286A34u) {
        ctx->pc = 0x286A38u;
        goto label_286a38;
    }
    ctx->pc = 0x286A30u;
    SET_GPR_U32(ctx, 31, 0x286A38u);
    ctx->pc = 0x47EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EC20u, 0x286A30u, 0x286A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A38u;
label_286a38:
    // 0x286a38: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x286a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_286a3c:
    // 0x286a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_286a40:
    // 0x286a40: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x286a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
label_286a44:
    // 0x286a44: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x286a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_286a48:
    // 0x286a48: 0xafb00128  sw          $s0, 0x128($sp)
    ctx->pc = 0x286a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 16));
label_286a4c:
    // 0x286a4c: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x286a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_286a50:
    // 0x286a50: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x286a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_286a54:
    // 0x286a54: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x286a54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_286a58:
    // 0x286a58: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_286a5c:
    if (ctx->pc == 0x286A5Cu) {
        ctx->pc = 0x286A60u;
        goto label_286a60;
    }
    ctx->pc = 0x286A58u;
    {
        const bool branch_taken_0x286a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286a58) {
            ctx->pc = 0x28691Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28691c;
        }
    }
    ctx->pc = 0x286A60u;
label_286a60:
    // 0x286a60: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x286a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_286a64:
    // 0x286a64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_286a68:
    // 0x286a68: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x286a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_286a6c:
    // 0x286a6c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x286a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_286a70:
    // 0x286a70: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x286a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_286a74:
    // 0x286a74: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x286a74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_286a78:
    // 0x286a78: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
label_286a7c:
    if (ctx->pc == 0x286A7Cu) {
        ctx->pc = 0x286A80u;
        goto label_286a80;
    }
    ctx->pc = 0x286A78u;
    {
        const bool branch_taken_0x286a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286a78) {
            ctx->pc = 0x286910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286910;
        }
    }
    ctx->pc = 0x286A80u;
label_286a80:
    // 0x286a80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x286a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_286a84:
    // 0x286a84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x286a84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_286a88:
    // 0x286a88: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x286a88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_286a8c:
    // 0x286a8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x286a8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_286a90:
    // 0x286a90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x286a90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_286a94:
    // 0x286a94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x286a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_286a98:
    // 0x286a98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x286a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286a9c:
    // 0x286a9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x286a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_286aa0:
    // 0x286aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x286aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_286aa4:
    // 0x286aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x286aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_286aa8:
    // 0x286aa8: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x286aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_286aac:
    // 0x286aac: 0x3e00008  jr          $ra
label_286ab0:
    if (ctx->pc == 0x286AB0u) {
        ctx->pc = 0x286AB4u;
        goto label_286ab4;
    }
    ctx->pc = 0x286AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286AB4u;
label_286ab4:
    // 0x286ab4: 0x0  nop
    ctx->pc = 0x286ab4u;
    // NOP
label_286ab8:
    // 0x286ab8: 0x0  nop
    ctx->pc = 0x286ab8u;
    // NOP
label_286abc:
    // 0x286abc: 0x0  nop
    ctx->pc = 0x286abcu;
    // NOP
    ctx->pc = 0x286ac0u;
}
