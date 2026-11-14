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

// Function: sub_0022B8A0
// Address: 0x22b8a0 - 0x22bab0
void sub_0022B8A0_0x22b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B8A0_0x22b8a0");
#endif

    switch (ctx->pc) {
        case 0x22b910u: goto label_22b910;
        case 0x22b920u: goto label_22b920;
        case 0x22b938u: goto label_22b938;
        case 0x22b950u: goto label_22b950;
        case 0x22b960u: goto label_22b960;
        case 0x22b980u: goto label_22b980;
        case 0x22b990u: goto label_22b990;
        case 0x22b9a8u: goto label_22b9a8;
        case 0x22b9c0u: goto label_22b9c0;
        case 0x22b9dcu: goto label_22b9dc;
        case 0x22b9ecu: goto label_22b9ec;
        case 0x22b9fcu: goto label_22b9fc;
        case 0x22ba14u: goto label_22ba14;
        case 0x22ba24u: goto label_22ba24;
        case 0x22ba34u: goto label_22ba34;
        case 0x22ba44u: goto label_22ba44;
        case 0x22ba60u: goto label_22ba60;
        case 0x22ba80u: goto label_22ba80;
        default: break;
    }

    ctx->pc = 0x22b8a0u;

    // 0x22b8a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22b8a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22b8a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22b8ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22b8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22b8b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b8bc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x22b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x22b8c0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x22b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x22b8c4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x22b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x22b8c8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x22b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x22b8cc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x22b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x22b8d0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x22b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x22b8d4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x22b8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b8d8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x22b8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b8dc: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x22b8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b8e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b8e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b8e8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22B8E8u;
    {
        const bool branch_taken_0x22b8e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b8e8) {
            ctx->pc = 0x22B940u;
            goto label_22b940;
        }
    }
    ctx->pc = 0x22B8F0u;
    // 0x22b8f0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x22B8F0u;
    {
        const bool branch_taken_0x22b8f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b8f0) {
            ctx->pc = 0x22B9CCu;
            goto label_22b9cc;
        }
    }
    ctx->pc = 0x22B8F8u;
    // 0x22b8f8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x22B8F8u;
    {
        const bool branch_taken_0x22b8f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b8f8) {
            ctx->pc = 0x22B940u;
            goto label_22b940;
        }
    }
    ctx->pc = 0x22B900u;
    // 0x22b900: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x22b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x22b904: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b908: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B908u;
    SET_GPR_U32(ctx, 31, 0x22B910u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B908u, 0x22B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B910u;
label_22b910:
    // 0x22b910: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22b910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b918: 0xc08a90c  jal         func_22A430
    ctx->pc = 0x22B918u;
    SET_GPR_U32(ctx, 31, 0x22B920u);
    ctx->pc = 0x22A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A430u, 0x22B918u, 0x22B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B920u;
label_22b920:
    // 0x22b920: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x22b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b924: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22b928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b92c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b930: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B930u;
    SET_GPR_U32(ctx, 31, 0x22B938u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B930u, 0x22B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B938u;
label_22b938:
    // 0x22b938: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22B938u;
    {
        const bool branch_taken_0x22b938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b938) {
            ctx->pc = 0x22B9CCu;
            goto label_22b9cc;
        }
    }
    ctx->pc = 0x22B940u;
label_22b940:
    // 0x22b940: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b944: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b948: 0xc08aeb4  jal         func_22BAD0
    ctx->pc = 0x22B948u;
    SET_GPR_U32(ctx, 31, 0x22B950u);
    ctx->pc = 0x22BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BAD0u, 0x22B948u, 0x22B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B950u;
label_22b950:
    // 0x22b950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b958: 0xc08a904  jal         func_22A410
    ctx->pc = 0x22B958u;
    SET_GPR_U32(ctx, 31, 0x22B960u);
    ctx->pc = 0x22A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A410u, 0x22B958u, 0x22B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B960u;
label_22b960:
    // 0x22b960: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22b960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x22b964: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b96c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22B96Cu;
    {
        const bool branch_taken_0x22b96c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b96c) {
            ctx->pc = 0x22B99Cu;
            goto label_22b99c;
        }
    }
    ctx->pc = 0x22B974u;
    // 0x22b974: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b978: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x22B978u;
    SET_GPR_U32(ctx, 31, 0x22B980u);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x22B978u, 0x22B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B980u;
label_22b980:
    // 0x22b980: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22b980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x22b984: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b988: 0xc089e94  jal         func_227A50
    ctx->pc = 0x22B988u;
    SET_GPR_U32(ctx, 31, 0x22B990u);
    ctx->pc = 0x227A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A50u, 0x22B988u, 0x22B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B990u;
label_22b990:
    // 0x22b990: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22b990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x22b994: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x22B994u;
    {
        const bool branch_taken_0x22b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b994) {
            ctx->pc = 0x22BA18u;
            goto label_22ba18;
        }
    }
    ctx->pc = 0x22B99Cu;
label_22b99c:
    // 0x22b99c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b9a0: 0xc089e9c  jal         func_227A70
    ctx->pc = 0x22B9A0u;
    SET_GPR_U32(ctx, 31, 0x22B9A8u);
    ctx->pc = 0x227A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A70u, 0x22B9A0u, 0x22B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9A8u;
label_22b9a8:
    // 0x22b9a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b9ac: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22B9ACu;
    {
        const bool branch_taken_0x22b9ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b9ac) {
            ctx->pc = 0x22BA18u;
            goto label_22ba18;
        }
    }
    ctx->pc = 0x22B9B4u;
    // 0x22b9b4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b9b8: 0xc089e9c  jal         func_227A70
    ctx->pc = 0x22B9B8u;
    SET_GPR_U32(ctx, 31, 0x22B9C0u);
    ctx->pc = 0x227A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A70u, 0x22B9B8u, 0x22B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9C0u;
label_22b9c0:
    // 0x22b9c0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x22b9c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22B9C4u;
    {
        const bool branch_taken_0x22b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b9c4) {
            ctx->pc = 0x22BA18u;
            goto label_22ba18;
        }
    }
    ctx->pc = 0x22B9CCu;
label_22b9cc:
    // 0x22b9cc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b9d0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b9d4: 0xc08aeb4  jal         func_22BAD0
    ctx->pc = 0x22B9D4u;
    SET_GPR_U32(ctx, 31, 0x22B9DCu);
    ctx->pc = 0x22BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BAD0u, 0x22B9D4u, 0x22B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9DCu;
label_22b9dc:
    // 0x22b9dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9e4: 0xc08a8fc  jal         func_22A3F0
    ctx->pc = 0x22B9E4u;
    SET_GPR_U32(ctx, 31, 0x22B9ECu);
    ctx->pc = 0x22A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3F0u, 0x22B9E4u, 0x22B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9ECu;
label_22b9ec:
    // 0x22b9ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x22b9f0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b9f4: 0xc089e94  jal         func_227A50
    ctx->pc = 0x22B9F4u;
    SET_GPR_U32(ctx, 31, 0x22B9FCu);
    ctx->pc = 0x227A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A50u, 0x22B9F4u, 0x22B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9FCu;
label_22b9fc:
    // 0x22b9fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ba00: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BA00u;
    {
        const bool branch_taken_0x22ba00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ba00) {
            ctx->pc = 0x22BA18u;
            goto label_22ba18;
        }
    }
    ctx->pc = 0x22BA08u;
    // 0x22ba08: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ba0c: 0xc089e94  jal         func_227A50
    ctx->pc = 0x22BA0Cu;
    SET_GPR_U32(ctx, 31, 0x22BA14u);
    ctx->pc = 0x227A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A50u, 0x22BA0Cu, 0x22BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA14u;
label_22ba14:
    // 0x22ba14: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_22ba18:
    // 0x22ba18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba1c: 0xc08aeac  jal         func_22BAB0
    ctx->pc = 0x22BA1Cu;
    SET_GPR_U32(ctx, 31, 0x22BA24u);
    ctx->pc = 0x22BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BAB0u, 0x22BA1Cu, 0x22BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA24u;
label_22ba24:
    // 0x22ba24: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x22ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x22ba28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba2c: 0xc08a904  jal         func_22A410
    ctx->pc = 0x22BA2Cu;
    SET_GPR_U32(ctx, 31, 0x22BA34u);
    ctx->pc = 0x22A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A410u, 0x22BA2Cu, 0x22BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA34u;
label_22ba34:
    // 0x22ba34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ba38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba3c: 0xc08a8fc  jal         func_22A3F0
    ctx->pc = 0x22BA3Cu;
    SET_GPR_U32(ctx, 31, 0x22BA44u);
    ctx->pc = 0x22A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3F0u, 0x22BA3Cu, 0x22BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA44u;
label_22ba44:
    // 0x22ba44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ba48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ba4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ba50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba54: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x22ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22ba58: 0xc042858  jal         func_10A160
    ctx->pc = 0x22BA58u;
    SET_GPR_U32(ctx, 31, 0x22BA60u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x22BA58u, 0x22BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA60u;
label_22ba60:
    // 0x22ba60: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x22ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ba64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22ba68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ba6c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22ba70: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x22ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ba74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba78: 0xc08a1d4  jal         func_228750
    ctx->pc = 0x22BA78u;
    SET_GPR_U32(ctx, 31, 0x22BA80u);
    ctx->pc = 0x228750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228750u, 0x22BA78u, 0x22BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA80u;
label_22ba80:
    // 0x22ba80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22ba80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ba84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ba84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ba88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ba88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ba8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ba8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ba90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ba90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ba94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ba94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ba98: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x22ba98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x22ba9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BAA4u;
    // 0x22baa4: 0x0  nop
    ctx->pc = 0x22baa4u;
    // NOP
    // 0x22baa8: 0x0  nop
    ctx->pc = 0x22baa8u;
    // NOP
    // 0x22baac: 0x0  nop
    ctx->pc = 0x22baacu;
    // NOP
    ctx->pc = 0x22bab0u;
}
