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

// Function: sub_001A7220
// Address: 0x1a7220 - 0x1a72a0
void sub_001A7220_0x1a7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7220_0x1a7220");
#endif

    switch (ctx->pc) {
        case 0x1a7244u: goto label_1a7244;
        case 0x1a7288u: goto label_1a7288;
        default: break;
    }

    ctx->pc = 0x1a7220u;

    // 0x1a7220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a7228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a722c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7230: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7234: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7238: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a723c: 0xc058c9c  jal         func_163270
    ctx->pc = 0x1A723Cu;
    SET_GPR_U32(ctx, 31, 0x1A7244u);
    ctx->pc = 0x163270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163270u, 0x1A723Cu, 0x1A7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7244u;
label_1a7244:
    // 0x1a7244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a7244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7248: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a7248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a724c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7250: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a7250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a7254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a7254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7258: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a725c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a725cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7260: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a7260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a7264: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x1a7264u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a7268: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7268u;
    {
        const bool branch_taken_0x1a7268 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a7268) {
            ctx->pc = 0x1A7278u;
            goto label_1a7278;
        }
    }
    ctx->pc = 0x1A7270u;
    // 0x1a7270: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1a7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1a7274: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1a7274u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_1a7278:
    // 0x1a7278: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a7278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a727c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a727cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7280: 0xc058ed0  jal         func_163B40
    ctx->pc = 0x1A7280u;
    SET_GPR_U32(ctx, 31, 0x1A7288u);
    ctx->pc = 0x163B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163B40u, 0x1A7280u, 0x1A7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7288u;
label_1a7288:
    // 0x1a7288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a728c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a728cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a7290: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7298u;
    // 0x1a7298: 0x0  nop
    ctx->pc = 0x1a7298u;
    // NOP
    // 0x1a729c: 0x0  nop
    ctx->pc = 0x1a729cu;
    // NOP
    ctx->pc = 0x1a72a0u;
}
