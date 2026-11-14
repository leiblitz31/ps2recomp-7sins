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

// Function: sub_0023D610
// Address: 0x23d610 - 0x23d6a0
void sub_0023D610_0x23d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D610_0x23d610");
#endif

    switch (ctx->pc) {
        case 0x23d64cu: goto label_23d64c;
        case 0x23d68cu: goto label_23d68c;
        default: break;
    }

    ctx->pc = 0x23d610u;

    // 0x23d610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23d614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d618: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23d618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23d61c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23d620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d624: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d628: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d62c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23d630: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D630u;
    {
        const bool branch_taken_0x23d630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d630) {
            ctx->pc = 0x23D664u;
            goto label_23d664;
        }
    }
    ctx->pc = 0x23D638u;
    // 0x23d638: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d63c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23d63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d640: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23d640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d644: 0xc08f680  jal         func_23DA00
    ctx->pc = 0x23D644u;
    SET_GPR_U32(ctx, 31, 0x23D64Cu);
    ctx->pc = 0x23DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA00u, 0x23D644u, 0x23D64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D64Cu;
label_23d64c:
    // 0x23d64c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d650: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23d654: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x23d658: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23d658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x23d65c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23D65Cu;
    {
        const bool branch_taken_0x23d65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d65c) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D664u;
label_23d664:
    // 0x23d664: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d668: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x23d668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d66c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d670: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23d670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23d674: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x23d674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d678: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x23d678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23d67c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23d67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d680: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d684: 0xc08f5a8  jal         func_23D6A0
    ctx->pc = 0x23D684u;
    SET_GPR_U32(ctx, 31, 0x23D68Cu);
    ctx->pc = 0x23D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6A0u, 0x23D684u, 0x23D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D68Cu;
label_23d68c:
    // 0x23d68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d690: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23d690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23d694: 0x3e00008  jr          $ra
    ctx->pc = 0x23D694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D69Cu;
    // 0x23d69c: 0x0  nop
    ctx->pc = 0x23d69cu;
    // NOP
    ctx->pc = 0x23d6a0u;
}
