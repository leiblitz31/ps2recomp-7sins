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

// Function: sub_002901F0
// Address: 0x2901f0 - 0x290250
void sub_002901F0_0x2901f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002901F0_0x2901f0");
#endif

    switch (ctx->pc) {
        case 0x290208u: goto label_290208;
        default: break;
    }

    ctx->pc = 0x2901f0u;

    // 0x2901f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2901f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2901f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2901f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2901f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2901f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2901fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2901fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290200: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x290200u;
    {
        const bool branch_taken_0x290200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290200) {
            ctx->pc = 0x290230u;
            goto label_290230;
        }
    }
    ctx->pc = 0x290208u;
label_290208:
    // 0x290208: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29020c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290214: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x290214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x290218: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x290218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29021c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29021cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290228: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x290228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x29022c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29022cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_290230:
    // 0x290230: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x290230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x290234: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x290234u;
    {
        const bool branch_taken_0x290234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290234) {
            ctx->pc = 0x290208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290208;
        }
    }
    ctx->pc = 0x29023Cu;
    // 0x29023c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290244: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x290244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x290248: 0x3e00008  jr          $ra
    ctx->pc = 0x290248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290250u;
}
