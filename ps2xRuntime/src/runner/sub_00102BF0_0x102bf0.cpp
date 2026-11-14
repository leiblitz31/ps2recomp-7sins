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

// Function: sub_00102BF0
// Address: 0x102bf0 - 0x102c70
void sub_00102BF0_0x102bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102BF0_0x102bf0");
#endif

    switch (ctx->pc) {
        case 0x102c24u: goto label_102c24;
        case 0x102c34u: goto label_102c34;
        case 0x102c54u: goto label_102c54;
        default: break;
    }

    ctx->pc = 0x102bf0u;

    // 0x102bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102bfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x102bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x102c00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x102C04u;
    {
        const bool branch_taken_0x102c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102c04) {
            ctx->pc = 0x102C54u;
            goto label_102c54;
        }
    }
    ctx->pc = 0x102C0Cu;
    // 0x102c0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x102c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102c18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x102c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x102c1c: 0xc040b48  jal         func_102D20
    ctx->pc = 0x102C1Cu;
    SET_GPR_U32(ctx, 31, 0x102C24u);
    ctx->pc = 0x102D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D20u, 0x102C1Cu, 0x102C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C24u;
label_102c24:
    // 0x102c24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c2c: 0xc040b1c  jal         func_102C70
    ctx->pc = 0x102C2Cu;
    SET_GPR_U32(ctx, 31, 0x102C34u);
    ctx->pc = 0x102C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102C70u, 0x102C2Cu, 0x102C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C34u;
label_102c34:
    // 0x102c34: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x102c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102c38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x102c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x102c3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x102c3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x102c40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102C40u;
    {
        const bool branch_taken_0x102c40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102c40) {
            ctx->pc = 0x102C54u;
            goto label_102c54;
        }
    }
    ctx->pc = 0x102C48u;
    // 0x102c48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c4c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x102C4Cu;
    SET_GPR_U32(ctx, 31, 0x102C54u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x102C4Cu, 0x102C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C54u;
label_102c54:
    // 0x102c54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102c5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102c60: 0x3e00008  jr          $ra
    ctx->pc = 0x102C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102C68u;
    // 0x102c68: 0x0  nop
    ctx->pc = 0x102c68u;
    // NOP
    // 0x102c6c: 0x0  nop
    ctx->pc = 0x102c6cu;
    // NOP
    ctx->pc = 0x102c70u;
}
