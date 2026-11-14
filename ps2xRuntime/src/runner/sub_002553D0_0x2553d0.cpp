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

// Function: sub_002553D0
// Address: 0x2553d0 - 0x255440
void sub_002553D0_0x2553d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002553D0_0x2553d0");
#endif

    switch (ctx->pc) {
        case 0x2553ecu: goto label_2553ec;
        default: break;
    }

    ctx->pc = 0x2553d0u;

    // 0x2553d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2553d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2553d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2553d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2553d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2553d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2553dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2553dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2553e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2553e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2553e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2553E4u;
    {
        const bool branch_taken_0x2553e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2553e4) {
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x2553ECu;
label_2553ec:
    // 0x2553ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2553ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2553f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2553f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2553f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2553f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2553f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2553f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2553fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2553fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255400: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x255400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x255404: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x255404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x255408: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x255408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25540c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x25540cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x255410: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x255410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_255414:
    // 0x255414: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x255414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255418: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x255418u;
    {
        const bool branch_taken_0x255418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255418) {
            ctx->pc = 0x2553ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2553ec;
        }
    }
    ctx->pc = 0x255420u;
    // 0x255420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x255420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255428: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25542c: 0x3e00008  jr          $ra
    ctx->pc = 0x25542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255434u;
    // 0x255434: 0x0  nop
    ctx->pc = 0x255434u;
    // NOP
    // 0x255438: 0x0  nop
    ctx->pc = 0x255438u;
    // NOP
    // 0x25543c: 0x0  nop
    ctx->pc = 0x25543cu;
    // NOP
    ctx->pc = 0x255440u;
}
