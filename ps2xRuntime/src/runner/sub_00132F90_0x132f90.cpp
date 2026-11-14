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

// Function: sub_00132F90
// Address: 0x132f90 - 0x132ff0
void sub_00132F90_0x132f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132F90_0x132f90");
#endif

    switch (ctx->pc) {
        case 0x132fc4u: goto label_132fc4;
        case 0x132fd0u: goto label_132fd0;
        default: break;
    }

    ctx->pc = 0x132f90u;

    // 0x132f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x132f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x132f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x132f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x132f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132fa0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x132fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x132fa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132fa8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x132fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x132fac: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x132facu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132fb0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x132fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132fb4: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x132fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x132fb8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x132fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132fbc: 0xc04cbfc  jal         func_132FF0
    ctx->pc = 0x132FBCu;
    SET_GPR_U32(ctx, 31, 0x132FC4u);
    ctx->pc = 0x132FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FF0u, 0x132FBCu, 0x132FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FC4u;
label_132fc4:
    // 0x132fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fc8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x132FC8u;
    SET_GPR_U32(ctx, 31, 0x132FD0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x132FC8u, 0x132FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FD0u;
label_132fd0:
    // 0x132fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132fdc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x132fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x132fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x132FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132FE8u;
    // 0x132fe8: 0x0  nop
    ctx->pc = 0x132fe8u;
    // NOP
    // 0x132fec: 0x0  nop
    ctx->pc = 0x132fecu;
    // NOP
    ctx->pc = 0x132ff0u;
}
