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

// Function: sub_00269540
// Address: 0x269540 - 0x2695c0
void sub_00269540_0x269540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269540_0x269540");
#endif

    switch (ctx->pc) {
        case 0x269568u: goto label_269568;
        case 0x269578u: goto label_269578;
        default: break;
    }

    ctx->pc = 0x269540u;

    // 0x269540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x269540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x269544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x269548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269550: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x269550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x269554: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x269554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x269558: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x269558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x26955c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x26955cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269560: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x269560u;
    {
        const bool branch_taken_0x269560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269560) {
            ctx->pc = 0x26958Cu;
            goto label_26958c;
        }
    }
    ctx->pc = 0x269568u;
label_269568:
    // 0x269568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26956c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26956cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269570: 0xc09a580  jal         func_269600
    ctx->pc = 0x269570u;
    SET_GPR_U32(ctx, 31, 0x269578u);
    ctx->pc = 0x269600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269600u, 0x269570u, 0x269578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269578u;
label_269578:
    // 0x269578: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26957c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x26957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x269580: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x269580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x269584: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x269584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x269588: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x269588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26958c:
    // 0x26958c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x26958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269590: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x269590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269594: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x269594u;
    {
        const bool branch_taken_0x269594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269594) {
            ctx->pc = 0x269568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269568;
        }
    }
    ctx->pc = 0x26959Cu;
    // 0x26959c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26959cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2695a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2695a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2695a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2695a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2695a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2695ac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2695acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2695b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2695B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2695B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2695B8u;
    // 0x2695b8: 0x0  nop
    ctx->pc = 0x2695b8u;
    // NOP
    // 0x2695bc: 0x0  nop
    ctx->pc = 0x2695bcu;
    // NOP
    ctx->pc = 0x2695c0u;
}
