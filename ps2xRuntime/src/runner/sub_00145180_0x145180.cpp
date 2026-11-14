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

// Function: sub_00145180
// Address: 0x145180 - 0x145200
void sub_00145180_0x145180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145180_0x145180");
#endif

    switch (ctx->pc) {
        case 0x1451b4u: goto label_1451b4;
        case 0x1451c4u: goto label_1451c4;
        case 0x1451e4u: goto label_1451e4;
        default: break;
    }

    ctx->pc = 0x145180u;

    // 0x145180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145188: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x145188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14518c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14518cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x145190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x145190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145194: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x145194u;
    {
        const bool branch_taken_0x145194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145194) {
            ctx->pc = 0x1451E4u;
            goto label_1451e4;
        }
    }
    ctx->pc = 0x14519Cu;
    // 0x14519c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1451a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1451a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1451a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1451a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1451ac: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x1451ACu;
    SET_GPR_U32(ctx, 31, 0x1451B4u);
    ctx->pc = 0x10C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1F0u, 0x1451ACu, 0x1451B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451B4u;
label_1451b4:
    // 0x1451b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1451b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1451b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451bc: 0xc051480  jal         func_145200
    ctx->pc = 0x1451BCu;
    SET_GPR_U32(ctx, 31, 0x1451C4u);
    ctx->pc = 0x145200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145200u, 0x1451BCu, 0x1451C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451C4u;
label_1451c4:
    // 0x1451c4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1451c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1451c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1451cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1451ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1451d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1451D0u;
    {
        const bool branch_taken_0x1451d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1451d0) {
            ctx->pc = 0x1451E4u;
            goto label_1451e4;
        }
    }
    ctx->pc = 0x1451D8u;
    // 0x1451d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1451d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1451DCu;
    SET_GPR_U32(ctx, 31, 0x1451E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1451DCu, 0x1451E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451E4u;
label_1451e4:
    // 0x1451e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1451e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1451e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1451ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1451f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1451F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451F8u;
    // 0x1451f8: 0x0  nop
    ctx->pc = 0x1451f8u;
    // NOP
    // 0x1451fc: 0x0  nop
    ctx->pc = 0x1451fcu;
    // NOP
    ctx->pc = 0x145200u;
}
