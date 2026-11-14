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

// Function: sub_001F7DF0
// Address: 0x1f7df0 - 0x1f7fb0
void sub_001F7DF0_0x1f7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7DF0_0x1f7df0");
#endif

    switch (ctx->pc) {
        case 0x1f7e1cu: goto label_1f7e1c;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e40u: goto label_1f7e40;
        case 0x1f7e60u: goto label_1f7e60;
        case 0x1f7e6cu: goto label_1f7e6c;
        case 0x1f7e84u: goto label_1f7e84;
        case 0x1f7e90u: goto label_1f7e90;
        case 0x1f7ea8u: goto label_1f7ea8;
        case 0x1f7ee4u: goto label_1f7ee4;
        case 0x1f7f00u: goto label_1f7f00;
        case 0x1f7f1cu: goto label_1f7f1c;
        case 0x1f7f34u: goto label_1f7f34;
        case 0x1f7f4cu: goto label_1f7f4c;
        default: break;
    }

    ctx->pc = 0x1f7df0u;

    // 0x1f7df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f7df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f7dfc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f7e00: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1f7e00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f7e04: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x1f7e04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f7e08: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x1f7e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f7e0c: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x1f7e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f7e10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e14: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7E14u;
    SET_GPR_U32(ctx, 31, 0x1F7E1Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7E14u, 0x1F7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E1Cu;
label_1f7e1c:
    // 0x1f7e1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e20: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x1f7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x1f7e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e2c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E34u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7E2Cu, 0x1F7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E34u;
label_1f7e34:
    // 0x1f7e34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e38: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7E38u;
    SET_GPR_U32(ctx, 31, 0x1F7E40u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7E38u, 0x1F7E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E40u;
label_1f7e40:
    // 0x1f7e40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e44: 0x8c65014c  lw          $a1, 0x14C($v1)
    ctx->pc = 0x1f7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x1f7e48: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1f7e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7e4c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f7e4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7e50: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1f7e50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f7e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e58: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7E58u;
    SET_GPR_U32(ctx, 31, 0x1F7E60u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7E58u, 0x1F7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E60u;
label_1f7e60:
    // 0x1f7e60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e64: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7E64u;
    SET_GPR_U32(ctx, 31, 0x1F7E6Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7E64u, 0x1F7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E6Cu;
label_1f7e6c:
    // 0x1f7e6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e70: 0x8c65015c  lw          $a1, 0x15C($v1)
    ctx->pc = 0x1f7e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x1f7e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e78: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7e78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7e7c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E84u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7E7Cu, 0x1F7E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E84u;
label_1f7e84:
    // 0x1f7e84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e88: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7E88u;
    SET_GPR_U32(ctx, 31, 0x1F7E90u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7E88u, 0x1F7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E90u;
label_1f7e90:
    // 0x1f7e90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e94: 0x8c650190  lw          $a1, 0x190($v1)
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x1f7e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e9c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7e9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7ea0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7EA0u;
    SET_GPR_U32(ctx, 31, 0x1F7EA8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7EA0u, 0x1F7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EA8u;
label_1f7ea8:
    // 0x1f7ea8: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x1f7ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7eac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7EACu;
    {
        const bool branch_taken_0x1f7eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7eac) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7EB4u;
    // 0x1f7eb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7eb8: 0x8c50015c  lw          $s0, 0x15C($v0)
    ctx->pc = 0x1f7eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x1f7ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7EBCu;
    {
        const bool branch_taken_0x1f7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ebc) {
            ctx->pc = 0x1F7ECCu;
            goto label_1f7ecc;
        }
    }
    ctx->pc = 0x1F7EC4u;
label_1f7ec4:
    // 0x1f7ec4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7ec8: 0x8c50014c  lw          $s0, 0x14C($v0)
    ctx->pc = 0x1f7ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_1f7ecc:
    // 0x1f7ecc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ed4: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7ed4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7ed8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7edc: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7EDCu;
    SET_GPR_U32(ctx, 31, 0x1F7EE4u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7EDCu, 0x1F7EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EE4u;
label_1f7ee4:
    // 0x1f7ee4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7ee8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7eec: 0x8c45016c  lw          $a1, 0x16C($v0)
    ctx->pc = 0x1f7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x1f7ef0: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7ef0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7ef4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f7ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7ef8: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7EF8u;
    SET_GPR_U32(ctx, 31, 0x1F7F00u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7EF8u, 0x1F7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F00u;
label_1f7f00:
    // 0x1f7f00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f08: 0x8c450180  lw          $a1, 0x180($v0)
    ctx->pc = 0x1f7f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x1f7f0c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7f0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7f10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f7f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7f14: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7F14u;
    SET_GPR_U32(ctx, 31, 0x1F7F1Cu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7F14u, 0x1F7F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F1Cu;
label_1f7f1c:
    // 0x1f7f1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f24: 0x24640208  addiu       $a0, $v1, 0x208
    ctx->pc = 0x1f7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 520));
    // 0x1f7f28: 0x8c450234  lw          $a1, 0x234($v0)
    ctx->pc = 0x1f7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x1f7f2c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F7F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7F34u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F7F2Cu, 0x1F7F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F34u;
label_1f7f34:
    // 0x1f7f34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f7f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7f3c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7f3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7f40: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f7f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7f44: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7F44u;
    SET_GPR_U32(ctx, 31, 0x1F7F4Cu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7F44u, 0x1F7F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F4Cu;
label_1f7f4c:
    // 0x1f7f4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7f50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f54: 0xa06400e0  sb          $a0, 0xE0($v1)
    ctx->pc = 0x1f7f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7f58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f5c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f7f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7f60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f64: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x1f7f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f7f6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f70: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x1f7f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x1f7f74: 0x93a40040  lbu         $a0, 0x40($sp)
    ctx->pc = 0x1f7f74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7f78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f7c: 0xa06400e8  sb          $a0, 0xE8($v1)
    ctx->pc = 0x1f7f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 232), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7f80: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x1f7f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7f84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f88: 0xa06400e9  sb          $a0, 0xE9($v1)
    ctx->pc = 0x1f7f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 233), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7f8c: 0x93a40060  lbu         $a0, 0x60($sp)
    ctx->pc = 0x1f7f8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7f90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7f94: 0xa06400ea  sb          $a0, 0xEA($v1)
    ctx->pc = 0x1f7f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 234), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7fa0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f7fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7FACu;
    // 0x1f7fac: 0x0  nop
    ctx->pc = 0x1f7facu;
    // NOP
    ctx->pc = 0x1f7fb0u;
}
