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

// Function: sub_0048BEC0
// Address: 0x48bec0 - 0x48bf70
void sub_0048BEC0_0x48bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BEC0_0x48bec0");
#endif

    switch (ctx->pc) {
        case 0x48bee8u: goto label_48bee8;
        case 0x48bf18u: goto label_48bf18;
        case 0x48bf28u: goto label_48bf28;
        case 0x48bf50u: goto label_48bf50;
        default: break;
    }

    ctx->pc = 0x48bec0u;

    // 0x48bec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48bec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48becc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48beccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x48bed0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bed4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x48BED4u;
    {
        const bool branch_taken_0x48bed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bed4) {
            ctx->pc = 0x48BF50u;
            goto label_48bf50;
        }
    }
    ctx->pc = 0x48BEDCu;
    // 0x48bedc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bee0: 0xc123144  jal         func_48C510
    ctx->pc = 0x48BEE0u;
    SET_GPR_U32(ctx, 31, 0x48BEE8u);
    ctx->pc = 0x48C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C510u, 0x48BEE0u, 0x48BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BEE8u;
label_48bee8:
    // 0x48bee8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48beec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48bef0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48BEF0u;
    {
        const bool branch_taken_0x48bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bef0) {
            ctx->pc = 0x48BF30u;
            goto label_48bf30;
        }
    }
    ctx->pc = 0x48BEF8u;
    // 0x48bef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48befc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48bf00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x48BF00u;
    {
        const bool branch_taken_0x48bf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bf00) {
            ctx->pc = 0x48BF30u;
            goto label_48bf30;
        }
    }
    ctx->pc = 0x48BF08u;
    // 0x48bf08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bf0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48bf10: 0xc122fdc  jal         func_48BF70
    ctx->pc = 0x48BF10u;
    SET_GPR_U32(ctx, 31, 0x48BF18u);
    ctx->pc = 0x48BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BF70u, 0x48BF10u, 0x48BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF18u;
label_48bf18:
    // 0x48bf18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bf1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48bf20: 0xc119c5c  jal         func_467170
    ctx->pc = 0x48BF20u;
    SET_GPR_U32(ctx, 31, 0x48BF28u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x48BF20u, 0x48BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF28u;
label_48bf28:
    // 0x48bf28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bf2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x48bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_48bf30:
    // 0x48bf30: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x48bf30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bf34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x48bf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x48bf38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48bf38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48bf3c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48BF3Cu;
    {
        const bool branch_taken_0x48bf3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48bf3c) {
            ctx->pc = 0x48BF50u;
            goto label_48bf50;
        }
    }
    ctx->pc = 0x48BF44u;
    // 0x48bf44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bf48: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x48BF48u;
    SET_GPR_U32(ctx, 31, 0x48BF50u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48BF48u, 0x48BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BF50u;
label_48bf50:
    // 0x48bf50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bf58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48bf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x48BF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BF64u;
    // 0x48bf64: 0x0  nop
    ctx->pc = 0x48bf64u;
    // NOP
    // 0x48bf68: 0x0  nop
    ctx->pc = 0x48bf68u;
    // NOP
    // 0x48bf6c: 0x0  nop
    ctx->pc = 0x48bf6cu;
    // NOP
    ctx->pc = 0x48bf70u;
}
