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

// Function: sub_0045E0D0
// Address: 0x45e0d0 - 0x45e130
void sub_0045E0D0_0x45e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E0D0_0x45e0d0");
#endif

    ctx->pc = 0x45e0d0u;

    // 0x45e0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45e0d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45e0d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x45e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45e0dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45e0e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e0e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x45e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45e0e8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x45e0e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x45e0ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x45E0ECu;
    {
        const bool branch_taken_0x45e0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e0ec) {
            ctx->pc = 0x45E118u;
            goto label_45e118;
        }
    }
    ctx->pc = 0x45E0F4u;
    // 0x45e0f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x45e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e0f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45e0fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45e100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e104: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x45e104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x45e108: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x45e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x45e10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45E110u;
    {
        const bool branch_taken_0x45e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e110) {
            ctx->pc = 0x45E11Cu;
            goto label_45e11c;
        }
    }
    ctx->pc = 0x45E118u;
label_45e118:
    // 0x45e118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45e118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e11c:
    // 0x45e11c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45e11cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45e120: 0x3e00008  jr          $ra
    ctx->pc = 0x45E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E128u;
    // 0x45e128: 0x0  nop
    ctx->pc = 0x45e128u;
    // NOP
    // 0x45e12c: 0x0  nop
    ctx->pc = 0x45e12cu;
    // NOP
    ctx->pc = 0x45e130u;
}
