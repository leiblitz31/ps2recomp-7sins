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

// Function: sub_00245BD0
// Address: 0x245bd0 - 0x245c60
void sub_00245BD0_0x245bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245BD0_0x245bd0");
#endif

    switch (ctx->pc) {
        case 0x245c0cu: goto label_245c0c;
        case 0x245c4cu: goto label_245c4c;
        default: break;
    }

    ctx->pc = 0x245bd0u;

    // 0x245bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x245bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245bd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x245bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x245bdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x245bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x245be0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x245be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245be4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x245be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x245be8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x245be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245bec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x245becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x245bf0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x245BF0u;
    {
        const bool branch_taken_0x245bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x245bf0) {
            ctx->pc = 0x245C24u;
            goto label_245c24;
        }
    }
    ctx->pc = 0x245BF8u;
    // 0x245bf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x245bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245bfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x245bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x245c00: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x245c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245c04: 0xc0917bc  jal         func_245EF0
    ctx->pc = 0x245C04u;
    SET_GPR_U32(ctx, 31, 0x245C0Cu);
    ctx->pc = 0x245EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245EF0u, 0x245C04u, 0x245C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C0Cu;
label_245c0c:
    // 0x245c0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x245c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245c10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x245c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x245c14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x245c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x245c18: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x245c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x245c1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x245C1Cu;
    {
        const bool branch_taken_0x245c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c1c) {
            ctx->pc = 0x245C4Cu;
            goto label_245c4c;
        }
    }
    ctx->pc = 0x245C24u;
label_245c24:
    // 0x245c24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x245c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245c28: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x245c28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x245c2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x245c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245c30: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x245c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x245c34: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x245c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245c38: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x245c3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x245c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245c40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x245c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245c44: 0xc091718  jal         func_245C60
    ctx->pc = 0x245C44u;
    SET_GPR_U32(ctx, 31, 0x245C4Cu);
    ctx->pc = 0x245C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C60u, 0x245C44u, 0x245C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C4Cu;
label_245c4c:
    // 0x245c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245c50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x245c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x245c54: 0x3e00008  jr          $ra
    ctx->pc = 0x245C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245C5Cu;
    // 0x245c5c: 0x0  nop
    ctx->pc = 0x245c5cu;
    // NOP
    ctx->pc = 0x245c60u;
}
