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

// Function: sub_00243160
// Address: 0x243160 - 0x2431e0
void sub_00243160_0x243160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243160_0x243160");
#endif

    switch (ctx->pc) {
        case 0x243188u: goto label_243188;
        case 0x243198u: goto label_243198;
        default: break;
    }

    ctx->pc = 0x243160u;

    // 0x243160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x243160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x243164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x243164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x243168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24316c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x243170: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x243170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x243174: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x243174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x243178: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x243178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x24317c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x24317cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243180: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x243180u;
    {
        const bool branch_taken_0x243180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243180) {
            ctx->pc = 0x2431ACu;
            goto label_2431ac;
        }
    }
    ctx->pc = 0x243188u;
label_243188:
    // 0x243188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24318c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24318cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243190: 0xc090c88  jal         func_243220
    ctx->pc = 0x243190u;
    SET_GPR_U32(ctx, 31, 0x243198u);
    ctx->pc = 0x243220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243220u, 0x243190u, 0x243198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243198u;
label_243198:
    // 0x243198: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x243198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24319c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2431a0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2431a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2431a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2431a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2431a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2431a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2431ac:
    // 0x2431ac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2431acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2431b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2431b4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2431B4u;
    {
        const bool branch_taken_0x2431b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2431b4) {
            ctx->pc = 0x243188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243188;
        }
    }
    ctx->pc = 0x2431BCu;
    // 0x2431bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2431bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2431c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2431c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2431c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2431c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2431c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2431c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2431cc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2431ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2431d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2431D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2431D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2431D8u;
    // 0x2431d8: 0x0  nop
    ctx->pc = 0x2431d8u;
    // NOP
    // 0x2431dc: 0x0  nop
    ctx->pc = 0x2431dcu;
    // NOP
    ctx->pc = 0x2431e0u;
}
