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

// Function: sub_00104830
// Address: 0x104830 - 0x104b30
void sub_00104830_0x104830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104830_0x104830");
#endif

    switch (ctx->pc) {
        case 0x104830u: goto label_104830;
        case 0x104834u: goto label_104834;
        case 0x104838u: goto label_104838;
        case 0x10483cu: goto label_10483c;
        case 0x104840u: goto label_104840;
        case 0x104844u: goto label_104844;
        case 0x104848u: goto label_104848;
        case 0x10484cu: goto label_10484c;
        case 0x104850u: goto label_104850;
        case 0x104854u: goto label_104854;
        case 0x104858u: goto label_104858;
        case 0x10485cu: goto label_10485c;
        case 0x104860u: goto label_104860;
        case 0x104864u: goto label_104864;
        case 0x104868u: goto label_104868;
        case 0x10486cu: goto label_10486c;
        case 0x104870u: goto label_104870;
        case 0x104874u: goto label_104874;
        case 0x104878u: goto label_104878;
        case 0x10487cu: goto label_10487c;
        case 0x104880u: goto label_104880;
        case 0x104884u: goto label_104884;
        case 0x104888u: goto label_104888;
        case 0x10488cu: goto label_10488c;
        case 0x104890u: goto label_104890;
        case 0x104894u: goto label_104894;
        case 0x104898u: goto label_104898;
        case 0x10489cu: goto label_10489c;
        case 0x1048a0u: goto label_1048a0;
        case 0x1048a4u: goto label_1048a4;
        case 0x1048a8u: goto label_1048a8;
        case 0x1048acu: goto label_1048ac;
        case 0x1048b0u: goto label_1048b0;
        case 0x1048b4u: goto label_1048b4;
        case 0x1048b8u: goto label_1048b8;
        case 0x1048bcu: goto label_1048bc;
        case 0x1048c0u: goto label_1048c0;
        case 0x1048c4u: goto label_1048c4;
        case 0x1048c8u: goto label_1048c8;
        case 0x1048ccu: goto label_1048cc;
        case 0x1048d0u: goto label_1048d0;
        case 0x1048d4u: goto label_1048d4;
        case 0x1048d8u: goto label_1048d8;
        case 0x1048dcu: goto label_1048dc;
        case 0x1048e0u: goto label_1048e0;
        case 0x1048e4u: goto label_1048e4;
        case 0x1048e8u: goto label_1048e8;
        case 0x1048ecu: goto label_1048ec;
        case 0x1048f0u: goto label_1048f0;
        case 0x1048f4u: goto label_1048f4;
        case 0x1048f8u: goto label_1048f8;
        case 0x1048fcu: goto label_1048fc;
        case 0x104900u: goto label_104900;
        case 0x104904u: goto label_104904;
        case 0x104908u: goto label_104908;
        case 0x10490cu: goto label_10490c;
        case 0x104910u: goto label_104910;
        case 0x104914u: goto label_104914;
        case 0x104918u: goto label_104918;
        case 0x10491cu: goto label_10491c;
        case 0x104920u: goto label_104920;
        case 0x104924u: goto label_104924;
        case 0x104928u: goto label_104928;
        case 0x10492cu: goto label_10492c;
        case 0x104930u: goto label_104930;
        case 0x104934u: goto label_104934;
        case 0x104938u: goto label_104938;
        case 0x10493cu: goto label_10493c;
        case 0x104940u: goto label_104940;
        case 0x104944u: goto label_104944;
        case 0x104948u: goto label_104948;
        case 0x10494cu: goto label_10494c;
        case 0x104950u: goto label_104950;
        case 0x104954u: goto label_104954;
        case 0x104958u: goto label_104958;
        case 0x10495cu: goto label_10495c;
        case 0x104960u: goto label_104960;
        case 0x104964u: goto label_104964;
        case 0x104968u: goto label_104968;
        case 0x10496cu: goto label_10496c;
        case 0x104970u: goto label_104970;
        case 0x104974u: goto label_104974;
        case 0x104978u: goto label_104978;
        case 0x10497cu: goto label_10497c;
        case 0x104980u: goto label_104980;
        case 0x104984u: goto label_104984;
        case 0x104988u: goto label_104988;
        case 0x10498cu: goto label_10498c;
        case 0x104990u: goto label_104990;
        case 0x104994u: goto label_104994;
        case 0x104998u: goto label_104998;
        case 0x10499cu: goto label_10499c;
        case 0x1049a0u: goto label_1049a0;
        case 0x1049a4u: goto label_1049a4;
        case 0x1049a8u: goto label_1049a8;
        case 0x1049acu: goto label_1049ac;
        case 0x1049b0u: goto label_1049b0;
        case 0x1049b4u: goto label_1049b4;
        case 0x1049b8u: goto label_1049b8;
        case 0x1049bcu: goto label_1049bc;
        case 0x1049c0u: goto label_1049c0;
        case 0x1049c4u: goto label_1049c4;
        case 0x1049c8u: goto label_1049c8;
        case 0x1049ccu: goto label_1049cc;
        case 0x1049d0u: goto label_1049d0;
        case 0x1049d4u: goto label_1049d4;
        case 0x1049d8u: goto label_1049d8;
        case 0x1049dcu: goto label_1049dc;
        case 0x1049e0u: goto label_1049e0;
        case 0x1049e4u: goto label_1049e4;
        case 0x1049e8u: goto label_1049e8;
        case 0x1049ecu: goto label_1049ec;
        case 0x1049f0u: goto label_1049f0;
        case 0x1049f4u: goto label_1049f4;
        case 0x1049f8u: goto label_1049f8;
        case 0x1049fcu: goto label_1049fc;
        case 0x104a00u: goto label_104a00;
        case 0x104a04u: goto label_104a04;
        case 0x104a08u: goto label_104a08;
        case 0x104a0cu: goto label_104a0c;
        case 0x104a10u: goto label_104a10;
        case 0x104a14u: goto label_104a14;
        case 0x104a18u: goto label_104a18;
        case 0x104a1cu: goto label_104a1c;
        case 0x104a20u: goto label_104a20;
        case 0x104a24u: goto label_104a24;
        case 0x104a28u: goto label_104a28;
        case 0x104a2cu: goto label_104a2c;
        case 0x104a30u: goto label_104a30;
        case 0x104a34u: goto label_104a34;
        case 0x104a38u: goto label_104a38;
        case 0x104a3cu: goto label_104a3c;
        case 0x104a40u: goto label_104a40;
        case 0x104a44u: goto label_104a44;
        case 0x104a48u: goto label_104a48;
        case 0x104a4cu: goto label_104a4c;
        case 0x104a50u: goto label_104a50;
        case 0x104a54u: goto label_104a54;
        case 0x104a58u: goto label_104a58;
        case 0x104a5cu: goto label_104a5c;
        case 0x104a60u: goto label_104a60;
        case 0x104a64u: goto label_104a64;
        case 0x104a68u: goto label_104a68;
        case 0x104a6cu: goto label_104a6c;
        case 0x104a70u: goto label_104a70;
        case 0x104a74u: goto label_104a74;
        case 0x104a78u: goto label_104a78;
        case 0x104a7cu: goto label_104a7c;
        case 0x104a80u: goto label_104a80;
        case 0x104a84u: goto label_104a84;
        case 0x104a88u: goto label_104a88;
        case 0x104a8cu: goto label_104a8c;
        case 0x104a90u: goto label_104a90;
        case 0x104a94u: goto label_104a94;
        case 0x104a98u: goto label_104a98;
        case 0x104a9cu: goto label_104a9c;
        case 0x104aa0u: goto label_104aa0;
        case 0x104aa4u: goto label_104aa4;
        case 0x104aa8u: goto label_104aa8;
        case 0x104aacu: goto label_104aac;
        case 0x104ab0u: goto label_104ab0;
        case 0x104ab4u: goto label_104ab4;
        case 0x104ab8u: goto label_104ab8;
        case 0x104abcu: goto label_104abc;
        case 0x104ac0u: goto label_104ac0;
        case 0x104ac4u: goto label_104ac4;
        case 0x104ac8u: goto label_104ac8;
        case 0x104accu: goto label_104acc;
        case 0x104ad0u: goto label_104ad0;
        case 0x104ad4u: goto label_104ad4;
        case 0x104ad8u: goto label_104ad8;
        case 0x104adcu: goto label_104adc;
        case 0x104ae0u: goto label_104ae0;
        case 0x104ae4u: goto label_104ae4;
        case 0x104ae8u: goto label_104ae8;
        case 0x104aecu: goto label_104aec;
        case 0x104af0u: goto label_104af0;
        case 0x104af4u: goto label_104af4;
        case 0x104af8u: goto label_104af8;
        case 0x104afcu: goto label_104afc;
        case 0x104b00u: goto label_104b00;
        case 0x104b04u: goto label_104b04;
        case 0x104b08u: goto label_104b08;
        case 0x104b0cu: goto label_104b0c;
        case 0x104b10u: goto label_104b10;
        case 0x104b14u: goto label_104b14;
        case 0x104b18u: goto label_104b18;
        case 0x104b1cu: goto label_104b1c;
        case 0x104b20u: goto label_104b20;
        case 0x104b24u: goto label_104b24;
        case 0x104b28u: goto label_104b28;
        case 0x104b2cu: goto label_104b2c;
        default: break;
    }

    ctx->pc = 0x104830u;

label_104830:
    // 0x104830: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x104830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_104834:
    // 0x104834: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x104834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_104838:
    // 0x104838: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x104838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_10483c:
    // 0x10483c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_104840:
    // 0x104840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x104840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_104844:
    // 0x104844: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x104844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_104848:
    // 0x104848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x104848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10484c:
    // 0x10484c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_104850:
    // 0x104850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x104850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_104854:
    // 0x104854: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x104854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_104858:
    // 0x104858: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_10485c:
    // 0x10485c: 0xc088560  jal         func_221580
label_104860:
    if (ctx->pc == 0x104860u) {
        ctx->pc = 0x104864u;
        goto label_104864;
    }
    ctx->pc = 0x10485Cu;
    SET_GPR_U32(ctx, 31, 0x104864u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x10485Cu, 0x104864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104864u;
label_104864:
    // 0x104864: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104868:
    // 0x104868: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x104868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_10486c:
    // 0x10486c: 0x24060c80  addiu       $a2, $zero, 0xC80
    ctx->pc = 0x10486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
label_104870:
    // 0x104870: 0xc040924  jal         func_102490
label_104874:
    if (ctx->pc == 0x104874u) {
        ctx->pc = 0x104878u;
        goto label_104878;
    }
    ctx->pc = 0x104870u;
    SET_GPR_U32(ctx, 31, 0x104878u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x104870u, 0x104878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104878u;
label_104878:
    // 0x104878: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_10487c:
    // 0x10487c: 0x24050413  addiu       $a1, $zero, 0x413
    ctx->pc = 0x10487cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
label_104880:
    // 0x104880: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x104880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_104884:
    // 0x104884: 0xc040924  jal         func_102490
label_104888:
    if (ctx->pc == 0x104888u) {
        ctx->pc = 0x10488Cu;
        goto label_10488c;
    }
    ctx->pc = 0x104884u;
    SET_GPR_U32(ctx, 31, 0x10488Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x104884u, 0x10488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10488Cu;
label_10488c:
    // 0x10488c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x10488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104890:
    // 0x104890: 0x24050414  addiu       $a1, $zero, 0x414
    ctx->pc = 0x104890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_104894:
    // 0x104894: 0x24060c80  addiu       $a2, $zero, 0xC80
    ctx->pc = 0x104894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
label_104898:
    // 0x104898: 0xc040924  jal         func_102490
label_10489c:
    if (ctx->pc == 0x10489Cu) {
        ctx->pc = 0x1048A0u;
        goto label_1048a0;
    }
    ctx->pc = 0x104898u;
    SET_GPR_U32(ctx, 31, 0x1048A0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x104898u, 0x1048A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048A0u;
label_1048a0:
    // 0x1048a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1048a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1048a4:
    // 0x1048a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1048a8:
    if (ctx->pc == 0x1048A8u) {
        ctx->pc = 0x1048ACu;
        goto label_1048ac;
    }
    ctx->pc = 0x1048A4u;
    {
        const bool branch_taken_0x1048a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1048a4) {
            ctx->pc = 0x1048B8u;
            goto label_1048b8;
        }
    }
    ctx->pc = 0x1048ACu;
label_1048ac:
    // 0x1048ac: 0x8fb200e0  lw          $s2, 0xE0($sp)
    ctx->pc = 0x1048acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1048b0:
    // 0x1048b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1048b4:
    if (ctx->pc == 0x1048B4u) {
        ctx->pc = 0x1048B8u;
        goto label_1048b8;
    }
    ctx->pc = 0x1048B0u;
    {
        const bool branch_taken_0x1048b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1048b0) {
            ctx->pc = 0x1048BCu;
            goto label_1048bc;
        }
    }
    ctx->pc = 0x1048B8u;
label_1048b8:
    // 0x1048b8: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x1048b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1048bc:
    // 0x1048bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1048bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1048c0:
    // 0x1048c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1048c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1048c4:
    // 0x1048c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1048c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1048c8:
    // 0x1048c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1048c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1048cc:
    // 0x1048cc: 0xc043448  jal         func_10D120
label_1048d0:
    if (ctx->pc == 0x1048D0u) {
        ctx->pc = 0x1048D4u;
        goto label_1048d4;
    }
    ctx->pc = 0x1048CCu;
    SET_GPR_U32(ctx, 31, 0x1048D4u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x1048CCu, 0x1048D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048D4u;
label_1048d4:
    // 0x1048d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1048d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1048d8:
    // 0x1048d8: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x1048d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_1048dc:
    // 0x1048dc: 0xc041008  jal         func_104020
label_1048e0:
    if (ctx->pc == 0x1048E0u) {
        ctx->pc = 0x1048E4u;
        goto label_1048e4;
    }
    ctx->pc = 0x1048DCu;
    SET_GPR_U32(ctx, 31, 0x1048E4u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x1048DCu, 0x1048E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048E4u;
label_1048e4:
    // 0x1048e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1048e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1048e8:
    // 0x1048e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1048ec:
    if (ctx->pc == 0x1048ECu) {
        ctx->pc = 0x1048F0u;
        goto label_1048f0;
    }
    ctx->pc = 0x1048E8u;
    {
        const bool branch_taken_0x1048e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1048e8) {
            ctx->pc = 0x104918u;
            goto label_104918;
        }
    }
    ctx->pc = 0x1048F0u;
label_1048f0:
    // 0x1048f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1048f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1048f4:
    // 0x1048f4: 0xc08551c  jal         func_215470
label_1048f8:
    if (ctx->pc == 0x1048F8u) {
        ctx->pc = 0x1048FCu;
        goto label_1048fc;
    }
    ctx->pc = 0x1048F4u;
    SET_GPR_U32(ctx, 31, 0x1048FCu);
    ctx->pc = 0x215470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215470u, 0x1048F4u, 0x1048FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048FCu;
label_1048fc:
    // 0x1048fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1048fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104900:
    // 0x104900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104904:
    // 0x104904: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104908:
    // 0x104908: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x104908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10490c:
    // 0x10490c: 0x320f809  jalr        $t9
label_104910:
    if (ctx->pc == 0x104910u) {
        ctx->pc = 0x104914u;
        goto label_104914;
    }
    ctx->pc = 0x10490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104914u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10490Cu, 0x104914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104914u;
label_104914:
    // 0x104914: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x104914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_104918:
    // 0x104918: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x104918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_10491c:
    // 0x10491c: 0xc041000  jal         func_104000
label_104920:
    if (ctx->pc == 0x104920u) {
        ctx->pc = 0x104924u;
        goto label_104924;
    }
    ctx->pc = 0x10491Cu;
    SET_GPR_U32(ctx, 31, 0x104924u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x10491Cu, 0x104924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104924u;
label_104924:
    // 0x104924: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
label_104928:
    if (ctx->pc == 0x104928u) {
        ctx->pc = 0x10492Cu;
        goto label_10492c;
    }
    ctx->pc = 0x104924u;
    {
        const bool branch_taken_0x104924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x104924) {
            ctx->pc = 0x1048F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1048f0;
        }
    }
    ctx->pc = 0x10492Cu;
label_10492c:
    // 0x10492c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10492cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_104930:
    // 0x104930: 0x0  nop
    ctx->pc = 0x104930u;
    // NOP
label_104934:
    // 0x104934: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x104934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_104938:
    // 0x104938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10493c:
    // 0x10493c: 0x0  nop
    ctx->pc = 0x10493cu;
    // NOP
label_104940:
    // 0x104940: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x104940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_104944:
    // 0x104944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_104948:
    // 0x104948: 0x0  nop
    ctx->pc = 0x104948u;
    // NOP
label_10494c:
    // 0x10494c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x10494cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_104950:
    // 0x104950: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104954:
    // 0x104954: 0xc088fe8  jal         func_223FA0
label_104958:
    if (ctx->pc == 0x104958u) {
        ctx->pc = 0x10495Cu;
        goto label_10495c;
    }
    ctx->pc = 0x104954u;
    SET_GPR_U32(ctx, 31, 0x10495Cu);
    ctx->pc = 0x223FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223FA0u, 0x104954u, 0x10495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10495Cu;
label_10495c:
    // 0x10495c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104960:
    // 0x104960: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x104960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_104964:
    // 0x104964: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x104964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104968:
    // 0x104968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10496c:
    // 0x10496c: 0xc043448  jal         func_10D120
label_104970:
    if (ctx->pc == 0x104970u) {
        ctx->pc = 0x104974u;
        goto label_104974;
    }
    ctx->pc = 0x10496Cu;
    SET_GPR_U32(ctx, 31, 0x104974u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x10496Cu, 0x104974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104974u;
label_104974:
    // 0x104974: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x104974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104978:
    // 0x104978: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x104978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10497c:
    // 0x10497c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_104980:
    // 0x104980: 0xc085538  jal         func_2154E0
label_104984:
    if (ctx->pc == 0x104984u) {
        ctx->pc = 0x104988u;
        goto label_104988;
    }
    ctx->pc = 0x104980u;
    SET_GPR_U32(ctx, 31, 0x104988u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x104980u, 0x104988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104988u;
label_104988:
    // 0x104988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x104988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10498c:
    // 0x10498c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x10498cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_104990:
    // 0x104990: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x104990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
label_104994:
    // 0x104994: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x104994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_104998:
    // 0x104998: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x104998u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_10499c:
    // 0x10499c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x10499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1049a0:
    // 0x1049a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1049a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1049a4:
    // 0x1049a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1049a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1049a8:
    // 0x1049a8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1049a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1049ac:
    // 0x1049ac: 0x24841318  addiu       $a0, $a0, 0x1318
    ctx->pc = 0x1049acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4888));
label_1049b0:
    // 0x1049b0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1049b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1049b4:
    // 0x1049b4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1049b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1049b8:
    // 0x1049b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1049b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1049bc:
    // 0x1049bc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1049bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1049c0:
    // 0x1049c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1049c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1049c4:
    // 0x1049c4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1049c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1049c8:
    // 0x1049c8: 0x24841328  addiu       $a0, $a0, 0x1328
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4904));
label_1049cc:
    // 0x1049cc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1049ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1049d0:
    // 0x1049d0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1049d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1049d4:
    // 0x1049d4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1049d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1049d8:
    // 0x1049d8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1049d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1049dc:
    // 0x1049dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1049dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1049e0:
    // 0x1049e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1049e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1049e4:
    // 0x1049e4: 0xc097444  jal         func_25D110
label_1049e8:
    if (ctx->pc == 0x1049E8u) {
        ctx->pc = 0x1049ECu;
        goto label_1049ec;
    }
    ctx->pc = 0x1049E4u;
    SET_GPR_U32(ctx, 31, 0x1049ECu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x1049E4u, 0x1049ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049ECu;
label_1049ec:
    // 0x1049ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1049ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1049f0:
    // 0x1049f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1049f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1049f4:
    // 0x1049f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1049f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1049f8:
    // 0x1049f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1049f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1049fc:
    // 0x1049fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1049fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_104a00:
    // 0x104a00: 0x320f809  jalr        $t9
label_104a04:
    if (ctx->pc == 0x104A04u) {
        ctx->pc = 0x104A08u;
        goto label_104a08;
    }
    ctx->pc = 0x104A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104A08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A00u, 0x104A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104A08u;
label_104a08:
    // 0x104a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104a0c:
    // 0x104a0c: 0xc097444  jal         func_25D110
label_104a10:
    if (ctx->pc == 0x104A10u) {
        ctx->pc = 0x104A14u;
        goto label_104a14;
    }
    ctx->pc = 0x104A0Cu;
    SET_GPR_U32(ctx, 31, 0x104A14u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x104A0Cu, 0x104A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A14u;
label_104a14:
    // 0x104a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104a18:
    // 0x104a18: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x104a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_104a1c:
    // 0x104a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104a20:
    // 0x104a20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104a24:
    // 0x104a24: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x104a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_104a28:
    // 0x104a28: 0x320f809  jalr        $t9
label_104a2c:
    if (ctx->pc == 0x104A2Cu) {
        ctx->pc = 0x104A30u;
        goto label_104a30;
    }
    ctx->pc = 0x104A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104A30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A28u, 0x104A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104A30u;
label_104a30:
    // 0x104a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104a34:
    // 0x104a34: 0xc097444  jal         func_25D110
label_104a38:
    if (ctx->pc == 0x104A38u) {
        ctx->pc = 0x104A3Cu;
        goto label_104a3c;
    }
    ctx->pc = 0x104A34u;
    SET_GPR_U32(ctx, 31, 0x104A3Cu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x104A34u, 0x104A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A3Cu;
label_104a3c:
    // 0x104a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104a40:
    // 0x104a40: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x104a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_104a44:
    // 0x104a44: 0xc089a6c  jal         func_2269B0
label_104a48:
    if (ctx->pc == 0x104A48u) {
        ctx->pc = 0x104A4Cu;
        goto label_104a4c;
    }
    ctx->pc = 0x104A44u;
    SET_GPR_U32(ctx, 31, 0x104A4Cu);
    ctx->pc = 0x2269B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269B0u, 0x104A44u, 0x104A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A4Cu;
label_104a4c:
    // 0x104a4c: 0x3c02445c  lui         $v0, 0x445C
    ctx->pc = 0x104a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17500 << 16));
label_104a50:
    // 0x104a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_104a54:
    // 0x104a54: 0x0  nop
    ctx->pc = 0x104a54u;
    // NOP
label_104a58:
    // 0x104a58: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x104a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_104a5c:
    // 0x104a5c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x104a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_104a60:
    // 0x104a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_104a64:
    // 0x104a64: 0x0  nop
    ctx->pc = 0x104a64u;
    // NOP
label_104a68:
    // 0x104a68: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x104a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_104a6c:
    // 0x104a6c: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x104a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_104a70:
    // 0x104a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_104a74:
    // 0x104a74: 0x0  nop
    ctx->pc = 0x104a74u;
    // NOP
label_104a78:
    // 0x104a78: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x104a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_104a7c:
    // 0x104a7c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104a80:
    // 0x104a80: 0xc088fe8  jal         func_223FA0
label_104a84:
    if (ctx->pc == 0x104A84u) {
        ctx->pc = 0x104A88u;
        goto label_104a88;
    }
    ctx->pc = 0x104A80u;
    SET_GPR_U32(ctx, 31, 0x104A88u);
    ctx->pc = 0x223FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223FA0u, 0x104A80u, 0x104A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A88u;
label_104a88:
    // 0x104a88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104a8c:
    // 0x104a8c: 0xc088fe8  jal         func_223FA0
label_104a90:
    if (ctx->pc == 0x104A90u) {
        ctx->pc = 0x104A94u;
        goto label_104a94;
    }
    ctx->pc = 0x104A8Cu;
    SET_GPR_U32(ctx, 31, 0x104A94u);
    ctx->pc = 0x223FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223FA0u, 0x104A8Cu, 0x104A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A94u;
label_104a94:
    // 0x104a94: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104a98:
    // 0x104a98: 0x240503f4  addiu       $a1, $zero, 0x3F4
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_104a9c:
    // 0x104a9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x104a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_104aa0:
    // 0x104aa0: 0xc040924  jal         func_102490
label_104aa4:
    if (ctx->pc == 0x104AA4u) {
        ctx->pc = 0x104AA8u;
        goto label_104aa8;
    }
    ctx->pc = 0x104AA0u;
    SET_GPR_U32(ctx, 31, 0x104AA8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x104AA0u, 0x104AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AA8u;
label_104aa8:
    // 0x104aa8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104aac:
    // 0x104aac: 0x240503f6  addiu       $a1, $zero, 0x3F6
    ctx->pc = 0x104aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
label_104ab0:
    // 0x104ab0: 0x3c024030  lui         $v0, 0x4030
    ctx->pc = 0x104ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16432 << 16));
label_104ab4:
    // 0x104ab4: 0x344650ff  ori         $a2, $v0, 0x50FF
    ctx->pc = 0x104ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20735);
label_104ab8:
    // 0x104ab8: 0xc0412cc  jal         func_104B30
label_104abc:
    if (ctx->pc == 0x104ABCu) {
        ctx->pc = 0x104AC0u;
        goto label_104ac0;
    }
    ctx->pc = 0x104AB8u;
    SET_GPR_U32(ctx, 31, 0x104AC0u);
    ctx->pc = 0x104B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B30u, 0x104AB8u, 0x104AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AC0u;
label_104ac0:
    // 0x104ac0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_104ac4:
    // 0x104ac4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x104ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_104ac8:
    // 0x104ac8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x104ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104acc:
    // 0x104acc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104ad0:
    // 0x104ad0: 0xc043448  jal         func_10D120
label_104ad4:
    if (ctx->pc == 0x104AD4u) {
        ctx->pc = 0x104AD8u;
        goto label_104ad8;
    }
    ctx->pc = 0x104AD0u;
    SET_GPR_U32(ctx, 31, 0x104AD8u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x104AD0u, 0x104AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AD8u;
label_104ad8:
    // 0x104ad8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x104ad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104adc:
    // 0x104adc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x104adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_104ae0:
    // 0x104ae0: 0xc08551c  jal         func_215470
label_104ae4:
    if (ctx->pc == 0x104AE4u) {
        ctx->pc = 0x104AE8u;
        goto label_104ae8;
    }
    ctx->pc = 0x104AE0u;
    SET_GPR_U32(ctx, 31, 0x104AE8u);
    ctx->pc = 0x215470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215470u, 0x104AE0u, 0x104AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AE8u;
label_104ae8:
    // 0x104ae8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x104ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104aec:
    // 0x104aec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x104aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104af0:
    // 0x104af0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x104af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_104af4:
    // 0x104af4: 0xc0887b4  jal         func_221ED0
label_104af8:
    if (ctx->pc == 0x104AF8u) {
        ctx->pc = 0x104AFCu;
        goto label_104afc;
    }
    ctx->pc = 0x104AF4u;
    SET_GPR_U32(ctx, 31, 0x104AFCu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x104AF4u, 0x104AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AFCu;
label_104afc:
    // 0x104afc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x104afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104b00:
    // 0x104b00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x104b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_104b04:
    // 0x104b04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x104b04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_104b08:
    // 0x104b08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x104b08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_104b0c:
    // 0x104b0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x104b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_104b10:
    // 0x104b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x104b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_104b14:
    // 0x104b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x104b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_104b18:
    // 0x104b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x104b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_104b1c:
    // 0x104b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x104b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_104b20:
    // 0x104b20: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x104b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_104b24:
    // 0x104b24: 0x3e00008  jr          $ra
label_104b28:
    if (ctx->pc == 0x104B28u) {
        ctx->pc = 0x104B2Cu;
        goto label_104b2c;
    }
    ctx->pc = 0x104B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B2Cu;
label_104b2c:
    // 0x104b2c: 0x0  nop
    ctx->pc = 0x104b2cu;
    // NOP
    ctx->pc = 0x104b30u;
}
