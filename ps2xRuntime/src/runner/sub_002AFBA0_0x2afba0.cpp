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

// Function: sub_002AFBA0
// Address: 0x2afba0 - 0x2afc20
void sub_002AFBA0_0x2afba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFBA0_0x2afba0");
#endif

    switch (ctx->pc) {
        case 0x2afbc4u: goto label_2afbc4;
        case 0x2afc08u: goto label_2afc08;
        default: break;
    }

    ctx->pc = 0x2afba0u;

    // 0x2afba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2afba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2afba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2afba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2afba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2afba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2afbac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2afbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afbb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2afbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afbb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2afbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afbb8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2afbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afbbc: 0xc0ab1d0  jal         func_2AC740
    ctx->pc = 0x2AFBBCu;
    SET_GPR_U32(ctx, 31, 0x2AFBC4u);
    ctx->pc = 0x2AC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC740u, 0x2AFBBCu, 0x2AFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBC4u;
label_2afbc4:
    // 0x2afbc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2afbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afbc8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2afbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afbcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2afbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afbd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2afbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2afbd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afbd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2afbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2afbdc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2afbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2afbe0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2afbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2afbe4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2afbe4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2afbe8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFBE8u;
    {
        const bool branch_taken_0x2afbe8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2afbe8) {
            ctx->pc = 0x2AFBF8u;
            goto label_2afbf8;
        }
    }
    ctx->pc = 0x2AFBF0u;
    // 0x2afbf0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2afbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2afbf4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2afbf4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2afbf8:
    // 0x2afbf8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2afbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2afbfc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2afbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2afc00: 0xc0ac27c  jal         func_2B09F0
    ctx->pc = 0x2AFC00u;
    SET_GPR_U32(ctx, 31, 0x2AFC08u);
    ctx->pc = 0x2B09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B09F0u, 0x2AFC00u, 0x2AFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC08u;
label_2afc08:
    // 0x2afc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2afc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afc0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2afc0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2afc10: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFC18u;
    // 0x2afc18: 0x0  nop
    ctx->pc = 0x2afc18u;
    // NOP
    // 0x2afc1c: 0x0  nop
    ctx->pc = 0x2afc1cu;
    // NOP
    ctx->pc = 0x2afc20u;
}
