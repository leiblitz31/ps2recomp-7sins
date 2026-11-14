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

// Function: sub_0017C910
// Address: 0x17c910 - 0x17c9a0
void sub_0017C910_0x17c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C910_0x17c910");
#endif

    switch (ctx->pc) {
        case 0x17c954u: goto label_17c954;
        case 0x17c964u: goto label_17c964;
        default: break;
    }

    ctx->pc = 0x17c910u;

    // 0x17c910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17c914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c91c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17c920: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17c924: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x17c924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x17c928: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c92c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c930: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x17c930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c934: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c938: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x17c93c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C93Cu;
    {
        const bool branch_taken_0x17c93c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17c93c) {
            ctx->pc = 0x17C94Cu;
            goto label_17c94c;
        }
    }
    ctx->pc = 0x17C944u;
    // 0x17c944: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x17c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x17c948: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x17c948u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_17c94c:
    // 0x17c94c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17C94Cu;
    {
        const bool branch_taken_0x17c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c94c) {
            ctx->pc = 0x17C980u;
            goto label_17c980;
        }
    }
    ctx->pc = 0x17C954u;
label_17c954:
    // 0x17c954: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x17c954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c958: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17c958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c95c: 0xc05f268  jal         func_17C9A0
    ctx->pc = 0x17C95Cu;
    SET_GPR_U32(ctx, 31, 0x17C964u);
    ctx->pc = 0x17C9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C9A0u, 0x17C95Cu, 0x17C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C964u;
label_17c964:
    // 0x17c964: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c968: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c96c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x17c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x17c970: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c974: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c978: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x17c978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x17c97c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17c97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_17c980:
    // 0x17c980: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17C980u;
    {
        const bool branch_taken_0x17c980 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x17c980) {
            ctx->pc = 0x17C954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c954;
        }
    }
    ctx->pc = 0x17C988u;
    // 0x17c988: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c98c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c994: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17c994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c998: 0x3e00008  jr          $ra
    ctx->pc = 0x17C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C9A0u;
}
