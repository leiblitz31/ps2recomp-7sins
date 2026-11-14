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

// Function: sub_001943D0
// Address: 0x1943d0 - 0x194450
void sub_001943D0_0x1943d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001943D0_0x1943d0");
#endif

    switch (ctx->pc) {
        case 0x194404u: goto label_194404;
        default: break;
    }

    ctx->pc = 0x1943d0u;

    // 0x1943d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1943d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1943d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1943d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1943d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1943d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1943dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1943dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1943e0: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1943e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1943e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1943E4u;
    {
        const bool branch_taken_0x1943e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1943e4) {
            ctx->pc = 0x19440Cu;
            goto label_19440c;
        }
    }
    ctx->pc = 0x1943ECu;
    // 0x1943ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1943ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1943f0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1943f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1943f4: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1943f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1943f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1943fc: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x1943FCu;
    SET_GPR_U32(ctx, 31, 0x194404u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x1943FCu, 0x194404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194404u;
label_194404:
    // 0x194404: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194408: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x194408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
label_19440c:
    // 0x19440c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19440cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194410: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194414: 0x3e00008  jr          $ra
    ctx->pc = 0x194414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19441Cu;
    // 0x19441c: 0x0  nop
    ctx->pc = 0x19441cu;
    // NOP
    // 0x194420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194428: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x194428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19442c: 0x3e00008  jr          $ra
    ctx->pc = 0x19442Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19442Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194434u;
    // 0x194434: 0x0  nop
    ctx->pc = 0x194434u;
    // NOP
    // 0x194438: 0x0  nop
    ctx->pc = 0x194438u;
    // NOP
    // 0x19443c: 0x0  nop
    ctx->pc = 0x19443cu;
    // NOP
    // 0x194440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194444: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x194444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x194448: 0x3e00008  jr          $ra
    ctx->pc = 0x194448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194450u;
}
