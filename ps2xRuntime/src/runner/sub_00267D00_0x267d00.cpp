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

// Function: sub_00267D00
// Address: 0x267d00 - 0x267e50
void sub_00267D00_0x267d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267D00_0x267d00");
#endif

    switch (ctx->pc) {
        case 0x267d34u: goto label_267d34;
        case 0x267d44u: goto label_267d44;
        case 0x267d54u: goto label_267d54;
        case 0x267d60u: goto label_267d60;
        case 0x267d70u: goto label_267d70;
        case 0x267d80u: goto label_267d80;
        case 0x267d90u: goto label_267d90;
        case 0x267d9cu: goto label_267d9c;
        case 0x267dccu: goto label_267dcc;
        case 0x267de0u: goto label_267de0;
        case 0x267df8u: goto label_267df8;
        default: break;
    }

    ctx->pc = 0x267d00u;

    // 0x267d00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x267d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x267d04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x267d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x267d08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x267d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x267d0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267d10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267d14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267d20: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x267d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x267d24: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x267d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x267d28: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x267d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267d2c: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x267D2Cu;
    SET_GPR_U32(ctx, 31, 0x267D34u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x267D2Cu, 0x267D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D34u;
label_267d34:
    // 0x267d34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x267d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x267d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d3c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x267D3Cu;
    {
        const bool branch_taken_0x267d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d3c) {
            ctx->pc = 0x267E18u;
            goto label_267e18;
        }
    }
    ctx->pc = 0x267D44u;
label_267d44:
    // 0x267d44: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x267d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d4c: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x267D4Cu;
    SET_GPR_U32(ctx, 31, 0x267D54u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x267D4Cu, 0x267D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D54u;
label_267d54:
    // 0x267d54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267d58: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x267D58u;
    SET_GPR_U32(ctx, 31, 0x267D60u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x267D58u, 0x267D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D60u;
label_267d60:
    // 0x267d60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x267d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d68: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x267D68u;
    SET_GPR_U32(ctx, 31, 0x267D70u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x267D68u, 0x267D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D70u;
label_267d70:
    // 0x267d70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x267d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x267d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x267D78u;
    {
        const bool branch_taken_0x267d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d78) {
            ctx->pc = 0x267E08u;
            goto label_267e08;
        }
    }
    ctx->pc = 0x267D80u;
label_267d80:
    // 0x267d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d88: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x267D88u;
    SET_GPR_U32(ctx, 31, 0x267D90u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x267D88u, 0x267D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D90u;
label_267d90:
    // 0x267d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267d94: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x267D94u;
    SET_GPR_U32(ctx, 31, 0x267D9Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x267D94u, 0x267D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D9Cu;
label_267d9c:
    // 0x267d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267da0: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x267DA0u;
    {
        const bool branch_taken_0x267da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267da0) {
            ctx->pc = 0x267E04u;
            goto label_267e04;
        }
    }
    ctx->pc = 0x267DA8u;
    // 0x267da8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x267da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267dac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x267dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x267db0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x267DB0u;
    {
        const bool branch_taken_0x267db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267db0) {
            ctx->pc = 0x267DE8u;
            goto label_267de8;
        }
    }
    ctx->pc = 0x267DB8u;
    // 0x267db8: 0x8fb50080  lw          $s5, 0x80($sp)
    ctx->pc = 0x267db8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dc4: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x267DC4u;
    SET_GPR_U32(ctx, 31, 0x267DCCu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x267DC4u, 0x267DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DCCu;
label_267dcc:
    // 0x267dcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267dd0: 0x24050487  addiu       $a1, $zero, 0x487
    ctx->pc = 0x267dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
    // 0x267dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dd8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x267DD8u;
    SET_GPR_U32(ctx, 31, 0x267DE0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x267DD8u, 0x267DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DE0u;
label_267de0:
    // 0x267de0: 0x16a20008  bne         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267DE0u;
    {
        const bool branch_taken_0x267de0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x267de0) {
            ctx->pc = 0x267E04u;
            goto label_267e04;
        }
    }
    ctx->pc = 0x267DE8u;
label_267de8:
    // 0x267de8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x267de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267df0: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x267DF0u;
    SET_GPR_U32(ctx, 31, 0x267DF8u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x267DF0u, 0x267DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DF8u;
label_267df8:
    // 0x267df8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267dfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x267DFCu;
    {
        const bool branch_taken_0x267dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267dfc) {
            ctx->pc = 0x267E28u;
            goto label_267e28;
        }
    }
    ctx->pc = 0x267E04u;
label_267e04:
    // 0x267e04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_267e08:
    // 0x267e08: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x267e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x267e0c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x267E0Cu;
    {
        const bool branch_taken_0x267e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267e0c) {
            ctx->pc = 0x267D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267d80;
        }
    }
    ctx->pc = 0x267E14u;
    // 0x267e14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x267e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_267e18:
    // 0x267e18: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x267e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x267e1c: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x267E1Cu;
    {
        const bool branch_taken_0x267e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267e1c) {
            ctx->pc = 0x267D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267d44;
        }
    }
    ctx->pc = 0x267E24u;
    // 0x267e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267e28:
    // 0x267e28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x267e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267e2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267e44: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x267e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x267e48: 0x3e00008  jr          $ra
    ctx->pc = 0x267E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267E50u;
}
