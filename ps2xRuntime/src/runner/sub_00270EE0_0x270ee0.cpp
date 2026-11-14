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

// Function: sub_00270EE0
// Address: 0x270ee0 - 0x270f20
void sub_00270EE0_0x270ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270EE0_0x270ee0");
#endif

    switch (ctx->pc) {
        case 0x270efcu: goto label_270efc;
        default: break;
    }

    ctx->pc = 0x270ee0u;

    // 0x270ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270ee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x270ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x270eec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270ef0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x270ef4: 0xc051400  jal         func_145000
    ctx->pc = 0x270EF4u;
    SET_GPR_U32(ctx, 31, 0x270EFCu);
    ctx->pc = 0x145000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145000u, 0x270EF4u, 0x270EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270EFCu;
label_270efc:
    // 0x270efc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x270efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x270f00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x270f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x270f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270f08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x270f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x270F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270F14u;
    // 0x270f14: 0x0  nop
    ctx->pc = 0x270f14u;
    // NOP
    // 0x270f18: 0x0  nop
    ctx->pc = 0x270f18u;
    // NOP
    // 0x270f1c: 0x0  nop
    ctx->pc = 0x270f1cu;
    // NOP
    ctx->pc = 0x270f20u;
}
