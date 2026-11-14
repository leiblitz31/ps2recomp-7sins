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

// Function: sub_00112F70
// Address: 0x112f70 - 0x112fd0
void sub_00112F70_0x112f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112F70_0x112f70");
#endif

    switch (ctx->pc) {
        case 0x112f98u: goto label_112f98;
        case 0x112facu: goto label_112fac;
        default: break;
    }

    ctx->pc = 0x112f70u;

    // 0x112f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112f7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x112f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x112f80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x112f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x112f84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x112f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112f88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f90: 0xc044888  jal         func_112220
    ctx->pc = 0x112F90u;
    SET_GPR_U32(ctx, 31, 0x112F98u);
    ctx->pc = 0x112220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112220u, 0x112F90u, 0x112F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F98u;
label_112f98:
    // 0x112f98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f9c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x112f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x112fa0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x112fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112fa4: 0xc044bf4  jal         func_112FD0
    ctx->pc = 0x112FA4u;
    SET_GPR_U32(ctx, 31, 0x112FACu);
    ctx->pc = 0x112FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112FD0u, 0x112FA4u, 0x112FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FACu;
label_112fac:
    // 0x112fac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x112fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112fb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x112fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x112fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x112FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112FC4u;
    // 0x112fc4: 0x0  nop
    ctx->pc = 0x112fc4u;
    // NOP
    // 0x112fc8: 0x0  nop
    ctx->pc = 0x112fc8u;
    // NOP
    // 0x112fcc: 0x0  nop
    ctx->pc = 0x112fccu;
    // NOP
    ctx->pc = 0x112fd0u;
}
