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

// Function: sub_0013C000
// Address: 0x13c000 - 0x13c030
void sub_0013C000_0x13c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C000_0x13c000");
#endif

    ctx->pc = 0x13c000u;

    // 0x13c000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c004: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13c004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13c008: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x13c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x13c00c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c010: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13c010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c014: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x13c014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13c018: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13c018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c01c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C024u;
    // 0x13c024: 0x0  nop
    ctx->pc = 0x13c024u;
    // NOP
    // 0x13c028: 0x0  nop
    ctx->pc = 0x13c028u;
    // NOP
    // 0x13c02c: 0x0  nop
    ctx->pc = 0x13c02cu;
    // NOP
    ctx->pc = 0x13c030u;
}
