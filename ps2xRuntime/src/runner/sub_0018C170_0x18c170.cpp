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

// Function: sub_0018C170
// Address: 0x18c170 - 0x18c1f0
void sub_0018C170_0x18c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C170_0x18c170");
#endif

    switch (ctx->pc) {
        case 0x18c1a4u: goto label_18c1a4;
        case 0x18c1b4u: goto label_18c1b4;
        case 0x18c1d4u: goto label_18c1d4;
        default: break;
    }

    ctx->pc = 0x18c170u;

    // 0x18c170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c17c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18c17cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x18c180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c184: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18C184u;
    {
        const bool branch_taken_0x18c184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c184) {
            ctx->pc = 0x18C1D4u;
            goto label_18c1d4;
        }
    }
    ctx->pc = 0x18C18Cu;
    // 0x18c18c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c194: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c198: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18c198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18c19c: 0xc0630a4  jal         func_18C290
    ctx->pc = 0x18C19Cu;
    SET_GPR_U32(ctx, 31, 0x18C1A4u);
    ctx->pc = 0x18C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C290u, 0x18C19Cu, 0x18C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1A4u;
label_18c1a4:
    // 0x18c1a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c1ac: 0xc06307c  jal         func_18C1F0
    ctx->pc = 0x18C1ACu;
    SET_GPR_U32(ctx, 31, 0x18C1B4u);
    ctx->pc = 0x18C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C1F0u, 0x18C1ACu, 0x18C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1B4u;
label_18c1b4:
    // 0x18c1b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18c1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c1b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c1bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c1bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c1c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C1C0u;
    {
        const bool branch_taken_0x18c1c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18c1c0) {
            ctx->pc = 0x18C1D4u;
            goto label_18c1d4;
        }
    }
    ctx->pc = 0x18C1C8u;
    // 0x18c1c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c1cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x18C1CCu;
    SET_GPR_U32(ctx, 31, 0x18C1D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18C1CCu, 0x18C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1D4u;
label_18c1d4:
    // 0x18c1d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c1dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c1dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C1E8u;
    // 0x18c1e8: 0x0  nop
    ctx->pc = 0x18c1e8u;
    // NOP
    // 0x18c1ec: 0x0  nop
    ctx->pc = 0x18c1ecu;
    // NOP
    ctx->pc = 0x18c1f0u;
}
