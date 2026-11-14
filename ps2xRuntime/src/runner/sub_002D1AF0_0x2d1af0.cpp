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

// Function: sub_002D1AF0
// Address: 0x2d1af0 - 0x2d1b70
void sub_002D1AF0_0x2d1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1AF0_0x2d1af0");
#endif

    switch (ctx->pc) {
        case 0x2d1b24u: goto label_2d1b24;
        case 0x2d1b34u: goto label_2d1b34;
        case 0x2d1b54u: goto label_2d1b54;
        default: break;
    }

    ctx->pc = 0x2d1af0u;

    // 0x2d1af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d1afc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d1afcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d1b00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D1B04u;
    {
        const bool branch_taken_0x2d1b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b04) {
            ctx->pc = 0x2D1B54u;
            goto label_2d1b54;
        }
    }
    ctx->pc = 0x2D1B0Cu;
    // 0x2d1b0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d1b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1b18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d1b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d1b1c: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B24u);
    ctx->pc = 0x2D1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C20u, 0x2D1B1Cu, 0x2D1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B24u;
label_2d1b24:
    // 0x2d1b24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b2c: 0xc0b46dc  jal         func_2D1B70
    ctx->pc = 0x2D1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B34u);
    ctx->pc = 0x2D1B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1B70u, 0x2D1B2Cu, 0x2D1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B34u;
label_2d1b34:
    // 0x2d1b34: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d1b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1b38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d1b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d1b3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d1b3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d1b40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1B40u;
    {
        const bool branch_taken_0x2d1b40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d1b40) {
            ctx->pc = 0x2D1B54u;
            goto label_2d1b54;
        }
    }
    ctx->pc = 0x2D1B48u;
    // 0x2d1b48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b4c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D1B4Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B54u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D1B4Cu, 0x2D1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B54u;
label_2d1b54:
    // 0x2d1b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1b5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1B68u;
    // 0x2d1b68: 0x0  nop
    ctx->pc = 0x2d1b68u;
    // NOP
    // 0x2d1b6c: 0x0  nop
    ctx->pc = 0x2d1b6cu;
    // NOP
    ctx->pc = 0x2d1b70u;
}
