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

// Function: sub_0046C620
// Address: 0x46c620 - 0x46c6b0
void sub_0046C620_0x46c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C620_0x46c620");
#endif

    switch (ctx->pc) {
        case 0x46c65cu: goto label_46c65c;
        case 0x46c69cu: goto label_46c69c;
        default: break;
    }

    ctx->pc = 0x46c620u;

    // 0x46c620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46c624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c628: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46c628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46c62c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46c630: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c634: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46c638: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c63c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x46c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x46c640: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x46C640u;
    {
        const bool branch_taken_0x46c640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46c640) {
            ctx->pc = 0x46C674u;
            goto label_46c674;
        }
    }
    ctx->pc = 0x46C648u;
    // 0x46c648: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c64c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46c650: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46c650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c654: 0xc11b278  jal         func_46C9E0
    ctx->pc = 0x46C654u;
    SET_GPR_U32(ctx, 31, 0x46C65Cu);
    ctx->pc = 0x46C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C9E0u, 0x46C654u, 0x46C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C65Cu;
label_46c65c:
    // 0x46c65c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c660: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x46c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x46c664: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x46c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x46c668: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x46c668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x46c66c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x46C66Cu;
    {
        const bool branch_taken_0x46c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c66c) {
            ctx->pc = 0x46C69Cu;
            goto label_46c69c;
        }
    }
    ctx->pc = 0x46C674u;
label_46c674:
    // 0x46c674: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c678: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x46c678u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x46c67c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c680: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46c680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46c684: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x46c684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c688: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x46c688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x46c68c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x46c68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46c690: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x46c690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46c694: 0xc11b1ac  jal         func_46C6B0
    ctx->pc = 0x46C694u;
    SET_GPR_U32(ctx, 31, 0x46C69Cu);
    ctx->pc = 0x46C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C6B0u, 0x46C694u, 0x46C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C69Cu;
label_46c69c:
    // 0x46c69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c6a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x46C6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C6ACu;
    // 0x46c6ac: 0x0  nop
    ctx->pc = 0x46c6acu;
    // NOP
    ctx->pc = 0x46c6b0u;
}
