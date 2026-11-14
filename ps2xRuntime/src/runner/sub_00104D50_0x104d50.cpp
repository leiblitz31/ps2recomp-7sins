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

// Function: sub_00104D50
// Address: 0x104d50 - 0x104ef0
void sub_00104D50_0x104d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104D50_0x104d50");
#endif

    switch (ctx->pc) {
        case 0x104d74u: goto label_104d74;
        case 0x104d80u: goto label_104d80;
        case 0x104de0u: goto label_104de0;
        case 0x104e00u: goto label_104e00;
        case 0x104e38u: goto label_104e38;
        case 0x104e48u: goto label_104e48;
        case 0x104e58u: goto label_104e58;
        case 0x104e70u: goto label_104e70;
        case 0x104e90u: goto label_104e90;
        case 0x104eccu: goto label_104ecc;
        default: break;
    }

    ctx->pc = 0x104d50u;

    // 0x104d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x104d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x104d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x104d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x104d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x104d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x104d60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x104d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x104d64: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x104d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x104d68: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x104d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x104d6c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x104D6Cu;
    SET_GPR_U32(ctx, 31, 0x104D74u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x104D6Cu, 0x104D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D74u;
label_104d74:
    // 0x104d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d78: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x104D78u;
    SET_GPR_U32(ctx, 31, 0x104D80u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x104D78u, 0x104D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D80u;
label_104d80:
    // 0x104d80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x104d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d84: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x104d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x104d88: 0x1222001f  beq         $s1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x104D88u;
    {
        const bool branch_taken_0x104d88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x104d88) {
            ctx->pc = 0x104E08u;
            goto label_104e08;
        }
    }
    ctx->pc = 0x104D90u;
    // 0x104d90: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x104d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x104d94: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x104D94u;
    {
        const bool branch_taken_0x104d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x104d94) {
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104D9Cu;
    // 0x104d9c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x104da0: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104DA0u;
    {
        const bool branch_taken_0x104da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x104da0) {
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104DA8u;
    // 0x104da8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x104da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x104dac: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104DACu;
    {
        const bool branch_taken_0x104dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x104dac) {
            ctx->pc = 0x104DC8u;
            goto label_104dc8;
        }
    }
    ctx->pc = 0x104DB4u;
    // 0x104db4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x104db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x104db8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104DB8u;
    {
        const bool branch_taken_0x104db8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x104db8) {
            ctx->pc = 0x104DC8u;
            goto label_104dc8;
        }
    }
    ctx->pc = 0x104DC0u;
    // 0x104dc0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x104DC0u;
    {
        const bool branch_taken_0x104dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104dc0) {
            ctx->pc = 0x104E40u;
            goto label_104e40;
        }
    }
    ctx->pc = 0x104DC8u;
label_104dc8:
    // 0x104dc8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104dcc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x104dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x104dd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104dd4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x104dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104dd8: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x104DD8u;
    SET_GPR_U32(ctx, 31, 0x104DE0u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x104DD8u, 0x104DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DE0u;
label_104de0:
    // 0x104de0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x104DE0u;
    {
        const bool branch_taken_0x104de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104de0) {
            ctx->pc = 0x104ECCu;
            goto label_104ecc;
        }
    }
    ctx->pc = 0x104DE8u;
label_104de8:
    // 0x104de8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104dec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x104decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x104df0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104df4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x104df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104df8: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x104DF8u;
    SET_GPR_U32(ctx, 31, 0x104E00u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x104DF8u, 0x104E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E00u;
label_104e00:
    // 0x104e00: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x104E00u;
    {
        const bool branch_taken_0x104e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e00) {
            ctx->pc = 0x104ECCu;
            goto label_104ecc;
        }
    }
    ctx->pc = 0x104E08u;
label_104e08:
    // 0x104e08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x104e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104e10: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104E10u;
    {
        const bool branch_taken_0x104e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104e10) {
            ctx->pc = 0x104E24u;
            goto label_104e24;
        }
    }
    ctx->pc = 0x104E18u;
    // 0x104e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104e1c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x104E1Cu;
    {
        const bool branch_taken_0x104e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e1c) {
            ctx->pc = 0x104ED0u;
            goto label_104ed0;
        }
    }
    ctx->pc = 0x104E24u;
label_104e24:
    // 0x104e24: 0x8f82b99c  lw          $v0, -0x4664($gp)
    ctx->pc = 0x104e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949276)));
    // 0x104e28: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x104e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x104e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e30: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x104E30u;
    SET_GPR_U32(ctx, 31, 0x104E38u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x104E30u, 0x104E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E38u;
label_104e38:
    // 0x104e38: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x104E38u;
    {
        const bool branch_taken_0x104e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e38) {
            ctx->pc = 0x104ECCu;
            goto label_104ecc;
        }
    }
    ctx->pc = 0x104E40u;
label_104e40:
    // 0x104e40: 0xc05548c  jal         func_155230
    ctx->pc = 0x104E40u;
    SET_GPR_U32(ctx, 31, 0x104E48u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x104E40u, 0x104E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E48u;
label_104e48:
    // 0x104e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e4c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x104e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x104e50: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x104E50u;
    SET_GPR_U32(ctx, 31, 0x104E58u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x104E50u, 0x104E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E58u;
label_104e58:
    // 0x104e58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e5c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x104E5Cu;
    {
        const bool branch_taken_0x104e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e5c) {
            ctx->pc = 0x104E98u;
            goto label_104e98;
        }
    }
    ctx->pc = 0x104E64u;
    // 0x104e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e68: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x104E68u;
    SET_GPR_U32(ctx, 31, 0x104E70u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x104E68u, 0x104E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E70u;
label_104e70:
    // 0x104e70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104E70u;
    {
        const bool branch_taken_0x104e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e70) {
            ctx->pc = 0x104E98u;
            goto label_104e98;
        }
    }
    ctx->pc = 0x104E78u;
    // 0x104e78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x104e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104e7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x104e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x104e80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104e84: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x104e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104e88: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x104E88u;
    SET_GPR_U32(ctx, 31, 0x104E90u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x104E88u, 0x104E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E90u;
label_104e90:
    // 0x104e90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x104E90u;
    {
        const bool branch_taken_0x104e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e90) {
            ctx->pc = 0x104ECCu;
            goto label_104ecc;
        }
    }
    ctx->pc = 0x104E98u;
label_104e98:
    // 0x104e98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104ea0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104EA0u;
    {
        const bool branch_taken_0x104ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104ea0) {
            ctx->pc = 0x104EB4u;
            goto label_104eb4;
        }
    }
    ctx->pc = 0x104EA8u;
    // 0x104ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x104EACu;
    {
        const bool branch_taken_0x104eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104eac) {
            ctx->pc = 0x104ED0u;
            goto label_104ed0;
        }
    }
    ctx->pc = 0x104EB4u;
label_104eb4:
    // 0x104eb4: 0x8f82b99c  lw          $v0, -0x4664($gp)
    ctx->pc = 0x104eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949276)));
    // 0x104eb8: 0xac510038  sw          $s1, 0x38($v0)
    ctx->pc = 0x104eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 17));
    // 0x104ebc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x104ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x104ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ec4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x104EC4u;
    SET_GPR_U32(ctx, 31, 0x104ECCu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x104EC4u, 0x104ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104ECCu;
label_104ecc:
    // 0x104ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104ed0:
    // 0x104ed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x104ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x104ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104edc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x104edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x104ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x104EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104EE8u;
    // 0x104ee8: 0x0  nop
    ctx->pc = 0x104ee8u;
    // NOP
    // 0x104eec: 0x0  nop
    ctx->pc = 0x104eecu;
    // NOP
    ctx->pc = 0x104ef0u;
}
