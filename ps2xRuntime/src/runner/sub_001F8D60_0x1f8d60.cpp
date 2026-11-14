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

// Function: sub_001F8D60
// Address: 0x1f8d60 - 0x1f8ed0
void sub_001F8D60_0x1f8d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8D60_0x1f8d60");
#endif

    switch (ctx->pc) {
        case 0x1f8d80u: goto label_1f8d80;
        case 0x1f8d98u: goto label_1f8d98;
        case 0x1f8da4u: goto label_1f8da4;
        case 0x1f8dbcu: goto label_1f8dbc;
        case 0x1f8dc8u: goto label_1f8dc8;
        case 0x1f8de0u: goto label_1f8de0;
        case 0x1f8decu: goto label_1f8dec;
        case 0x1f8e04u: goto label_1f8e04;
        case 0x1f8e10u: goto label_1f8e10;
        case 0x1f8e28u: goto label_1f8e28;
        case 0x1f8e34u: goto label_1f8e34;
        case 0x1f8e4cu: goto label_1f8e4c;
        case 0x1f8e58u: goto label_1f8e58;
        case 0x1f8e64u: goto label_1f8e64;
        case 0x1f8e7cu: goto label_1f8e7c;
        case 0x1f8e90u: goto label_1f8e90;
        default: break;
    }

    ctx->pc = 0x1f8d60u;

    // 0x1f8d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f8d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8d70: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f8d74: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8d78: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8D78u;
    SET_GPR_U32(ctx, 31, 0x1F8D80u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8D78u, 0x1F8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D80u;
label_1f8d80:
    // 0x1f8d80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8d84: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x1f8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x1f8d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d90: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8D90u;
    SET_GPR_U32(ctx, 31, 0x1F8D98u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8D90u, 0x1F8D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D98u;
label_1f8d98:
    // 0x1f8d98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8d9c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F8DA4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8D9Cu, 0x1F8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DA4u;
label_1f8da4:
    // 0x1f8da4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8da8: 0x8c65014c  lw          $a1, 0x14C($v1)
    ctx->pc = 0x1f8da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x1f8dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8db4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8DB4u;
    SET_GPR_U32(ctx, 31, 0x1F8DBCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8DB4u, 0x1F8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DBCu;
label_1f8dbc:
    // 0x1f8dbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8dc0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8DC0u;
    SET_GPR_U32(ctx, 31, 0x1F8DC8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8DC0u, 0x1F8DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DC8u;
label_1f8dc8:
    // 0x1f8dc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8dcc: 0x8c65015c  lw          $a1, 0x15C($v1)
    ctx->pc = 0x1f8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x1f8dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8dd8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8DD8u;
    SET_GPR_U32(ctx, 31, 0x1F8DE0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8DD8u, 0x1F8DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DE0u;
label_1f8de0:
    // 0x1f8de0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8de4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8DE4u;
    SET_GPR_U32(ctx, 31, 0x1F8DECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8DE4u, 0x1F8DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DECu;
label_1f8dec:
    // 0x1f8dec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8df0: 0x8c65016c  lw          $a1, 0x16C($v1)
    ctx->pc = 0x1f8df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
    // 0x1f8df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8df8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8dfc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8DFCu;
    SET_GPR_U32(ctx, 31, 0x1F8E04u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8DFCu, 0x1F8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E04u;
label_1f8e04:
    // 0x1f8e04: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8e08: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8E08u;
    SET_GPR_U32(ctx, 31, 0x1F8E10u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8E08u, 0x1F8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E10u;
label_1f8e10:
    // 0x1f8e10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8e14: 0x8c650180  lw          $a1, 0x180($v1)
    ctx->pc = 0x1f8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x1f8e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e20: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8E20u;
    SET_GPR_U32(ctx, 31, 0x1F8E28u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8E20u, 0x1F8E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E28u;
label_1f8e28:
    // 0x1f8e28: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8e2c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8E2Cu, 0x1F8E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E34u;
label_1f8e34:
    // 0x1f8e34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8e38: 0x8c650190  lw          $a1, 0x190($v1)
    ctx->pc = 0x1f8e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x1f8e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e44: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8E44u;
    SET_GPR_U32(ctx, 31, 0x1F8E4Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8E44u, 0x1F8E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E4Cu;
label_1f8e4c:
    // 0x1f8e4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e50: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F8E50u;
    {
        const bool branch_taken_0x1f8e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8e50) {
            ctx->pc = 0x1F8E94u;
            goto label_1f8e94;
        }
    }
    ctx->pc = 0x1F8E58u;
label_1f8e58:
    // 0x1f8e58: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8e5c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E64u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8E5Cu, 0x1F8E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E64u;
label_1f8e64:
    // 0x1f8e64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f8e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8e6c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1f8e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1f8e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e74: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F8E74u;
    SET_GPR_U32(ctx, 31, 0x1F8E7Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F8E74u, 0x1F8E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E7Cu;
label_1f8e7c:
    // 0x1f8e7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e88: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8E88u;
    SET_GPR_U32(ctx, 31, 0x1F8E90u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8E88u, 0x1F8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E90u;
label_1f8e90:
    // 0x1f8e90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f8e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f8e94:
    // 0x1f8e94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8e98: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1f8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1f8e9c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1f8e9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f8ea0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F8EA0u;
    {
        const bool branch_taken_0x1f8ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ea0) {
            ctx->pc = 0x1F8E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8e58;
        }
    }
    ctx->pc = 0x1F8EA8u;
    // 0x1f8ea8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8eac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8eb0: 0xac640234  sw          $a0, 0x234($v1)
    ctx->pc = 0x1f8eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 4));
    // 0x1f8eb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8ebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8ec0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f8ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f8ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8ECCu;
    // 0x1f8ecc: 0x0  nop
    ctx->pc = 0x1f8eccu;
    // NOP
    ctx->pc = 0x1f8ed0u;
}
