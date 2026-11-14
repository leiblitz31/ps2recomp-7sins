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

// Function: sub_00252830
// Address: 0x252830 - 0x2528b0
void sub_00252830_0x252830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252830_0x252830");
#endif

    switch (ctx->pc) {
        case 0x252854u: goto label_252854;
        case 0x252898u: goto label_252898;
        default: break;
    }

    ctx->pc = 0x252830u;

    // 0x252830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x252838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25283c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252848: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x252848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25284c: 0xc094270  jal         func_2509C0
    ctx->pc = 0x25284Cu;
    SET_GPR_U32(ctx, 31, 0x252854u);
    ctx->pc = 0x2509C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2509C0u, 0x25284Cu, 0x252854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252854u;
label_252854:
    // 0x252854: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x252854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252858: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x252858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25285c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252860: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x252860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x252864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252868: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x252868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25286c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25286cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252870: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x252870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x252874: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x252874u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
    // 0x252878: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252878u;
    {
        const bool branch_taken_0x252878 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x252878) {
            ctx->pc = 0x252888u;
            goto label_252888;
        }
    }
    ctx->pc = 0x252880u;
    // 0x252880: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x252880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x252884: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x252884u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_252888:
    // 0x252888: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x252888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25288c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25288cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252890: 0xc094904  jal         func_252410
    ctx->pc = 0x252890u;
    SET_GPR_U32(ctx, 31, 0x252898u);
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x252890u, 0x252898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252898u;
label_252898:
    // 0x252898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25289c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25289cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2528a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2528A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2528A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2528A8u;
    // 0x2528a8: 0x0  nop
    ctx->pc = 0x2528a8u;
    // NOP
    // 0x2528ac: 0x0  nop
    ctx->pc = 0x2528acu;
    // NOP
    ctx->pc = 0x2528b0u;
}
