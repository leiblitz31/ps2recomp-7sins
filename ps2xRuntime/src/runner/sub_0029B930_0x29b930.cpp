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

// Function: sub_0029B930
// Address: 0x29b930 - 0x29b9d0
void sub_0029B930_0x29b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B930_0x29b930");
#endif

    switch (ctx->pc) {
        case 0x29b960u: goto label_29b960;
        case 0x29b97cu: goto label_29b97c;
        case 0x29b990u: goto label_29b990;
        default: break;
    }

    ctx->pc = 0x29b930u;

    // 0x29b930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b940: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29b940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29b944: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29b944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29b948: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b94c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x29b94cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29b950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b958: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x29B958u;
    SET_GPR_U32(ctx, 31, 0x29B960u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x29B958u, 0x29B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B960u;
label_29b960:
    // 0x29b960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b964: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29B964u;
    {
        const bool branch_taken_0x29b964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b964) {
            ctx->pc = 0x29B9B0u;
            goto label_29b9b0;
        }
    }
    ctx->pc = 0x29B96Cu;
    // 0x29b96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b974: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x29B974u;
    SET_GPR_U32(ctx, 31, 0x29B97Cu);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x29B974u, 0x29B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B97Cu;
label_29b97c:
    // 0x29b97c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b980: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29b980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29b984: 0x24a5d858  addiu       $a1, $a1, -0x27A8
    ctx->pc = 0x29b984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957144));
    // 0x29b988: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x29B988u;
    SET_GPR_U32(ctx, 31, 0x29B990u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x29B988u, 0x29B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B990u;
label_29b990:
    // 0x29b990: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B990u;
    {
        const bool branch_taken_0x29b990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b990) {
            ctx->pc = 0x29B9B0u;
            goto label_29b9b0;
        }
    }
    ctx->pc = 0x29B998u;
    // 0x29b998: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29b998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b99c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b9a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29b9a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B9A8u;
    {
        const bool branch_taken_0x29b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9a8) {
            ctx->pc = 0x29B9B4u;
            goto label_29b9b4;
        }
    }
    ctx->pc = 0x29B9B0u;
label_29b9b0:
    // 0x29b9b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29b9b4:
    // 0x29b9b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b9c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B9CCu;
    // 0x29b9cc: 0x0  nop
    ctx->pc = 0x29b9ccu;
    // NOP
    ctx->pc = 0x29b9d0u;
}
