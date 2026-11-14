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

// Function: sub_00127D30
// Address: 0x127d30 - 0x127ed0
void sub_00127D30_0x127d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127D30_0x127d30");
#endif

    switch (ctx->pc) {
        case 0x127d68u: goto label_127d68;
        case 0x127da0u: goto label_127da0;
        case 0x127dacu: goto label_127dac;
        case 0x127df4u: goto label_127df4;
        case 0x127e0cu: goto label_127e0c;
        case 0x127e20u: goto label_127e20;
        case 0x127e48u: goto label_127e48;
        case 0x127e50u: goto label_127e50;
        case 0x127e78u: goto label_127e78;
        default: break;
    }

    ctx->pc = 0x127d30u;

    // 0x127d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x127d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x127d34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x127d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x127d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x127d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x127d3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x127d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x127d44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127d48: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x127d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x127d4c: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x127d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x127d50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x127d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127d54: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x127d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x127d58: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x127d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x127d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d60: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x127D60u;
    SET_GPR_U32(ctx, 31, 0x127D68u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x127D60u, 0x127D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D68u;
label_127d68:
    // 0x127d68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x127d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x127d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x127d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x127d74: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127D74u;
    {
        const bool branch_taken_0x127d74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x127d74) {
            ctx->pc = 0x127D88u;
            goto label_127d88;
        }
    }
    ctx->pc = 0x127D7Cu;
    // 0x127d7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x127d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127d80: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127D80u;
    {
        const bool branch_taken_0x127d80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x127d80) {
            ctx->pc = 0x127D94u;
            goto label_127d94;
        }
    }
    ctx->pc = 0x127D88u;
label_127d88:
    // 0x127d88: 0x8f908b24  lw          $s0, -0x74DC($gp)
    ctx->pc = 0x127d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
    // 0x127d8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x127D8Cu;
    {
        const bool branch_taken_0x127d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d8c) {
            ctx->pc = 0x127DB0u;
            goto label_127db0;
        }
    }
    ctx->pc = 0x127D94u;
label_127d94:
    // 0x127d94: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x127d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x127d98: 0xc042330  jal         func_108CC0
    ctx->pc = 0x127D98u;
    SET_GPR_U32(ctx, 31, 0x127DA0u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x127D98u, 0x127DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127DA0u;
label_127da0:
    // 0x127da0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127da4: 0xc048f38  jal         func_123CE0
    ctx->pc = 0x127DA4u;
    SET_GPR_U32(ctx, 31, 0x127DACu);
    ctx->pc = 0x123CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CE0u, 0x127DA4u, 0x127DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127DACu;
label_127dac:
    // 0x127dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127db0:
    // 0x127db0: 0x8f83ba60  lw          $v1, -0x45A0($gp)
    ctx->pc = 0x127db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949472)));
    // 0x127db4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x127db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x127db8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x127db8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x127dbc: 0x1010  mfhi        $v0
    ctx->pc = 0x127dbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x127dc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x127DC0u;
    {
        const bool branch_taken_0x127dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127dc0) {
            ctx->pc = 0x127DE0u;
            goto label_127de0;
        }
    }
    ctx->pc = 0x127DC8u;
    // 0x127dc8: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x127dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127dcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127DCCu;
    {
        const bool branch_taken_0x127dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127dcc) {
            ctx->pc = 0x127DE0u;
            goto label_127de0;
        }
    }
    ctx->pc = 0x127DD4u;
    // 0x127dd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dd8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x127DD8u;
    {
        const bool branch_taken_0x127dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127dd8) {
            ctx->pc = 0x127EA8u;
            goto label_127ea8;
        }
    }
    ctx->pc = 0x127DE0u;
label_127de0:
    // 0x127de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127de4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127dec: 0xc117f34  jal         func_45FCD0
    ctx->pc = 0x127DECu;
    SET_GPR_U32(ctx, 31, 0x127DF4u);
    ctx->pc = 0x45FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FCD0u, 0x127DECu, 0x127DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127DF4u;
label_127df4:
    // 0x127df4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x127df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127df8: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x127df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127dfc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x127DFCu;
    {
        const bool branch_taken_0x127dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127dfc) {
            ctx->pc = 0x127EA4u;
            goto label_127ea4;
        }
    }
    ctx->pc = 0x127E04u;
    // 0x127e04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x127E04u;
    {
        const bool branch_taken_0x127e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e04) {
            ctx->pc = 0x127E24u;
            goto label_127e24;
        }
    }
    ctx->pc = 0x127E0Cu;
label_127e0c:
    // 0x127e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e18: 0xc117f34  jal         func_45FCD0
    ctx->pc = 0x127E18u;
    SET_GPR_U32(ctx, 31, 0x127E20u);
    ctx->pc = 0x45FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FCD0u, 0x127E18u, 0x127E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E20u;
label_127e20:
    // 0x127e20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x127e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127e24:
    // 0x127e24: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x127E24u;
    {
        const bool branch_taken_0x127e24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x127e24) {
            ctx->pc = 0x127E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127e0c;
        }
    }
    ctx->pc = 0x127E2Cu;
    // 0x127e2c: 0x2002826  xor         $a1, $s0, $zero
    ctx->pc = 0x127e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
    // 0x127e30: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x127e30u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x127e34: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x127e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x127e38: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x127e38u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x127e3c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x127e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127e40: 0xc049e6c  jal         func_1279B0
    ctx->pc = 0x127E40u;
    SET_GPR_U32(ctx, 31, 0x127E48u);
    ctx->pc = 0x1279B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279B0u, 0x127E40u, 0x127E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E48u;
label_127e48:
    // 0x127e48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x127E48u;
    {
        const bool branch_taken_0x127e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e48) {
            ctx->pc = 0x127E78u;
            goto label_127e78;
        }
    }
    ctx->pc = 0x127E50u;
label_127e50:
    // 0x127e50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x127e54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x127e58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127e5c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127e60: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x127e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x127e64: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x127e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127e68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e70: 0xc117f34  jal         func_45FCD0
    ctx->pc = 0x127E70u;
    SET_GPR_U32(ctx, 31, 0x127E78u);
    ctx->pc = 0x45FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FCD0u, 0x127E70u, 0x127E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127E78u;
label_127e78:
    // 0x127e78: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x127e7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x127e80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x127e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127e84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127e88: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x127e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x127e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127e90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127e98: 0x1062ffed  beq         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x127E98u;
    {
        const bool branch_taken_0x127e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x127e98) {
            ctx->pc = 0x127E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127e50;
        }
    }
    ctx->pc = 0x127EA0u;
    // 0x127ea0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x127ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127ea4:
    // 0x127ea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x127ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127ea8:
    // 0x127ea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x127ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127eac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x127eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127eb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127ebc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x127ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x127EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127EC8u;
    // 0x127ec8: 0x0  nop
    ctx->pc = 0x127ec8u;
    // NOP
    // 0x127ecc: 0x0  nop
    ctx->pc = 0x127eccu;
    // NOP
    ctx->pc = 0x127ed0u;
}
