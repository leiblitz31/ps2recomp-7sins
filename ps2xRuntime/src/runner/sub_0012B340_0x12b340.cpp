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

// Function: sub_0012B340
// Address: 0x12b340 - 0x12b390
void sub_0012B340_0x12b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B340_0x12b340");
#endif

    switch (ctx->pc) {
        case 0x12b364u: goto label_12b364;
        default: break;
    }

    ctx->pc = 0x12b340u;

    // 0x12b340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b34c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12b350: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x12b350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x12b354: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b358: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12b358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b35c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x12B35Cu;
    SET_GPR_U32(ctx, 31, 0x12B364u);
    ctx->pc = 0x12B390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B390u, 0x12B35Cu, 0x12B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B364u;
label_12b364:
    // 0x12b364: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x12b364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b368: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b36c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12b370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b378: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12b378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B384u;
    // 0x12b384: 0x0  nop
    ctx->pc = 0x12b384u;
    // NOP
    // 0x12b388: 0x0  nop
    ctx->pc = 0x12b388u;
    // NOP
    // 0x12b38c: 0x0  nop
    ctx->pc = 0x12b38cu;
    // NOP
    ctx->pc = 0x12b390u;
}
