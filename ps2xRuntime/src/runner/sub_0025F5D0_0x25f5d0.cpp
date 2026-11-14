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

// Function: sub_0025F5D0
// Address: 0x25f5d0 - 0x25f620
void sub_0025F5D0_0x25f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F5D0_0x25f5d0");
#endif

    switch (ctx->pc) {
        case 0x25f5f4u: goto label_25f5f4;
        default: break;
    }

    ctx->pc = 0x25f5d0u;

    // 0x25f5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25f5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f5d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f5dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25f5e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x25f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x25f5e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f5e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f5ec: 0xc097d88  jal         func_25F620
    ctx->pc = 0x25F5ECu;
    SET_GPR_U32(ctx, 31, 0x25F5F4u);
    ctx->pc = 0x25F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F620u, 0x25F5ECu, 0x25F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5F4u;
label_25f5f4:
    // 0x25f5f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f5f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f5fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25f600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f60c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F614u;
    // 0x25f614: 0x0  nop
    ctx->pc = 0x25f614u;
    // NOP
    // 0x25f618: 0x0  nop
    ctx->pc = 0x25f618u;
    // NOP
    // 0x25f61c: 0x0  nop
    ctx->pc = 0x25f61cu;
    // NOP
    ctx->pc = 0x25f620u;
}
