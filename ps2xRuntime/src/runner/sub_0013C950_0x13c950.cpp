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

// Function: sub_0013C950
// Address: 0x13c950 - 0x13c980
void sub_0013C950_0x13c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C950_0x13c950");
#endif

    ctx->pc = 0x13c950u;

    // 0x13c950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c954: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13c954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13c958: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x13c958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c95c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x13c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x13c960: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c964: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13c964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c968: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x13c968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13c96c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13c96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13c970: 0x3e00008  jr          $ra
    ctx->pc = 0x13C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C978u;
    // 0x13c978: 0x0  nop
    ctx->pc = 0x13c978u;
    // NOP
    // 0x13c97c: 0x0  nop
    ctx->pc = 0x13c97cu;
    // NOP
    ctx->pc = 0x13c980u;
}
