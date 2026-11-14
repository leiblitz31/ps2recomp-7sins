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

// Function: sub_00207FA0
// Address: 0x207fa0 - 0x208020
void sub_00207FA0_0x207fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207FA0_0x207fa0");
#endif

    switch (ctx->pc) {
        case 0x207fd4u: goto label_207fd4;
        case 0x207fe4u: goto label_207fe4;
        case 0x208004u: goto label_208004;
        default: break;
    }

    ctx->pc = 0x207fa0u;

    // 0x207fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207fa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207fac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207facu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207fb4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x207FB4u;
    {
        const bool branch_taken_0x207fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fb4) {
            ctx->pc = 0x208004u;
            goto label_208004;
        }
    }
    ctx->pc = 0x207FBCu;
    // 0x207fbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x207fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207fc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207fc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x207fcc: 0xc082030  jal         func_2080C0
    ctx->pc = 0x207FCCu;
    SET_GPR_U32(ctx, 31, 0x207FD4u);
    ctx->pc = 0x2080C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080C0u, 0x207FCCu, 0x207FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FD4u;
label_207fd4:
    // 0x207fd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fdc: 0xc082008  jal         func_208020
    ctx->pc = 0x207FDCu;
    SET_GPR_U32(ctx, 31, 0x207FE4u);
    ctx->pc = 0x208020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208020u, 0x207FDCu, 0x207FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FE4u;
label_207fe4:
    // 0x207fe4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207fe8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207fec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207fecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207ff0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207FF0u;
    {
        const bool branch_taken_0x207ff0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207ff0) {
            ctx->pc = 0x208004u;
            goto label_208004;
        }
    }
    ctx->pc = 0x207FF8u;
    // 0x207ff8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ffc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207FFCu;
    SET_GPR_U32(ctx, 31, 0x208004u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207FFCu, 0x208004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208004u;
label_208004:
    // 0x208004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20800c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x20800cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x208010: 0x3e00008  jr          $ra
    ctx->pc = 0x208010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208018u;
    // 0x208018: 0x0  nop
    ctx->pc = 0x208018u;
    // NOP
    // 0x20801c: 0x0  nop
    ctx->pc = 0x20801cu;
    // NOP
    ctx->pc = 0x208020u;
}
