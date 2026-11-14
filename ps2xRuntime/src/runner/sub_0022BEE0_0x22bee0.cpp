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

// Function: sub_0022BEE0
// Address: 0x22bee0 - 0x22bf60
void sub_0022BEE0_0x22bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BEE0_0x22bee0");
#endif

    switch (ctx->pc) {
        case 0x22bf14u: goto label_22bf14;
        case 0x22bf24u: goto label_22bf24;
        case 0x22bf44u: goto label_22bf44;
        default: break;
    }

    ctx->pc = 0x22bee0u;

    // 0x22bee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22beec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22beecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22bef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bef4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22BEF4u;
    {
        const bool branch_taken_0x22bef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bef4) {
            ctx->pc = 0x22BF44u;
            goto label_22bf44;
        }
    }
    ctx->pc = 0x22BEFCu;
    // 0x22befc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22bf08: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22bf0c: 0xc08b000  jal         func_22C000
    ctx->pc = 0x22BF0Cu;
    SET_GPR_U32(ctx, 31, 0x22BF14u);
    ctx->pc = 0x22C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C000u, 0x22BF0Cu, 0x22BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF14u;
label_22bf14:
    // 0x22bf14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22bf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf1c: 0xc08afd8  jal         func_22BF60
    ctx->pc = 0x22BF1Cu;
    SET_GPR_U32(ctx, 31, 0x22BF24u);
    ctx->pc = 0x22BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BF60u, 0x22BF1Cu, 0x22BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF24u;
label_22bf24:
    // 0x22bf24: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22bf24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bf28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22bf2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22bf2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22bf30: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BF30u;
    {
        const bool branch_taken_0x22bf30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22bf30) {
            ctx->pc = 0x22BF44u;
            goto label_22bf44;
        }
    }
    ctx->pc = 0x22BF38u;
    // 0x22bf38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf3c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22BF3Cu;
    SET_GPR_U32(ctx, 31, 0x22BF44u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22BF3Cu, 0x22BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF44u;
label_22bf44:
    // 0x22bf44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bf4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22bf4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x22BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BF58u;
    // 0x22bf58: 0x0  nop
    ctx->pc = 0x22bf58u;
    // NOP
    // 0x22bf5c: 0x0  nop
    ctx->pc = 0x22bf5cu;
    // NOP
    ctx->pc = 0x22bf60u;
}
