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

// Function: sub_00131F10
// Address: 0x131f10 - 0x131f90
void sub_00131F10_0x131f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131F10_0x131f10");
#endif

    switch (ctx->pc) {
        case 0x131f34u: goto label_131f34;
        case 0x131f78u: goto label_131f78;
        default: break;
    }

    ctx->pc = 0x131f10u;

    // 0x131f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131f18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x131f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x131f1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x131f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x131f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131f28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131f2c: 0xc04abf0  jal         func_12AFC0
    ctx->pc = 0x131F2Cu;
    SET_GPR_U32(ctx, 31, 0x131F34u);
    ctx->pc = 0x12AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AFC0u, 0x131F2Cu, 0x131F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F34u;
label_131f34:
    // 0x131f34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x131f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f38: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x131f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x131f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131f44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131f4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x131f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131f50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x131f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131f54: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x131f54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x131f58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131F58u;
    {
        const bool branch_taken_0x131f58 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x131f58) {
            ctx->pc = 0x131F68u;
            goto label_131f68;
        }
    }
    ctx->pc = 0x131F60u;
    // 0x131f60: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x131f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x131f64: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x131f64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_131f68:
    // 0x131f68: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x131f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x131f6c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x131f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131f70: 0xc04c630  jal         func_1318C0
    ctx->pc = 0x131F70u;
    SET_GPR_U32(ctx, 31, 0x131F78u);
    ctx->pc = 0x1318C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1318C0u, 0x131F70u, 0x131F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F78u;
label_131f78:
    // 0x131f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131f7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x131f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x131f80: 0x3e00008  jr          $ra
    ctx->pc = 0x131F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131F88u;
    // 0x131f88: 0x0  nop
    ctx->pc = 0x131f88u;
    // NOP
    // 0x131f8c: 0x0  nop
    ctx->pc = 0x131f8cu;
    // NOP
    ctx->pc = 0x131f90u;
}
