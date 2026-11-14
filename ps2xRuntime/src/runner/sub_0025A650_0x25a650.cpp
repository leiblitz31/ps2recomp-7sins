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

// Function: sub_0025A650
// Address: 0x25a650 - 0x25a680
void sub_0025A650_0x25a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A650_0x25a650");
#endif

    ctx->pc = 0x25a650u;

    // 0x25a650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a654: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a658: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x25a658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x25a65c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x25a65cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a660: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a664: 0xa06400f8  sb          $a0, 0xF8($v1)
    ctx->pc = 0x25a664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 248), (uint8_t)GPR_U32(ctx, 4));
    // 0x25a668: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a66c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A674u;
    // 0x25a674: 0x0  nop
    ctx->pc = 0x25a674u;
    // NOP
    // 0x25a678: 0x0  nop
    ctx->pc = 0x25a678u;
    // NOP
    // 0x25a67c: 0x0  nop
    ctx->pc = 0x25a67cu;
    // NOP
    ctx->pc = 0x25a680u;
}
