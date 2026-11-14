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

// Function: sub_004779F0
// Address: 0x4779f0 - 0x477a40
void sub_004779F0_0x4779f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004779F0_0x4779f0");
#endif

    ctx->pc = 0x4779f0u;

    // 0x4779f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4779f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4779f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4779f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4779f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4779f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4779fc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x4779fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x477a00: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x477a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x477a04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x477a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477a08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x477a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477a0c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x477a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x477a10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x477a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477a14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x477a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477a18: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x477a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x477a1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x477a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477a20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x477a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477a24: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x477a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x477a28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x477a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x477a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x477A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477A34u;
    // 0x477a34: 0x0  nop
    ctx->pc = 0x477a34u;
    // NOP
    // 0x477a38: 0x0  nop
    ctx->pc = 0x477a38u;
    // NOP
    // 0x477a3c: 0x0  nop
    ctx->pc = 0x477a3cu;
    // NOP
    ctx->pc = 0x477a40u;
}
