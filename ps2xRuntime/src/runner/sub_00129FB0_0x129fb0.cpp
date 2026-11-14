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

// Function: sub_00129FB0
// Address: 0x129fb0 - 0x12a010
void sub_00129FB0_0x129fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129FB0_0x129fb0");
#endif

    switch (ctx->pc) {
        case 0x129fd0u: goto label_129fd0;
        default: break;
    }

    ctx->pc = 0x129fb0u;

    // 0x129fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x129fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x129fbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x129fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x129fc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x129fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129fc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x129fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129fc8: 0xc042844  jal         func_10A110
    ctx->pc = 0x129FC8u;
    SET_GPR_U32(ctx, 31, 0x129FD0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x129FC8u, 0x129FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FD0u;
label_129fd0:
    // 0x129fd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129fd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x129fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x129fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x129fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129fdc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x129fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x129fe0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129fe4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x129fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x129fe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129fec: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x129fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x129ff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x129ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129ff8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x129ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x129ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x129FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A004u;
    // 0x12a004: 0x0  nop
    ctx->pc = 0x12a004u;
    // NOP
    // 0x12a008: 0x0  nop
    ctx->pc = 0x12a008u;
    // NOP
    // 0x12a00c: 0x0  nop
    ctx->pc = 0x12a00cu;
    // NOP
    ctx->pc = 0x12a010u;
}
