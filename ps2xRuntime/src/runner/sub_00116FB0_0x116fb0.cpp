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

// Function: sub_00116FB0
// Address: 0x116fb0 - 0x117000
void sub_00116FB0_0x116fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116FB0_0x116fb0");
#endif

    ctx->pc = 0x116fb0u;

    // 0x116fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116fb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x116fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x116fbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x116fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x116fc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x116fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116fc4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x116fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116fc8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x116fc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x116fcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x116fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116fd0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x116fd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116fd4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x116fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116fd8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x116fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x116fdc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x116fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116fe0: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x116fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x116fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116fe8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x116fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116fec: 0x3e00008  jr          $ra
    ctx->pc = 0x116FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116FF4u;
    // 0x116ff4: 0x0  nop
    ctx->pc = 0x116ff4u;
    // NOP
    // 0x116ff8: 0x0  nop
    ctx->pc = 0x116ff8u;
    // NOP
    // 0x116ffc: 0x0  nop
    ctx->pc = 0x116ffcu;
    // NOP
    ctx->pc = 0x117000u;
}
