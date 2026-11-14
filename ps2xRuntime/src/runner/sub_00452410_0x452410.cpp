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

// Function: sub_00452410
// Address: 0x452410 - 0x452490
void sub_00452410_0x452410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452410_0x452410");
#endif

    switch (ctx->pc) {
        case 0x452444u: goto label_452444;
        case 0x452454u: goto label_452454;
        case 0x452474u: goto label_452474;
        default: break;
    }

    ctx->pc = 0x452410u;

    // 0x452410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x452418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45241c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x45241cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x452420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452424: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x452424u;
    {
        const bool branch_taken_0x452424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452424) {
            ctx->pc = 0x452474u;
            goto label_452474;
        }
    }
    ctx->pc = 0x45242Cu;
    // 0x45242c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x452434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x452438: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x452438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45243c: 0xc114950  jal         func_452540
    ctx->pc = 0x45243Cu;
    SET_GPR_U32(ctx, 31, 0x452444u);
    ctx->pc = 0x452540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452540u, 0x45243Cu, 0x452444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452444u;
label_452444:
    // 0x452444: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x452444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x452448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45244c: 0xc114924  jal         func_452490
    ctx->pc = 0x45244Cu;
    SET_GPR_U32(ctx, 31, 0x452454u);
    ctx->pc = 0x452490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452490u, 0x45244Cu, 0x452454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452454u;
label_452454:
    // 0x452454: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x452454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452458: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x452458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x45245c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x45245cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x452460: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x452460u;
    {
        const bool branch_taken_0x452460 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x452460) {
            ctx->pc = 0x452474u;
            goto label_452474;
        }
    }
    ctx->pc = 0x452468u;
    // 0x452468: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x452468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45246c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x45246Cu;
    SET_GPR_U32(ctx, 31, 0x452474u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x45246Cu, 0x452474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452474u;
label_452474:
    // 0x452474: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45247c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45247cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x452480: 0x3e00008  jr          $ra
    ctx->pc = 0x452480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452488u;
    // 0x452488: 0x0  nop
    ctx->pc = 0x452488u;
    // NOP
    // 0x45248c: 0x0  nop
    ctx->pc = 0x45248cu;
    // NOP
    ctx->pc = 0x452490u;
}
