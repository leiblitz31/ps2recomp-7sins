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

// Function: sub_0028EB00
// Address: 0x28eb00 - 0x28eb40
void sub_0028EB00_0x28eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EB00_0x28eb00");
#endif

    switch (ctx->pc) {
        case 0x28eb1cu: goto label_28eb1c;
        default: break;
    }

    ctx->pc = 0x28eb00u;

    // 0x28eb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28eb04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28eb08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28eb0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28eb14: 0xc042734  jal         func_109CD0
    ctx->pc = 0x28EB14u;
    SET_GPR_U32(ctx, 31, 0x28EB1Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x28EB14u, 0x28EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB1Cu;
label_28eb1c:
    // 0x28eb1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28eb24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28eb2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x28EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB38u;
    // 0x28eb38: 0x0  nop
    ctx->pc = 0x28eb38u;
    // NOP
    // 0x28eb3c: 0x0  nop
    ctx->pc = 0x28eb3cu;
    // NOP
    ctx->pc = 0x28eb40u;
}
