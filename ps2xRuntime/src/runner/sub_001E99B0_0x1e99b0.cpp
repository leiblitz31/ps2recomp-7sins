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

// Function: sub_001E99B0
// Address: 0x1e99b0 - 0x1e9a40
void sub_001E99B0_0x1e99b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E99B0_0x1e99b0");
#endif

    switch (ctx->pc) {
        case 0x1e99f4u: goto label_1e99f4;
        case 0x1e9a04u: goto label_1e9a04;
        default: break;
    }

    ctx->pc = 0x1e99b0u;

    // 0x1e99b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e99b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e99b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e99b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e99b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e99b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e99bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e99c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e99c4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e99c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e99cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e99d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e99d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e99d8: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x1e99d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e99dc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E99DCu;
    {
        const bool branch_taken_0x1e99dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e99dc) {
            ctx->pc = 0x1E99ECu;
            goto label_1e99ec;
        }
    }
    ctx->pc = 0x1E99E4u;
    // 0x1e99e4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1e99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1e99e8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1e99e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_1e99ec:
    // 0x1e99ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E99ECu;
    {
        const bool branch_taken_0x1e99ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99ec) {
            ctx->pc = 0x1E9A20u;
            goto label_1e9a20;
        }
    }
    ctx->pc = 0x1E99F4u;
label_1e99f4:
    // 0x1e99f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e99f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e99f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e99fc: 0xc052608  jal         func_149820
    ctx->pc = 0x1E99FCu;
    SET_GPR_U32(ctx, 31, 0x1E9A04u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x1E99FCu, 0x1E9A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A04u;
label_1e9a04:
    // 0x1e9a04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9a08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e9a0c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e9a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e9a10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9a14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e9a18: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e9a1c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e9a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e9a20:
    // 0x1e9a20: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E9A20u;
    {
        const bool branch_taken_0x1e9a20 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e9a20) {
            ctx->pc = 0x1E99F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e99f4;
        }
    }
    ctx->pc = 0x1E9A28u;
    // 0x1e9a28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9a34: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e9a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9A40u;
}
