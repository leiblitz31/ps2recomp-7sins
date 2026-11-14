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

// Function: sub_002CB730
// Address: 0x2cb730 - 0x2cb790
void sub_002CB730_0x2cb730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB730_0x2cb730");
#endif

    switch (ctx->pc) {
        case 0x2cb74cu: goto label_2cb74c;
        case 0x2cb75cu: goto label_2cb75c;
        case 0x2cb770u: goto label_2cb770;
        default: break;
    }

    ctx->pc = 0x2cb730u;

    // 0x2cb730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb73c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cb73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cb740: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cb740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb744: 0xc09d670  jal         func_2759C0
    ctx->pc = 0x2CB744u;
    SET_GPR_U32(ctx, 31, 0x2CB74Cu);
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x2CB744u, 0x2CB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB74Cu;
label_2cb74c:
    // 0x2cb74c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb750: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cb750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb754: 0xc0b2e10  jal         func_2CB840
    ctx->pc = 0x2CB754u;
    SET_GPR_U32(ctx, 31, 0x2CB75Cu);
    ctx->pc = 0x2CB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB840u, 0x2CB754u, 0x2CB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB75Cu;
label_2cb75c:
    // 0x2cb75c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cb75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb764: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cb764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb768: 0xc0b2de4  jal         func_2CB790
    ctx->pc = 0x2CB768u;
    SET_GPR_U32(ctx, 31, 0x2CB770u);
    ctx->pc = 0x2CB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB790u, 0x2CB768u, 0x2CB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB770u;
label_2cb770:
    // 0x2cb770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb778: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb77c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB784u;
    // 0x2cb784: 0x0  nop
    ctx->pc = 0x2cb784u;
    // NOP
    // 0x2cb788: 0x0  nop
    ctx->pc = 0x2cb788u;
    // NOP
    // 0x2cb78c: 0x0  nop
    ctx->pc = 0x2cb78cu;
    // NOP
    ctx->pc = 0x2cb790u;
}
