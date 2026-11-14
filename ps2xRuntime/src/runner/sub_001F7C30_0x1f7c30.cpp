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

// Function: sub_001F7C30
// Address: 0x1f7c30 - 0x1f7df0
void sub_001F7C30_0x1f7c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7C30_0x1f7c30");
#endif

    switch (ctx->pc) {
        case 0x1f7c5cu: goto label_1f7c5c;
        case 0x1f7c74u: goto label_1f7c74;
        case 0x1f7c80u: goto label_1f7c80;
        case 0x1f7ca0u: goto label_1f7ca0;
        case 0x1f7cacu: goto label_1f7cac;
        case 0x1f7cc4u: goto label_1f7cc4;
        case 0x1f7cd0u: goto label_1f7cd0;
        case 0x1f7ce8u: goto label_1f7ce8;
        case 0x1f7d24u: goto label_1f7d24;
        case 0x1f7d40u: goto label_1f7d40;
        case 0x1f7d5cu: goto label_1f7d5c;
        case 0x1f7d74u: goto label_1f7d74;
        case 0x1f7d8cu: goto label_1f7d8c;
        default: break;
    }

    ctx->pc = 0x1f7c30u;

    // 0x1f7c30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f7c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f7c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f7c3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f7c40: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1f7c40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f7c44: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x1f7c44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f7c48: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x1f7c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f7c4c: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x1f7c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f7c50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7c54: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7C54u;
    SET_GPR_U32(ctx, 31, 0x1F7C5Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7C54u, 0x1F7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C5Cu;
label_1f7c5c:
    // 0x1f7c5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7c60: 0x8c650148  lw          $a1, 0x148($v1)
    ctx->pc = 0x1f7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1f7c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c6c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1F7C74u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7C6Cu, 0x1F7C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C74u;
label_1f7c74:
    // 0x1f7c74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7c78: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7C78u;
    SET_GPR_U32(ctx, 31, 0x1F7C80u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7C78u, 0x1F7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C80u;
label_1f7c80:
    // 0x1f7c80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7c84: 0x8c650158  lw          $a1, 0x158($v1)
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x1f7c88: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1f7c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7c8c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f7c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7c90: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1f7c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f7c94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c98: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7C98u;
    SET_GPR_U32(ctx, 31, 0x1F7CA0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7C98u, 0x1F7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CA0u;
label_1f7ca0:
    // 0x1f7ca0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7ca4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7CA4u;
    SET_GPR_U32(ctx, 31, 0x1F7CACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7CA4u, 0x1F7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CACu;
label_1f7cac:
    // 0x1f7cac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7cb0: 0x8c650168  lw          $a1, 0x168($v1)
    ctx->pc = 0x1f7cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x1f7cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cb8: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7cb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7cbc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7CBCu;
    SET_GPR_U32(ctx, 31, 0x1F7CC4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7CBCu, 0x1F7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CC4u;
label_1f7cc4:
    // 0x1f7cc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7cc8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7CC8u;
    SET_GPR_U32(ctx, 31, 0x1F7CD0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7CC8u, 0x1F7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CD0u;
label_1f7cd0:
    // 0x1f7cd0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7cd4: 0x8c65019c  lw          $a1, 0x19C($v1)
    ctx->pc = 0x1f7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
    // 0x1f7cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cdc: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7cdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7ce0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7CE0u;
    SET_GPR_U32(ctx, 31, 0x1F7CE8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7CE0u, 0x1F7CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CE8u;
label_1f7ce8:
    // 0x1f7ce8: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x1f7ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7cec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7CECu;
    {
        const bool branch_taken_0x1f7cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cec) {
            ctx->pc = 0x1F7D04u;
            goto label_1f7d04;
        }
    }
    ctx->pc = 0x1F7CF4u;
    // 0x1f7cf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7cf8: 0x8c500168  lw          $s0, 0x168($v0)
    ctx->pc = 0x1f7cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x1f7cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7CFCu;
    {
        const bool branch_taken_0x1f7cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cfc) {
            ctx->pc = 0x1F7D0Cu;
            goto label_1f7d0c;
        }
    }
    ctx->pc = 0x1F7D04u;
label_1f7d04:
    // 0x1f7d04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d08: 0x8c500158  lw          $s0, 0x158($v0)
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_1f7d0c:
    // 0x1f7d0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d14: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7d14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7d1c: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D24u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7D1Cu, 0x1F7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D24u;
label_1f7d24:
    // 0x1f7d24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d2c: 0x8c450178  lw          $a1, 0x178($v0)
    ctx->pc = 0x1f7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1f7d30: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7d30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7d34: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f7d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7d38: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7D38u;
    SET_GPR_U32(ctx, 31, 0x1F7D40u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7D38u, 0x1F7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D40u;
label_1f7d40:
    // 0x1f7d40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d48: 0x8c45018c  lw          $a1, 0x18C($v0)
    ctx->pc = 0x1f7d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x1f7d4c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7d4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7d50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f7d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7d54: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7D54u;
    SET_GPR_U32(ctx, 31, 0x1F7D5Cu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7D54u, 0x1F7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D5Cu;
label_1f7d5c:
    // 0x1f7d5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d64: 0x246401fc  addiu       $a0, $v1, 0x1FC
    ctx->pc = 0x1f7d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 508));
    // 0x1f7d68: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x1f7d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x1f7d6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F7D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F7D6Cu, 0x1F7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D74u;
label_1f7d74:
    // 0x1f7d74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f7d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7d7c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f7d7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7d80: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f7d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7d84: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F7D84u;
    SET_GPR_U32(ctx, 31, 0x1F7D8Cu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F7D84u, 0x1F7D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D8Cu;
label_1f7d8c:
    // 0x1f7d8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7d90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d94: 0xa06400e0  sb          $a0, 0xE0($v1)
    ctx->pc = 0x1f7d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7d98: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d9c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f7d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7da0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7da4: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x1f7da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7da8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f7dac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7db0: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x1f7db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x1f7db4: 0x93a40040  lbu         $a0, 0x40($sp)
    ctx->pc = 0x1f7db4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7db8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7dbc: 0xa06400e8  sb          $a0, 0xE8($v1)
    ctx->pc = 0x1f7dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 232), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7dc0: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x1f7dc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7dc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7dc8: 0xa06400e9  sb          $a0, 0xE9($v1)
    ctx->pc = 0x1f7dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 233), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7dcc: 0x93a40060  lbu         $a0, 0x60($sp)
    ctx->pc = 0x1f7dccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7dd0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7dd4: 0xa06400ea  sb          $a0, 0xEA($v1)
    ctx->pc = 0x1f7dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 234), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7de0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f7de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7DECu;
    // 0x1f7dec: 0x0  nop
    ctx->pc = 0x1f7decu;
    // NOP
    ctx->pc = 0x1f7df0u;
}
