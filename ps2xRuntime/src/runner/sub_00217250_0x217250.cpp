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

// Function: sub_00217250
// Address: 0x217250 - 0x2172a0
void sub_00217250_0x217250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217250_0x217250");
#endif

    ctx->pc = 0x217250u;

    // 0x217250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217254: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x217254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x217258: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x217258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21725c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x21725cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x217260: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x217260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x217264: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217268: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21726c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21726cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x217270: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x217270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217274: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x217274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217278: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x217278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x21727c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x21727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217280: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x217280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217284: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x217284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x217288: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x217288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21728c: 0x3e00008  jr          $ra
    ctx->pc = 0x21728Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21728Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217294u;
    // 0x217294: 0x0  nop
    ctx->pc = 0x217294u;
    // NOP
    // 0x217298: 0x0  nop
    ctx->pc = 0x217298u;
    // NOP
    // 0x21729c: 0x0  nop
    ctx->pc = 0x21729cu;
    // NOP
    ctx->pc = 0x2172a0u;
}
