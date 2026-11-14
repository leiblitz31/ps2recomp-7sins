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

// Function: sub_00236AE0
// Address: 0x236ae0 - 0x236b20
void sub_00236AE0_0x236ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236AE0_0x236ae0");
#endif

    switch (ctx->pc) {
        case 0x236af8u: goto label_236af8;
        default: break;
    }

    ctx->pc = 0x236ae0u;

    // 0x236ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x236ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x236aec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x236aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236af0: 0xc08da7c  jal         func_2369F0
    ctx->pc = 0x236AF0u;
    SET_GPR_U32(ctx, 31, 0x236AF8u);
    ctx->pc = 0x2369F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2369F0u, 0x236AF0u, 0x236AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AF8u;
label_236af8:
    // 0x236af8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x236af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x236afc: 0x24635560  addiu       $v1, $v1, 0x5560
    ctx->pc = 0x236afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21856));
    // 0x236b00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x236b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x236b08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236b10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x236b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x236b14: 0x3e00008  jr          $ra
    ctx->pc = 0x236B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B1Cu;
    // 0x236b1c: 0x0  nop
    ctx->pc = 0x236b1cu;
    // NOP
    ctx->pc = 0x236b20u;
}
