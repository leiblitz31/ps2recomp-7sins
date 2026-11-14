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

// Function: sub_00450A00
// Address: 0x450a00 - 0x450a90
void sub_00450A00_0x450a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450A00_0x450a00");
#endif

    switch (ctx->pc) {
        case 0x450a3cu: goto label_450a3c;
        case 0x450a7cu: goto label_450a7c;
        default: break;
    }

    ctx->pc = 0x450a00u;

    // 0x450a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x450a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x450a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x450a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x450a08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x450a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x450a0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x450a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x450a10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450a14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x450a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x450a18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450a1c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x450a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x450a20: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x450A20u;
    {
        const bool branch_taken_0x450a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x450a20) {
            ctx->pc = 0x450A54u;
            goto label_450a54;
        }
    }
    ctx->pc = 0x450A28u;
    // 0x450a28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450a2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x450a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x450a30: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x450a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450a34: 0xc114348  jal         func_450D20
    ctx->pc = 0x450A34u;
    SET_GPR_U32(ctx, 31, 0x450A3Cu);
    ctx->pc = 0x450D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450D20u, 0x450A34u, 0x450A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450A3Cu;
label_450a3c:
    // 0x450a3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x450a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450a40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x450a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x450a44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x450a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x450a48: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x450a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x450a4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x450A4Cu;
    {
        const bool branch_taken_0x450a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450a4c) {
            ctx->pc = 0x450A7Cu;
            goto label_450a7c;
        }
    }
    ctx->pc = 0x450A54u;
label_450a54:
    // 0x450a54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450a58: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x450a58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x450a5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x450a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450a60: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x450a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x450a64: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x450a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450a68: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x450a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x450a6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x450a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x450a70: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x450a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x450a74: 0xc1142a4  jal         func_450A90
    ctx->pc = 0x450A74u;
    SET_GPR_U32(ctx, 31, 0x450A7Cu);
    ctx->pc = 0x450A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450A90u, 0x450A74u, 0x450A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450A7Cu;
label_450a7c:
    // 0x450a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x450a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450a80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x450a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x450a84: 0x3e00008  jr          $ra
    ctx->pc = 0x450A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450A8Cu;
    // 0x450a8c: 0x0  nop
    ctx->pc = 0x450a8cu;
    // NOP
    ctx->pc = 0x450a90u;
}
