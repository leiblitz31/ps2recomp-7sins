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

// Function: sub_0017B720
// Address: 0x17b720 - 0x17b7d0
void sub_0017B720_0x17b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B720_0x17b720");
#endif

    switch (ctx->pc) {
        case 0x17b790u: goto label_17b790;
        case 0x17b7b0u: goto label_17b7b0;
        default: break;
    }

    ctx->pc = 0x17b720u;

    // 0x17b720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17b72c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17b72cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17b730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b734: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17B734u;
    {
        const bool branch_taken_0x17b734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b734) {
            ctx->pc = 0x17B7B0u;
            goto label_17b7b0;
        }
    }
    ctx->pc = 0x17B73Cu;
    // 0x17b73c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b744: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17B744u;
    {
        const bool branch_taken_0x17b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b744) {
            ctx->pc = 0x17B790u;
            goto label_17b790;
        }
    }
    ctx->pc = 0x17B74Cu;
    // 0x17b74c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b750: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x17b750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b758: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17b75c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b760: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b764: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x17b764u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b768: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17b76c: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x17b76cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x17b770: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B770u;
    {
        const bool branch_taken_0x17b770 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17b770) {
            ctx->pc = 0x17B780u;
            goto label_17b780;
        }
    }
    ctx->pc = 0x17B778u;
    // 0x17b778: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x17b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x17b77c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x17b77cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_17b780:
    // 0x17b780: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17b780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17b784: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17b784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b788: 0xc05ff68  jal         func_17FDA0
    ctx->pc = 0x17B788u;
    SET_GPR_U32(ctx, 31, 0x17B790u);
    ctx->pc = 0x17FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FDA0u, 0x17B788u, 0x17B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B790u;
label_17b790:
    // 0x17b790: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17b790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b794: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17b798: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17b798u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17b79c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B79Cu;
    {
        const bool branch_taken_0x17b79c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b79c) {
            ctx->pc = 0x17B7B0u;
            goto label_17b7b0;
        }
    }
    ctx->pc = 0x17B7A4u;
    // 0x17b7a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b7a8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17B7A8u;
    SET_GPR_U32(ctx, 31, 0x17B7B0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17B7A8u, 0x17B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B7B0u;
label_17b7b0:
    // 0x17b7b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b7b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B7C4u;
    // 0x17b7c4: 0x0  nop
    ctx->pc = 0x17b7c4u;
    // NOP
    // 0x17b7c8: 0x0  nop
    ctx->pc = 0x17b7c8u;
    // NOP
    // 0x17b7cc: 0x0  nop
    ctx->pc = 0x17b7ccu;
    // NOP
    ctx->pc = 0x17b7d0u;
}
