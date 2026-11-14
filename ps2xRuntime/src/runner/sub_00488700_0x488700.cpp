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

// Function: sub_00488700
// Address: 0x488700 - 0x488b00
void sub_00488700_0x488700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488700_0x488700");
#endif

    switch (ctx->pc) {
        case 0x488700u: goto label_488700;
        case 0x488704u: goto label_488704;
        case 0x488708u: goto label_488708;
        case 0x48870cu: goto label_48870c;
        case 0x488710u: goto label_488710;
        case 0x488714u: goto label_488714;
        case 0x488718u: goto label_488718;
        case 0x48871cu: goto label_48871c;
        case 0x488720u: goto label_488720;
        case 0x488724u: goto label_488724;
        case 0x488728u: goto label_488728;
        case 0x48872cu: goto label_48872c;
        case 0x488730u: goto label_488730;
        case 0x488734u: goto label_488734;
        case 0x488738u: goto label_488738;
        case 0x48873cu: goto label_48873c;
        case 0x488740u: goto label_488740;
        case 0x488744u: goto label_488744;
        case 0x488748u: goto label_488748;
        case 0x48874cu: goto label_48874c;
        case 0x488750u: goto label_488750;
        case 0x488754u: goto label_488754;
        case 0x488758u: goto label_488758;
        case 0x48875cu: goto label_48875c;
        case 0x488760u: goto label_488760;
        case 0x488764u: goto label_488764;
        case 0x488768u: goto label_488768;
        case 0x48876cu: goto label_48876c;
        case 0x488770u: goto label_488770;
        case 0x488774u: goto label_488774;
        case 0x488778u: goto label_488778;
        case 0x48877cu: goto label_48877c;
        case 0x488780u: goto label_488780;
        case 0x488784u: goto label_488784;
        case 0x488788u: goto label_488788;
        case 0x48878cu: goto label_48878c;
        case 0x488790u: goto label_488790;
        case 0x488794u: goto label_488794;
        case 0x488798u: goto label_488798;
        case 0x48879cu: goto label_48879c;
        case 0x4887a0u: goto label_4887a0;
        case 0x4887a4u: goto label_4887a4;
        case 0x4887a8u: goto label_4887a8;
        case 0x4887acu: goto label_4887ac;
        case 0x4887b0u: goto label_4887b0;
        case 0x4887b4u: goto label_4887b4;
        case 0x4887b8u: goto label_4887b8;
        case 0x4887bcu: goto label_4887bc;
        case 0x4887c0u: goto label_4887c0;
        case 0x4887c4u: goto label_4887c4;
        case 0x4887c8u: goto label_4887c8;
        case 0x4887ccu: goto label_4887cc;
        case 0x4887d0u: goto label_4887d0;
        case 0x4887d4u: goto label_4887d4;
        case 0x4887d8u: goto label_4887d8;
        case 0x4887dcu: goto label_4887dc;
        case 0x4887e0u: goto label_4887e0;
        case 0x4887e4u: goto label_4887e4;
        case 0x4887e8u: goto label_4887e8;
        case 0x4887ecu: goto label_4887ec;
        case 0x4887f0u: goto label_4887f0;
        case 0x4887f4u: goto label_4887f4;
        case 0x4887f8u: goto label_4887f8;
        case 0x4887fcu: goto label_4887fc;
        case 0x488800u: goto label_488800;
        case 0x488804u: goto label_488804;
        case 0x488808u: goto label_488808;
        case 0x48880cu: goto label_48880c;
        case 0x488810u: goto label_488810;
        case 0x488814u: goto label_488814;
        case 0x488818u: goto label_488818;
        case 0x48881cu: goto label_48881c;
        case 0x488820u: goto label_488820;
        case 0x488824u: goto label_488824;
        case 0x488828u: goto label_488828;
        case 0x48882cu: goto label_48882c;
        case 0x488830u: goto label_488830;
        case 0x488834u: goto label_488834;
        case 0x488838u: goto label_488838;
        case 0x48883cu: goto label_48883c;
        case 0x488840u: goto label_488840;
        case 0x488844u: goto label_488844;
        case 0x488848u: goto label_488848;
        case 0x48884cu: goto label_48884c;
        case 0x488850u: goto label_488850;
        case 0x488854u: goto label_488854;
        case 0x488858u: goto label_488858;
        case 0x48885cu: goto label_48885c;
        case 0x488860u: goto label_488860;
        case 0x488864u: goto label_488864;
        case 0x488868u: goto label_488868;
        case 0x48886cu: goto label_48886c;
        case 0x488870u: goto label_488870;
        case 0x488874u: goto label_488874;
        case 0x488878u: goto label_488878;
        case 0x48887cu: goto label_48887c;
        case 0x488880u: goto label_488880;
        case 0x488884u: goto label_488884;
        case 0x488888u: goto label_488888;
        case 0x48888cu: goto label_48888c;
        case 0x488890u: goto label_488890;
        case 0x488894u: goto label_488894;
        case 0x488898u: goto label_488898;
        case 0x48889cu: goto label_48889c;
        case 0x4888a0u: goto label_4888a0;
        case 0x4888a4u: goto label_4888a4;
        case 0x4888a8u: goto label_4888a8;
        case 0x4888acu: goto label_4888ac;
        case 0x4888b0u: goto label_4888b0;
        case 0x4888b4u: goto label_4888b4;
        case 0x4888b8u: goto label_4888b8;
        case 0x4888bcu: goto label_4888bc;
        case 0x4888c0u: goto label_4888c0;
        case 0x4888c4u: goto label_4888c4;
        case 0x4888c8u: goto label_4888c8;
        case 0x4888ccu: goto label_4888cc;
        case 0x4888d0u: goto label_4888d0;
        case 0x4888d4u: goto label_4888d4;
        case 0x4888d8u: goto label_4888d8;
        case 0x4888dcu: goto label_4888dc;
        case 0x4888e0u: goto label_4888e0;
        case 0x4888e4u: goto label_4888e4;
        case 0x4888e8u: goto label_4888e8;
        case 0x4888ecu: goto label_4888ec;
        case 0x4888f0u: goto label_4888f0;
        case 0x4888f4u: goto label_4888f4;
        case 0x4888f8u: goto label_4888f8;
        case 0x4888fcu: goto label_4888fc;
        case 0x488900u: goto label_488900;
        case 0x488904u: goto label_488904;
        case 0x488908u: goto label_488908;
        case 0x48890cu: goto label_48890c;
        case 0x488910u: goto label_488910;
        case 0x488914u: goto label_488914;
        case 0x488918u: goto label_488918;
        case 0x48891cu: goto label_48891c;
        case 0x488920u: goto label_488920;
        case 0x488924u: goto label_488924;
        case 0x488928u: goto label_488928;
        case 0x48892cu: goto label_48892c;
        case 0x488930u: goto label_488930;
        case 0x488934u: goto label_488934;
        case 0x488938u: goto label_488938;
        case 0x48893cu: goto label_48893c;
        case 0x488940u: goto label_488940;
        case 0x488944u: goto label_488944;
        case 0x488948u: goto label_488948;
        case 0x48894cu: goto label_48894c;
        case 0x488950u: goto label_488950;
        case 0x488954u: goto label_488954;
        case 0x488958u: goto label_488958;
        case 0x48895cu: goto label_48895c;
        case 0x488960u: goto label_488960;
        case 0x488964u: goto label_488964;
        case 0x488968u: goto label_488968;
        case 0x48896cu: goto label_48896c;
        case 0x488970u: goto label_488970;
        case 0x488974u: goto label_488974;
        case 0x488978u: goto label_488978;
        case 0x48897cu: goto label_48897c;
        case 0x488980u: goto label_488980;
        case 0x488984u: goto label_488984;
        case 0x488988u: goto label_488988;
        case 0x48898cu: goto label_48898c;
        case 0x488990u: goto label_488990;
        case 0x488994u: goto label_488994;
        case 0x488998u: goto label_488998;
        case 0x48899cu: goto label_48899c;
        case 0x4889a0u: goto label_4889a0;
        case 0x4889a4u: goto label_4889a4;
        case 0x4889a8u: goto label_4889a8;
        case 0x4889acu: goto label_4889ac;
        case 0x4889b0u: goto label_4889b0;
        case 0x4889b4u: goto label_4889b4;
        case 0x4889b8u: goto label_4889b8;
        case 0x4889bcu: goto label_4889bc;
        case 0x4889c0u: goto label_4889c0;
        case 0x4889c4u: goto label_4889c4;
        case 0x4889c8u: goto label_4889c8;
        case 0x4889ccu: goto label_4889cc;
        case 0x4889d0u: goto label_4889d0;
        case 0x4889d4u: goto label_4889d4;
        case 0x4889d8u: goto label_4889d8;
        case 0x4889dcu: goto label_4889dc;
        case 0x4889e0u: goto label_4889e0;
        case 0x4889e4u: goto label_4889e4;
        case 0x4889e8u: goto label_4889e8;
        case 0x4889ecu: goto label_4889ec;
        case 0x4889f0u: goto label_4889f0;
        case 0x4889f4u: goto label_4889f4;
        case 0x4889f8u: goto label_4889f8;
        case 0x4889fcu: goto label_4889fc;
        case 0x488a00u: goto label_488a00;
        case 0x488a04u: goto label_488a04;
        case 0x488a08u: goto label_488a08;
        case 0x488a0cu: goto label_488a0c;
        case 0x488a10u: goto label_488a10;
        case 0x488a14u: goto label_488a14;
        case 0x488a18u: goto label_488a18;
        case 0x488a1cu: goto label_488a1c;
        case 0x488a20u: goto label_488a20;
        case 0x488a24u: goto label_488a24;
        case 0x488a28u: goto label_488a28;
        case 0x488a2cu: goto label_488a2c;
        case 0x488a30u: goto label_488a30;
        case 0x488a34u: goto label_488a34;
        case 0x488a38u: goto label_488a38;
        case 0x488a3cu: goto label_488a3c;
        case 0x488a40u: goto label_488a40;
        case 0x488a44u: goto label_488a44;
        case 0x488a48u: goto label_488a48;
        case 0x488a4cu: goto label_488a4c;
        case 0x488a50u: goto label_488a50;
        case 0x488a54u: goto label_488a54;
        case 0x488a58u: goto label_488a58;
        case 0x488a5cu: goto label_488a5c;
        case 0x488a60u: goto label_488a60;
        case 0x488a64u: goto label_488a64;
        case 0x488a68u: goto label_488a68;
        case 0x488a6cu: goto label_488a6c;
        case 0x488a70u: goto label_488a70;
        case 0x488a74u: goto label_488a74;
        case 0x488a78u: goto label_488a78;
        case 0x488a7cu: goto label_488a7c;
        case 0x488a80u: goto label_488a80;
        case 0x488a84u: goto label_488a84;
        case 0x488a88u: goto label_488a88;
        case 0x488a8cu: goto label_488a8c;
        case 0x488a90u: goto label_488a90;
        case 0x488a94u: goto label_488a94;
        case 0x488a98u: goto label_488a98;
        case 0x488a9cu: goto label_488a9c;
        case 0x488aa0u: goto label_488aa0;
        case 0x488aa4u: goto label_488aa4;
        case 0x488aa8u: goto label_488aa8;
        case 0x488aacu: goto label_488aac;
        case 0x488ab0u: goto label_488ab0;
        case 0x488ab4u: goto label_488ab4;
        case 0x488ab8u: goto label_488ab8;
        case 0x488abcu: goto label_488abc;
        case 0x488ac0u: goto label_488ac0;
        case 0x488ac4u: goto label_488ac4;
        case 0x488ac8u: goto label_488ac8;
        case 0x488accu: goto label_488acc;
        case 0x488ad0u: goto label_488ad0;
        case 0x488ad4u: goto label_488ad4;
        case 0x488ad8u: goto label_488ad8;
        case 0x488adcu: goto label_488adc;
        case 0x488ae0u: goto label_488ae0;
        case 0x488ae4u: goto label_488ae4;
        case 0x488ae8u: goto label_488ae8;
        case 0x488aecu: goto label_488aec;
        case 0x488af0u: goto label_488af0;
        case 0x488af4u: goto label_488af4;
        case 0x488af8u: goto label_488af8;
        case 0x488afcu: goto label_488afc;
        default: break;
    }

    ctx->pc = 0x488700u;

label_488700:
    // 0x488700: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x488700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_488704:
    // 0x488704: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x488704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_488708:
    // 0x488708: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x488708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_48870c:
    // 0x48870c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_488710:
    // 0x488710: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x488710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_488714:
    // 0x488714: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x488714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_488718:
    // 0x488718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x488718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48871c:
    // 0x48871c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_488720:
    // 0x488720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_488724:
    // 0x488724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_488728:
    // 0x488728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48872c:
    // 0x48872c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x48872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_488730:
    // 0x488730: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x488730u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488734:
    // 0x488734: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x488734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488738:
    // 0x488738: 0xc11dbb8  jal         func_476EE0
label_48873c:
    if (ctx->pc == 0x48873Cu) {
        ctx->pc = 0x488740u;
        goto label_488740;
    }
    ctx->pc = 0x488738u;
    SET_GPR_U32(ctx, 31, 0x488740u);
    ctx->pc = 0x476EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476EE0u, 0x488738u, 0x488740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488740u;
label_488740:
    // 0x488740: 0xc1221b4  jal         func_4886D0
label_488744:
    if (ctx->pc == 0x488744u) {
        ctx->pc = 0x488748u;
        goto label_488748;
    }
    ctx->pc = 0x488740u;
    SET_GPR_U32(ctx, 31, 0x488748u);
    ctx->pc = 0x4886D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4886D0u, 0x488740u, 0x488748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488748u;
label_488748:
    // 0x488748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48874c:
    // 0x48874c: 0xaf82c0d4  sw          $v0, -0x3F2C($gp)
    ctx->pc = 0x48874cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951124), GPR_U32(ctx, 2));
label_488750:
    // 0x488750: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_488754:
    // 0x488754: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x488754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_488758:
    // 0x488758: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x488758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48875c:
    // 0x48875c: 0x24a54330  addiu       $a1, $a1, 0x4330
    ctx->pc = 0x48875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17200));
label_488760:
    // 0x488760: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x488760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
label_488764:
    // 0x488764: 0x24c64348  addiu       $a2, $a2, 0x4348
    ctx->pc = 0x488764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17224));
label_488768:
    // 0x488768: 0xc0bc3e2  jal         func_2F0F88
label_48876c:
    if (ctx->pc == 0x48876Cu) {
        ctx->pc = 0x488770u;
        goto label_488770;
    }
    ctx->pc = 0x488768u;
    SET_GPR_U32(ctx, 31, 0x488770u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x488768u, 0x488770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488770u;
label_488770:
    // 0x488770: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_488774:
    // 0x488774: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x488774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_488778:
    // 0x488778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48877c:
    // 0x48877c: 0xc115ae4  jal         func_456B90
label_488780:
    if (ctx->pc == 0x488780u) {
        ctx->pc = 0x488784u;
        goto label_488784;
    }
    ctx->pc = 0x48877Cu;
    SET_GPR_U32(ctx, 31, 0x488784u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x48877Cu, 0x488784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488784u;
label_488784:
    // 0x488784: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x488784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488788:
    // 0x488788: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x488788u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48878c:
    // 0x48878c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x48878cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_488790:
    // 0x488790: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488794:
    // 0x488794: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x488794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_488798:
    // 0x488798: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x488798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_48879c:
    // 0x48879c: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x48879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
label_4887a0:
    // 0x4887a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4887a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4887a4:
    // 0x4887a4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x4887a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4887a8:
    // 0x4887a8: 0x12c0006a  beqz        $s6, . + 4 + (0x6A << 2)
label_4887ac:
    if (ctx->pc == 0x4887ACu) {
        ctx->pc = 0x4887B0u;
        goto label_4887b0;
    }
    ctx->pc = 0x4887A8u;
    {
        const bool branch_taken_0x4887a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4887a8) {
            ctx->pc = 0x488954u;
            goto label_488954;
        }
    }
    ctx->pc = 0x4887B0u;
label_4887b0:
    // 0x4887b0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x4887b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_4887b4:
    // 0x4887b4: 0x24844360  addiu       $a0, $a0, 0x4360
    ctx->pc = 0x4887b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17248));
label_4887b8:
    // 0x4887b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4887b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4887bc:
    // 0x4887bc: 0xc115ae4  jal         func_456B90
label_4887c0:
    if (ctx->pc == 0x4887C0u) {
        ctx->pc = 0x4887C4u;
        goto label_4887c4;
    }
    ctx->pc = 0x4887BCu;
    SET_GPR_U32(ctx, 31, 0x4887C4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4887BCu, 0x4887C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4887C4u;
label_4887c4:
    // 0x4887c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4887c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_4887c8:
    // 0x4887c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4887c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4887cc:
    // 0x4887cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4887ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4887d0:
    // 0x4887d0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4887d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_4887d4:
    // 0x4887d4: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x4887d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
label_4887d8:
    // 0x4887d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4887d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4887dc:
    // 0x4887dc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4887dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4887e0:
    // 0x4887e0: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x4887e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_4887e4:
    // 0x4887e4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4887e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4887e8:
    // 0x4887e8: 0x24a543a0  addiu       $a1, $a1, 0x43A0
    ctx->pc = 0x4887e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17312));
label_4887ec:
    // 0x4887ec: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4887ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4887f0:
    // 0x4887f0: 0xc0bc3e2  jal         func_2F0F88
label_4887f4:
    if (ctx->pc == 0x4887F4u) {
        ctx->pc = 0x4887F8u;
        goto label_4887f8;
    }
    ctx->pc = 0x4887F0u;
    SET_GPR_U32(ctx, 31, 0x4887F8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4887F0u, 0x4887F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4887F8u;
label_4887f8:
    // 0x4887f8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4887f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4887fc:
    // 0x4887fc: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x4887fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_488800:
    // 0x488800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488804:
    // 0x488804: 0xc115ae4  jal         func_456B90
label_488808:
    if (ctx->pc == 0x488808u) {
        ctx->pc = 0x48880Cu;
        goto label_48880c;
    }
    ctx->pc = 0x488804u;
    SET_GPR_U32(ctx, 31, 0x48880Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488804u, 0x48880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48880Cu;
label_48880c:
    // 0x48880c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x48880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_488810:
    // 0x488810: 0x2c0f809  jalr        $s6
label_488814:
    if (ctx->pc == 0x488814u) {
        ctx->pc = 0x488818u;
        goto label_488818;
    }
    ctx->pc = 0x488810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x488818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488810u, 0x488818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488818u;
label_488818:
    // 0x488818: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x488818u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48881c:
    // 0x48881c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x48881cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_488820:
    // 0x488820: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488824:
    // 0x488824: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x488824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_488828:
    // 0x488828: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x488828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_48882c:
    // 0x48882c: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x48882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
label_488830:
    // 0x488830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x488830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_488834:
    // 0x488834: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_488838:
    // 0x488838: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x488838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_48883c:
    // 0x48883c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48883cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_488840:
    // 0x488840: 0x24a543b0  addiu       $a1, $a1, 0x43B0
    ctx->pc = 0x488840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
label_488844:
    // 0x488844: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x488844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_488848:
    // 0x488848: 0xc0bc3e2  jal         func_2F0F88
label_48884c:
    if (ctx->pc == 0x48884Cu) {
        ctx->pc = 0x488850u;
        goto label_488850;
    }
    ctx->pc = 0x488848u;
    SET_GPR_U32(ctx, 31, 0x488850u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x488848u, 0x488850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488850u;
label_488850:
    // 0x488850: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_488854:
    // 0x488854: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x488854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_488858:
    // 0x488858: 0xc0bc60c  jal         func_2F1830
label_48885c:
    if (ctx->pc == 0x48885Cu) {
        ctx->pc = 0x488860u;
        goto label_488860;
    }
    ctx->pc = 0x488858u;
    SET_GPR_U32(ctx, 31, 0x488860u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x488858u, 0x488860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488860u;
label_488860:
    // 0x488860: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x488860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_488864:
    // 0x488864: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_488868:
    // 0x488868: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x488868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_48886c:
    // 0x48886c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48886cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488870:
    // 0x488870: 0xc115ae4  jal         func_456B90
label_488874:
    if (ctx->pc == 0x488874u) {
        ctx->pc = 0x488878u;
        goto label_488878;
    }
    ctx->pc = 0x488870u;
    SET_GPR_U32(ctx, 31, 0x488878u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488870u, 0x488878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488878u;
label_488878:
    // 0x488878: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_48887c:
    // 0x48887c: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x48887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_488880:
    // 0x488880: 0xc0bc60c  jal         func_2F1830
label_488884:
    if (ctx->pc == 0x488884u) {
        ctx->pc = 0x488888u;
        goto label_488888;
    }
    ctx->pc = 0x488880u;
    SET_GPR_U32(ctx, 31, 0x488888u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x488880u, 0x488888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488888u;
label_488888:
    // 0x488888: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x488888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_48888c:
    // 0x48888c: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x48888cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_488890:
    // 0x488890: 0x2602fff9  addiu       $v0, $s0, -0x7
    ctx->pc = 0x488890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
label_488894:
    // 0x488894: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x488894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_488898:
    // 0x488898: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48889c:
    if (ctx->pc == 0x48889Cu) {
        ctx->pc = 0x4888A0u;
        goto label_4888a0;
    }
    ctx->pc = 0x488898u;
    {
        const bool branch_taken_0x488898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488898) {
            ctx->pc = 0x4888ACu;
            goto label_4888ac;
        }
    }
    ctx->pc = 0x4888A0u;
label_4888a0:
    // 0x4888a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4888a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4888a4:
    // 0x4888a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4888a8:
    if (ctx->pc == 0x4888A8u) {
        ctx->pc = 0x4888ACu;
        goto label_4888ac;
    }
    ctx->pc = 0x4888A4u;
    {
        const bool branch_taken_0x4888a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4888a4) {
            ctx->pc = 0x4888B0u;
            goto label_4888b0;
        }
    }
    ctx->pc = 0x4888ACu;
label_4888ac:
    // 0x4888ac: 0x2617fff9  addiu       $s7, $s0, -0x7
    ctx->pc = 0x4888acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
label_4888b0:
    // 0x4888b0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x4888b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4888b4:
    // 0x4888b4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x4888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4888b8:
    // 0x4888b8: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x4888b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4888bc:
    // 0x4888bc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4888bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4888c0:
    // 0x4888c0: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x4888c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_4888c4:
    // 0x4888c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x4888c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4888c8:
    // 0x4888c8: 0xc11963c  jal         func_4658F0
label_4888cc:
    if (ctx->pc == 0x4888CCu) {
        ctx->pc = 0x4888D0u;
        goto label_4888d0;
    }
    ctx->pc = 0x4888C8u;
    SET_GPR_U32(ctx, 31, 0x4888D0u);
    ctx->pc = 0x4658F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4658F0u, 0x4888C8u, 0x4888D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888D0u;
label_4888d0:
    // 0x4888d0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4888d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4888d4:
    // 0x4888d4: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x4888d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_4888d8:
    // 0x4888d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4888dc:
    // 0x4888dc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x4888dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_4888e0:
    // 0x4888e0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4888e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4888e4:
    // 0x4888e4: 0x24847c50  addiu       $a0, $a0, 0x7C50
    ctx->pc = 0x4888e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31824));
label_4888e8:
    // 0x4888e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4888e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4888ec:
    // 0x4888ec: 0xc115ae4  jal         func_456B90
label_4888f0:
    if (ctx->pc == 0x4888F0u) {
        ctx->pc = 0x4888F4u;
        goto label_4888f4;
    }
    ctx->pc = 0x4888ECu;
    SET_GPR_U32(ctx, 31, 0x4888F4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4888ECu, 0x4888F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888F4u;
label_4888f4:
    // 0x4888f4: 0x7c00007  bltz        $fp, . + 4 + (0x7 << 2)
label_4888f8:
    if (ctx->pc == 0x4888F8u) {
        ctx->pc = 0x4888FCu;
        goto label_4888fc;
    }
    ctx->pc = 0x4888F4u;
    {
        const bool branch_taken_0x4888f4 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x4888f4) {
            ctx->pc = 0x488914u;
            goto label_488914;
        }
    }
    ctx->pc = 0x4888FCu;
label_4888fc:
    // 0x4888fc: 0x2784b5f0  addiu       $a0, $gp, -0x4A10
    ctx->pc = 0x4888fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948336));
label_488900:
    // 0x488900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488904:
    // 0x488904: 0xc115ae4  jal         func_456B90
label_488908:
    if (ctx->pc == 0x488908u) {
        ctx->pc = 0x48890Cu;
        goto label_48890c;
    }
    ctx->pc = 0x488904u;
    SET_GPR_U32(ctx, 31, 0x48890Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488904u, 0x48890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48890Cu;
label_48890c:
    // 0x48890c: 0x10000010  b           . + 4 + (0x10 << 2)
label_488910:
    if (ctx->pc == 0x488910u) {
        ctx->pc = 0x488914u;
        goto label_488914;
    }
    ctx->pc = 0x48890Cu;
    {
        const bool branch_taken_0x48890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48890c) {
            ctx->pc = 0x488950u;
            goto label_488950;
        }
    }
    ctx->pc = 0x488914u;
label_488914:
    // 0x488914: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_488918:
    // 0x488918: 0x248443c0  addiu       $a0, $a0, 0x43C0
    ctx->pc = 0x488918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17344));
label_48891c:
    // 0x48891c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488920:
    // 0x488920: 0xc115ae4  jal         func_456B90
label_488924:
    if (ctx->pc == 0x488924u) {
        ctx->pc = 0x488928u;
        goto label_488928;
    }
    ctx->pc = 0x488920u;
    SET_GPR_U32(ctx, 31, 0x488928u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488920u, 0x488928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488928u;
label_488928:
    // 0x488928: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_48892c:
    // 0x48892c: 0x24844360  addiu       $a0, $a0, 0x4360
    ctx->pc = 0x48892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17248));
label_488930:
    // 0x488930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488934:
    // 0x488934: 0xc115ae4  jal         func_456B90
label_488938:
    if (ctx->pc == 0x488938u) {
        ctx->pc = 0x48893Cu;
        goto label_48893c;
    }
    ctx->pc = 0x488934u;
    SET_GPR_U32(ctx, 31, 0x48893Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488934u, 0x48893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48893Cu;
label_48893c:
    // 0x48893c: 0xc1222cc  jal         func_488B30
label_488940:
    if (ctx->pc == 0x488940u) {
        ctx->pc = 0x488944u;
        goto label_488944;
    }
    ctx->pc = 0x48893Cu;
    SET_GPR_U32(ctx, 31, 0x488944u);
    ctx->pc = 0x488B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488B30u, 0x48893Cu, 0x488944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488944u;
label_488944:
    // 0x488944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x488944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_488948:
    // 0x488948: 0x1000005e  b           . + 4 + (0x5E << 2)
label_48894c:
    if (ctx->pc == 0x48894Cu) {
        ctx->pc = 0x488950u;
        goto label_488950;
    }
    ctx->pc = 0x488948u;
    {
        const bool branch_taken_0x488948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488948) {
            ctx->pc = 0x488AC4u;
            goto label_488ac4;
        }
    }
    ctx->pc = 0x488950u;
label_488950:
    // 0x488950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x488950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_488954:
    // 0x488954: 0x16c0ff8d  bnez        $s6, . + 4 + (-0x73 << 2)
label_488958:
    if (ctx->pc == 0x488958u) {
        ctx->pc = 0x48895Cu;
        goto label_48895c;
    }
    ctx->pc = 0x488954u;
    {
        const bool branch_taken_0x488954 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x488954) {
            ctx->pc = 0x48878Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48878c;
        }
    }
    ctx->pc = 0x48895Cu;
label_48895c:
    // 0x48895c: 0xc122680  jal         func_489A00
label_488960:
    if (ctx->pc == 0x488960u) {
        ctx->pc = 0x488964u;
        goto label_488964;
    }
    ctx->pc = 0x48895Cu;
    SET_GPR_U32(ctx, 31, 0x488964u);
    ctx->pc = 0x489A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489A00u, 0x48895Cu, 0x488964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488964u;
label_488964:
    // 0x488964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x488964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488968:
    // 0x488968: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_48896c:
    if (ctx->pc == 0x48896Cu) {
        ctx->pc = 0x488970u;
        goto label_488970;
    }
    ctx->pc = 0x488968u;
    {
        const bool branch_taken_0x488968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x488968) {
            ctx->pc = 0x4889ACu;
            goto label_4889ac;
        }
    }
    ctx->pc = 0x488970u;
label_488970:
    // 0x488970: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_488974:
    // 0x488974: 0x248443d0  addiu       $a0, $a0, 0x43D0
    ctx->pc = 0x488974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
label_488978:
    // 0x488978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48897c:
    // 0x48897c: 0xc115ae4  jal         func_456B90
label_488980:
    if (ctx->pc == 0x488980u) {
        ctx->pc = 0x488984u;
        goto label_488984;
    }
    ctx->pc = 0x48897Cu;
    SET_GPR_U32(ctx, 31, 0x488984u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x48897Cu, 0x488984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488984u;
label_488984:
    // 0x488984: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_488988:
    // 0x488988: 0x24844360  addiu       $a0, $a0, 0x4360
    ctx->pc = 0x488988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17248));
label_48898c:
    // 0x48898c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488990:
    // 0x488990: 0xc115ae4  jal         func_456B90
label_488994:
    if (ctx->pc == 0x488994u) {
        ctx->pc = 0x488998u;
        goto label_488998;
    }
    ctx->pc = 0x488990u;
    SET_GPR_U32(ctx, 31, 0x488998u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488990u, 0x488998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488998u;
label_488998:
    // 0x488998: 0xc1222cc  jal         func_488B30
label_48899c:
    if (ctx->pc == 0x48899Cu) {
        ctx->pc = 0x4889A0u;
        goto label_4889a0;
    }
    ctx->pc = 0x488998u;
    SET_GPR_U32(ctx, 31, 0x4889A0u);
    ctx->pc = 0x488B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488B30u, 0x488998u, 0x4889A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889A0u;
label_4889a0:
    // 0x4889a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4889a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4889a4:
    // 0x4889a4: 0x10000047  b           . + 4 + (0x47 << 2)
label_4889a8:
    if (ctx->pc == 0x4889A8u) {
        ctx->pc = 0x4889ACu;
        goto label_4889ac;
    }
    ctx->pc = 0x4889A4u;
    {
        const bool branch_taken_0x4889a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4889a4) {
            ctx->pc = 0x488AC4u;
            goto label_488ac4;
        }
    }
    ctx->pc = 0x4889ACu;
label_4889ac:
    // 0x4889ac: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x4889acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4889b0:
    // 0x4889b0: 0xc119b68  jal         func_466DA0
label_4889b4:
    if (ctx->pc == 0x4889B4u) {
        ctx->pc = 0x4889B8u;
        goto label_4889b8;
    }
    ctx->pc = 0x4889B0u;
    SET_GPR_U32(ctx, 31, 0x4889B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4889B0u, 0x4889B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889B8u;
label_4889b8:
    // 0x4889b8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x4889b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4889bc:
    // 0x4889bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4889bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4889c0:
    // 0x4889c0: 0xc0400e0  jal         func_100380
label_4889c4:
    if (ctx->pc == 0x4889C4u) {
        ctx->pc = 0x4889C8u;
        goto label_4889c8;
    }
    ctx->pc = 0x4889C0u;
    SET_GPR_U32(ctx, 31, 0x4889C8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4889C0u, 0x4889C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889C8u;
label_4889c8:
    // 0x4889c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4889c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4889cc:
    // 0x4889cc: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_4889d0:
    if (ctx->pc == 0x4889D0u) {
        ctx->pc = 0x4889D4u;
        goto label_4889d4;
    }
    ctx->pc = 0x4889CCu;
    {
        const bool branch_taken_0x4889cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4889cc) {
            ctx->pc = 0x4889E4u;
            goto label_4889e4;
        }
    }
    ctx->pc = 0x4889D4u;
label_4889d4:
    // 0x4889d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4889d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4889d8:
    // 0x4889d8: 0xc1206a8  jal         func_481AA0
label_4889dc:
    if (ctx->pc == 0x4889DCu) {
        ctx->pc = 0x4889E0u;
        goto label_4889e0;
    }
    ctx->pc = 0x4889D8u;
    SET_GPR_U32(ctx, 31, 0x4889E0u);
    ctx->pc = 0x481AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481AA0u, 0x4889D8u, 0x4889E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889E0u;
label_4889e0:
    // 0x4889e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4889e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4889e4:
    // 0x4889e4: 0xaf95c0e4  sw          $s5, -0x3F1C($gp)
    ctx->pc = 0x4889e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951140), GPR_U32(ctx, 21));
label_4889e8:
    // 0x4889e8: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x4889e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_4889ec:
    // 0x4889ec: 0xc119b68  jal         func_466DA0
label_4889f0:
    if (ctx->pc == 0x4889F0u) {
        ctx->pc = 0x4889F4u;
        goto label_4889f4;
    }
    ctx->pc = 0x4889ECu;
    SET_GPR_U32(ctx, 31, 0x4889F4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4889ECu, 0x4889F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4889F4u;
label_4889f4:
    // 0x4889f4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x4889f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_4889f8:
    // 0x4889f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4889f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4889fc:
    // 0x4889fc: 0xc0400e0  jal         func_100380
label_488a00:
    if (ctx->pc == 0x488A00u) {
        ctx->pc = 0x488A04u;
        goto label_488a04;
    }
    ctx->pc = 0x4889FCu;
    SET_GPR_U32(ctx, 31, 0x488A04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4889FCu, 0x488A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A04u;
label_488a04:
    // 0x488a04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x488a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a08:
    // 0x488a08: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_488a0c:
    if (ctx->pc == 0x488A0Cu) {
        ctx->pc = 0x488A10u;
        goto label_488a10;
    }
    ctx->pc = 0x488A08u;
    {
        const bool branch_taken_0x488a08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x488a08) {
            ctx->pc = 0x488A20u;
            goto label_488a20;
        }
    }
    ctx->pc = 0x488A10u;
label_488a10:
    // 0x488a10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x488a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_488a14:
    // 0x488a14: 0xc11fad4  jal         func_47EB50
label_488a18:
    if (ctx->pc == 0x488A18u) {
        ctx->pc = 0x488A1Cu;
        goto label_488a1c;
    }
    ctx->pc = 0x488A14u;
    SET_GPR_U32(ctx, 31, 0x488A1Cu);
    ctx->pc = 0x47EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EB50u, 0x488A14u, 0x488A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A1Cu;
label_488a1c:
    // 0x488a1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x488a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a20:
    // 0x488a20: 0xaf94c0e8  sw          $s4, -0x3F18($gp)
    ctx->pc = 0x488a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951144), GPR_U32(ctx, 20));
label_488a24:
    // 0x488a24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x488a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_488a28:
    // 0x488a28: 0xc119b68  jal         func_466DA0
label_488a2c:
    if (ctx->pc == 0x488A2Cu) {
        ctx->pc = 0x488A30u;
        goto label_488a30;
    }
    ctx->pc = 0x488A28u;
    SET_GPR_U32(ctx, 31, 0x488A30u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x488A28u, 0x488A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A30u;
label_488a30:
    // 0x488a30: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x488a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_488a34:
    // 0x488a34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x488a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a38:
    // 0x488a38: 0xc0400e0  jal         func_100380
label_488a3c:
    if (ctx->pc == 0x488A3Cu) {
        ctx->pc = 0x488A40u;
        goto label_488a40;
    }
    ctx->pc = 0x488A38u;
    SET_GPR_U32(ctx, 31, 0x488A40u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x488A38u, 0x488A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A40u;
label_488a40:
    // 0x488a40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x488a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a44:
    // 0x488a44: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_488a48:
    if (ctx->pc == 0x488A48u) {
        ctx->pc = 0x488A4Cu;
        goto label_488a4c;
    }
    ctx->pc = 0x488A44u;
    {
        const bool branch_taken_0x488a44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x488a44) {
            ctx->pc = 0x488A5Cu;
            goto label_488a5c;
        }
    }
    ctx->pc = 0x488A4Cu;
label_488a4c:
    // 0x488a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x488a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_488a50:
    // 0x488a50: 0xc11eabc  jal         func_47AAF0
label_488a54:
    if (ctx->pc == 0x488A54u) {
        ctx->pc = 0x488A58u;
        goto label_488a58;
    }
    ctx->pc = 0x488A50u;
    SET_GPR_U32(ctx, 31, 0x488A58u);
    ctx->pc = 0x47AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AAF0u, 0x488A50u, 0x488A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A58u;
label_488a58:
    // 0x488a58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x488a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a5c:
    // 0x488a5c: 0xaf93c0ec  sw          $s3, -0x3F14($gp)
    ctx->pc = 0x488a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951148), GPR_U32(ctx, 19));
label_488a60:
    // 0x488a60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x488a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_488a64:
    // 0x488a64: 0xc119b68  jal         func_466DA0
label_488a68:
    if (ctx->pc == 0x488A68u) {
        ctx->pc = 0x488A6Cu;
        goto label_488a6c;
    }
    ctx->pc = 0x488A64u;
    SET_GPR_U32(ctx, 31, 0x488A6Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x488A64u, 0x488A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A6Cu;
label_488a6c:
    // 0x488a6c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x488a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_488a70:
    // 0x488a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x488a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a74:
    // 0x488a74: 0xc0400e0  jal         func_100380
label_488a78:
    if (ctx->pc == 0x488A78u) {
        ctx->pc = 0x488A7Cu;
        goto label_488a7c;
    }
    ctx->pc = 0x488A74u;
    SET_GPR_U32(ctx, 31, 0x488A7Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x488A74u, 0x488A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A7Cu;
label_488a7c:
    // 0x488a7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x488a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a80:
    // 0x488a80: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_488a84:
    if (ctx->pc == 0x488A84u) {
        ctx->pc = 0x488A88u;
        goto label_488a88;
    }
    ctx->pc = 0x488A80u;
    {
        const bool branch_taken_0x488a80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x488a80) {
            ctx->pc = 0x488A98u;
            goto label_488a98;
        }
    }
    ctx->pc = 0x488A88u;
label_488a88:
    // 0x488a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x488a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_488a8c:
    // 0x488a8c: 0xc123750  jal         func_48DD40
label_488a90:
    if (ctx->pc == 0x488A90u) {
        ctx->pc = 0x488A94u;
        goto label_488a94;
    }
    ctx->pc = 0x488A8Cu;
    SET_GPR_U32(ctx, 31, 0x488A94u);
    ctx->pc = 0x48DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DD40u, 0x488A8Cu, 0x488A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488A94u;
label_488a94:
    // 0x488a94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x488a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488a98:
    // 0x488a98: 0xaf92c0f0  sw          $s2, -0x3F10($gp)
    ctx->pc = 0x488a98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951152), GPR_U32(ctx, 18));
label_488a9c:
    // 0x488a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488aa0:
    // 0x488aa0: 0xaf82c0d0  sw          $v0, -0x3F30($gp)
    ctx->pc = 0x488aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951120), GPR_U32(ctx, 2));
label_488aa4:
    // 0x488aa4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_488aa8:
    // 0x488aa8: 0x24844360  addiu       $a0, $a0, 0x4360
    ctx->pc = 0x488aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17248));
label_488aac:
    // 0x488aac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488ab0:
    // 0x488ab0: 0xc115ae4  jal         func_456B90
label_488ab4:
    if (ctx->pc == 0x488AB4u) {
        ctx->pc = 0x488AB8u;
        goto label_488ab8;
    }
    ctx->pc = 0x488AB0u;
    SET_GPR_U32(ctx, 31, 0x488AB8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488AB0u, 0x488AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488AB8u;
label_488ab8:
    // 0x488ab8: 0xc12214c  jal         func_488530
label_488abc:
    if (ctx->pc == 0x488ABCu) {
        ctx->pc = 0x488AC0u;
        goto label_488ac0;
    }
    ctx->pc = 0x488AB8u;
    SET_GPR_U32(ctx, 31, 0x488AC0u);
    ctx->pc = 0x488530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488530u, 0x488AB8u, 0x488AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488AC0u;
label_488ac0:
    // 0x488ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488ac4:
    // 0x488ac4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x488ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_488ac8:
    // 0x488ac8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x488ac8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_488acc:
    // 0x488acc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x488accu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_488ad0:
    // 0x488ad0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x488ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_488ad4:
    // 0x488ad4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x488ad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_488ad8:
    // 0x488ad8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x488ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_488adc:
    // 0x488adc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x488adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488ae0:
    // 0x488ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488ae4:
    // 0x488ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488ae8:
    // 0x488ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488aec:
    // 0x488aec: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x488aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_488af0:
    // 0x488af0: 0x3e00008  jr          $ra
label_488af4:
    if (ctx->pc == 0x488AF4u) {
        ctx->pc = 0x488AF8u;
        goto label_488af8;
    }
    ctx->pc = 0x488AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488AF8u;
label_488af8:
    // 0x488af8: 0x0  nop
    ctx->pc = 0x488af8u;
    // NOP
label_488afc:
    // 0x488afc: 0x0  nop
    ctx->pc = 0x488afcu;
    // NOP
    ctx->pc = 0x488b00u;
}
