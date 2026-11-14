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

// Function: sub_0018CD70
// Address: 0x18cd70 - 0x18cdc0
void sub_0018CD70_0x18cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CD70_0x18cd70");
#endif

    ctx->pc = 0x18cd70u;

    // 0x18cd70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18cd74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18cd78: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x18cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18cd7c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x18cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x18cd80: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x18cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x18cd84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cd88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cd8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x18cd90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cd94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cd98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x18cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x18cd9c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cda0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cda4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x18cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x18cda8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18cda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18cdac: 0x3e00008  jr          $ra
    ctx->pc = 0x18CDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CDB4u;
    // 0x18cdb4: 0x0  nop
    ctx->pc = 0x18cdb4u;
    // NOP
    // 0x18cdb8: 0x0  nop
    ctx->pc = 0x18cdb8u;
    // NOP
    // 0x18cdbc: 0x0  nop
    ctx->pc = 0x18cdbcu;
    // NOP
    ctx->pc = 0x18cdc0u;
}
