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

// Function: sub_0029D210
// Address: 0x29d210 - 0x29d260
void sub_0029D210_0x29d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D210_0x29d210");
#endif

    ctx->pc = 0x29d210u;

    // 0x29d210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29d214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29d218: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x29d218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x29d21c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d220: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d224: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29d228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29d22c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d230: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29d230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29d234: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29d234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d238: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x29d238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x29d23c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d240: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29d244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d248: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29d248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29d24c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d250: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d254: 0x3e00008  jr          $ra
    ctx->pc = 0x29D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D25Cu;
    // 0x29d25c: 0x0  nop
    ctx->pc = 0x29d25cu;
    // NOP
    ctx->pc = 0x29d260u;
}
