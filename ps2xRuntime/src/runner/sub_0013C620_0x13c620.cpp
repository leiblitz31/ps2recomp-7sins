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

// Function: sub_0013C620
// Address: 0x13c620 - 0x13c690
void sub_0013C620_0x13c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C620_0x13c620");
#endif

    switch (ctx->pc) {
        case 0x13c63cu: goto label_13c63c;
        default: break;
    }

    ctx->pc = 0x13c620u;

    // 0x13c620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13c628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13c62c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13c630: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13c630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13c634: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13C634u;
    {
        const bool branch_taken_0x13c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c634) {
            ctx->pc = 0x13C664u;
            goto label_13c664;
        }
    }
    ctx->pc = 0x13C63Cu;
label_13c63c:
    // 0x13c63c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c640: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c644: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13c648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13c64c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c650: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c654: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x13c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x13c658: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c65c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x13c65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13c660: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x13c660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_13c664:
    // 0x13c664: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c668: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x13C668u;
    {
        const bool branch_taken_0x13c668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c668) {
            ctx->pc = 0x13C63Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c63c;
        }
    }
    ctx->pc = 0x13C670u;
    // 0x13c670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c678: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13c678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c67c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C684u;
    // 0x13c684: 0x0  nop
    ctx->pc = 0x13c684u;
    // NOP
    // 0x13c688: 0x0  nop
    ctx->pc = 0x13c688u;
    // NOP
    // 0x13c68c: 0x0  nop
    ctx->pc = 0x13c68cu;
    // NOP
    ctx->pc = 0x13c690u;
}
