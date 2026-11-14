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

// Function: sub_001A7320
// Address: 0x1a7320 - 0x1a73a0
void sub_001A7320_0x1a7320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7320_0x1a7320");
#endif

    switch (ctx->pc) {
        case 0x1a7348u: goto label_1a7348;
        case 0x1a7358u: goto label_1a7358;
        default: break;
    }

    ctx->pc = 0x1a7320u;

    // 0x1a7320: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a7320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a7324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a732c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7330: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a7330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a7334: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a7334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a7338: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1a7338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1a733c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1a733cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7340: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A7340u;
    {
        const bool branch_taken_0x1a7340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7340) {
            ctx->pc = 0x1A736Cu;
            goto label_1a736c;
        }
    }
    ctx->pc = 0x1A7348u;
label_1a7348:
    // 0x1a7348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a734c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a734cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7350: 0xc069cf8  jal         func_1A73E0
    ctx->pc = 0x1A7350u;
    SET_GPR_U32(ctx, 31, 0x1A7358u);
    ctx->pc = 0x1A73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73E0u, 0x1A7350u, 0x1A7358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7358u;
label_1a7358:
    // 0x1a7358: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a735c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1a735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a7360: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1a7360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1a7364: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1a7364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a7368: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a7368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a736c:
    // 0x1a736c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7370: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a7370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7374: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A7374u;
    {
        const bool branch_taken_0x1a7374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7374) {
            ctx->pc = 0x1A7348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7348;
        }
    }
    ctx->pc = 0x1A737Cu;
    // 0x1a737c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a737cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a738c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a738cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7390: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7398u;
    // 0x1a7398: 0x0  nop
    ctx->pc = 0x1a7398u;
    // NOP
    // 0x1a739c: 0x0  nop
    ctx->pc = 0x1a739cu;
    // NOP
    ctx->pc = 0x1a73a0u;
}
