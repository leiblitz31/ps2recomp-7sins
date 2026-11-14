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

// Function: sub_00477F60
// Address: 0x477f60 - 0x477fb0
void sub_00477F60_0x477f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477F60_0x477f60");
#endif

    switch (ctx->pc) {
        case 0x477f78u: goto label_477f78;
        case 0x477f88u: goto label_477f88;
        case 0x477f98u: goto label_477f98;
        default: break;
    }

    ctx->pc = 0x477f60u;

    // 0x477f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x477f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x477f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x477f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x477f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x477f6c: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477f70: 0xc11dd74  jal         func_4775D0
    ctx->pc = 0x477F70u;
    SET_GPR_U32(ctx, 31, 0x477F78u);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x477F70u, 0x477F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477F78u;
label_477f78:
    // 0x477f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x477f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477f7c: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477f80: 0xc11dd6c  jal         func_4775B0
    ctx->pc = 0x477F80u;
    SET_GPR_U32(ctx, 31, 0x477F88u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x477F80u, 0x477F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477F88u;
label_477f88:
    // 0x477f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x477f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477f8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x477f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477f90: 0xc11e238  jal         func_4788E0
    ctx->pc = 0x477F90u;
    SET_GPR_U32(ctx, 31, 0x477F98u);
    ctx->pc = 0x4788E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4788E0u, 0x477F90u, 0x477F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477F98u;
label_477f98:
    // 0x477f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x477f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477fa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x477fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x477fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x477FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477FACu;
    // 0x477fac: 0x0  nop
    ctx->pc = 0x477facu;
    // NOP
    ctx->pc = 0x477fb0u;
}
