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

// Function: sub_00259150
// Address: 0x259150 - 0x2591a0
void sub_00259150_0x259150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259150_0x259150");
#endif

    ctx->pc = 0x259150u;

    // 0x259150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259154: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x259154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x259158: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x259158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25915c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x25915cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x259160: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x259160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x259164: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259168: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x259168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25916c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25916cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x259170: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259174: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x259174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259178: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x259178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25917c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259180: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x259180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259184: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x259184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x259188: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x259188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25918c: 0x3e00008  jr          $ra
    ctx->pc = 0x25918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259194u;
    // 0x259194: 0x0  nop
    ctx->pc = 0x259194u;
    // NOP
    // 0x259198: 0x0  nop
    ctx->pc = 0x259198u;
    // NOP
    // 0x25919c: 0x0  nop
    ctx->pc = 0x25919cu;
    // NOP
    ctx->pc = 0x2591a0u;
}
