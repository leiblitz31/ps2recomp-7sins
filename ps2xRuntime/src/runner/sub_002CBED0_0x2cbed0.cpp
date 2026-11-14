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

// Function: sub_002CBED0
// Address: 0x2cbed0 - 0x2cbf60
void sub_002CBED0_0x2cbed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBED0_0x2cbed0");
#endif

    switch (ctx->pc) {
        case 0x2cbf0cu: goto label_2cbf0c;
        case 0x2cbf4cu: goto label_2cbf4c;
        default: break;
    }

    ctx->pc = 0x2cbed0u;

    // 0x2cbed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cbed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cbed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbed8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cbed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cbedc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2cbedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2cbee0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbee4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbee8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbeec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2cbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cbef0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CBEF0u;
    {
        const bool branch_taken_0x2cbef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cbef0) {
            ctx->pc = 0x2CBF24u;
            goto label_2cbf24;
        }
    }
    ctx->pc = 0x2CBEF8u;
    // 0x2cbef8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbefc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbf00: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2cbf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbf04: 0xc0b306c  jal         func_2CC1B0
    ctx->pc = 0x2CBF04u;
    SET_GPR_U32(ctx, 31, 0x2CBF0Cu);
    ctx->pc = 0x2CC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC1B0u, 0x2CBF04u, 0x2CBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF0Cu;
label_2cbf0c:
    // 0x2cbf0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbf10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cbf14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2cbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cbf18: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2cbf18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2cbf1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CBF1Cu;
    {
        const bool branch_taken_0x2cbf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf1c) {
            ctx->pc = 0x2CBF4Cu;
            goto label_2cbf4c;
        }
    }
    ctx->pc = 0x2CBF24u;
label_2cbf24:
    // 0x2cbf24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbf28: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2cbf28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbf2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cbf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbf30: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cbf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbf34: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2cbf34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbf38: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2cbf38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2cbf3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cbf3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbf40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2cbf40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbf44: 0xc0b2fd8  jal         func_2CBF60
    ctx->pc = 0x2CBF44u;
    SET_GPR_U32(ctx, 31, 0x2CBF4Cu);
    ctx->pc = 0x2CBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF60u, 0x2CBF44u, 0x2CBF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF4Cu;
label_2cbf4c:
    // 0x2cbf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbf50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cbf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cbf54: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF5Cu;
    // 0x2cbf5c: 0x0  nop
    ctx->pc = 0x2cbf5cu;
    // NOP
    ctx->pc = 0x2cbf60u;
}
