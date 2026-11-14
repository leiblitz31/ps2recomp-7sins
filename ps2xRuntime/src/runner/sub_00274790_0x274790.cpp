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

// Function: sub_00274790
// Address: 0x274790 - 0x274840
void sub_00274790_0x274790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274790_0x274790");
#endif

    switch (ctx->pc) {
        case 0x2747b8u: goto label_2747b8;
        case 0x2747ecu: goto label_2747ec;
        default: break;
    }

    ctx->pc = 0x274790u;

    // 0x274790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27479c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27479cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2747a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2747a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2747a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2747a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2747a8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2747a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2747ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2747acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2747b0: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x2747B0u;
    SET_GPR_U32(ctx, 31, 0x2747B8u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x2747B0u, 0x2747B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747B8u;
label_2747b8:
    // 0x2747b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2747b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2747bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2747bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2747c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2747C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2747C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2747C8u;
    // 0x2747c8: 0x0  nop
    ctx->pc = 0x2747c8u;
    // NOP
    // 0x2747cc: 0x0  nop
    ctx->pc = 0x2747ccu;
    // NOP
    // 0x2747d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2747d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2747d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2747d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2747d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2747d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2747dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2747dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2747e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2747e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2747e4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2747E4u;
    SET_GPR_U32(ctx, 31, 0x2747ECu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2747E4u, 0x2747ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747ECu;
label_2747ec:
    // 0x2747ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2747ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2747f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2747f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2747f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2747F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2747F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2747FCu;
    // 0x2747fc: 0x0  nop
    ctx->pc = 0x2747fcu;
    // NOP
    // 0x274800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274804: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x274804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x274808: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27480c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x27480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x274810: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x274810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274814: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274814u;
    {
        const bool branch_taken_0x274814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x274814) {
            ctx->pc = 0x274828u;
            goto label_274828;
        }
    }
    ctx->pc = 0x27481Cu;
    // 0x27481c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274820u;
    {
        const bool branch_taken_0x274820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274820) {
            ctx->pc = 0x27482Cu;
            goto label_27482c;
        }
    }
    ctx->pc = 0x274828u;
label_274828:
    // 0x274828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27482c:
    // 0x27482c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27482cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x274830: 0x3e00008  jr          $ra
    ctx->pc = 0x274830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274838u;
    // 0x274838: 0x0  nop
    ctx->pc = 0x274838u;
    // NOP
    // 0x27483c: 0x0  nop
    ctx->pc = 0x27483cu;
    // NOP
    ctx->pc = 0x274840u;
}
