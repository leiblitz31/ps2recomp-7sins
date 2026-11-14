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

// Function: sub_00217D70
// Address: 0x217d70 - 0x217e70
void sub_00217D70_0x217d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217D70_0x217d70");
#endif

    switch (ctx->pc) {
        case 0x217dc4u: goto label_217dc4;
        case 0x217df0u: goto label_217df0;
        case 0x217dfcu: goto label_217dfc;
        case 0x217e30u: goto label_217e30;
        case 0x217e58u: goto label_217e58;
        default: break;
    }

    ctx->pc = 0x217d70u;

    // 0x217d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217d74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x217d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x217d78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x217d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217d7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x217d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217d80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x217d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217d84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x217d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217d88: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x217d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217d8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x217d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217d90: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x217d90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x217d94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217D94u;
    {
        const bool branch_taken_0x217d94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x217d94) {
            ctx->pc = 0x217DA4u;
            goto label_217da4;
        }
    }
    ctx->pc = 0x217D9Cu;
    // 0x217d9c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x217d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x217da0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x217da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_217da4:
    // 0x217da4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x217da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x217da8: 0x3e00008  jr          $ra
    ctx->pc = 0x217DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217DB0u;
    // 0x217db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x217dbc: 0xc11904c  jal         func_464130
    ctx->pc = 0x217DBCu;
    SET_GPR_U32(ctx, 31, 0x217DC4u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x217DBCu, 0x217DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DC4u;
label_217dc4:
    // 0x217dc4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x217dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217dc8: 0xfc620030  sd          $v0, 0x30($v1)
    ctx->pc = 0x217dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
    // 0x217dcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217dd0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x217dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x217dd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217dd8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x217dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x217ddc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x217ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x217de0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x217de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x217de4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x217de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x217de8: 0xc085844  jal         func_216110
    ctx->pc = 0x217DE8u;
    SET_GPR_U32(ctx, 31, 0x217DF0u);
    ctx->pc = 0x216110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216110u, 0x217DE8u, 0x217DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DF0u;
label_217df0:
    // 0x217df0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217df4: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x217DF4u;
    SET_GPR_U32(ctx, 31, 0x217DFCu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x217DF4u, 0x217DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DFCu;
label_217dfc:
    // 0x217dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x217e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x217e04: 0x3e00008  jr          $ra
    ctx->pc = 0x217E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E0Cu;
    // 0x217e0c: 0x0  nop
    ctx->pc = 0x217e0cu;
    // NOP
    // 0x217e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x217e1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x217e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x217e20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217e24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x217e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217e28: 0xc08ec68  jal         func_23B1A0
    ctx->pc = 0x217E28u;
    SET_GPR_U32(ctx, 31, 0x217E30u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x217E28u, 0x217E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E30u;
label_217e30:
    // 0x217e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x217e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x217e38: 0x3e00008  jr          $ra
    ctx->pc = 0x217E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E40u;
    // 0x217e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x217e4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217e50: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x217E50u;
    SET_GPR_U32(ctx, 31, 0x217E58u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x217E50u, 0x217E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E58u;
label_217e58:
    // 0x217e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x217e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x217e60: 0x3e00008  jr          $ra
    ctx->pc = 0x217E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E68u;
    // 0x217e68: 0x0  nop
    ctx->pc = 0x217e68u;
    // NOP
    // 0x217e6c: 0x0  nop
    ctx->pc = 0x217e6cu;
    // NOP
    ctx->pc = 0x217e70u;
}
