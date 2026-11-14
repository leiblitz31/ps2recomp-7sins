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

// Function: sub_00197100
// Address: 0x197100 - 0x197190
void sub_00197100_0x197100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197100_0x197100");
#endif

    switch (ctx->pc) {
        case 0x197144u: goto label_197144;
        case 0x197154u: goto label_197154;
        default: break;
    }

    ctx->pc = 0x197100u;

    // 0x197100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x197104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19710c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x197110: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x197110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x197114: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x197114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x197118: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x197118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19711c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197120: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197124: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197128: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x197128u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x19712c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19712Cu;
    {
        const bool branch_taken_0x19712c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19712c) {
            ctx->pc = 0x19713Cu;
            goto label_19713c;
        }
    }
    ctx->pc = 0x197134u;
    // 0x197134: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x197134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x197138: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x197138u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_19713c:
    // 0x19713c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19713Cu;
    {
        const bool branch_taken_0x19713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19713c) {
            ctx->pc = 0x197170u;
            goto label_197170;
        }
    }
    ctx->pc = 0x197144u;
label_197144:
    // 0x197144: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x197144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197148: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19714c: 0xc065c64  jal         func_197190
    ctx->pc = 0x19714Cu;
    SET_GPR_U32(ctx, 31, 0x197154u);
    ctx->pc = 0x197190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197190u, 0x19714Cu, 0x197154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197154u;
label_197154:
    // 0x197154: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x197154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197158: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x197158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19715c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x19715cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x197160: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x197160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197164: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x197164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x197168: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x197168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x19716c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19716cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_197170:
    // 0x197170: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x197170u;
    {
        const bool branch_taken_0x197170 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x197170) {
            ctx->pc = 0x197144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197144;
        }
    }
    ctx->pc = 0x197178u;
    // 0x197178: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x197178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19717c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19717cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197184: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x197184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x197188: 0x3e00008  jr          $ra
    ctx->pc = 0x197188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197190u;
}
