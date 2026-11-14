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

// Function: sub_0020B000
// Address: 0x20b000 - 0x20b050
void sub_0020B000_0x20b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B000_0x20b000");
#endif

    ctx->pc = 0x20b000u;

    // 0x20b000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20b004: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20b004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20b008: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x20b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x20b00c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x20b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x20b010: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x20b010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x20b014: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20b014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b018: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b01c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x20b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x20b020: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b024: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20b024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b028: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20b028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x20b02c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x20b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b030: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20b030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b034: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x20b034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x20b038: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20b03c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B044u;
    // 0x20b044: 0x0  nop
    ctx->pc = 0x20b044u;
    // NOP
    // 0x20b048: 0x0  nop
    ctx->pc = 0x20b048u;
    // NOP
    // 0x20b04c: 0x0  nop
    ctx->pc = 0x20b04cu;
    // NOP
    ctx->pc = 0x20b050u;
}
