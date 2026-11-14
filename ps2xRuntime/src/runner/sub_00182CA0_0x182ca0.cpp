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

// Function: sub_00182CA0
// Address: 0x182ca0 - 0x182f50
void sub_00182CA0_0x182ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182CA0_0x182ca0");
#endif

    switch (ctx->pc) {
        case 0x182d04u: goto label_182d04;
        case 0x182d40u: goto label_182d40;
        case 0x182d8cu: goto label_182d8c;
        case 0x182da0u: goto label_182da0;
        case 0x182dc4u: goto label_182dc4;
        case 0x182de0u: goto label_182de0;
        case 0x182df4u: goto label_182df4;
        case 0x182e0cu: goto label_182e0c;
        case 0x182e74u: goto label_182e74;
        case 0x182e8cu: goto label_182e8c;
        case 0x182ea0u: goto label_182ea0;
        case 0x182ee8u: goto label_182ee8;
        case 0x182f0cu: goto label_182f0c;
        case 0x182f24u: goto label_182f24;
        default: break;
    }

    ctx->pc = 0x182ca0u;

    // 0x182ca0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x182ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x182ca4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x182ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x182ca8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x182ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x182cac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182cb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182cb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182cc4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x182cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x182cc8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x182cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x182ccc: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x182cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x182cd0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x182cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x182cd4: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x182cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x182cd8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x182CD8u;
    {
        const bool branch_taken_0x182cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cd8) {
            ctx->pc = 0x182D0Cu;
            goto label_182d0c;
        }
    }
    ctx->pc = 0x182CE0u;
    // 0x182ce0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x182ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x182ce4: 0x22823  negu        $a1, $v0
    ctx->pc = 0x182ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x182ce8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x182ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x182cec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182cf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182cf4: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x182cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182cf8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x182cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182cfc: 0xc060bd4  jal         func_182F50
    ctx->pc = 0x182CFCu;
    SET_GPR_U32(ctx, 31, 0x182D04u);
    ctx->pc = 0x182F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182F50u, 0x182CFCu, 0x182D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D04u;
label_182d04:
    // 0x182d04: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x182D04u;
    {
        const bool branch_taken_0x182d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d04) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182D0Cu;
label_182d0c:
    // 0x182d0c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x182d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x182d10: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x182d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x182d14: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x182D14u;
    {
        const bool branch_taken_0x182d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x182d14) {
            ctx->pc = 0x182E7Cu;
            goto label_182e7c;
        }
    }
    ctx->pc = 0x182D1Cu;
    // 0x182d1c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x182d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x182d20: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182D20u;
    {
        const bool branch_taken_0x182d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x182d20) {
            ctx->pc = 0x182D30u;
            goto label_182d30;
        }
    }
    ctx->pc = 0x182D28u;
    // 0x182d28: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x182D28u;
    {
        const bool branch_taken_0x182d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d28) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182D30u;
label_182d30:
    // 0x182d30: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x182d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x182d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d38: 0xc08d95c  jal         func_236570
    ctx->pc = 0x182D38u;
    SET_GPR_U32(ctx, 31, 0x182D40u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x182D38u, 0x182D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D40u;
label_182d40:
    // 0x182d40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x182d40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d44: 0x3aa20015  xori        $v0, $s5, 0x15
    ctx->pc = 0x182d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)21);
    // 0x182d48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x182d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x182d4c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x182d4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182d50: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x182d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x182d54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182d58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182d5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182d60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x182d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182d64: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x182d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x182d68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x182d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x182d6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182d70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182d74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182d78: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x182d78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182d7c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182d80: 0x27859100  addiu       $a1, $gp, -0x6F00
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938880));
    // 0x182d84: 0xc05621c  jal         func_158870
    ctx->pc = 0x182D84u;
    SET_GPR_U32(ctx, 31, 0x182D8Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x182D84u, 0x182D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D8Cu;
label_182d8c:
    // 0x182d8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x182d8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d90: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182d94: 0x27859108  addiu       $a1, $gp, -0x6EF8
    ctx->pc = 0x182d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938888));
    // 0x182d98: 0xc05621c  jal         func_158870
    ctx->pc = 0x182D98u;
    SET_GPR_U32(ctx, 31, 0x182DA0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x182D98u, 0x182DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DA0u;
label_182da0:
    // 0x182da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182da4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x182DA4u;
    {
        const bool branch_taken_0x182da4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x182da4) {
            ctx->pc = 0x182DC4u;
            goto label_182dc4;
        }
    }
    ctx->pc = 0x182DACu;
    // 0x182dac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182db0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182db4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x182db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182db8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x182db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dbc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x182DBCu;
    SET_GPR_U32(ctx, 31, 0x182DC4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x182DBCu, 0x182DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DC4u;
label_182dc4:
    // 0x182dc4: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x182DC4u;
    {
        const bool branch_taken_0x182dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x182dc4) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182DCCu;
    // 0x182dcc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182dd0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182dd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dd8: 0xc08c7c8  jal         func_231F20
    ctx->pc = 0x182DD8u;
    SET_GPR_U32(ctx, 31, 0x182DE0u);
    ctx->pc = 0x231F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F20u, 0x182DD8u, 0x182DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DE0u;
label_182de0:
    // 0x182de0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182de4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dec: 0xc08c910  jal         func_232440
    ctx->pc = 0x182DECu;
    SET_GPR_U32(ctx, 31, 0x182DF4u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x182DECu, 0x182DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DF4u;
label_182df4:
    // 0x182df4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182df8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x182e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e04: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x182E04u;
    SET_GPR_U32(ctx, 31, 0x182E0Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x182E04u, 0x182E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E0Cu;
label_182e0c:
    // 0x182e0c: 0x12200045  beqz        $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x182E0Cu;
    {
        const bool branch_taken_0x182e0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e0c) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182E14u;
    // 0x182e14: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x182e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x182e18: 0x24845050  addiu       $a0, $a0, 0x5050
    ctx->pc = 0x182e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20560));
    // 0x182e1c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x182e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x182e20: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x182e20u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E5050u));
    // 0x182e24: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x182e24u;
    { uint32_t bits = FAST_READ32(0x4E5058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e28: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x182e28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x182e2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x182e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x182e30: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x182e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x182e34: 0x24845060  addiu       $a0, $a0, 0x5060
    ctx->pc = 0x182e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
    // 0x182e38: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x182e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x182e3c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x182e3cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E5060u));
    // 0x182e40: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x182e40u;
    { uint32_t bits = FAST_READ32(0x4E5068u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182e44: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x182e44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x182e48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x182e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x182e4c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182e50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x182e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x182e54: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x182e60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x182e64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e68: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x182e68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x182e6c: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x182E6Cu;
    SET_GPR_U32(ctx, 31, 0x182E74u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x182E6Cu, 0x182E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E74u;
label_182e74:
    // 0x182e74: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x182E74u;
    {
        const bool branch_taken_0x182e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e74) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182E7Cu;
label_182e7c:
    // 0x182e7c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x182e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x182e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e84: 0xc08d95c  jal         func_236570
    ctx->pc = 0x182E84u;
    SET_GPR_U32(ctx, 31, 0x182E8Cu);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x182E84u, 0x182E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E8Cu;
label_182e8c:
    // 0x182e8c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x182e8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e90: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x182e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182e94: 0x27859110  addiu       $a1, $gp, -0x6EF0
    ctx->pc = 0x182e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938896));
    // 0x182e98: 0xc05621c  jal         func_158870
    ctx->pc = 0x182E98u;
    SET_GPR_U32(ctx, 31, 0x182EA0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x182E98u, 0x182EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182EA0u;
label_182ea0:
    // 0x182ea0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x182ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ea4: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x182EA4u;
    {
        const bool branch_taken_0x182ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ea4) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182EACu;
    // 0x182eac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x182eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x182eb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182eb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182eb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x182ebc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x182ebcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182ec0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x182EC0u;
    {
        const bool branch_taken_0x182ec0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ec0) {
            ctx->pc = 0x182EF0u;
            goto label_182ef0;
        }
    }
    ctx->pc = 0x182EC8u;
    // 0x182ec8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182ecc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182ed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x182ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ed4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x182ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x182ed8: 0x24c65070  addiu       $a2, $a2, 0x5070
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20592));
    // 0x182edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ee0: 0xc08c800  jal         func_232000
    ctx->pc = 0x182EE0u;
    SET_GPR_U32(ctx, 31, 0x182EE8u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x182EE0u, 0x182EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182EE8u;
label_182ee8:
    // 0x182ee8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x182EE8u;
    {
        const bool branch_taken_0x182ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ee8) {
            ctx->pc = 0x182F0Cu;
            goto label_182f0c;
        }
    }
    ctx->pc = 0x182EF0u;
label_182ef0:
    // 0x182ef0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182ef4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x182ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182efc: 0x27869118  addiu       $a2, $gp, -0x6EE8
    ctx->pc = 0x182efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938904));
    // 0x182f00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f04: 0xc08c800  jal         func_232000
    ctx->pc = 0x182F04u;
    SET_GPR_U32(ctx, 31, 0x182F0Cu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x182F04u, 0x182F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F0Cu;
label_182f0c:
    // 0x182f0c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x182f10: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182f14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x182f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x182f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f1c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x182F1Cu;
    SET_GPR_U32(ctx, 31, 0x182F24u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x182F1Cu, 0x182F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F24u;
label_182f24:
    // 0x182f24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x182f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182f28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x182f28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182f2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x182f2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182f30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182f34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182f44: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x182f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x182f48: 0x3e00008  jr          $ra
    ctx->pc = 0x182F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182F50u;
}
