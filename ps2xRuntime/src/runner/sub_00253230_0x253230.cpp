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

// Function: sub_00253230
// Address: 0x253230 - 0x2532b0
void sub_00253230_0x253230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253230_0x253230");
#endif

    switch (ctx->pc) {
        case 0x253254u: goto label_253254;
        case 0x253298u: goto label_253298;
        default: break;
    }

    ctx->pc = 0x253230u;

    // 0x253230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25323c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253244: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x253244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253248: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x253248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25324c: 0xc092438  jal         func_2490E0
    ctx->pc = 0x25324Cu;
    SET_GPR_U32(ctx, 31, 0x253254u);
    ctx->pc = 0x2490E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490E0u, 0x25324Cu, 0x253254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253254u;
label_253254:
    // 0x253254: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x253254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253258: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x253258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25325c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253260: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x253260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x253264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x253268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25326c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25326cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x253270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253274: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x253274u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x253278: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253278u;
    {
        const bool branch_taken_0x253278 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x253278) {
            ctx->pc = 0x253288u;
            goto label_253288;
        }
    }
    ctx->pc = 0x253280u;
    // 0x253280: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x253280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x253284: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x253284u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_253288:
    // 0x253288: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x253288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25328c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25328cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x253290: 0xc093bb0  jal         func_24EEC0
    ctx->pc = 0x253290u;
    SET_GPR_U32(ctx, 31, 0x253298u);
    ctx->pc = 0x24EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EEC0u, 0x253290u, 0x253298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253298u;
label_253298:
    // 0x253298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25329c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25329cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2532a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2532A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2532A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2532A8u;
    // 0x2532a8: 0x0  nop
    ctx->pc = 0x2532a8u;
    // NOP
    // 0x2532ac: 0x0  nop
    ctx->pc = 0x2532acu;
    // NOP
    ctx->pc = 0x2532b0u;
}
