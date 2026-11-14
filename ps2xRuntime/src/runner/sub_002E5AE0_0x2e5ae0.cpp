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

// Function: sub_002E5AE0
// Address: 0x2e5ae0 - 0x2e5b60
void sub_002E5AE0_0x2e5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5AE0_0x2e5ae0");
#endif

    switch (ctx->pc) {
        case 0x2e5b14u: goto label_2e5b14;
        case 0x2e5b24u: goto label_2e5b24;
        case 0x2e5b44u: goto label_2e5b44;
        default: break;
    }

    ctx->pc = 0x2e5ae0u;

    // 0x2e5ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e5aec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e5aecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e5af0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5af4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5AF4u;
    {
        const bool branch_taken_0x2e5af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5af4) {
            ctx->pc = 0x2E5B44u;
            goto label_2e5b44;
        }
    }
    ctx->pc = 0x2E5AFCu;
    // 0x2e5afc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e5b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5b08: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e5b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e5b0c: 0xc0b9704  jal         func_2E5C10
    ctx->pc = 0x2E5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B14u);
    ctx->pc = 0x2E5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5C10u, 0x2E5B0Cu, 0x2E5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B14u;
label_2e5b14:
    // 0x2e5b14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b1c: 0xc0b96d8  jal         func_2E5B60
    ctx->pc = 0x2E5B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B24u);
    ctx->pc = 0x2E5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B60u, 0x2E5B1Cu, 0x2E5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B24u;
label_2e5b24:
    // 0x2e5b24: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e5b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5b28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e5b2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e5b2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e5b30: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5B30u;
    {
        const bool branch_taken_0x2e5b30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e5b30) {
            ctx->pc = 0x2E5B44u;
            goto label_2e5b44;
        }
    }
    ctx->pc = 0x2E5B38u;
    // 0x2e5b38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b3c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E5B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B44u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E5B3Cu, 0x2E5B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B44u;
label_2e5b44:
    // 0x2e5b44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5b4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5b50: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5B58u;
    // 0x2e5b58: 0x0  nop
    ctx->pc = 0x2e5b58u;
    // NOP
    // 0x2e5b5c: 0x0  nop
    ctx->pc = 0x2e5b5cu;
    // NOP
    ctx->pc = 0x2e5b60u;
}
