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

// Function: sub_002358C0
// Address: 0x2358c0 - 0x235950
void sub_002358C0_0x2358c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002358C0_0x2358c0");
#endif

    ctx->pc = 0x2358c0u;

    // 0x2358c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2358c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2358c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2358c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2358c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2358c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2358cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2358ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2358d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2358d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2358d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2358d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2358d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2358d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2358dc: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2358DCu;
    {
        const bool branch_taken_0x2358dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2358dc) {
            ctx->pc = 0x235924u;
            goto label_235924;
        }
    }
    ctx->pc = 0x2358E4u;
    // 0x2358e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2358e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2358e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2358e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2358ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2358ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2358f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2358f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2358f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2358F4u;
    {
        const bool branch_taken_0x2358f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2358f4) {
            ctx->pc = 0x235908u;
            goto label_235908;
        }
    }
    ctx->pc = 0x2358FCu;
    // 0x2358fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2358fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235900: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x235900u;
    {
        const bool branch_taken_0x235900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235900) {
            ctx->pc = 0x235938u;
            goto label_235938;
        }
    }
    ctx->pc = 0x235908u;
label_235908:
    // 0x235908: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x235908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23590c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x235910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235914: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x235914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x235918: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x235918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23591c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23591Cu;
    {
        const bool branch_taken_0x23591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23591c) {
            ctx->pc = 0x235938u;
            goto label_235938;
        }
    }
    ctx->pc = 0x235924u;
label_235924:
    // 0x235924: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x235924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23592c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235934: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x235934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235938:
    // 0x235938: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x235938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23593c: 0x3e00008  jr          $ra
    ctx->pc = 0x23593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23593Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235944u;
    // 0x235944: 0x0  nop
    ctx->pc = 0x235944u;
    // NOP
    // 0x235948: 0x0  nop
    ctx->pc = 0x235948u;
    // NOP
    // 0x23594c: 0x0  nop
    ctx->pc = 0x23594cu;
    // NOP
    ctx->pc = 0x235950u;
}
