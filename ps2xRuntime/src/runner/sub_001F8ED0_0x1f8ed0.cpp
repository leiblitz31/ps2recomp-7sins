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

// Function: sub_001F8ED0
// Address: 0x1f8ed0 - 0x1f9040
void sub_001F8ED0_0x1f8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8ED0_0x1f8ed0");
#endif

    switch (ctx->pc) {
        case 0x1f8ef0u: goto label_1f8ef0;
        case 0x1f8f08u: goto label_1f8f08;
        case 0x1f8f14u: goto label_1f8f14;
        case 0x1f8f2cu: goto label_1f8f2c;
        case 0x1f8f38u: goto label_1f8f38;
        case 0x1f8f50u: goto label_1f8f50;
        case 0x1f8f5cu: goto label_1f8f5c;
        case 0x1f8f74u: goto label_1f8f74;
        case 0x1f8f80u: goto label_1f8f80;
        case 0x1f8f98u: goto label_1f8f98;
        case 0x1f8fa4u: goto label_1f8fa4;
        case 0x1f8fbcu: goto label_1f8fbc;
        case 0x1f8fc8u: goto label_1f8fc8;
        case 0x1f8fd4u: goto label_1f8fd4;
        case 0x1f8fecu: goto label_1f8fec;
        case 0x1f9000u: goto label_1f9000;
        default: break;
    }

    ctx->pc = 0x1f8ed0u;

    // 0x1f8ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f8edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8ee0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f8ee4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8ee8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8EE8u;
    SET_GPR_U32(ctx, 31, 0x1F8EF0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8EE8u, 0x1F8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EF0u;
label_1f8ef0:
    // 0x1f8ef0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8ef4: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x1f8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1f8ef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f00: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8F00u;
    SET_GPR_U32(ctx, 31, 0x1F8F08u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8F00u, 0x1F8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F08u;
label_1f8f08:
    // 0x1f8f08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f0c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8F14u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8F0Cu, 0x1F8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F14u;
label_1f8f14:
    // 0x1f8f14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f18: 0x8c650150  lw          $a1, 0x150($v1)
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1f8f1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f24: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8F24u;
    SET_GPR_U32(ctx, 31, 0x1F8F2Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8F24u, 0x1F8F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F2Cu;
label_1f8f2c:
    // 0x1f8f2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f30: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8F30u;
    SET_GPR_U32(ctx, 31, 0x1F8F38u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8F30u, 0x1F8F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F38u;
label_1f8f38:
    // 0x1f8f38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f3c: 0x8c650160  lw          $a1, 0x160($v1)
    ctx->pc = 0x1f8f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x1f8f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f48: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8F48u;
    SET_GPR_U32(ctx, 31, 0x1F8F50u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8F48u, 0x1F8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F50u;
label_1f8f50:
    // 0x1f8f50: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f54: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8F54u;
    SET_GPR_U32(ctx, 31, 0x1F8F5Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8F54u, 0x1F8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F5Cu;
label_1f8f5c:
    // 0x1f8f5c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f60: 0x8c650170  lw          $a1, 0x170($v1)
    ctx->pc = 0x1f8f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x1f8f64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f6c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8F6Cu;
    SET_GPR_U32(ctx, 31, 0x1F8F74u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8F6Cu, 0x1F8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F74u;
label_1f8f74:
    // 0x1f8f74: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f78: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8F78u;
    SET_GPR_U32(ctx, 31, 0x1F8F80u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8F78u, 0x1F8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F80u;
label_1f8f80:
    // 0x1f8f80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f84: 0x8c650184  lw          $a1, 0x184($v1)
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x1f8f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f90: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8F90u;
    SET_GPR_U32(ctx, 31, 0x1F8F98u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8F90u, 0x1F8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F98u;
label_1f8f98:
    // 0x1f8f98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f9c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8F9Cu;
    SET_GPR_U32(ctx, 31, 0x1F8FA4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8F9Cu, 0x1F8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FA4u;
label_1f8fa4:
    // 0x1f8fa4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8fa8: 0x8c650194  lw          $a1, 0x194($v1)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x1f8fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fb4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8FB4u;
    SET_GPR_U32(ctx, 31, 0x1F8FBCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8FB4u, 0x1F8FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FBCu;
label_1f8fbc:
    // 0x1f8fbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F8FC0u;
    {
        const bool branch_taken_0x1f8fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8fc0) {
            ctx->pc = 0x1F9004u;
            goto label_1f9004;
        }
    }
    ctx->pc = 0x1F8FC8u;
label_1f8fc8:
    // 0x1f8fc8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8fcc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8FCCu;
    SET_GPR_U32(ctx, 31, 0x1F8FD4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8FCCu, 0x1F8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FD4u;
label_1f8fd4:
    // 0x1f8fd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f8fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8fdc: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1f8fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1f8fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fe4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F8FE4u;
    SET_GPR_U32(ctx, 31, 0x1F8FECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F8FE4u, 0x1F8FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FECu;
label_1f8fec:
    // 0x1f8fec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f8fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ff8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8FF8u;
    SET_GPR_U32(ctx, 31, 0x1F9000u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8FF8u, 0x1F9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9000u;
label_1f9000:
    // 0x1f9000: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f9000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f9004:
    // 0x1f9004: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9008: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1f9008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1f900c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1f900cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f9010: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F9010u;
    {
        const bool branch_taken_0x1f9010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9010) {
            ctx->pc = 0x1F8FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8fc8;
        }
    }
    ctx->pc = 0x1F9018u;
    // 0x1f9018: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f9018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f901c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9020: 0xac640238  sw          $a0, 0x238($v1)
    ctx->pc = 0x1f9020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 4));
    // 0x1f9024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f902c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f902cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9030: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f9030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f9034: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F903Cu;
    // 0x1f903c: 0x0  nop
    ctx->pc = 0x1f903cu;
    // NOP
    ctx->pc = 0x1f9040u;
}
