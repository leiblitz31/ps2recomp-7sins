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

// Function: sub_00261A00
// Address: 0x261a00 - 0x261a30
void sub_00261A00_0x261a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261A00_0x261a00");
#endif

    ctx->pc = 0x261a00u;

    // 0x261a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x261a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x261a04: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261a08: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x261a08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x261a0c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x261a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x261a10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261a14: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x261a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261a18: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x261a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x261a1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x261a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x261a20: 0x3e00008  jr          $ra
    ctx->pc = 0x261A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261A28u;
    // 0x261a28: 0x0  nop
    ctx->pc = 0x261a28u;
    // NOP
    // 0x261a2c: 0x0  nop
    ctx->pc = 0x261a2cu;
    // NOP
    ctx->pc = 0x261a30u;
}
