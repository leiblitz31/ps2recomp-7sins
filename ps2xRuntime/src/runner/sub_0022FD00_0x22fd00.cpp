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

// Function: sub_0022FD00
// Address: 0x22fd00 - 0x22fd90
void sub_0022FD00_0x22fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FD00_0x22fd00");
#endif

    switch (ctx->pc) {
        case 0x22fd3cu: goto label_22fd3c;
        case 0x22fd7cu: goto label_22fd7c;
        default: break;
    }

    ctx->pc = 0x22fd00u;

    // 0x22fd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22fd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fd08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22fd0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22fd10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22fd18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd1c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22fd20: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22FD20u;
    {
        const bool branch_taken_0x22fd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fd20) {
            ctx->pc = 0x22FD54u;
            goto label_22fd54;
        }
    }
    ctx->pc = 0x22FD28u;
    // 0x22fd28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22fd30: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fd34: 0xc08c02c  jal         func_2300B0
    ctx->pc = 0x22FD34u;
    SET_GPR_U32(ctx, 31, 0x22FD3Cu);
    ctx->pc = 0x2300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B0u, 0x22FD34u, 0x22FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD3Cu;
label_22fd3c:
    // 0x22fd3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22fd44: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x22fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x22fd48: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x22fd4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22FD4Cu;
    {
        const bool branch_taken_0x22fd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd4c) {
            ctx->pc = 0x22FD7Cu;
            goto label_22fd7c;
        }
    }
    ctx->pc = 0x22FD54u;
label_22fd54:
    // 0x22fd54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd58: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x22fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fd5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fd60: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22fd64: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x22fd64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fd68: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x22fd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22fd6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fd70: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x22fd70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fd74: 0xc08bf64  jal         func_22FD90
    ctx->pc = 0x22FD74u;
    SET_GPR_U32(ctx, 31, 0x22FD7Cu);
    ctx->pc = 0x22FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FD90u, 0x22FD74u, 0x22FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD7Cu;
label_22fd7c:
    // 0x22fd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fd80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22fd84: 0x3e00008  jr          $ra
    ctx->pc = 0x22FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FD8Cu;
    // 0x22fd8c: 0x0  nop
    ctx->pc = 0x22fd8cu;
    // NOP
    ctx->pc = 0x22fd90u;
}
