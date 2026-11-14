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

// Function: sub_0045B8A0
// Address: 0x45b8a0 - 0x45b9d0
void sub_0045B8A0_0x45b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B8A0_0x45b8a0");
#endif

    switch (ctx->pc) {
        case 0x45b8a0u: goto label_45b8a0;
        case 0x45b8a4u: goto label_45b8a4;
        case 0x45b8a8u: goto label_45b8a8;
        case 0x45b8acu: goto label_45b8ac;
        case 0x45b8b0u: goto label_45b8b0;
        case 0x45b8b4u: goto label_45b8b4;
        case 0x45b8b8u: goto label_45b8b8;
        case 0x45b8bcu: goto label_45b8bc;
        case 0x45b8c0u: goto label_45b8c0;
        case 0x45b8c4u: goto label_45b8c4;
        case 0x45b8c8u: goto label_45b8c8;
        case 0x45b8ccu: goto label_45b8cc;
        case 0x45b8d0u: goto label_45b8d0;
        case 0x45b8d4u: goto label_45b8d4;
        case 0x45b8d8u: goto label_45b8d8;
        case 0x45b8dcu: goto label_45b8dc;
        case 0x45b8e0u: goto label_45b8e0;
        case 0x45b8e4u: goto label_45b8e4;
        case 0x45b8e8u: goto label_45b8e8;
        case 0x45b8ecu: goto label_45b8ec;
        case 0x45b8f0u: goto label_45b8f0;
        case 0x45b8f4u: goto label_45b8f4;
        case 0x45b8f8u: goto label_45b8f8;
        case 0x45b8fcu: goto label_45b8fc;
        case 0x45b900u: goto label_45b900;
        case 0x45b904u: goto label_45b904;
        case 0x45b908u: goto label_45b908;
        case 0x45b90cu: goto label_45b90c;
        case 0x45b910u: goto label_45b910;
        case 0x45b914u: goto label_45b914;
        case 0x45b918u: goto label_45b918;
        case 0x45b91cu: goto label_45b91c;
        case 0x45b920u: goto label_45b920;
        case 0x45b924u: goto label_45b924;
        case 0x45b928u: goto label_45b928;
        case 0x45b92cu: goto label_45b92c;
        case 0x45b930u: goto label_45b930;
        case 0x45b934u: goto label_45b934;
        case 0x45b938u: goto label_45b938;
        case 0x45b93cu: goto label_45b93c;
        case 0x45b940u: goto label_45b940;
        case 0x45b944u: goto label_45b944;
        case 0x45b948u: goto label_45b948;
        case 0x45b94cu: goto label_45b94c;
        case 0x45b950u: goto label_45b950;
        case 0x45b954u: goto label_45b954;
        case 0x45b958u: goto label_45b958;
        case 0x45b95cu: goto label_45b95c;
        case 0x45b960u: goto label_45b960;
        case 0x45b964u: goto label_45b964;
        case 0x45b968u: goto label_45b968;
        case 0x45b96cu: goto label_45b96c;
        case 0x45b970u: goto label_45b970;
        case 0x45b974u: goto label_45b974;
        case 0x45b978u: goto label_45b978;
        case 0x45b97cu: goto label_45b97c;
        case 0x45b980u: goto label_45b980;
        case 0x45b984u: goto label_45b984;
        case 0x45b988u: goto label_45b988;
        case 0x45b98cu: goto label_45b98c;
        case 0x45b990u: goto label_45b990;
        case 0x45b994u: goto label_45b994;
        case 0x45b998u: goto label_45b998;
        case 0x45b99cu: goto label_45b99c;
        case 0x45b9a0u: goto label_45b9a0;
        case 0x45b9a4u: goto label_45b9a4;
        case 0x45b9a8u: goto label_45b9a8;
        case 0x45b9acu: goto label_45b9ac;
        case 0x45b9b0u: goto label_45b9b0;
        case 0x45b9b4u: goto label_45b9b4;
        case 0x45b9b8u: goto label_45b9b8;
        case 0x45b9bcu: goto label_45b9bc;
        case 0x45b9c0u: goto label_45b9c0;
        case 0x45b9c4u: goto label_45b9c4;
        case 0x45b9c8u: goto label_45b9c8;
        case 0x45b9ccu: goto label_45b9cc;
        default: break;
    }

    ctx->pc = 0x45b8a0u;

label_45b8a0:
    // 0x45b8a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x45b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_45b8a4:
    // 0x45b8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_45b8a8:
    // 0x45b8a8: 0xc11644c  jal         func_459130
label_45b8ac:
    if (ctx->pc == 0x45B8ACu) {
        ctx->pc = 0x45B8B0u;
        goto label_45b8b0;
    }
    ctx->pc = 0x45B8A8u;
    SET_GPR_U32(ctx, 31, 0x45B8B0u);
    ctx->pc = 0x459130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459130u, 0x45B8A8u, 0x45B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B8B0u;
label_45b8b0:
    // 0x45b8b0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_45b8b4:
    if (ctx->pc == 0x45B8B4u) {
        ctx->pc = 0x45B8B8u;
        goto label_45b8b8;
    }
    ctx->pc = 0x45B8B0u;
    {
        const bool branch_taken_0x45b8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b8b0) {
            ctx->pc = 0x45B978u;
            goto label_45b978;
        }
    }
    ctx->pc = 0x45B8B8u;
label_45b8b8:
    // 0x45b8b8: 0x8f82b158  lw          $v0, -0x4EA8($gp)
    ctx->pc = 0x45b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947160)));
label_45b8bc:
    // 0x45b8bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_45b8c0:
    if (ctx->pc == 0x45B8C0u) {
        ctx->pc = 0x45B8C4u;
        goto label_45b8c4;
    }
    ctx->pc = 0x45B8BCu;
    {
        const bool branch_taken_0x45b8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b8bc) {
            ctx->pc = 0x45B978u;
            goto label_45b978;
        }
    }
    ctx->pc = 0x45B8C4u;
label_45b8c4:
    // 0x45b8c4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45b8c8:
    // 0x45b8c8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45b8cc:
    // 0x45b8cc: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x45b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_45b8d0:
    // 0x45b8d0: 0xc115ee8  jal         func_457BA0
label_45b8d4:
    if (ctx->pc == 0x45B8D4u) {
        ctx->pc = 0x45B8D8u;
        goto label_45b8d8;
    }
    ctx->pc = 0x45B8D0u;
    SET_GPR_U32(ctx, 31, 0x45B8D8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45B8D0u, 0x45B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B8D8u;
label_45b8d8:
    // 0x45b8d8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45b8dc:
    if (ctx->pc == 0x45B8DCu) {
        ctx->pc = 0x45B8E0u;
        goto label_45b8e0;
    }
    ctx->pc = 0x45B8D8u;
    {
        const bool branch_taken_0x45b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b8d8) {
            ctx->pc = 0x45B978u;
            goto label_45b978;
        }
    }
    ctx->pc = 0x45B8E0u;
label_45b8e0:
    // 0x45b8e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x45b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_45b8e4:
    // 0x45b8e4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_45b8e8:
    if (ctx->pc == 0x45B8E8u) {
        ctx->pc = 0x45B8ECu;
        goto label_45b8ec;
    }
    ctx->pc = 0x45B8E4u;
    {
        const bool branch_taken_0x45b8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b8e4) {
            ctx->pc = 0x45B978u;
            goto label_45b978;
        }
    }
    ctx->pc = 0x45B8ECu;
label_45b8ec:
    // 0x45b8ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b8f0:
    // 0x45b8f0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45b8f4:
    // 0x45b8f4: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x45b8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_45b8f8:
    // 0x45b8f8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45b8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45b8fc:
    // 0x45b8fc: 0x24e7eb60  addiu       $a3, $a3, -0x14A0
    ctx->pc = 0x45b8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962016));
label_45b900:
    // 0x45b900: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x45b900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_45b904:
    // 0x45b904: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45b904u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45b908:
    // 0x45b908: 0x2529eb80  addiu       $t1, $t1, -0x1480
    ctx->pc = 0x45b908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962048));
label_45b90c:
    // 0x45b90c: 0xc113940  jal         func_44E500
label_45b910:
    if (ctx->pc == 0x45B910u) {
        ctx->pc = 0x45B914u;
        goto label_45b914;
    }
    ctx->pc = 0x45B90Cu;
    SET_GPR_U32(ctx, 31, 0x45B914u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45B90Cu, 0x45B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B914u;
label_45b914:
    // 0x45b914: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b918:
    // 0x45b918: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45b918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45b91c:
    // 0x45b91c: 0x24a5eba0  addiu       $a1, $a1, -0x1460
    ctx->pc = 0x45b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962080));
label_45b920:
    // 0x45b920: 0xc115c24  jal         func_457090
label_45b924:
    if (ctx->pc == 0x45B924u) {
        ctx->pc = 0x45B928u;
        goto label_45b928;
    }
    ctx->pc = 0x45B920u;
    SET_GPR_U32(ctx, 31, 0x45B928u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45B920u, 0x45B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B928u;
label_45b928:
    // 0x45b928: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b92c:
    // 0x45b92c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x45b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_45b930:
    // 0x45b930: 0x40f809  jalr        $v0
label_45b934:
    if (ctx->pc == 0x45B934u) {
        ctx->pc = 0x45B938u;
        goto label_45b938;
    }
    ctx->pc = 0x45B930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45B938u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B930u, 0x45B938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45B938u;
label_45b938:
    // 0x45b938: 0xaf82b158  sw          $v0, -0x4EA8($gp)
    ctx->pc = 0x45b938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947160), GPR_U32(ctx, 2));
label_45b93c:
    // 0x45b93c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_45b940:
    // 0x45b940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45b944:
    if (ctx->pc == 0x45B944u) {
        ctx->pc = 0x45B948u;
        goto label_45b948;
    }
    ctx->pc = 0x45B940u;
    {
        const bool branch_taken_0x45b940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b940) {
            ctx->pc = 0x45B950u;
            goto label_45b950;
        }
    }
    ctx->pc = 0x45B948u;
label_45b948:
    // 0x45b948: 0xd  break       0
    ctx->pc = 0x45b948u;
    runtime->handleBreak(rdram, ctx);
label_45b94c:
    // 0x45b94c: 0x0  nop
    ctx->pc = 0x45b94cu;
    // NOP
label_45b950:
    // 0x45b950: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_45b954:
    // 0x45b954: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45b958:
    // 0x45b958: 0xc11392c  jal         func_44E4B0
label_45b95c:
    if (ctx->pc == 0x45B95Cu) {
        ctx->pc = 0x45B960u;
        goto label_45b960;
    }
    ctx->pc = 0x45B958u;
    SET_GPR_U32(ctx, 31, 0x45B960u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45B958u, 0x45B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B960u;
label_45b960:
    // 0x45b960: 0x10000005  b           . + 4 + (0x5 << 2)
label_45b964:
    if (ctx->pc == 0x45B964u) {
        ctx->pc = 0x45B968u;
        goto label_45b968;
    }
    ctx->pc = 0x45B960u;
    {
        const bool branch_taken_0x45b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b960) {
            ctx->pc = 0x45B978u;
            goto label_45b978;
        }
    }
    ctx->pc = 0x45B968u;
label_45b968:
    // 0x45b968: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x45b968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_45b96c:
    // 0x45b96c: 0x2484ec00  addiu       $a0, $a0, -0x1400
    ctx->pc = 0x45b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
label_45b970:
    // 0x45b970: 0xc0bbc80  jal         func_2EF200
label_45b974:
    if (ctx->pc == 0x45B974u) {
        ctx->pc = 0x45B978u;
        goto label_45b978;
    }
    ctx->pc = 0x45B970u;
    SET_GPR_U32(ctx, 31, 0x45B978u);
    ctx->pc = 0x2EF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF200u, 0x45B970u, 0x45B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B978u;
label_45b978:
    // 0x45b978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x45b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b97c:
    // 0x45b97c: 0xc0c400a  jal         func_310028
label_45b980:
    if (ctx->pc == 0x45B980u) {
        ctx->pc = 0x45B984u;
        goto label_45b984;
    }
    ctx->pc = 0x45B97Cu;
    SET_GPR_U32(ctx, 31, 0x45B984u);
    ctx->pc = 0x310028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310028u, 0x45B97Cu, 0x45B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B984u;
label_45b984:
    // 0x45b984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45b988:
    // 0x45b988: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
label_45b98c:
    if (ctx->pc == 0x45B98Cu) {
        ctx->pc = 0x45B990u;
        goto label_45b990;
    }
    ctx->pc = 0x45B988u;
    {
        const bool branch_taken_0x45b988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x45b988) {
            ctx->pc = 0x45B968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b968;
        }
    }
    ctx->pc = 0x45B990u;
label_45b990:
    // 0x45b990: 0xc116654  jal         func_459950
label_45b994:
    if (ctx->pc == 0x45B994u) {
        ctx->pc = 0x45B998u;
        goto label_45b998;
    }
    ctx->pc = 0x45B990u;
    SET_GPR_U32(ctx, 31, 0x45B998u);
    ctx->pc = 0x459950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459950u, 0x45B990u, 0x45B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B998u;
label_45b998:
    // 0x45b998: 0xff82bf70  sd          $v0, -0x4090($gp)
    ctx->pc = 0x45b998u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950768), GPR_U64(ctx, 2));
label_45b99c:
    // 0x45b99c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45b9a0:
    // 0x45b9a0: 0xaf82bf60  sw          $v0, -0x40A0($gp)
    ctx->pc = 0x45b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950752), GPR_U32(ctx, 2));
label_45b9a4:
    // 0x45b9a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45b9a8:
    // 0x45b9a8: 0xaf82bf64  sw          $v0, -0x409C($gp)
    ctx->pc = 0x45b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950756), GPR_U32(ctx, 2));
label_45b9ac:
    // 0x45b9ac: 0xc116c40  jal         func_45B100
label_45b9b0:
    if (ctx->pc == 0x45B9B0u) {
        ctx->pc = 0x45B9B4u;
        goto label_45b9b4;
    }
    ctx->pc = 0x45B9ACu;
    SET_GPR_U32(ctx, 31, 0x45B9B4u);
    ctx->pc = 0x45B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B100u, 0x45B9ACu, 0x45B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B9B4u;
label_45b9b4:
    // 0x45b9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45b9b8:
    // 0x45b9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45b9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45b9bc:
    // 0x45b9bc: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x45b9bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_45b9c0:
    // 0x45b9c0: 0x3e00008  jr          $ra
label_45b9c4:
    if (ctx->pc == 0x45B9C4u) {
        ctx->pc = 0x45B9C8u;
        goto label_45b9c8;
    }
    ctx->pc = 0x45B9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B9C8u;
label_45b9c8:
    // 0x45b9c8: 0x0  nop
    ctx->pc = 0x45b9c8u;
    // NOP
label_45b9cc:
    // 0x45b9cc: 0x0  nop
    ctx->pc = 0x45b9ccu;
    // NOP
    ctx->pc = 0x45b9d0u;
}
