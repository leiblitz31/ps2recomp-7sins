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

// Function: sub_00291B80
// Address: 0x291b80 - 0x291c00
void sub_00291B80_0x291b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291B80_0x291b80");
#endif

    switch (ctx->pc) {
        case 0x291bb4u: goto label_291bb4;
        case 0x291bc4u: goto label_291bc4;
        case 0x291be4u: goto label_291be4;
        default: break;
    }

    ctx->pc = 0x291b80u;

    // 0x291b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291b8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x291b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x291b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x291B94u;
    {
        const bool branch_taken_0x291b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291b94) {
            ctx->pc = 0x291BE4u;
            goto label_291be4;
        }
    }
    ctx->pc = 0x291B9Cu;
    // 0x291b9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x291b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291ba0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291ba4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x291ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291ba8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x291ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291bac: 0xc0a472c  jal         func_291CB0
    ctx->pc = 0x291BACu;
    SET_GPR_U32(ctx, 31, 0x291BB4u);
    ctx->pc = 0x291CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291CB0u, 0x291BACu, 0x291BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BB4u;
label_291bb4:
    // 0x291bb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bbc: 0xc0a4700  jal         func_291C00
    ctx->pc = 0x291BBCu;
    SET_GPR_U32(ctx, 31, 0x291BC4u);
    ctx->pc = 0x291C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291C00u, 0x291BBCu, 0x291BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BC4u;
label_291bc4:
    // 0x291bc4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x291bc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291bc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x291bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x291bcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x291bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x291bd0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291BD0u;
    {
        const bool branch_taken_0x291bd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x291bd0) {
            ctx->pc = 0x291BE4u;
            goto label_291be4;
        }
    }
    ctx->pc = 0x291BD8u;
    // 0x291bd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291bdc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x291BDCu;
    SET_GPR_U32(ctx, 31, 0x291BE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x291BDCu, 0x291BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BE4u;
label_291be4:
    // 0x291be4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291bec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x291becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x291BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291BF8u;
    // 0x291bf8: 0x0  nop
    ctx->pc = 0x291bf8u;
    // NOP
    // 0x291bfc: 0x0  nop
    ctx->pc = 0x291bfcu;
    // NOP
    ctx->pc = 0x291c00u;
}
