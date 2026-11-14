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

// Function: sub_0026BC90
// Address: 0x26bc90 - 0x26bd20
void sub_0026BC90_0x26bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BC90_0x26bc90");
#endif

    switch (ctx->pc) {
        case 0x26bcccu: goto label_26bccc;
        case 0x26bd0cu: goto label_26bd0c;
        default: break;
    }

    ctx->pc = 0x26bc90u;

    // 0x26bc90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26bc94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bc98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26bc9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x26bca0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bca4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26bca8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bcac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26bcb0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26BCB0u;
    {
        const bool branch_taken_0x26bcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26bcb0) {
            ctx->pc = 0x26BCE4u;
            goto label_26bce4;
        }
    }
    ctx->pc = 0x26BCB8u;
    // 0x26bcb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bcbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26bcc0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bcc4: 0xc09b010  jal         func_26C040
    ctx->pc = 0x26BCC4u;
    SET_GPR_U32(ctx, 31, 0x26BCCCu);
    ctx->pc = 0x26C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C040u, 0x26BCC4u, 0x26BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCCCu;
label_26bccc:
    // 0x26bccc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bcd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26bcd4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x26bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x26bcd8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x26bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x26bcdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26BCDCu;
    {
        const bool branch_taken_0x26bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bcdc) {
            ctx->pc = 0x26BD0Cu;
            goto label_26bd0c;
        }
    }
    ctx->pc = 0x26BCE4u;
label_26bce4:
    // 0x26bce4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bce8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x26bce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bcec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bcf0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26bcf4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x26bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bcf8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x26bcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26bcfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26bcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bd00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x26bd00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bd04: 0xc09af48  jal         func_26BD20
    ctx->pc = 0x26BD04u;
    SET_GPR_U32(ctx, 31, 0x26BD0Cu);
    ctx->pc = 0x26BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BD20u, 0x26BD04u, 0x26BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD0Cu;
label_26bd0c:
    // 0x26bd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bd10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26bd14: 0x3e00008  jr          $ra
    ctx->pc = 0x26BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BD1Cu;
    // 0x26bd1c: 0x0  nop
    ctx->pc = 0x26bd1cu;
    // NOP
    ctx->pc = 0x26bd20u;
}
