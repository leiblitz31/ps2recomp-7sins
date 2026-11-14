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

// Function: sub_00479510
// Address: 0x479510 - 0x479540
void sub_00479510_0x479510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479510_0x479510");
#endif

    ctx->pc = 0x479510u;

    // 0x479510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x479510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x479514: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x479514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x479518: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x479518u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x47951c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x47951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x479520: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x479520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479524: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x479524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x479528: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x479528u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x47952c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47952cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x479530: 0x3e00008  jr          $ra
    ctx->pc = 0x479530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479538u;
    // 0x479538: 0x0  nop
    ctx->pc = 0x479538u;
    // NOP
    // 0x47953c: 0x0  nop
    ctx->pc = 0x47953cu;
    // NOP
    ctx->pc = 0x479540u;
}
