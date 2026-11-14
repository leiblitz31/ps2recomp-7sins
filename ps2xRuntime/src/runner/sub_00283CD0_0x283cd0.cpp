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

// Function: sub_00283CD0
// Address: 0x283cd0 - 0x283ee0
void sub_00283CD0_0x283cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283CD0_0x283cd0");
#endif

    switch (ctx->pc) {
        case 0x283d40u: goto label_283d40;
        case 0x283d50u: goto label_283d50;
        case 0x283d68u: goto label_283d68;
        case 0x283d80u: goto label_283d80;
        case 0x283d90u: goto label_283d90;
        case 0x283db0u: goto label_283db0;
        case 0x283dc0u: goto label_283dc0;
        case 0x283dd8u: goto label_283dd8;
        case 0x283df0u: goto label_283df0;
        case 0x283e0cu: goto label_283e0c;
        case 0x283e1cu: goto label_283e1c;
        case 0x283e2cu: goto label_283e2c;
        case 0x283e44u: goto label_283e44;
        case 0x283e54u: goto label_283e54;
        case 0x283e64u: goto label_283e64;
        case 0x283e74u: goto label_283e74;
        case 0x283e90u: goto label_283e90;
        case 0x283eb0u: goto label_283eb0;
        default: break;
    }

    ctx->pc = 0x283cd0u;

    // 0x283cd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x283cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x283cd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x283cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x283cd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x283cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x283cdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x283ce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283cec: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x283cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x283cf0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x283cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x283cf4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x283cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x283cf8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x283cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x283cfc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x283cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x283d00: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x283d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x283d04: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x283d04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x283d08: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x283d08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x283d0c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x283d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x283d10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283d14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283d18: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x283D18u;
    {
        const bool branch_taken_0x283d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x283d18) {
            ctx->pc = 0x283D70u;
            goto label_283d70;
        }
    }
    ctx->pc = 0x283D20u;
    // 0x283d20: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x283D20u;
    {
        const bool branch_taken_0x283d20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x283d20) {
            ctx->pc = 0x283DFCu;
            goto label_283dfc;
        }
    }
    ctx->pc = 0x283D28u;
    // 0x283d28: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x283D28u;
    {
        const bool branch_taken_0x283d28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x283d28) {
            ctx->pc = 0x283D70u;
            goto label_283d70;
        }
    }
    ctx->pc = 0x283D30u;
    // 0x283d30: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x283d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x283d34: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283d38: 0xc0a040c  jal         func_281030
    ctx->pc = 0x283D38u;
    SET_GPR_U32(ctx, 31, 0x283D40u);
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x283D38u, 0x283D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D40u;
label_283d40:
    // 0x283d40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x283d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d48: 0xc0a03fc  jal         func_280FF0
    ctx->pc = 0x283D48u;
    SET_GPR_U32(ctx, 31, 0x283D50u);
    ctx->pc = 0x280FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FF0u, 0x283D48u, 0x283D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D50u;
label_283d50:
    // 0x283d50: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x283d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283d54: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x283d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x283d58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x283d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x283d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d60: 0xc0a03f0  jal         func_280FC0
    ctx->pc = 0x283D60u;
    SET_GPR_U32(ctx, 31, 0x283D68u);
    ctx->pc = 0x280FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FC0u, 0x283D60u, 0x283D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D68u;
label_283d68:
    // 0x283d68: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x283D68u;
    {
        const bool branch_taken_0x283d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d68) {
            ctx->pc = 0x283DFCu;
            goto label_283dfc;
        }
    }
    ctx->pc = 0x283D70u;
label_283d70:
    // 0x283d70: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283d74: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283d78: 0xc0a0fc0  jal         func_283F00
    ctx->pc = 0x283D78u;
    SET_GPR_U32(ctx, 31, 0x283D80u);
    ctx->pc = 0x283F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F00u, 0x283D78u, 0x283D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D80u;
label_283d80:
    // 0x283d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d88: 0xc0a03e8  jal         func_280FA0
    ctx->pc = 0x283D88u;
    SET_GPR_U32(ctx, 31, 0x283D90u);
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x283D88u, 0x283D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D90u;
label_283d90:
    // 0x283d90: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283d94: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283d98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283d9c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283D9Cu;
    {
        const bool branch_taken_0x283d9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x283d9c) {
            ctx->pc = 0x283DCCu;
            goto label_283dcc;
        }
    }
    ctx->pc = 0x283DA4u;
    // 0x283da4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283da8: 0xc0a0270  jal         func_2809C0
    ctx->pc = 0x283DA8u;
    SET_GPR_U32(ctx, 31, 0x283DB0u);
    ctx->pc = 0x2809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809C0u, 0x283DA8u, 0x283DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DB0u;
label_283db0:
    // 0x283db0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283db4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283db8: 0xc0a0260  jal         func_280980
    ctx->pc = 0x283DB8u;
    SET_GPR_U32(ctx, 31, 0x283DC0u);
    ctx->pc = 0x280980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280980u, 0x283DB8u, 0x283DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DC0u;
label_283dc0:
    // 0x283dc0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283dc4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x283DC4u;
    {
        const bool branch_taken_0x283dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283dc4) {
            ctx->pc = 0x283E48u;
            goto label_283e48;
        }
    }
    ctx->pc = 0x283DCCu;
label_283dcc:
    // 0x283dcc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283dd0: 0xc0a0268  jal         func_2809A0
    ctx->pc = 0x283DD0u;
    SET_GPR_U32(ctx, 31, 0x283DD8u);
    ctx->pc = 0x2809A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809A0u, 0x283DD0u, 0x283DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DD8u;
label_283dd8:
    // 0x283dd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283ddc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x283DDCu;
    {
        const bool branch_taken_0x283ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x283ddc) {
            ctx->pc = 0x283E48u;
            goto label_283e48;
        }
    }
    ctx->pc = 0x283DE4u;
    // 0x283de4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283de8: 0xc0a0268  jal         func_2809A0
    ctx->pc = 0x283DE8u;
    SET_GPR_U32(ctx, 31, 0x283DF0u);
    ctx->pc = 0x2809A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809A0u, 0x283DE8u, 0x283DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DF0u;
label_283df0:
    // 0x283df0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283df4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x283DF4u;
    {
        const bool branch_taken_0x283df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283df4) {
            ctx->pc = 0x283E48u;
            goto label_283e48;
        }
    }
    ctx->pc = 0x283DFCu;
label_283dfc:
    // 0x283dfc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283e00: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x283e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283e04: 0xc0a0fc0  jal         func_283F00
    ctx->pc = 0x283E04u;
    SET_GPR_U32(ctx, 31, 0x283E0Cu);
    ctx->pc = 0x283F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F00u, 0x283E04u, 0x283E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E0Cu;
label_283e0c:
    // 0x283e0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e14: 0xc0a03e0  jal         func_280F80
    ctx->pc = 0x283E14u;
    SET_GPR_U32(ctx, 31, 0x283E1Cu);
    ctx->pc = 0x280F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F80u, 0x283E14u, 0x283E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E1Cu;
label_283e1c:
    // 0x283e1c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x283e20: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283e24: 0xc0a0260  jal         func_280980
    ctx->pc = 0x283E24u;
    SET_GPR_U32(ctx, 31, 0x283E2Cu);
    ctx->pc = 0x280980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280980u, 0x283E24u, 0x283E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E2Cu;
label_283e2c:
    // 0x283e2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e30: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283E30u;
    {
        const bool branch_taken_0x283e30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x283e30) {
            ctx->pc = 0x283E48u;
            goto label_283e48;
        }
    }
    ctx->pc = 0x283E38u;
    // 0x283e38: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x283e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283e3c: 0xc0a0260  jal         func_280980
    ctx->pc = 0x283E3Cu;
    SET_GPR_U32(ctx, 31, 0x283E44u);
    ctx->pc = 0x280980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280980u, 0x283E3Cu, 0x283E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E44u;
label_283e44:
    // 0x283e44: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x283e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_283e48:
    // 0x283e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e4c: 0xc0a0fb8  jal         func_283EE0
    ctx->pc = 0x283E4Cu;
    SET_GPR_U32(ctx, 31, 0x283E54u);
    ctx->pc = 0x283EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283EE0u, 0x283E4Cu, 0x283E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E54u;
label_283e54:
    // 0x283e54: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x283e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x283e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e5c: 0xc0a03e8  jal         func_280FA0
    ctx->pc = 0x283E5Cu;
    SET_GPR_U32(ctx, 31, 0x283E64u);
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x283E5Cu, 0x283E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E64u;
label_283e64:
    // 0x283e64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e6c: 0xc0a03e0  jal         func_280F80
    ctx->pc = 0x283E6Cu;
    SET_GPR_U32(ctx, 31, 0x283E74u);
    ctx->pc = 0x280F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F80u, 0x283E6Cu, 0x283E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E74u;
label_283e74:
    // 0x283e74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283e78: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x283e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283e7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e84: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x283e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x283e88: 0xc042858  jal         func_10A160
    ctx->pc = 0x283E88u;
    SET_GPR_U32(ctx, 31, 0x283E90u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x283E88u, 0x283E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E90u;
label_283e90:
    // 0x283e90: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x283e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283e94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x283e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x283e98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283e9c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x283e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x283ea0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x283ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x283ea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x283ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ea8: 0xc0a0d6c  jal         func_2835B0
    ctx->pc = 0x283EA8u;
    SET_GPR_U32(ctx, 31, 0x283EB0u);
    ctx->pc = 0x2835B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2835B0u, 0x283EA8u, 0x283EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EB0u;
label_283eb0:
    // 0x283eb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x283eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283eb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x283eb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283eb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283ebc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283ec8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x283ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x283ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x283ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283ED4u;
    // 0x283ed4: 0x0  nop
    ctx->pc = 0x283ed4u;
    // NOP
    // 0x283ed8: 0x0  nop
    ctx->pc = 0x283ed8u;
    // NOP
    // 0x283edc: 0x0  nop
    ctx->pc = 0x283edcu;
    // NOP
    ctx->pc = 0x283ee0u;
}
