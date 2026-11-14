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

// Function: sub_002670D0
// Address: 0x2670d0 - 0x267130
void sub_002670D0_0x2670d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002670D0_0x2670d0");
#endif

    switch (ctx->pc) {
        case 0x2670f4u: goto label_2670f4;
        default: break;
    }

    ctx->pc = 0x2670d0u;

    // 0x2670d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2670d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2670d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2670d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2670d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2670d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2670dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2670dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2670e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2670e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2670e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2670e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2670e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2670e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2670ec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2670ECu;
    SET_GPR_U32(ctx, 31, 0x2670F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2670ECu, 0x2670F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670F4u;
label_2670f4:
    // 0x2670f4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2670f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2670f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2670F8u;
    {
        const bool branch_taken_0x2670f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2670f8) {
            ctx->pc = 0x267110u;
            goto label_267110;
        }
    }
    ctx->pc = 0x267100u;
    // 0x267100: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x267100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x267104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267108: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x267108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x26710c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26710cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_267110:
    // 0x267110: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x267110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x267114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26711c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26711cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x267120: 0x3e00008  jr          $ra
    ctx->pc = 0x267120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267128u;
    // 0x267128: 0x0  nop
    ctx->pc = 0x267128u;
    // NOP
    // 0x26712c: 0x0  nop
    ctx->pc = 0x26712cu;
    // NOP
    ctx->pc = 0x267130u;
}
