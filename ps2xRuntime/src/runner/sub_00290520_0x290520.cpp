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

// Function: sub_00290520
// Address: 0x290520 - 0x2905a0
void sub_00290520_0x290520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290520_0x290520");
#endif

    switch (ctx->pc) {
        case 0x290544u: goto label_290544;
        case 0x290588u: goto label_290588;
        default: break;
    }

    ctx->pc = 0x290520u;

    // 0x290520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x290528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29052c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290530: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290534: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x290534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290538: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x290538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29053c: 0xc0a4168  jal         func_2905A0
    ctx->pc = 0x29053Cu;
    SET_GPR_U32(ctx, 31, 0x290544u);
    ctx->pc = 0x2905A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905A0u, 0x29053Cu, 0x290544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290544u;
label_290544:
    // 0x290544: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290548: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x290548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29054c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290550: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290558: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29055c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29055cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x290560: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x290560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x290564: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x290564u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x290568: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290568u;
    {
        const bool branch_taken_0x290568 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x290568) {
            ctx->pc = 0x290578u;
            goto label_290578;
        }
    }
    ctx->pc = 0x290570u;
    // 0x290570: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x290570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x290574: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x290574u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_290578:
    // 0x290578: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x290578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29057c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x29057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x290580: 0xc0a4608  jal         func_291820
    ctx->pc = 0x290580u;
    SET_GPR_U32(ctx, 31, 0x290588u);
    ctx->pc = 0x291820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291820u, 0x290580u, 0x290588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290588u;
label_290588:
    // 0x290588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29058c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29058cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x290590: 0x3e00008  jr          $ra
    ctx->pc = 0x290590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290598u;
    // 0x290598: 0x0  nop
    ctx->pc = 0x290598u;
    // NOP
    // 0x29059c: 0x0  nop
    ctx->pc = 0x29059cu;
    // NOP
    ctx->pc = 0x2905a0u;
}
