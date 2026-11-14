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

// Function: sub_001F8BF0
// Address: 0x1f8bf0 - 0x1f8d60
void sub_001F8BF0_0x1f8bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8BF0_0x1f8bf0");
#endif

    switch (ctx->pc) {
        case 0x1f8c10u: goto label_1f8c10;
        case 0x1f8c28u: goto label_1f8c28;
        case 0x1f8c34u: goto label_1f8c34;
        case 0x1f8c4cu: goto label_1f8c4c;
        case 0x1f8c58u: goto label_1f8c58;
        case 0x1f8c70u: goto label_1f8c70;
        case 0x1f8c7cu: goto label_1f8c7c;
        case 0x1f8c94u: goto label_1f8c94;
        case 0x1f8ca0u: goto label_1f8ca0;
        case 0x1f8cb8u: goto label_1f8cb8;
        case 0x1f8cc4u: goto label_1f8cc4;
        case 0x1f8cdcu: goto label_1f8cdc;
        case 0x1f8ce8u: goto label_1f8ce8;
        case 0x1f8cf4u: goto label_1f8cf4;
        case 0x1f8d0cu: goto label_1f8d0c;
        case 0x1f8d20u: goto label_1f8d20;
        default: break;
    }

    ctx->pc = 0x1f8bf0u;

    // 0x1f8bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f8bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8c00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f8c04: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c08: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8C08u;
    SET_GPR_U32(ctx, 31, 0x1F8C10u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8C08u, 0x1F8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C10u;
label_1f8c10:
    // 0x1f8c10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c14: 0x8c650148  lw          $a1, 0x148($v1)
    ctx->pc = 0x1f8c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1f8c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c20: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8C20u;
    SET_GPR_U32(ctx, 31, 0x1F8C28u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8C20u, 0x1F8C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C28u;
label_1f8c28:
    // 0x1f8c28: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c2c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F8C34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8C2Cu, 0x1F8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C34u;
label_1f8c34:
    // 0x1f8c34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c38: 0x8c650158  lw          $a1, 0x158($v1)
    ctx->pc = 0x1f8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x1f8c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c44: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8C44u;
    SET_GPR_U32(ctx, 31, 0x1F8C4Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8C44u, 0x1F8C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C4Cu;
label_1f8c4c:
    // 0x1f8c4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c50: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8C50u;
    SET_GPR_U32(ctx, 31, 0x1F8C58u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8C50u, 0x1F8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C58u;
label_1f8c58:
    // 0x1f8c58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c5c: 0x8c650168  lw          $a1, 0x168($v1)
    ctx->pc = 0x1f8c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x1f8c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c68: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8C68u;
    SET_GPR_U32(ctx, 31, 0x1F8C70u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8C68u, 0x1F8C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C70u;
label_1f8c70:
    // 0x1f8c70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c74: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8C74u;
    SET_GPR_U32(ctx, 31, 0x1F8C7Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8C74u, 0x1F8C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C7Cu;
label_1f8c7c:
    // 0x1f8c7c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c80: 0x8c650178  lw          $a1, 0x178($v1)
    ctx->pc = 0x1f8c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x1f8c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c8c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8C8Cu;
    SET_GPR_U32(ctx, 31, 0x1F8C94u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8C8Cu, 0x1F8C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C94u;
label_1f8c94:
    // 0x1f8c94: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c98: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8C98u;
    SET_GPR_U32(ctx, 31, 0x1F8CA0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8C98u, 0x1F8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CA0u;
label_1f8ca0:
    // 0x1f8ca0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8ca4: 0x8c65018c  lw          $a1, 0x18C($v1)
    ctx->pc = 0x1f8ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x1f8ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cb0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8CB0u;
    SET_GPR_U32(ctx, 31, 0x1F8CB8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8CB0u, 0x1F8CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CB8u;
label_1f8cb8:
    // 0x1f8cb8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8cbc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8CBCu;
    SET_GPR_U32(ctx, 31, 0x1F8CC4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8CBCu, 0x1F8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CC4u;
label_1f8cc4:
    // 0x1f8cc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8cc8: 0x8c65019c  lw          $a1, 0x19C($v1)
    ctx->pc = 0x1f8cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
    // 0x1f8ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cd4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8CD4u;
    SET_GPR_U32(ctx, 31, 0x1F8CDCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8CD4u, 0x1F8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CDCu;
label_1f8cdc:
    // 0x1f8cdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ce0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F8CE0u;
    {
        const bool branch_taken_0x1f8ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ce0) {
            ctx->pc = 0x1F8D24u;
            goto label_1f8d24;
        }
    }
    ctx->pc = 0x1F8CE8u;
label_1f8ce8:
    // 0x1f8ce8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8cec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8CECu;
    SET_GPR_U32(ctx, 31, 0x1F8CF4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8CECu, 0x1F8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CF4u;
label_1f8cf4:
    // 0x1f8cf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f8cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8cfc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1f8cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1f8d00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d04: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F8D04u;
    SET_GPR_U32(ctx, 31, 0x1F8D0Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F8D04u, 0x1F8D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D0Cu;
label_1f8d0c:
    // 0x1f8d0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f8d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d18: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8D18u;
    SET_GPR_U32(ctx, 31, 0x1F8D20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8D18u, 0x1F8D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D20u;
label_1f8d20:
    // 0x1f8d20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f8d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f8d24:
    // 0x1f8d24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8d28: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1f8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1f8d2c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1f8d2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f8d30: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F8D30u;
    {
        const bool branch_taken_0x1f8d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8d30) {
            ctx->pc = 0x1F8CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8ce8;
        }
    }
    ctx->pc = 0x1F8D38u;
    // 0x1f8d38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8d3c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8d40: 0xac640230  sw          $a0, 0x230($v1)
    ctx->pc = 0x1f8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 4));
    // 0x1f8d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8d50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f8d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f8d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8D5Cu;
    // 0x1f8d5c: 0x0  nop
    ctx->pc = 0x1f8d5cu;
    // NOP
    ctx->pc = 0x1f8d60u;
}
