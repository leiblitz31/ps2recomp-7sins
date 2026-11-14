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

// Function: sub_0015BF10
// Address: 0x15bf10 - 0x15bf60
void sub_0015BF10_0x15bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BF10_0x15bf10");
#endif

    switch (ctx->pc) {
        case 0x15bf34u: goto label_15bf34;
        default: break;
    }

    ctx->pc = 0x15bf10u;

    // 0x15bf10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15bf14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bf18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bf1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15bf20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x15bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x15bf24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bf2c: 0xc056fd8  jal         func_15BF60
    ctx->pc = 0x15BF2Cu;
    SET_GPR_U32(ctx, 31, 0x15BF34u);
    ctx->pc = 0x15BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF60u, 0x15BF2Cu, 0x15BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF34u;
label_15bf34:
    // 0x15bf34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bf38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15bf40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15bf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15bf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF54u;
    // 0x15bf54: 0x0  nop
    ctx->pc = 0x15bf54u;
    // NOP
    // 0x15bf58: 0x0  nop
    ctx->pc = 0x15bf58u;
    // NOP
    // 0x15bf5c: 0x0  nop
    ctx->pc = 0x15bf5cu;
    // NOP
    ctx->pc = 0x15bf60u;
}
