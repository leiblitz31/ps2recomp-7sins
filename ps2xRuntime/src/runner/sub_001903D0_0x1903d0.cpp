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

// Function: sub_001903D0
// Address: 0x1903d0 - 0x190470
void sub_001903D0_0x1903d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001903D0_0x1903d0");
#endif

    switch (ctx->pc) {
        case 0x1903fcu: goto label_1903fc;
        case 0x19040cu: goto label_19040c;
        case 0x190420u: goto label_190420;
        case 0x190430u: goto label_190430;
        case 0x190448u: goto label_190448;
        default: break;
    }

    ctx->pc = 0x1903d0u;

    // 0x1903d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1903d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1903d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1903d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1903d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1903dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1903dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1903e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1903e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1903e4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1903e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1903e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1903E8u;
    {
        const bool branch_taken_0x1903e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1903e8) {
            ctx->pc = 0x190454u;
            goto label_190454;
        }
    }
    ctx->pc = 0x1903F0u;
    // 0x1903f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1903f4: 0xc06412c  jal         func_1904B0
    ctx->pc = 0x1903F4u;
    SET_GPR_U32(ctx, 31, 0x1903FCu);
    ctx->pc = 0x1904B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904B0u, 0x1903F4u, 0x1903FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1903FCu;
label_1903fc:
    // 0x1903fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1903fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190400: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190404: 0xc064430  jal         func_1910C0
    ctx->pc = 0x190404u;
    SET_GPR_U32(ctx, 31, 0x19040Cu);
    ctx->pc = 0x1910C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1910C0u, 0x190404u, 0x19040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19040Cu;
label_19040c:
    // 0x19040c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190410: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190414: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190418: 0xc064124  jal         func_190490
    ctx->pc = 0x190418u;
    SET_GPR_U32(ctx, 31, 0x190420u);
    ctx->pc = 0x190490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190490u, 0x190418u, 0x190420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190420u;
label_190420:
    // 0x190420: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x190420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x190424: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190428: 0xc06412c  jal         func_1904B0
    ctx->pc = 0x190428u;
    SET_GPR_U32(ctx, 31, 0x190430u);
    ctx->pc = 0x1904B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904B0u, 0x190428u, 0x190430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190430u;
label_190430:
    // 0x190430: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x190430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x190434: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x190434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190438: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x190438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19043c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190440: 0xc06411c  jal         func_190470
    ctx->pc = 0x190440u;
    SET_GPR_U32(ctx, 31, 0x190448u);
    ctx->pc = 0x190470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190470u, 0x190440u, 0x190448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190448u;
label_190448:
    // 0x190448: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x190448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x19044c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190450: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x190450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_190454:
    // 0x190454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19045c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19045cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190460: 0x3e00008  jr          $ra
    ctx->pc = 0x190460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190468u;
    // 0x190468: 0x0  nop
    ctx->pc = 0x190468u;
    // NOP
    // 0x19046c: 0x0  nop
    ctx->pc = 0x19046cu;
    // NOP
    ctx->pc = 0x190470u;
}
