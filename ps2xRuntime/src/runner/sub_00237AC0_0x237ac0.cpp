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

// Function: sub_00237AC0
// Address: 0x237ac0 - 0x237b50
void sub_00237AC0_0x237ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237AC0_0x237ac0");
#endif

    switch (ctx->pc) {
        case 0x237b04u: goto label_237b04;
        case 0x237b30u: goto label_237b30;
        default: break;
    }

    ctx->pc = 0x237ac0u;

    // 0x237ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237ac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x237ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x237acc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x237accu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x237ad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237ad4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x237AD4u;
    {
        const bool branch_taken_0x237ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ad4) {
            ctx->pc = 0x237B30u;
            goto label_237b30;
        }
    }
    ctx->pc = 0x237ADCu;
    // 0x237adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237ae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x237ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237ae4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x237ae8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x237ae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x237aec: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237AECu;
    {
        const bool branch_taken_0x237aec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x237aec) {
            ctx->pc = 0x237B10u;
            goto label_237b10;
        }
    }
    ctx->pc = 0x237AF4u;
    // 0x237af4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237af8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237afc: 0xc0c1204  jal         func_304810
    ctx->pc = 0x237AFCu;
    SET_GPR_U32(ctx, 31, 0x237B04u);
    ctx->pc = 0x304810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304810u, 0x237AFCu, 0x237B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B04u;
label_237b04:
    // 0x237b04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237b08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237b0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x237b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_237b10:
    // 0x237b10: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x237b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237b14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x237b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x237b18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x237b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x237b1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237B1Cu;
    {
        const bool branch_taken_0x237b1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x237b1c) {
            ctx->pc = 0x237B30u;
            goto label_237b30;
        }
    }
    ctx->pc = 0x237B24u;
    // 0x237b24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x237b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237b28: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x237B28u;
    SET_GPR_U32(ctx, 31, 0x237B30u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x237B28u, 0x237B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B30u;
label_237b30:
    // 0x237b30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237b38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x237b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x237B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237B44u;
    // 0x237b44: 0x0  nop
    ctx->pc = 0x237b44u;
    // NOP
    // 0x237b48: 0x0  nop
    ctx->pc = 0x237b48u;
    // NOP
    // 0x237b4c: 0x0  nop
    ctx->pc = 0x237b4cu;
    // NOP
    ctx->pc = 0x237b50u;
}
