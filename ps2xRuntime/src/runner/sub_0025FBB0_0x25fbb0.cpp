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

// Function: sub_0025FBB0
// Address: 0x25fbb0 - 0x25fc30
void sub_0025FBB0_0x25fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FBB0_0x25fbb0");
#endif

    switch (ctx->pc) {
        case 0x25fbd4u: goto label_25fbd4;
        case 0x25fc18u: goto label_25fc18;
        default: break;
    }

    ctx->pc = 0x25fbb0u;

    // 0x25fbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fbb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fbb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25fbbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fbc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fbc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fbc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25fbcc: 0xc097d1c  jal         func_25F470
    ctx->pc = 0x25FBCCu;
    SET_GPR_U32(ctx, 31, 0x25FBD4u);
    ctx->pc = 0x25F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F470u, 0x25FBCCu, 0x25FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBD4u;
label_25fbd4:
    // 0x25fbd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fbd8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25fbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fbdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fbe0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25fbe4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fbe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fbec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25fbf0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25fbf4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x25fbf4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25fbf8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FBF8u;
    {
        const bool branch_taken_0x25fbf8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25fbf8) {
            ctx->pc = 0x25FC08u;
            goto label_25fc08;
        }
    }
    ctx->pc = 0x25FC00u;
    // 0x25fc00: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25fc04: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x25fc04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_25fc08:
    // 0x25fc08: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x25fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25fc0c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25fc10: 0xc0985d8  jal         func_261760
    ctx->pc = 0x25FC10u;
    SET_GPR_U32(ctx, 31, 0x25FC18u);
    ctx->pc = 0x261760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261760u, 0x25FC10u, 0x25FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC18u;
label_25fc18:
    // 0x25fc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fc1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25fc1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25fc20: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FC28u;
    // 0x25fc28: 0x0  nop
    ctx->pc = 0x25fc28u;
    // NOP
    // 0x25fc2c: 0x0  nop
    ctx->pc = 0x25fc2cu;
    // NOP
    ctx->pc = 0x25fc30u;
}
