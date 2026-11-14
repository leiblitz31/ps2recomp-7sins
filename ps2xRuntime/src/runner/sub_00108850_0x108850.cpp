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

// Function: sub_00108850
// Address: 0x108850 - 0x1088c0
void sub_00108850_0x108850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108850_0x108850");
#endif

    ctx->pc = 0x108850u;

    // 0x108850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10885c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108864: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108868: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x108868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10886c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10886Cu;
    {
        const bool branch_taken_0x10886c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10886c) {
            ctx->pc = 0x108880u;
            goto label_108880;
        }
    }
    ctx->pc = 0x108874u;
    // 0x108874: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108874u;
    {
        const bool branch_taken_0x108874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108874) {
            ctx->pc = 0x108880u;
            goto label_108880;
        }
    }
    ctx->pc = 0x10887Cu;
    // 0x10887c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x10887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_108880:
    // 0x108880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108880u;
    {
        const bool branch_taken_0x108880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108880) {
            ctx->pc = 0x108898u;
            goto label_108898;
        }
    }
    ctx->pc = 0x108888u;
    // 0x108888: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10888c: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x108890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108890u;
    {
        const bool branch_taken_0x108890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108890) {
            ctx->pc = 0x1088A0u;
            goto label_1088a0;
        }
    }
    ctx->pc = 0x108898u;
label_108898:
    // 0x108898: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10889c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x10889cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1088a0:
    // 0x1088a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1088a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1088a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1088a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1088a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1088ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1088ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1088ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1088B4u;
    // 0x1088b4: 0x0  nop
    ctx->pc = 0x1088b4u;
    // NOP
    // 0x1088b8: 0x0  nop
    ctx->pc = 0x1088b8u;
    // NOP
    // 0x1088bc: 0x0  nop
    ctx->pc = 0x1088bcu;
    // NOP
    ctx->pc = 0x1088c0u;
}
