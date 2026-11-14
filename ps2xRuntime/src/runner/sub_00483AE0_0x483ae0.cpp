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

// Function: sub_00483AE0
// Address: 0x483ae0 - 0x483b70
void sub_00483AE0_0x483ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483AE0_0x483ae0");
#endif

    switch (ctx->pc) {
        case 0x483b1cu: goto label_483b1c;
        case 0x483b5cu: goto label_483b5c;
        default: break;
    }

    ctx->pc = 0x483ae0u;

    // 0x483ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x483ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483ae8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x483ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x483aec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x483aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x483af0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x483af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483af4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x483af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x483af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x483af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483afc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x483afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x483b00: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x483B00u;
    {
        const bool branch_taken_0x483b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x483b00) {
            ctx->pc = 0x483B34u;
            goto label_483b34;
        }
    }
    ctx->pc = 0x483B08u;
    // 0x483b08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x483b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483b0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x483b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x483b10: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x483b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483b14: 0xc120f98  jal         func_483E60
    ctx->pc = 0x483B14u;
    SET_GPR_U32(ctx, 31, 0x483B1Cu);
    ctx->pc = 0x483E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483E60u, 0x483B14u, 0x483B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483B1Cu;
label_483b1c:
    // 0x483b1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x483b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483b20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x483b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x483b24: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x483b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x483b28: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x483b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x483b2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x483B2Cu;
    {
        const bool branch_taken_0x483b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483b2c) {
            ctx->pc = 0x483B5Cu;
            goto label_483b5c;
        }
    }
    ctx->pc = 0x483B34u;
label_483b34:
    // 0x483b34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x483b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483b38: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x483b38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x483b3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x483b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483b40: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x483b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x483b44: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x483b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483b48: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x483b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x483b4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x483b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x483b50: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x483b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x483b54: 0xc120edc  jal         func_483B70
    ctx->pc = 0x483B54u;
    SET_GPR_U32(ctx, 31, 0x483B5Cu);
    ctx->pc = 0x483B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483B70u, 0x483B54u, 0x483B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483B5Cu;
label_483b5c:
    // 0x483b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483b60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x483b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x483b64: 0x3e00008  jr          $ra
    ctx->pc = 0x483B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483B6Cu;
    // 0x483b6c: 0x0  nop
    ctx->pc = 0x483b6cu;
    // NOP
    ctx->pc = 0x483b70u;
}
