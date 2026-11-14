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

// Function: sub_00274300
// Address: 0x274300 - 0x274340
void sub_00274300_0x274300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274300_0x274300");
#endif

    ctx->pc = 0x274300u;

    // 0x274300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274304: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x274304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x274308: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x274308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x27430c: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x27430cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x274310: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274314: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x274314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274318: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x274318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x27431c: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x27431cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274320: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x274320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274324: 0xa064000c  sb          $a0, 0xC($v1)
    ctx->pc = 0x274324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x274328: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x274328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27432c: 0x3e00008  jr          $ra
    ctx->pc = 0x27432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27432Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274334u;
    // 0x274334: 0x0  nop
    ctx->pc = 0x274334u;
    // NOP
    // 0x274338: 0x0  nop
    ctx->pc = 0x274338u;
    // NOP
    // 0x27433c: 0x0  nop
    ctx->pc = 0x27433cu;
    // NOP
    ctx->pc = 0x274340u;
}
