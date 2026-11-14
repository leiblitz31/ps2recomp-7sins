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

// Function: sub_0025F9C0
// Address: 0x25f9c0 - 0x25fa50
void sub_0025F9C0_0x25f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F9C0_0x25f9c0");
#endif

    switch (ctx->pc) {
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa3cu: goto label_25fa3c;
        default: break;
    }

    ctx->pc = 0x25f9c0u;

    // 0x25f9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25f9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f9c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25f9cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25f9d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f9d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25f9d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f9dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25f9e0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F9E0u;
    {
        const bool branch_taken_0x25f9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f9e0) {
            ctx->pc = 0x25FA14u;
            goto label_25fa14;
        }
    }
    ctx->pc = 0x25F9E8u;
    // 0x25f9e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f9ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25f9f0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25f9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f9f4: 0xc097f38  jal         func_25FCE0
    ctx->pc = 0x25F9F4u;
    SET_GPR_U32(ctx, 31, 0x25F9FCu);
    ctx->pc = 0x25FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE0u, 0x25F9F4u, 0x25F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9FCu;
label_25f9fc:
    // 0x25f9fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fa00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25fa04: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25fa08: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x25fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x25fa0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25FA0Cu;
    {
        const bool branch_taken_0x25fa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fa0c) {
            ctx->pc = 0x25FA3Cu;
            goto label_25fa3c;
        }
    }
    ctx->pc = 0x25FA14u;
label_25fa14:
    // 0x25fa14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fa18: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x25fa18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x25fa1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fa20: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25fa24: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x25fa24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fa28: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x25fa28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25fa2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x25fa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fa30: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25fa30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fa34: 0xc097e94  jal         func_25FA50
    ctx->pc = 0x25FA34u;
    SET_GPR_U32(ctx, 31, 0x25FA3Cu);
    ctx->pc = 0x25FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FA50u, 0x25FA34u, 0x25FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA3Cu;
label_25fa3c:
    // 0x25fa3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fa40: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25fa44: 0x3e00008  jr          $ra
    ctx->pc = 0x25FA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FA4Cu;
    // 0x25fa4c: 0x0  nop
    ctx->pc = 0x25fa4cu;
    // NOP
    ctx->pc = 0x25fa50u;
}
