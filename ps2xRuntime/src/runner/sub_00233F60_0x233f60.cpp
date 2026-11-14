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

// Function: sub_00233F60
// Address: 0x233f60 - 0x233fd0
void sub_00233F60_0x233f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233F60_0x233f60");
#endif

    switch (ctx->pc) {
        case 0x233f78u: goto label_233f78;
        default: break;
    }

    ctx->pc = 0x233f60u;

    // 0x233f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x233f6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f70: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x233F70u;
    SET_GPR_U32(ctx, 31, 0x233F78u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x233F70u, 0x233F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F78u;
label_233f78:
    // 0x233f78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x233f7c: 0x246353e0  addiu       $v1, $v1, 0x53E0
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21472));
    // 0x233f80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x233f88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f8c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x233f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x233f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f94: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x233f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x233f98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233f9c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x233f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x233fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233fa4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x233fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x233fa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233fac: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x233facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x233fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233fb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x233FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233FC4u;
    // 0x233fc4: 0x0  nop
    ctx->pc = 0x233fc4u;
    // NOP
    // 0x233fc8: 0x0  nop
    ctx->pc = 0x233fc8u;
    // NOP
    // 0x233fcc: 0x0  nop
    ctx->pc = 0x233fccu;
    // NOP
    ctx->pc = 0x233fd0u;
}
