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

// Function: sub_00467AE0
// Address: 0x467ae0 - 0x467b30
void sub_00467AE0_0x467ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467AE0_0x467ae0");
#endif

    switch (ctx->pc) {
        case 0x467b14u: goto label_467b14;
        default: break;
    }

    ctx->pc = 0x467ae0u;

    // 0x467ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x467ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x467ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x467aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x467aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x467af0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x467af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x467af4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x467af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x467af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467afc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x467afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x467b00: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x467b00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x467b04: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x467b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x467b08: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x467b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467b0c: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x467B0Cu;
    SET_GPR_U32(ctx, 31, 0x467B14u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x467B0Cu, 0x467B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467B14u;
label_467b14:
    // 0x467b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467b18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x467b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x467b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x467B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467B24u;
    // 0x467b24: 0x0  nop
    ctx->pc = 0x467b24u;
    // NOP
    // 0x467b28: 0x0  nop
    ctx->pc = 0x467b28u;
    // NOP
    // 0x467b2c: 0x0  nop
    ctx->pc = 0x467b2cu;
    // NOP
    ctx->pc = 0x467b30u;
}
