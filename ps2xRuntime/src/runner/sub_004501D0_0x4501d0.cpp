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

// Function: sub_004501D0
// Address: 0x4501d0 - 0x450250
void sub_004501D0_0x4501d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004501D0_0x4501d0");
#endif

    switch (ctx->pc) {
        case 0x4501f4u: goto label_4501f4;
        case 0x450238u: goto label_450238;
        default: break;
    }

    ctx->pc = 0x4501d0u;

    // 0x4501d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4501d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4501d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4501d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4501d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4501d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4501dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4501dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4501e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4501e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4501e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4501e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4501e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4501e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4501ec: 0xc113de4  jal         func_44F790
    ctx->pc = 0x4501ECu;
    SET_GPR_U32(ctx, 31, 0x4501F4u);
    ctx->pc = 0x44F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F790u, 0x4501ECu, 0x4501F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4501F4u;
label_4501f4:
    // 0x4501f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4501f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4501f8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4501f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4501fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4501fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450200: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x450200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x450204: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x450208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45020c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x45020cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x450210: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x450210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x450214: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x450214u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x450218: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x450218u;
    {
        const bool branch_taken_0x450218 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x450218) {
            ctx->pc = 0x450228u;
            goto label_450228;
        }
    }
    ctx->pc = 0x450220u;
    // 0x450220: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x450220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x450224: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x450224u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_450228:
    // 0x450228: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x450228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x45022c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x45022cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x450230: 0xc114830  jal         func_4520C0
    ctx->pc = 0x450230u;
    SET_GPR_U32(ctx, 31, 0x450238u);
    ctx->pc = 0x4520C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4520C0u, 0x450230u, 0x450238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450238u;
label_450238:
    // 0x450238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x450238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45023c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45023cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x450240: 0x3e00008  jr          $ra
    ctx->pc = 0x450240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450248u;
    // 0x450248: 0x0  nop
    ctx->pc = 0x450248u;
    // NOP
    // 0x45024c: 0x0  nop
    ctx->pc = 0x45024cu;
    // NOP
    ctx->pc = 0x450250u;
}
