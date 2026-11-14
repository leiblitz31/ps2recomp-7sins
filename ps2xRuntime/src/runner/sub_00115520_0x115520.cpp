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

// Function: sub_00115520
// Address: 0x115520 - 0x1155c0
void sub_00115520_0x115520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115520_0x115520");
#endif

    switch (ctx->pc) {
        case 0x11554cu: goto label_11554c;
        case 0x11555cu: goto label_11555c;
        case 0x115570u: goto label_115570;
        case 0x115580u: goto label_115580;
        case 0x115598u: goto label_115598;
        default: break;
    }

    ctx->pc = 0x115520u;

    // 0x115520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11552c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11552cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x115530: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x115530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115534: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x115534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x115538: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x115538u;
    {
        const bool branch_taken_0x115538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x115538) {
            ctx->pc = 0x1155A4u;
            goto label_1155a4;
        }
    }
    ctx->pc = 0x115540u;
    // 0x115540: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115544: 0xc045580  jal         func_115600
    ctx->pc = 0x115544u;
    SET_GPR_U32(ctx, 31, 0x11554Cu);
    ctx->pc = 0x115600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115600u, 0x115544u, 0x11554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11554Cu;
label_11554c:
    // 0x11554c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115550: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x115550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115554: 0xc045ee0  jal         func_117B80
    ctx->pc = 0x115554u;
    SET_GPR_U32(ctx, 31, 0x11555Cu);
    ctx->pc = 0x117B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B80u, 0x115554u, 0x11555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11555Cu;
label_11555c:
    // 0x11555c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115560: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x115560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115564: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115568: 0xc045578  jal         func_1155E0
    ctx->pc = 0x115568u;
    SET_GPR_U32(ctx, 31, 0x115570u);
    ctx->pc = 0x1155E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E0u, 0x115568u, 0x115570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115570u;
label_115570:
    // 0x115570: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x115570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x115574: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115578: 0xc045580  jal         func_115600
    ctx->pc = 0x115578u;
    SET_GPR_U32(ctx, 31, 0x115580u);
    ctx->pc = 0x115600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115600u, 0x115578u, 0x115580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115580u;
label_115580:
    // 0x115580: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x115580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x115584: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115588: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x115588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11558c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115590: 0xc045570  jal         func_1155C0
    ctx->pc = 0x115590u;
    SET_GPR_U32(ctx, 31, 0x115598u);
    ctx->pc = 0x1155C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155C0u, 0x115590u, 0x115598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115598u;
label_115598:
    // 0x115598: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x115598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x11559c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1155a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1155a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1155a4:
    // 0x1155a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1155a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1155a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1155a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1155ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1155acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1155b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1155B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1155B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1155B8u;
    // 0x1155b8: 0x0  nop
    ctx->pc = 0x1155b8u;
    // NOP
    // 0x1155bc: 0x0  nop
    ctx->pc = 0x1155bcu;
    // NOP
    ctx->pc = 0x1155c0u;
}
