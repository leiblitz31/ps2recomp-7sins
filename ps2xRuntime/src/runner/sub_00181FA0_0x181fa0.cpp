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

// Function: sub_00181FA0
// Address: 0x181fa0 - 0x182020
void sub_00181FA0_0x181fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181FA0_0x181fa0");
#endif

    switch (ctx->pc) {
        case 0x181fd4u: goto label_181fd4;
        case 0x181fe4u: goto label_181fe4;
        case 0x182004u: goto label_182004;
        default: break;
    }

    ctx->pc = 0x181fa0u;

    // 0x181fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181fa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x181fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x181fac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x181facu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x181fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fb4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x181FB4u;
    {
        const bool branch_taken_0x181fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fb4) {
            ctx->pc = 0x182004u;
            goto label_182004;
        }
    }
    ctx->pc = 0x181FBCu;
    // 0x181fbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x181fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x181fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181fc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181fcc: 0xc06016c  jal         func_1805B0
    ctx->pc = 0x181FCCu;
    SET_GPR_U32(ctx, 31, 0x181FD4u);
    ctx->pc = 0x1805B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1805B0u, 0x181FCCu, 0x181FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181FD4u;
label_181fd4:
    // 0x181fd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fdc: 0xc060808  jal         func_182020
    ctx->pc = 0x181FDCu;
    SET_GPR_U32(ctx, 31, 0x181FE4u);
    ctx->pc = 0x182020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182020u, 0x181FDCu, 0x181FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181FE4u;
label_181fe4:
    // 0x181fe4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x181fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181fe8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181fec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181fecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181ff0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x181FF0u;
    {
        const bool branch_taken_0x181ff0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x181ff0) {
            ctx->pc = 0x182004u;
            goto label_182004;
        }
    }
    ctx->pc = 0x181FF8u;
    // 0x181ff8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181ffc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x181FFCu;
    SET_GPR_U32(ctx, 31, 0x182004u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x181FFCu, 0x182004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182004u;
label_182004:
    // 0x182004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18200c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18200cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182010: 0x3e00008  jr          $ra
    ctx->pc = 0x182010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182018u;
    // 0x182018: 0x0  nop
    ctx->pc = 0x182018u;
    // NOP
    // 0x18201c: 0x0  nop
    ctx->pc = 0x18201cu;
    // NOP
    ctx->pc = 0x182020u;
}
