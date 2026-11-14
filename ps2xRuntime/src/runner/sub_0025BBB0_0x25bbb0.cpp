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

// Function: sub_0025BBB0
// Address: 0x25bbb0 - 0x25bbf0
void sub_0025BBB0_0x25bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BBB0_0x25bbb0");
#endif

    ctx->pc = 0x25bbb0u;

    // 0x25bbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bbb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25bbb8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25bbbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bbc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bbc4: 0xac64018c  sw          $a0, 0x18C($v1)
    ctx->pc = 0x25bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 4));
    // 0x25bbc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bbcc: 0xa0600190  sb          $zero, 0x190($v1)
    ctx->pc = 0x25bbccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 400), (uint8_t)GPR_U32(ctx, 0));
    // 0x25bbd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bbd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bbd8: 0xa0640191  sb          $a0, 0x191($v1)
    ctx->pc = 0x25bbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 401), (uint8_t)GPR_U32(ctx, 4));
    // 0x25bbdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25bbdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x25BBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BBE8u;
    // 0x25bbe8: 0x0  nop
    ctx->pc = 0x25bbe8u;
    // NOP
    // 0x25bbec: 0x0  nop
    ctx->pc = 0x25bbecu;
    // NOP
    ctx->pc = 0x25bbf0u;
}
