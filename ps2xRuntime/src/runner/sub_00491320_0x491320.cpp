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

// Function: sub_00491320
// Address: 0x491320 - 0x4913a0
void sub_00491320_0x491320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491320_0x491320");
#endif

    switch (ctx->pc) {
        case 0x491344u: goto label_491344;
        case 0x491388u: goto label_491388;
        default: break;
    }

    ctx->pc = 0x491320u;

    // 0x491320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x491320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x491324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x491324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x491328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x491328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49132c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x49132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491330: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x491330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491334: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x491334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x491338: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x491338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x49133c: 0xc1243ac  jal         func_490EB0
    ctx->pc = 0x49133Cu;
    SET_GPR_U32(ctx, 31, 0x491344u);
    ctx->pc = 0x490EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490EB0u, 0x49133Cu, 0x491344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491344u;
label_491344:
    // 0x491344: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x491344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491348: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x491348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49134c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491350: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x491350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x491354: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x491354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x491358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49135c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x49135cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491360: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x491360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491364: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x491364u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x491368: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x491368u;
    {
        const bool branch_taken_0x491368 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x491368) {
            ctx->pc = 0x491378u;
            goto label_491378;
        }
    }
    ctx->pc = 0x491370u;
    // 0x491370: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x491370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x491374: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x491374u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_491378:
    // 0x491378: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x491378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x49137c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x49137cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x491380: 0xc124c60  jal         func_493180
    ctx->pc = 0x491380u;
    SET_GPR_U32(ctx, 31, 0x491388u);
    ctx->pc = 0x493180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493180u, 0x491380u, 0x491388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491388u;
label_491388:
    // 0x491388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x491388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49138c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x49138cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x491390: 0x3e00008  jr          $ra
    ctx->pc = 0x491390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491398u;
    // 0x491398: 0x0  nop
    ctx->pc = 0x491398u;
    // NOP
    // 0x49139c: 0x0  nop
    ctx->pc = 0x49139cu;
    // NOP
    ctx->pc = 0x4913a0u;
}
