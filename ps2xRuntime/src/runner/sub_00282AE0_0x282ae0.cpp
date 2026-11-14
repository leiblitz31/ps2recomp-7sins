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

// Function: sub_00282AE0
// Address: 0x282ae0 - 0x282b20
void sub_00282AE0_0x282ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282AE0_0x282ae0");
#endif

    switch (ctx->pc) {
        case 0x282afcu: goto label_282afc;
        default: break;
    }

    ctx->pc = 0x282ae0u;

    // 0x282ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x282aec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282af0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x282af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282af4: 0xc042734  jal         func_109CD0
    ctx->pc = 0x282AF4u;
    SET_GPR_U32(ctx, 31, 0x282AFCu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x282AF4u, 0x282AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AFCu;
label_282afc:
    // 0x282afc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x282afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x282b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x282b04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282b0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282b10: 0x3e00008  jr          $ra
    ctx->pc = 0x282B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282B18u;
    // 0x282b18: 0x0  nop
    ctx->pc = 0x282b18u;
    // NOP
    // 0x282b1c: 0x0  nop
    ctx->pc = 0x282b1cu;
    // NOP
    ctx->pc = 0x282b20u;
}
