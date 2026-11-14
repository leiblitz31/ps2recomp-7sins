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

// Function: sub_00245920
// Address: 0x245920 - 0x245b10
void sub_00245920_0x245920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245920_0x245920");
#endif

    switch (ctx->pc) {
        case 0x245920u: goto label_245920;
        case 0x245924u: goto label_245924;
        case 0x245928u: goto label_245928;
        case 0x24592cu: goto label_24592c;
        case 0x245930u: goto label_245930;
        case 0x245934u: goto label_245934;
        case 0x245938u: goto label_245938;
        case 0x24593cu: goto label_24593c;
        case 0x245940u: goto label_245940;
        case 0x245944u: goto label_245944;
        case 0x245948u: goto label_245948;
        case 0x24594cu: goto label_24594c;
        case 0x245950u: goto label_245950;
        case 0x245954u: goto label_245954;
        case 0x245958u: goto label_245958;
        case 0x24595cu: goto label_24595c;
        case 0x245960u: goto label_245960;
        case 0x245964u: goto label_245964;
        case 0x245968u: goto label_245968;
        case 0x24596cu: goto label_24596c;
        case 0x245970u: goto label_245970;
        case 0x245974u: goto label_245974;
        case 0x245978u: goto label_245978;
        case 0x24597cu: goto label_24597c;
        case 0x245980u: goto label_245980;
        case 0x245984u: goto label_245984;
        case 0x245988u: goto label_245988;
        case 0x24598cu: goto label_24598c;
        case 0x245990u: goto label_245990;
        case 0x245994u: goto label_245994;
        case 0x245998u: goto label_245998;
        case 0x24599cu: goto label_24599c;
        case 0x2459a0u: goto label_2459a0;
        case 0x2459a4u: goto label_2459a4;
        case 0x2459a8u: goto label_2459a8;
        case 0x2459acu: goto label_2459ac;
        case 0x2459b0u: goto label_2459b0;
        case 0x2459b4u: goto label_2459b4;
        case 0x2459b8u: goto label_2459b8;
        case 0x2459bcu: goto label_2459bc;
        case 0x2459c0u: goto label_2459c0;
        case 0x2459c4u: goto label_2459c4;
        case 0x2459c8u: goto label_2459c8;
        case 0x2459ccu: goto label_2459cc;
        case 0x2459d0u: goto label_2459d0;
        case 0x2459d4u: goto label_2459d4;
        case 0x2459d8u: goto label_2459d8;
        case 0x2459dcu: goto label_2459dc;
        case 0x2459e0u: goto label_2459e0;
        case 0x2459e4u: goto label_2459e4;
        case 0x2459e8u: goto label_2459e8;
        case 0x2459ecu: goto label_2459ec;
        case 0x2459f0u: goto label_2459f0;
        case 0x2459f4u: goto label_2459f4;
        case 0x2459f8u: goto label_2459f8;
        case 0x2459fcu: goto label_2459fc;
        case 0x245a00u: goto label_245a00;
        case 0x245a04u: goto label_245a04;
        case 0x245a08u: goto label_245a08;
        case 0x245a0cu: goto label_245a0c;
        case 0x245a10u: goto label_245a10;
        case 0x245a14u: goto label_245a14;
        case 0x245a18u: goto label_245a18;
        case 0x245a1cu: goto label_245a1c;
        case 0x245a20u: goto label_245a20;
        case 0x245a24u: goto label_245a24;
        case 0x245a28u: goto label_245a28;
        case 0x245a2cu: goto label_245a2c;
        case 0x245a30u: goto label_245a30;
        case 0x245a34u: goto label_245a34;
        case 0x245a38u: goto label_245a38;
        case 0x245a3cu: goto label_245a3c;
        case 0x245a40u: goto label_245a40;
        case 0x245a44u: goto label_245a44;
        case 0x245a48u: goto label_245a48;
        case 0x245a4cu: goto label_245a4c;
        case 0x245a50u: goto label_245a50;
        case 0x245a54u: goto label_245a54;
        case 0x245a58u: goto label_245a58;
        case 0x245a5cu: goto label_245a5c;
        case 0x245a60u: goto label_245a60;
        case 0x245a64u: goto label_245a64;
        case 0x245a68u: goto label_245a68;
        case 0x245a6cu: goto label_245a6c;
        case 0x245a70u: goto label_245a70;
        case 0x245a74u: goto label_245a74;
        case 0x245a78u: goto label_245a78;
        case 0x245a7cu: goto label_245a7c;
        case 0x245a80u: goto label_245a80;
        case 0x245a84u: goto label_245a84;
        case 0x245a88u: goto label_245a88;
        case 0x245a8cu: goto label_245a8c;
        case 0x245a90u: goto label_245a90;
        case 0x245a94u: goto label_245a94;
        case 0x245a98u: goto label_245a98;
        case 0x245a9cu: goto label_245a9c;
        case 0x245aa0u: goto label_245aa0;
        case 0x245aa4u: goto label_245aa4;
        case 0x245aa8u: goto label_245aa8;
        case 0x245aacu: goto label_245aac;
        case 0x245ab0u: goto label_245ab0;
        case 0x245ab4u: goto label_245ab4;
        case 0x245ab8u: goto label_245ab8;
        case 0x245abcu: goto label_245abc;
        case 0x245ac0u: goto label_245ac0;
        case 0x245ac4u: goto label_245ac4;
        case 0x245ac8u: goto label_245ac8;
        case 0x245accu: goto label_245acc;
        case 0x245ad0u: goto label_245ad0;
        case 0x245ad4u: goto label_245ad4;
        case 0x245ad8u: goto label_245ad8;
        case 0x245adcu: goto label_245adc;
        case 0x245ae0u: goto label_245ae0;
        case 0x245ae4u: goto label_245ae4;
        case 0x245ae8u: goto label_245ae8;
        case 0x245aecu: goto label_245aec;
        case 0x245af0u: goto label_245af0;
        case 0x245af4u: goto label_245af4;
        case 0x245af8u: goto label_245af8;
        case 0x245afcu: goto label_245afc;
        case 0x245b00u: goto label_245b00;
        case 0x245b04u: goto label_245b04;
        case 0x245b08u: goto label_245b08;
        case 0x245b0cu: goto label_245b0c;
        default: break;
    }

    ctx->pc = 0x245920u;

label_245920:
    // 0x245920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x245920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_245924:
    // 0x245924: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x245924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_245928:
    // 0x245928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x245928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24592c:
    // 0x24592c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_245930:
    // 0x245930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245934:
    // 0x245934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245938:
    // 0x245938: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x245938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_24593c:
    // 0x24593c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x24593cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_245940:
    // 0x245940: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x245940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_245944:
    // 0x245944: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_245948:
    if (ctx->pc == 0x245948u) {
        ctx->pc = 0x24594Cu;
        goto label_24594c;
    }
    ctx->pc = 0x245944u;
    {
        const bool branch_taken_0x245944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245944) {
            ctx->pc = 0x245AECu;
            goto label_245aec;
        }
    }
    ctx->pc = 0x24594Cu;
label_24594c:
    // 0x24594c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x24594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_245950:
    // 0x245950: 0xc085530  jal         func_2154C0
label_245954:
    if (ctx->pc == 0x245954u) {
        ctx->pc = 0x245958u;
        goto label_245958;
    }
    ctx->pc = 0x245950u;
    SET_GPR_U32(ctx, 31, 0x245958u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x245950u, 0x245958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245958u;
label_245958:
    // 0x245958: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x245958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_24595c:
    // 0x24595c: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_245960:
    if (ctx->pc == 0x245960u) {
        ctx->pc = 0x245964u;
        goto label_245964;
    }
    ctx->pc = 0x24595Cu;
    {
        const bool branch_taken_0x24595c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24595c) {
            ctx->pc = 0x245AECu;
            goto label_245aec;
        }
    }
    ctx->pc = 0x245964u;
label_245964:
    // 0x245964: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245968:
    // 0x245968: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_24596c:
    // 0x24596c: 0xc042290  jal         func_108A40
label_245970:
    if (ctx->pc == 0x245970u) {
        ctx->pc = 0x245974u;
        goto label_245974;
    }
    ctx->pc = 0x24596Cu;
    SET_GPR_U32(ctx, 31, 0x245974u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x24596Cu, 0x245974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245974u;
label_245974:
    // 0x245974: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x245974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245978:
    // 0x245978: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_24597c:
    // 0x24597c: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x24597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_245980:
    // 0x245980: 0xc042288  jal         func_108A20
label_245984:
    if (ctx->pc == 0x245984u) {
        ctx->pc = 0x245988u;
        goto label_245988;
    }
    ctx->pc = 0x245980u;
    SET_GPR_U32(ctx, 31, 0x245988u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x245980u, 0x245988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245988u;
label_245988:
    // 0x245988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24598c:
    // 0x24598c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245990:
    // 0x245990: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x245990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_245994:
    // 0x245994: 0xc050540  jal         func_141500
label_245998:
    if (ctx->pc == 0x245998u) {
        ctx->pc = 0x24599Cu;
        goto label_24599c;
    }
    ctx->pc = 0x245994u;
    SET_GPR_U32(ctx, 31, 0x24599Cu);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x245994u, 0x24599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24599Cu;
label_24599c:
    // 0x24599c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24599cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2459a0:
    // 0x2459a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2459a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2459a4:
    // 0x2459a4: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x2459a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_2459a8:
    // 0x2459a8: 0xc042288  jal         func_108A20
label_2459ac:
    if (ctx->pc == 0x2459ACu) {
        ctx->pc = 0x2459B0u;
        goto label_2459b0;
    }
    ctx->pc = 0x2459A8u;
    SET_GPR_U32(ctx, 31, 0x2459B0u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2459A8u, 0x2459B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459B0u;
label_2459b0:
    // 0x2459b0: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_2459b4:
    if (ctx->pc == 0x2459B4u) {
        ctx->pc = 0x2459B8u;
        goto label_2459b8;
    }
    ctx->pc = 0x2459B0u;
    {
        const bool branch_taken_0x2459b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2459b0) {
            ctx->pc = 0x2459CCu;
            goto label_2459cc;
        }
    }
    ctx->pc = 0x2459B8u;
label_2459b8:
    // 0x2459b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2459b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2459bc:
    // 0x2459bc: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x2459bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
label_2459c0:
    // 0x2459c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2459c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2459c4:
    // 0x2459c4: 0xc04fe98  jal         func_13FA60
label_2459c8:
    if (ctx->pc == 0x2459C8u) {
        ctx->pc = 0x2459CCu;
        goto label_2459cc;
    }
    ctx->pc = 0x2459C4u;
    SET_GPR_U32(ctx, 31, 0x2459CCu);
    ctx->pc = 0x13FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA60u, 0x2459C4u, 0x2459CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459CCu;
label_2459cc:
    // 0x2459cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2459ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2459d0:
    // 0x2459d0: 0xc085530  jal         func_2154C0
label_2459d4:
    if (ctx->pc == 0x2459D4u) {
        ctx->pc = 0x2459D8u;
        goto label_2459d8;
    }
    ctx->pc = 0x2459D0u;
    SET_GPR_U32(ctx, 31, 0x2459D8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2459D0u, 0x2459D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459D8u;
label_2459d8:
    // 0x2459d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2459d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2459dc:
    // 0x2459dc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2459dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2459e0:
    // 0x2459e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2459e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2459e4:
    // 0x2459e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2459e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2459e8:
    // 0x2459e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2459e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2459ec:
    // 0x2459ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2459ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2459f0:
    // 0x2459f0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2459f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2459f4:
    // 0x2459f4: 0xc042290  jal         func_108A40
label_2459f8:
    if (ctx->pc == 0x2459F8u) {
        ctx->pc = 0x2459FCu;
        goto label_2459fc;
    }
    ctx->pc = 0x2459F4u;
    SET_GPR_U32(ctx, 31, 0x2459FCu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2459F4u, 0x2459FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459FCu;
label_2459fc:
    // 0x2459fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2459fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245a00:
    // 0x245a00: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x245a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_245a04:
    // 0x245a04: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x245a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_245a08:
    // 0x245a08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x245a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245a0c:
    // 0x245a0c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245a10:
    // 0x245a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245a14:
    // 0x245a14: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x245a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_245a18:
    // 0x245a18: 0xc042288  jal         func_108A20
label_245a1c:
    if (ctx->pc == 0x245A1Cu) {
        ctx->pc = 0x245A20u;
        goto label_245a20;
    }
    ctx->pc = 0x245A18u;
    SET_GPR_U32(ctx, 31, 0x245A20u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x245A18u, 0x245A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A20u;
label_245a20:
    // 0x245a20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x245a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245a24:
    // 0x245a24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245a28:
    // 0x245a28: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x245a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_245a2c:
    // 0x245a2c: 0xc050540  jal         func_141500
label_245a30:
    if (ctx->pc == 0x245A30u) {
        ctx->pc = 0x245A34u;
        goto label_245a34;
    }
    ctx->pc = 0x245A2Cu;
    SET_GPR_U32(ctx, 31, 0x245A34u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x245A2Cu, 0x245A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A34u;
label_245a34:
    // 0x245a34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245a38:
    // 0x245a38: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x245a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_245a3c:
    // 0x245a3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x245a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_245a40:
    // 0x245a40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x245a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245a44:
    // 0x245a44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245a48:
    // 0x245a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245a4c:
    // 0x245a4c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x245a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_245a50:
    // 0x245a50: 0xc042288  jal         func_108A20
label_245a54:
    if (ctx->pc == 0x245A54u) {
        ctx->pc = 0x245A58u;
        goto label_245a58;
    }
    ctx->pc = 0x245A50u;
    SET_GPR_U32(ctx, 31, 0x245A58u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x245A50u, 0x245A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A58u;
label_245a58:
    // 0x245a58: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_245a5c:
    if (ctx->pc == 0x245A5Cu) {
        ctx->pc = 0x245A60u;
        goto label_245a60;
    }
    ctx->pc = 0x245A58u;
    {
        const bool branch_taken_0x245a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x245a58) {
            ctx->pc = 0x245A84u;
            goto label_245a84;
        }
    }
    ctx->pc = 0x245A60u;
label_245a60:
    // 0x245a60: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x245a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_245a64:
    // 0x245a64: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x245a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_245a68:
    // 0x245a68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x245a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245a6c:
    // 0x245a6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245a70:
    // 0x245a70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245a74:
    // 0x245a74: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x245a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_245a78:
    // 0x245a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245a7c:
    // 0x245a7c: 0xc04fe98  jal         func_13FA60
label_245a80:
    if (ctx->pc == 0x245A80u) {
        ctx->pc = 0x245A84u;
        goto label_245a84;
    }
    ctx->pc = 0x245A7Cu;
    SET_GPR_U32(ctx, 31, 0x245A84u);
    ctx->pc = 0x13FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA60u, 0x245A7Cu, 0x245A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A84u;
label_245a84:
    // 0x245a84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245a88:
    // 0x245a88: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_245a8c:
    // 0x245a8c: 0xc0915f4  jal         func_2457D0
label_245a90:
    if (ctx->pc == 0x245A90u) {
        ctx->pc = 0x245A94u;
        goto label_245a94;
    }
    ctx->pc = 0x245A8Cu;
    SET_GPR_U32(ctx, 31, 0x245A94u);
    ctx->pc = 0x2457D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457D0u, 0x245A8Cu, 0x245A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A94u;
label_245a94:
    // 0x245a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245a98:
    // 0x245a98: 0x1000000b  b           . + 4 + (0xB << 2)
label_245a9c:
    if (ctx->pc == 0x245A9Cu) {
        ctx->pc = 0x245AA0u;
        goto label_245aa0;
    }
    ctx->pc = 0x245A98u;
    {
        const bool branch_taken_0x245a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245a98) {
            ctx->pc = 0x245AC8u;
            goto label_245ac8;
        }
    }
    ctx->pc = 0x245AA0u;
label_245aa0:
    // 0x245aa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x245aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_245aa4:
    // 0x245aa4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x245aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_245aa8:
    // 0x245aa8: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
label_245aac:
    if (ctx->pc == 0x245AACu) {
        ctx->pc = 0x245AB0u;
        goto label_245ab0;
    }
    ctx->pc = 0x245AA8u;
    {
        const bool branch_taken_0x245aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x245aa8) {
            ctx->pc = 0x245AC4u;
            goto label_245ac4;
        }
    }
    ctx->pc = 0x245AB0u;
label_245ab0:
    // 0x245ab0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x245ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_245ab4:
    // 0x245ab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x245ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_245ab8:
    // 0x245ab8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x245ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_245abc:
    // 0x245abc: 0x40f809  jalr        $v0
label_245ac0:
    if (ctx->pc == 0x245AC0u) {
        ctx->pc = 0x245AC4u;
        goto label_245ac4;
    }
    ctx->pc = 0x245ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245AC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245ABCu, 0x245AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245AC4u;
label_245ac4:
    // 0x245ac4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x245ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_245ac8:
    // 0x245ac8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x245ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_245acc:
    // 0x245acc: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_245ad0:
    // 0x245ad0: 0xc0915ec  jal         func_2457B0
label_245ad4:
    if (ctx->pc == 0x245AD4u) {
        ctx->pc = 0x245AD8u;
        goto label_245ad8;
    }
    ctx->pc = 0x245AD0u;
    SET_GPR_U32(ctx, 31, 0x245AD8u);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x245AD0u, 0x245AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245AD8u;
label_245ad8:
    // 0x245ad8: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
label_245adc:
    if (ctx->pc == 0x245ADCu) {
        ctx->pc = 0x245AE0u;
        goto label_245ae0;
    }
    ctx->pc = 0x245AD8u;
    {
        const bool branch_taken_0x245ad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x245ad8) {
            ctx->pc = 0x245AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245aa0;
        }
    }
    ctx->pc = 0x245AE0u;
label_245ae0:
    // 0x245ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245ae4:
    // 0x245ae4: 0x10000002  b           . + 4 + (0x2 << 2)
label_245ae8:
    if (ctx->pc == 0x245AE8u) {
        ctx->pc = 0x245AECu;
        goto label_245aec;
    }
    ctx->pc = 0x245AE4u;
    {
        const bool branch_taken_0x245ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ae4) {
            ctx->pc = 0x245AF0u;
            goto label_245af0;
        }
    }
    ctx->pc = 0x245AECu;
label_245aec:
    // 0x245aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245af0:
    // 0x245af0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x245af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_245af4:
    // 0x245af4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x245af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_245af8:
    // 0x245af8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245afc:
    // 0x245afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245b00:
    // 0x245b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245b04:
    // 0x245b04: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x245b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_245b08:
    // 0x245b08: 0x3e00008  jr          $ra
label_245b0c:
    if (ctx->pc == 0x245B0Cu) {
        ctx->pc = 0x245B10u;
        goto label_fallthrough_0x245b08;
    }
    ctx->pc = 0x245B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245b08:
    ctx->pc = 0x245B10u;
}
