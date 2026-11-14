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

// Function: sub_0011A920
// Address: 0x11a920 - 0x11a950
void sub_0011A920_0x11a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A920_0x11a920");
#endif

    ctx->pc = 0x11a920u;

    // 0x11a920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a924: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11a924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11a928: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x11a928u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a92c: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x11a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x11a930: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a934: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x11a934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a938: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11a938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11a93c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11a93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11a940: 0x3e00008  jr          $ra
    ctx->pc = 0x11A940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A948u;
    // 0x11a948: 0x0  nop
    ctx->pc = 0x11a948u;
    // NOP
    // 0x11a94c: 0x0  nop
    ctx->pc = 0x11a94cu;
    // NOP
    ctx->pc = 0x11a950u;
}
