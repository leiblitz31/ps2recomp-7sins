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

// Function: sub_00267700
// Address: 0x267700 - 0x267750
void sub_00267700_0x267700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267700_0x267700");
#endif

    ctx->pc = 0x267700u;

    // 0x267700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x267704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x267704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x267708: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x267708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x26770c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x26770cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x267710: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x267710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x267714: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x267714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267718: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x267718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26771c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26771cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x267720: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x267720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267724: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x267724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267728: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x267728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x26772c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267730: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x267730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267734: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x267734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x267738: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x267738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26773c: 0x3e00008  jr          $ra
    ctx->pc = 0x26773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26773Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267744u;
    // 0x267744: 0x0  nop
    ctx->pc = 0x267744u;
    // NOP
    // 0x267748: 0x0  nop
    ctx->pc = 0x267748u;
    // NOP
    // 0x26774c: 0x0  nop
    ctx->pc = 0x26774cu;
    // NOP
    ctx->pc = 0x267750u;
}
