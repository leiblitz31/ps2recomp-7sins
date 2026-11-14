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

// Function: sub_002585E0
// Address: 0x2585e0 - 0x258660
void sub_002585E0_0x2585e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002585E0_0x2585e0");
#endif

    switch (ctx->pc) {
        case 0x258614u: goto label_258614;
        case 0x258624u: goto label_258624;
        case 0x258644u: goto label_258644;
        default: break;
    }

    ctx->pc = 0x2585e0u;

    // 0x2585e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2585e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2585e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2585e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2585e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2585e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2585ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2585ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2585f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2585f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2585f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2585F4u;
    {
        const bool branch_taken_0x2585f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2585f4) {
            ctx->pc = 0x258644u;
            goto label_258644;
        }
    }
    ctx->pc = 0x2585FCu;
    // 0x2585fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2585fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258604: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x258604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258608: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x258608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25860c: 0xc0961c4  jal         func_258710
    ctx->pc = 0x25860Cu;
    SET_GPR_U32(ctx, 31, 0x258614u);
    ctx->pc = 0x258710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258710u, 0x25860Cu, 0x258614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258614u;
label_258614:
    // 0x258614: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25861c: 0xc096198  jal         func_258660
    ctx->pc = 0x25861Cu;
    SET_GPR_U32(ctx, 31, 0x258624u);
    ctx->pc = 0x258660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258660u, 0x25861Cu, 0x258624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258624u;
label_258624:
    // 0x258624: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x258624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258628: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25862c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25862cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258630: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258630u;
    {
        const bool branch_taken_0x258630 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x258630) {
            ctx->pc = 0x258644u;
            goto label_258644;
        }
    }
    ctx->pc = 0x258638u;
    // 0x258638: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25863c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25863Cu;
    SET_GPR_U32(ctx, 31, 0x258644u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25863Cu, 0x258644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258644u;
label_258644:
    // 0x258644: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25864c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25864cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258650: 0x3e00008  jr          $ra
    ctx->pc = 0x258650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258658u;
    // 0x258658: 0x0  nop
    ctx->pc = 0x258658u;
    // NOP
    // 0x25865c: 0x0  nop
    ctx->pc = 0x25865cu;
    // NOP
    ctx->pc = 0x258660u;
}
