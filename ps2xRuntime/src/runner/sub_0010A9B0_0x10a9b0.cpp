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

// Function: sub_0010A9B0
// Address: 0x10a9b0 - 0x10aa20
void sub_0010A9B0_0x10a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A9B0_0x10a9b0");
#endif

    switch (ctx->pc) {
        case 0x10a9d0u: goto label_10a9d0;
        case 0x10a9e4u: goto label_10a9e4;
        case 0x10a9f8u: goto label_10a9f8;
        default: break;
    }

    ctx->pc = 0x10a9b0u;

    // 0x10a9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10a9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a9b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10a9bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10a9c0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x10a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10a9c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a9c8: 0xc042aa4  jal         func_10AA90
    ctx->pc = 0x10A9C8u;
    SET_GPR_U32(ctx, 31, 0x10A9D0u);
    ctx->pc = 0x10AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA90u, 0x10A9C8u, 0x10A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9D0u;
label_10a9d0:
    // 0x10a9d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a9d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9dc: 0xc042a88  jal         func_10AA20
    ctx->pc = 0x10A9DCu;
    SET_GPR_U32(ctx, 31, 0x10A9E4u);
    ctx->pc = 0x10AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA20u, 0x10A9DCu, 0x10A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9E4u;
label_10a9e4:
    // 0x10a9e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a9e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9f0: 0xc042d10  jal         func_10B440
    ctx->pc = 0x10A9F0u;
    SET_GPR_U32(ctx, 31, 0x10A9F8u);
    ctx->pc = 0x10B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B440u, 0x10A9F0u, 0x10A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9F8u;
label_10a9f8:
    // 0x10a9f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a9fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10aa00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aa04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10aa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aa08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10aa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AA14u;
    // 0x10aa14: 0x0  nop
    ctx->pc = 0x10aa14u;
    // NOP
    // 0x10aa18: 0x0  nop
    ctx->pc = 0x10aa18u;
    // NOP
    // 0x10aa1c: 0x0  nop
    ctx->pc = 0x10aa1cu;
    // NOP
    ctx->pc = 0x10aa20u;
}
