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

// Function: sub_00214470
// Address: 0x214470 - 0x2144e0
void sub_00214470_0x214470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214470_0x214470");
#endif

    switch (ctx->pc) {
        case 0x21448cu: goto label_21448c;
        default: break;
    }

    ctx->pc = 0x214470u;

    // 0x214470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21447c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21447cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x214480: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x214480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x214484: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x214484u;
    {
        const bool branch_taken_0x214484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214484) {
            ctx->pc = 0x2144B4u;
            goto label_2144b4;
        }
    }
    ctx->pc = 0x21448Cu;
label_21448c:
    // 0x21448c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214498: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x214498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21449c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x21449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2144a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2144a4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2144a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2144a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2144a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2144ac: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2144b0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2144b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2144b4:
    // 0x2144b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2144b8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2144B8u;
    {
        const bool branch_taken_0x2144b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2144b8) {
            ctx->pc = 0x21448Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21448c;
        }
    }
    ctx->pc = 0x2144C0u;
    // 0x2144c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2144c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2144c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2144c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2144c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2144c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2144cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2144CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2144CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2144D4u;
    // 0x2144d4: 0x0  nop
    ctx->pc = 0x2144d4u;
    // NOP
    // 0x2144d8: 0x0  nop
    ctx->pc = 0x2144d8u;
    // NOP
    // 0x2144dc: 0x0  nop
    ctx->pc = 0x2144dcu;
    // NOP
    ctx->pc = 0x2144e0u;
}
