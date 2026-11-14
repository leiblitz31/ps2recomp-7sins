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

// Function: sub_0045B760
// Address: 0x45b760 - 0x45b800
void sub_0045B760_0x45b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B760_0x45b760");
#endif

    ctx->pc = 0x45b760u;

    // 0x45b760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45b764: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45b764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45b768: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x45b768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45b76c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b770: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45B770u;
    {
        const bool branch_taken_0x45b770 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x45b770) {
            ctx->pc = 0x45B784u;
            goto label_45b784;
        }
    }
    ctx->pc = 0x45B778u;
    // 0x45b778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45b778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45b77c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x45B77Cu;
    {
        const bool branch_taken_0x45b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b77c) {
            ctx->pc = 0x45B7ECu;
            goto label_45b7ec;
        }
    }
    ctx->pc = 0x45B784u;
label_45b784:
    // 0x45b784: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45b78c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x45B78Cu;
    {
        const bool branch_taken_0x45b78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45b78c) {
            ctx->pc = 0x45B7D0u;
            goto label_45b7d0;
        }
    }
    ctx->pc = 0x45B794u;
    // 0x45b794: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x45B794u;
    {
        const bool branch_taken_0x45b794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b794) {
            ctx->pc = 0x45B7BCu;
            goto label_45b7bc;
        }
    }
    ctx->pc = 0x45B79Cu;
    // 0x45b79c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45b7a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45B7A0u;
    {
        const bool branch_taken_0x45b7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45b7a0) {
            ctx->pc = 0x45B7B0u;
            goto label_45b7b0;
        }
    }
    ctx->pc = 0x45B7A8u;
    // 0x45b7a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x45B7A8u;
    {
        const bool branch_taken_0x45b7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b7a8) {
            ctx->pc = 0x45B7E8u;
            goto label_45b7e8;
        }
    }
    ctx->pc = 0x45B7B0u;
label_45b7b0:
    // 0x45b7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45b7b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45B7B4u;
    {
        const bool branch_taken_0x45b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b7b4) {
            ctx->pc = 0x45B7ECu;
            goto label_45b7ec;
        }
    }
    ctx->pc = 0x45B7BCu;
label_45b7bc:
    // 0x45b7bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b7c0: 0x2842004e  slti        $v0, $v0, 0x4E
    ctx->pc = 0x45b7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)78) ? 1 : 0);
    // 0x45b7c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45b7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45b7c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x45B7C8u;
    {
        const bool branch_taken_0x45b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b7c8) {
            ctx->pc = 0x45B7ECu;
            goto label_45b7ec;
        }
    }
    ctx->pc = 0x45B7D0u;
label_45b7d0:
    // 0x45b7d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b7d4: 0x284200b1  slti        $v0, $v0, 0xB1
    ctx->pc = 0x45b7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x45b7d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x45b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x45b7dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45b7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45b7e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45B7E0u;
    {
        const bool branch_taken_0x45b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b7e0) {
            ctx->pc = 0x45B7ECu;
            goto label_45b7ec;
        }
    }
    ctx->pc = 0x45B7E8u;
label_45b7e8:
    // 0x45b7e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45b7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b7ec:
    // 0x45b7ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45b7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45b7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x45B7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B7F8u;
    // 0x45b7f8: 0x0  nop
    ctx->pc = 0x45b7f8u;
    // NOP
    // 0x45b7fc: 0x0  nop
    ctx->pc = 0x45b7fcu;
    // NOP
    ctx->pc = 0x45b800u;
}
