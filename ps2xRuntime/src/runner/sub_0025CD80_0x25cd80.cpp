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

// Function: sub_0025CD80
// Address: 0x25cd80 - 0x25ce00
void sub_0025CD80_0x25cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD80_0x25cd80");
#endif

    switch (ctx->pc) {
        case 0x25cdc0u: goto label_25cdc0;
        default: break;
    }

    ctx->pc = 0x25cd80u;

    // 0x25cd80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25cd84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cd88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25cd8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25cd90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x25cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x25cd94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cd98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cd9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25cda0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25cda4: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x25cda4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25cda8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CDA8u;
    {
        const bool branch_taken_0x25cda8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25cda8) {
            ctx->pc = 0x25CDB8u;
            goto label_25cdb8;
        }
    }
    ctx->pc = 0x25CDB0u;
    // 0x25cdb0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25cdb4: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x25cdb4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_25cdb8:
    // 0x25cdb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25CDB8u;
    {
        const bool branch_taken_0x25cdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cdb8) {
            ctx->pc = 0x25CDE4u;
            goto label_25cde4;
        }
    }
    ctx->pc = 0x25CDC0u;
label_25cdc0:
    // 0x25cdc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cdc4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x25cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x25cdc8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x25cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x25cdcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cdd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cdd4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x25cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x25cdd8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x25cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x25cddc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cde0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25cde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_25cde4:
    // 0x25cde4: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x25CDE4u;
    {
        const bool branch_taken_0x25cde4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x25cde4) {
            ctx->pc = 0x25CDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cdc0;
        }
    }
    ctx->pc = 0x25CDECu;
    // 0x25cdec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cdf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cdf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cdf4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25cdf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25cdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x25CDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CE00u;
}
