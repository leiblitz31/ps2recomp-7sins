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

// Function: sub_00218120
// Address: 0x218120 - 0x218170
void sub_00218120_0x218120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218120_0x218120");
#endif

    ctx->pc = 0x218120u;

    // 0x218120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218124: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x218124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x218128: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x218128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21812c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x21812cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x218130: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x218130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x218134: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218138: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x218138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21813c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21813cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x218140: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218144: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x218144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218148: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x218148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x21814c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x21814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218150: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x218150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218154: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x218154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x218158: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21815c: 0x3e00008  jr          $ra
    ctx->pc = 0x21815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218164u;
    // 0x218164: 0x0  nop
    ctx->pc = 0x218164u;
    // NOP
    // 0x218168: 0x0  nop
    ctx->pc = 0x218168u;
    // NOP
    // 0x21816c: 0x0  nop
    ctx->pc = 0x21816cu;
    // NOP
    ctx->pc = 0x218170u;
}
