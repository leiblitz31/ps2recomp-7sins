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

// Function: sub_002B7FD0
// Address: 0x2b7fd0 - 0x2b8040
void sub_002B7FD0_0x2b7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7FD0_0x2b7fd0");
#endif

    switch (ctx->pc) {
        case 0x2b7fecu: goto label_2b7fec;
        default: break;
    }

    ctx->pc = 0x2b7fd0u;

    // 0x2b7fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b7fd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b7fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b7fdc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b7fe0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2b7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2b7fe4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B7FE4u;
    {
        const bool branch_taken_0x2b7fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7fe4) {
            ctx->pc = 0x2B8014u;
            goto label_2b8014;
        }
    }
    ctx->pc = 0x2B7FECu;
label_2b7fec:
    // 0x2b7fec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7ff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7ff4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7ff8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b7ffc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8000: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b8000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b8004: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b8004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2b8008: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b8008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b800c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2b800cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b8010: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2b8010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2b8014:
    // 0x2b8014: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b8014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8018: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B8018u;
    {
        const bool branch_taken_0x2b8018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8018) {
            ctx->pc = 0x2B7FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7fec;
        }
    }
    ctx->pc = 0x2B8020u;
    // 0x2b8020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b8020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8028: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b8028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b802c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B802Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B802Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8034u;
    // 0x2b8034: 0x0  nop
    ctx->pc = 0x2b8034u;
    // NOP
    // 0x2b8038: 0x0  nop
    ctx->pc = 0x2b8038u;
    // NOP
    // 0x2b803c: 0x0  nop
    ctx->pc = 0x2b803cu;
    // NOP
    ctx->pc = 0x2b8040u;
}
