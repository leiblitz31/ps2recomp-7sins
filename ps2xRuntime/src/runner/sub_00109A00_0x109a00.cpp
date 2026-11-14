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

// Function: sub_00109A00
// Address: 0x109a00 - 0x109a50
void sub_00109A00_0x109a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109A00_0x109a00");
#endif

    switch (ctx->pc) {
        case 0x109a24u: goto label_109a24;
        default: break;
    }

    ctx->pc = 0x109a00u;

    // 0x109a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x109a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x109a0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x109a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x109a10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x109a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x109a14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x109a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x109a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109a1c: 0xc042694  jal         func_109A50
    ctx->pc = 0x109A1Cu;
    SET_GPR_U32(ctx, 31, 0x109A24u);
    ctx->pc = 0x109A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A50u, 0x109A1Cu, 0x109A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A24u;
label_109a24:
    // 0x109a24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x109a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109a28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x109a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109a2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x109a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a30: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x109a30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x109a34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x109a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109a3c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x109a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x109a40: 0x3e00008  jr          $ra
    ctx->pc = 0x109A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109A48u;
    // 0x109a48: 0x0  nop
    ctx->pc = 0x109a48u;
    // NOP
    // 0x109a4c: 0x0  nop
    ctx->pc = 0x109a4cu;
    // NOP
    ctx->pc = 0x109a50u;
}
