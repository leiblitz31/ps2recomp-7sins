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

// Function: sub_002450F0
// Address: 0x2450f0 - 0x245170
void sub_002450F0_0x2450f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002450F0_0x2450f0");
#endif

    switch (ctx->pc) {
        case 0x245124u: goto label_245124;
        case 0x245134u: goto label_245134;
        case 0x245154u: goto label_245154;
        default: break;
    }

    ctx->pc = 0x2450f0u;

    // 0x2450f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2450f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2450f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2450f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2450f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2450f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2450fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2450fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x245100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245104: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x245104u;
    {
        const bool branch_taken_0x245104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245104) {
            ctx->pc = 0x245154u;
            goto label_245154;
        }
    }
    ctx->pc = 0x24510Cu;
    // 0x24510c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245114: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245118: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24511c: 0xc091488  jal         func_245220
    ctx->pc = 0x24511Cu;
    SET_GPR_U32(ctx, 31, 0x245124u);
    ctx->pc = 0x245220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245220u, 0x24511Cu, 0x245124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245124u;
label_245124:
    // 0x245124: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24512c: 0xc09145c  jal         func_245170
    ctx->pc = 0x24512Cu;
    SET_GPR_U32(ctx, 31, 0x245134u);
    ctx->pc = 0x245170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245170u, 0x24512Cu, 0x245134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245134u;
label_245134:
    // 0x245134: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245138: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x245138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24513c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24513cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x245140: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245140u;
    {
        const bool branch_taken_0x245140 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x245140) {
            ctx->pc = 0x245154u;
            goto label_245154;
        }
    }
    ctx->pc = 0x245148u;
    // 0x245148: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24514c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x24514Cu;
    SET_GPR_U32(ctx, 31, 0x245154u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x24514Cu, 0x245154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245154u;
label_245154:
    // 0x245154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24515c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24515cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x245160: 0x3e00008  jr          $ra
    ctx->pc = 0x245160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245168u;
    // 0x245168: 0x0  nop
    ctx->pc = 0x245168u;
    // NOP
    // 0x24516c: 0x0  nop
    ctx->pc = 0x24516cu;
    // NOP
    ctx->pc = 0x245170u;
}
