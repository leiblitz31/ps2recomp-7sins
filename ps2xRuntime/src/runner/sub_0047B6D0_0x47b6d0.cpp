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

// Function: sub_0047B6D0
// Address: 0x47b6d0 - 0x47b750
void sub_0047B6D0_0x47b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B6D0_0x47b6d0");
#endif

    switch (ctx->pc) {
        case 0x47b6f4u: goto label_47b6f4;
        case 0x47b738u: goto label_47b738;
        default: break;
    }

    ctx->pc = 0x47b6d0u;

    // 0x47b6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b6d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47b6dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x47b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b6e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b6e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47b6e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47b6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47b6ec: 0xc09e15c  jal         func_278570
    ctx->pc = 0x47B6ECu;
    SET_GPR_U32(ctx, 31, 0x47B6F4u);
    ctx->pc = 0x278570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278570u, 0x47B6ECu, 0x47B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B6F4u;
label_47b6f4:
    // 0x47b6f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b6f8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x47b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b6fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b700: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x47b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x47b704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b70c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x47b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47b710: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47b714: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x47b714u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x47b718: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47B718u;
    {
        const bool branch_taken_0x47b718 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x47b718) {
            ctx->pc = 0x47B728u;
            goto label_47b728;
        }
    }
    ctx->pc = 0x47B720u;
    // 0x47b720: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x47b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x47b724: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x47b724u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_47b728:
    // 0x47b728: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x47b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x47b72c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x47b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47b730: 0xc11f148  jal         func_47C520
    ctx->pc = 0x47B730u;
    SET_GPR_U32(ctx, 31, 0x47B738u);
    ctx->pc = 0x47C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C520u, 0x47B730u, 0x47B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B738u;
label_47b738:
    // 0x47b738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b73c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47b73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47b740: 0x3e00008  jr          $ra
    ctx->pc = 0x47B740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B748u;
    // 0x47b748: 0x0  nop
    ctx->pc = 0x47b748u;
    // NOP
    // 0x47b74c: 0x0  nop
    ctx->pc = 0x47b74cu;
    // NOP
    ctx->pc = 0x47b750u;
}
