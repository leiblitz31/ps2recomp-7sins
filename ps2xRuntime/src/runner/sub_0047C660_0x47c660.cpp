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

// Function: sub_0047C660
// Address: 0x47c660 - 0x47c730
void sub_0047C660_0x47c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C660_0x47c660");
#endif

    switch (ctx->pc) {
        case 0x47c690u: goto label_47c690;
        case 0x47c6b8u: goto label_47c6b8;
        case 0x47c6e0u: goto label_47c6e0;
        case 0x47c704u: goto label_47c704;
        case 0x47c710u: goto label_47c710;
        default: break;
    }

    ctx->pc = 0x47c660u;

    // 0x47c660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47c664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47c664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47c668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c66c: 0x8f82c098  lw          $v0, -0x3F68($gp)
    ctx->pc = 0x47c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951064)));
    // 0x47c670: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47C670u;
    {
        const bool branch_taken_0x47c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c670) {
            ctx->pc = 0x47C694u;
            goto label_47c694;
        }
    }
    ctx->pc = 0x47C678u;
    // 0x47c678: 0x8f82c098  lw          $v0, -0x3F68($gp)
    ctx->pc = 0x47c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951064)));
    // 0x47c67c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47C67Cu;
    {
        const bool branch_taken_0x47c67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c67c) {
            ctx->pc = 0x47C694u;
            goto label_47c694;
        }
    }
    ctx->pc = 0x47C684u;
    // 0x47c684: 0x8f84c098  lw          $a0, -0x3F68($gp)
    ctx->pc = 0x47c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951064)));
    // 0x47c688: 0xc119c5c  jal         func_467170
    ctx->pc = 0x47C688u;
    SET_GPR_U32(ctx, 31, 0x47C690u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x47C688u, 0x47C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C690u;
label_47c690:
    // 0x47c690: 0xaf80c098  sw          $zero, -0x3F68($gp)
    ctx->pc = 0x47c690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951064), GPR_U32(ctx, 0));
label_47c694:
    // 0x47c694: 0x8f82c0a4  lw          $v0, -0x3F5C($gp)
    ctx->pc = 0x47c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951076)));
    // 0x47c698: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47C698u;
    {
        const bool branch_taken_0x47c698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c698) {
            ctx->pc = 0x47C6BCu;
            goto label_47c6bc;
        }
    }
    ctx->pc = 0x47C6A0u;
    // 0x47c6a0: 0x8f82c0a4  lw          $v0, -0x3F5C($gp)
    ctx->pc = 0x47c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951076)));
    // 0x47c6a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47C6A4u;
    {
        const bool branch_taken_0x47c6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c6a4) {
            ctx->pc = 0x47C6BCu;
            goto label_47c6bc;
        }
    }
    ctx->pc = 0x47C6ACu;
    // 0x47c6ac: 0x8f84c0a4  lw          $a0, -0x3F5C($gp)
    ctx->pc = 0x47c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951076)));
    // 0x47c6b0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x47C6B0u;
    SET_GPR_U32(ctx, 31, 0x47C6B8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x47C6B0u, 0x47C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C6B8u;
label_47c6b8:
    // 0x47c6b8: 0xaf80c0a4  sw          $zero, -0x3F5C($gp)
    ctx->pc = 0x47c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951076), GPR_U32(ctx, 0));
label_47c6bc:
    // 0x47c6bc: 0x8f82c0ac  lw          $v0, -0x3F54($gp)
    ctx->pc = 0x47c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951084)));
    // 0x47c6c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47C6C0u;
    {
        const bool branch_taken_0x47c6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c6c0) {
            ctx->pc = 0x47C6E4u;
            goto label_47c6e4;
        }
    }
    ctx->pc = 0x47C6C8u;
    // 0x47c6c8: 0x8f82c0ac  lw          $v0, -0x3F54($gp)
    ctx->pc = 0x47c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951084)));
    // 0x47c6cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47C6CCu;
    {
        const bool branch_taken_0x47c6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c6cc) {
            ctx->pc = 0x47C6E4u;
            goto label_47c6e4;
        }
    }
    ctx->pc = 0x47C6D4u;
    // 0x47c6d4: 0x8f84c0ac  lw          $a0, -0x3F54($gp)
    ctx->pc = 0x47c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951084)));
    // 0x47c6d8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x47C6D8u;
    SET_GPR_U32(ctx, 31, 0x47C6E0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x47C6D8u, 0x47C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C6E0u;
label_47c6e0:
    // 0x47c6e0: 0xaf80c0ac  sw          $zero, -0x3F54($gp)
    ctx->pc = 0x47c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951084), GPR_U32(ctx, 0));
label_47c6e4:
    // 0x47c6e4: 0x8f82c07c  lw          $v0, -0x3F84($gp)
    ctx->pc = 0x47c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951036)));
    // 0x47c6e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47C6E8u;
    {
        const bool branch_taken_0x47c6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c6e8) {
            ctx->pc = 0x47C714u;
            goto label_47c714;
        }
    }
    ctx->pc = 0x47C6F0u;
    // 0x47c6f0: 0x8f82c07c  lw          $v0, -0x3F84($gp)
    ctx->pc = 0x47c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951036)));
    // 0x47c6f4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x47c6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47c6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c6fc: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x47C6FCu;
    SET_GPR_U32(ctx, 31, 0x47C704u);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x47C6FCu, 0x47C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C704u;
label_47c704:
    // 0x47c704: 0x8f84c07c  lw          $a0, -0x3F84($gp)
    ctx->pc = 0x47c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951036)));
    // 0x47c708: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x47C708u;
    SET_GPR_U32(ctx, 31, 0x47C710u);
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x47C708u, 0x47C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C710u;
label_47c710:
    // 0x47c710: 0xaf80c07c  sw          $zero, -0x3F84($gp)
    ctx->pc = 0x47c710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951036), GPR_U32(ctx, 0));
label_47c714:
    // 0x47c714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47c718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47c718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c720: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47c724: 0x3e00008  jr          $ra
    ctx->pc = 0x47C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C72Cu;
    // 0x47c72c: 0x0  nop
    ctx->pc = 0x47c72cu;
    // NOP
    ctx->pc = 0x47c730u;
}
