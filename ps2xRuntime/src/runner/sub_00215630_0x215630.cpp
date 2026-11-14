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

// Function: sub_00215630
// Address: 0x215630 - 0x2156c0
void sub_00215630_0x215630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215630_0x215630");
#endif

    switch (ctx->pc) {
        case 0x21566cu: goto label_21566c;
        case 0x2156acu: goto label_2156ac;
        default: break;
    }

    ctx->pc = 0x215630u;

    // 0x215630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x215634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215638: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x215638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21563c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x215640: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215644: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x215644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215648: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21564c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215650: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x215650u;
    {
        const bool branch_taken_0x215650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215650) {
            ctx->pc = 0x215684u;
            goto label_215684;
        }
    }
    ctx->pc = 0x215658u;
    // 0x215658: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21565c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x21565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215660: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215664: 0xc085654  jal         func_215950
    ctx->pc = 0x215664u;
    SET_GPR_U32(ctx, 31, 0x21566Cu);
    ctx->pc = 0x215950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215950u, 0x215664u, 0x21566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21566Cu;
label_21566c:
    // 0x21566c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215670: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x215674: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x215674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x215678: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x215678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x21567c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21567Cu;
    {
        const bool branch_taken_0x21567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21567c) {
            ctx->pc = 0x2156ACu;
            goto label_2156ac;
        }
    }
    ctx->pc = 0x215684u;
label_215684:
    // 0x215684: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215688: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x215688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x21568c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x21568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215690: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215694: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x215694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215698: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x215698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x21569c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21569cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2156a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2156a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2156a4: 0xc0855b0  jal         func_2156C0
    ctx->pc = 0x2156A4u;
    SET_GPR_U32(ctx, 31, 0x2156ACu);
    ctx->pc = 0x2156C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156C0u, 0x2156A4u, 0x2156ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2156ACu;
label_2156ac:
    // 0x2156ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2156acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2156b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2156b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2156B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2156BCu;
    // 0x2156bc: 0x0  nop
    ctx->pc = 0x2156bcu;
    // NOP
    ctx->pc = 0x2156c0u;
}
