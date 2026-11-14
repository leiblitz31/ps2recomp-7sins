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

// Function: sub_00284AC0
// Address: 0x284ac0 - 0x284b40
void sub_00284AC0_0x284ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284AC0_0x284ac0");
#endif

    switch (ctx->pc) {
        case 0x284af4u: goto label_284af4;
        case 0x284b04u: goto label_284b04;
        case 0x284b24u: goto label_284b24;
        default: break;
    }

    ctx->pc = 0x284ac0u;

    // 0x284ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284ac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284acc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284accu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284ad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284ad4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x284AD4u;
    {
        const bool branch_taken_0x284ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ad4) {
            ctx->pc = 0x284B24u;
            goto label_284b24;
        }
    }
    ctx->pc = 0x284ADCu;
    // 0x284adc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x284adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284ae0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284ae4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x284ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284ae8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x284ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284aec: 0xc0a12f8  jal         func_284BE0
    ctx->pc = 0x284AECu;
    SET_GPR_U32(ctx, 31, 0x284AF4u);
    ctx->pc = 0x284BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284BE0u, 0x284AECu, 0x284AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AF4u;
label_284af4:
    // 0x284af4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284afc: 0xc0a12d0  jal         func_284B40
    ctx->pc = 0x284AFCu;
    SET_GPR_U32(ctx, 31, 0x284B04u);
    ctx->pc = 0x284B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284B40u, 0x284AFCu, 0x284B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B04u;
label_284b04:
    // 0x284b04: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284b08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284b0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284b10: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284B10u;
    {
        const bool branch_taken_0x284b10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284b10) {
            ctx->pc = 0x284B24u;
            goto label_284b24;
        }
    }
    ctx->pc = 0x284B18u;
    // 0x284b18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b1c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284B1Cu;
    SET_GPR_U32(ctx, 31, 0x284B24u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284B1Cu, 0x284B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B24u;
label_284b24:
    // 0x284b24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284b2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284b30: 0x3e00008  jr          $ra
    ctx->pc = 0x284B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284B38u;
    // 0x284b38: 0x0  nop
    ctx->pc = 0x284b38u;
    // NOP
    // 0x284b3c: 0x0  nop
    ctx->pc = 0x284b3cu;
    // NOP
    ctx->pc = 0x284b40u;
}
