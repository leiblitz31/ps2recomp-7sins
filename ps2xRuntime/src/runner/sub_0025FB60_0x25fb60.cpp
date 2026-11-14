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

// Function: sub_0025FB60
// Address: 0x25fb60 - 0x25fbb0
void sub_0025FB60_0x25fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FB60_0x25fb60");
#endif

    ctx->pc = 0x25fb60u;

    // 0x25fb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25fb64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25fb68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25fb6c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x25fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x25fb70: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x25fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x25fb74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fb78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x25fb80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fb84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb88: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x25fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25fb8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fb90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb94: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x25fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x25fb98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25fb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FBA4u;
    // 0x25fba4: 0x0  nop
    ctx->pc = 0x25fba4u;
    // NOP
    // 0x25fba8: 0x0  nop
    ctx->pc = 0x25fba8u;
    // NOP
    // 0x25fbac: 0x0  nop
    ctx->pc = 0x25fbacu;
    // NOP
    ctx->pc = 0x25fbb0u;
}
