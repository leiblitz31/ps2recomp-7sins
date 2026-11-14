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

// Function: sub_002CC140
// Address: 0x2cc140 - 0x2cc1b0
void sub_002CC140_0x2cc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC140_0x2cc140");
#endif

    switch (ctx->pc) {
        case 0x2cc15cu: goto label_2cc15c;
        default: break;
    }

    ctx->pc = 0x2cc140u;

    // 0x2cc140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cc148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cc14c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cc14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cc150: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2cc150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2cc154: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CC154u;
    {
        const bool branch_taken_0x2cc154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc154) {
            ctx->pc = 0x2CC184u;
            goto label_2cc184;
        }
    }
    ctx->pc = 0x2CC15Cu;
label_2cc15c:
    // 0x2cc15c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc168: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cc168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cc16c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cc170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cc174: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2cc174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2cc178: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc17c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2cc17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cc180: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2cc180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2cc184:
    // 0x2cc184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc188: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CC188u;
    {
        const bool branch_taken_0x2cc188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc188) {
            ctx->pc = 0x2CC15Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc15c;
        }
    }
    ctx->pc = 0x2CC190u;
    // 0x2cc190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc198: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cc198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc19c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC1A4u;
    // 0x2cc1a4: 0x0  nop
    ctx->pc = 0x2cc1a4u;
    // NOP
    // 0x2cc1a8: 0x0  nop
    ctx->pc = 0x2cc1a8u;
    // NOP
    // 0x2cc1ac: 0x0  nop
    ctx->pc = 0x2cc1acu;
    // NOP
    ctx->pc = 0x2cc1b0u;
}
