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

// Function: sub_0026D860
// Address: 0x26d860 - 0x26dac0
void sub_0026D860_0x26d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D860_0x26d860");
#endif

    switch (ctx->pc) {
        case 0x26d8d0u: goto label_26d8d0;
        case 0x26d8e4u: goto label_26d8e4;
        case 0x26d8f8u: goto label_26d8f8;
        case 0x26d90cu: goto label_26d90c;
        case 0x26d928u: goto label_26d928;
        case 0x26d940u: goto label_26d940;
        case 0x26d954u: goto label_26d954;
        case 0x26d968u: goto label_26d968;
        case 0x26d97cu: goto label_26d97c;
        case 0x26d998u: goto label_26d998;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9c4u: goto label_26d9c4;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9ecu: goto label_26d9ec;
        case 0x26da08u: goto label_26da08;
        case 0x26da20u: goto label_26da20;
        case 0x26da34u: goto label_26da34;
        case 0x26da48u: goto label_26da48;
        case 0x26da5cu: goto label_26da5c;
        case 0x26da78u: goto label_26da78;
        case 0x26da9cu: goto label_26da9c;
        default: break;
    }

    ctx->pc = 0x26d860u;

    // 0x26d860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26d864: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26d864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26d868: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d86c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x26d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x26d870: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d874: 0x3e00008  jr          $ra
    ctx->pc = 0x26D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D87Cu;
    // 0x26d87c: 0x0  nop
    ctx->pc = 0x26d87cu;
    // NOP
    // 0x26d880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26d884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26d888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d890: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26d890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26d894: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26d894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x26d898: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x26d898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x26d89c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d8a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d8a4: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x26D8A4u;
    {
        const bool branch_taken_0x26d8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d8a4) {
            ctx->pc = 0x26DA80u;
            goto label_26da80;
        }
    }
    ctx->pc = 0x26D8ACu;
    // 0x26d8ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d8b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D8B0u;
    {
        const bool branch_taken_0x26d8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d8b0) {
            ctx->pc = 0x26D8C0u;
            goto label_26d8c0;
        }
    }
    ctx->pc = 0x26D8B8u;
    // 0x26d8b8: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x26D8B8u;
    {
        const bool branch_taken_0x26d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d8b8) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26D8C0u;
label_26d8c0:
    // 0x26d8c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d8c4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26d8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26d8c8: 0xc04809c  jal         func_120270
    ctx->pc = 0x26D8C8u;
    SET_GPR_U32(ctx, 31, 0x26D8D0u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26D8C8u, 0x26D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8D0u;
label_26d8d0:
    // 0x26d8d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d8d8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26d8dc: 0xc04808c  jal         func_120230
    ctx->pc = 0x26D8DCu;
    SET_GPR_U32(ctx, 31, 0x26D8E4u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26D8DCu, 0x26D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8E4u;
label_26d8e4:
    // 0x26d8e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26d8f0: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26D8F0u;
    SET_GPR_U32(ctx, 31, 0x26D8F8u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26D8F0u, 0x26D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8F8u;
label_26d8f8:
    // 0x26d8f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d900: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26d900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26d904: 0xc04808c  jal         func_120230
    ctx->pc = 0x26D904u;
    SET_GPR_U32(ctx, 31, 0x26D90Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26D904u, 0x26D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D90Cu;
label_26d90c:
    // 0x26d90c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D90Cu;
    {
        const bool branch_taken_0x26d90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d90c) {
            ctx->pc = 0x26D930u;
            goto label_26d930;
        }
    }
    ctx->pc = 0x26D914u;
    // 0x26d914: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d918: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26d918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26d91c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d920: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26D920u;
    SET_GPR_U32(ctx, 31, 0x26D928u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26D920u, 0x26D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D928u;
label_26d928:
    // 0x26d928: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x26D928u;
    {
        const bool branch_taken_0x26d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d928) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26D930u;
label_26d930:
    // 0x26d930: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d934: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26d938: 0xc04809c  jal         func_120270
    ctx->pc = 0x26D938u;
    SET_GPR_U32(ctx, 31, 0x26D940u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26D938u, 0x26D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D940u;
label_26d940:
    // 0x26d940: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d944: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d948: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26d948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26d94c: 0xc04808c  jal         func_120230
    ctx->pc = 0x26D94Cu;
    SET_GPR_U32(ctx, 31, 0x26D954u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26D94Cu, 0x26D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D954u;
label_26d954:
    // 0x26d954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d95c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26d95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26d960: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26D960u;
    SET_GPR_U32(ctx, 31, 0x26D968u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26D960u, 0x26D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D968u;
label_26d968:
    // 0x26d968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d96c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d970: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26d974: 0xc04808c  jal         func_120230
    ctx->pc = 0x26D974u;
    SET_GPR_U32(ctx, 31, 0x26D97Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26D974u, 0x26D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D97Cu;
label_26d97c:
    // 0x26d97c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D97Cu;
    {
        const bool branch_taken_0x26d97c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d97c) {
            ctx->pc = 0x26D9A0u;
            goto label_26d9a0;
        }
    }
    ctx->pc = 0x26D984u;
    // 0x26d984: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d988: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26d98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d990: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26D990u;
    SET_GPR_U32(ctx, 31, 0x26D998u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26D990u, 0x26D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D998u;
label_26d998:
    // 0x26d998: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x26D998u;
    {
        const bool branch_taken_0x26d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d998) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26D9A0u;
label_26d9a0:
    // 0x26d9a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d9a4: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26d9a8: 0xc04809c  jal         func_120270
    ctx->pc = 0x26D9A8u;
    SET_GPR_U32(ctx, 31, 0x26D9B0u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26D9A8u, 0x26D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9B0u;
label_26d9b0:
    // 0x26d9b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d9b8: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26d9bc: 0xc04808c  jal         func_120230
    ctx->pc = 0x26D9BCu;
    SET_GPR_U32(ctx, 31, 0x26D9C4u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26D9BCu, 0x26D9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9C4u;
label_26d9c4:
    // 0x26d9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26d9d0: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26D9D0u;
    SET_GPR_U32(ctx, 31, 0x26D9D8u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26D9D0u, 0x26D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9D8u;
label_26d9d8:
    // 0x26d9d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d9e0: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26d9e4: 0xc04808c  jal         func_120230
    ctx->pc = 0x26D9E4u;
    SET_GPR_U32(ctx, 31, 0x26D9ECu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26D9E4u, 0x26D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9ECu;
label_26d9ec:
    // 0x26d9ec: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D9ECu;
    {
        const bool branch_taken_0x26d9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d9ec) {
            ctx->pc = 0x26DA10u;
            goto label_26da10;
        }
    }
    ctx->pc = 0x26D9F4u;
    // 0x26d9f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d9f8: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26d9fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da00: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26DA00u;
    SET_GPR_U32(ctx, 31, 0x26DA08u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26DA00u, 0x26DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA08u;
label_26da08:
    // 0x26da08: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26DA08u;
    {
        const bool branch_taken_0x26da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26da08) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26DA10u;
label_26da10:
    // 0x26da10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26da14: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26da18: 0xc04809c  jal         func_120270
    ctx->pc = 0x26DA18u;
    SET_GPR_U32(ctx, 31, 0x26DA20u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26DA18u, 0x26DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA20u;
label_26da20:
    // 0x26da20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26da20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26da28: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26da2c: 0xc04808c  jal         func_120230
    ctx->pc = 0x26DA2Cu;
    SET_GPR_U32(ctx, 31, 0x26DA34u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26DA2Cu, 0x26DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA34u;
label_26da34:
    // 0x26da34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26da34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26da38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da3c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26da3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26da40: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26DA40u;
    SET_GPR_U32(ctx, 31, 0x26DA48u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26DA40u, 0x26DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA48u;
label_26da48:
    // 0x26da48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26da48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26da50: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26da54: 0xc04808c  jal         func_120230
    ctx->pc = 0x26DA54u;
    SET_GPR_U32(ctx, 31, 0x26DA5Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26DA54u, 0x26DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA5Cu;
label_26da5c:
    // 0x26da5c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26DA5Cu;
    {
        const bool branch_taken_0x26da5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26da5c) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26DA64u;
    // 0x26da64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26da68: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26da68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26da6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26da6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da70: 0xc09b258  jal         func_26C960
    ctx->pc = 0x26DA70u;
    SET_GPR_U32(ctx, 31, 0x26DA78u);
    ctx->pc = 0x26C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C960u, 0x26DA70u, 0x26DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA78u;
label_26da78:
    // 0x26da78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26DA78u;
    {
        const bool branch_taken_0x26da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26da78) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26DA80u;
label_26da80:
    // 0x26da80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26da84: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DA84u;
    {
        const bool branch_taken_0x26da84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x26da84) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26DA8Cu;
    // 0x26da8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26da90: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x26da90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26da94: 0xc09b6bc  jal         func_26DAF0
    ctx->pc = 0x26DA94u;
    SET_GPR_U32(ctx, 31, 0x26DA9Cu);
    ctx->pc = 0x26DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DAF0u, 0x26DA94u, 0x26DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA9Cu;
label_26da9c:
    // 0x26da9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26daa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26daa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26daa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26daa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26daa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26daa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26daac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26daacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x26DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DAB8u;
    // 0x26dab8: 0x0  nop
    ctx->pc = 0x26dab8u;
    // NOP
    // 0x26dabc: 0x0  nop
    ctx->pc = 0x26dabcu;
    // NOP
    ctx->pc = 0x26dac0u;
}
