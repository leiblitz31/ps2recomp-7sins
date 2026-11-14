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

// Function: sub_00128B00
// Address: 0x128b00 - 0x129060
void sub_00128B00_0x128b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128B00_0x128b00");
#endif

    switch (ctx->pc) {
        case 0x128b48u: goto label_128b48;
        case 0x128b84u: goto label_128b84;
        case 0x128bbcu: goto label_128bbc;
        case 0x128bfcu: goto label_128bfc;
        case 0x128c08u: goto label_128c08;
        case 0x128c18u: goto label_128c18;
        case 0x128c2cu: goto label_128c2c;
        case 0x128c58u: goto label_128c58;
        case 0x128c7cu: goto label_128c7c;
        case 0x128d18u: goto label_128d18;
        case 0x128d24u: goto label_128d24;
        case 0x128d30u: goto label_128d30;
        case 0x128d78u: goto label_128d78;
        case 0x128db0u: goto label_128db0;
        case 0x128dd4u: goto label_128dd4;
        case 0x128e40u: goto label_128e40;
        case 0x128e64u: goto label_128e64;
        case 0x128ed4u: goto label_128ed4;
        case 0x128ee0u: goto label_128ee0;
        case 0x128ef0u: goto label_128ef0;
        case 0x128f04u: goto label_128f04;
        case 0x128f68u: goto label_128f68;
        case 0x128fc8u: goto label_128fc8;
        default: break;
    }

    ctx->pc = 0x128b00u;

    // 0x128b00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x128b04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x128b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x128b08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x128b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x128b0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x128b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x128b10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x128b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x128b14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x128b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x128b18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x128b1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x128b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128b2c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x128b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x128b30: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x128b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x128b34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x128b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b3c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x128b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x128b40: 0xc042330  jal         func_108CC0
    ctx->pc = 0x128B40u;
    SET_GPR_U32(ctx, 31, 0x128B48u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x128B40u, 0x128B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B48u;
label_128b48:
    // 0x128b48: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x128b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x128b4c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x128b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x128b50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128B50u;
    {
        const bool branch_taken_0x128b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b50) {
            ctx->pc = 0x128B68u;
            goto label_128b68;
        }
    }
    ctx->pc = 0x128B58u;
    // 0x128b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b5c: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x128b5cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x128B60u;
    {
        const bool branch_taken_0x128b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b60) {
            ctx->pc = 0x128B6Cu;
            goto label_128b6c;
        }
    }
    ctx->pc = 0x128B68u;
label_128b68:
    // 0x128b68: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x128b68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128b6c:
    // 0x128b6c: 0x33d500ff  andi        $s5, $fp, 0xFF
    ctx->pc = 0x128b6cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x128b70: 0x12a0012b  beqz        $s5, . + 4 + (0x12B << 2)
    ctx->pc = 0x128B70u;
    {
        const bool branch_taken_0x128b70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b70) {
            ctx->pc = 0x129020u;
            goto label_129020;
        }
    }
    ctx->pc = 0x128B78u;
    // 0x128b78: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x128b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x128b7c: 0xc04939c  jal         func_124E70
    ctx->pc = 0x128B7Cu;
    SET_GPR_U32(ctx, 31, 0x128B84u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x128B7Cu, 0x128B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B84u;
label_128b84:
    // 0x128b84: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x128b84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b88: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x128B88u;
    {
        const bool branch_taken_0x128b88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b88) {
            ctx->pc = 0x128BA0u;
            goto label_128ba0;
        }
    }
    ctx->pc = 0x128B90u;
    // 0x128b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b94: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x128b94u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x128B98u;
    {
        const bool branch_taken_0x128b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b98) {
            ctx->pc = 0x128BA4u;
            goto label_128ba4;
        }
    }
    ctx->pc = 0x128BA0u;
label_128ba0:
    // 0x128ba0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x128ba0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128ba4:
    // 0x128ba4: 0x32f500ff  andi        $s5, $s7, 0xFF
    ctx->pc = 0x128ba4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x128ba8: 0x12a0011d  beqz        $s5, . + 4 + (0x11D << 2)
    ctx->pc = 0x128BA8u;
    {
        const bool branch_taken_0x128ba8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ba8) {
            ctx->pc = 0x129020u;
            goto label_129020;
        }
    }
    ctx->pc = 0x128BB0u;
    // 0x128bb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x128bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bb4: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x128BB4u;
    {
        const bool branch_taken_0x128bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128bb4) {
            ctx->pc = 0x129010u;
            goto label_129010;
        }
    }
    ctx->pc = 0x128BBCu;
label_128bbc:
    // 0x128bbc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x128bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128bc0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x128bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128bc8: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x128bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128bcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x128bccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bd0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x128bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128bd4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x128bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128bdc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x128bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128be0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x128BE0u;
    {
        const bool branch_taken_0x128be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128be0) {
            ctx->pc = 0x128C48u;
            goto label_128c48;
        }
    }
    ctx->pc = 0x128BE8u;
    // 0x128be8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128bec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128bf0: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x128bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
    // 0x128bf4: 0xc118058  jal         func_460160
    ctx->pc = 0x128BF4u;
    SET_GPR_U32(ctx, 31, 0x128BFCu);
    ctx->pc = 0x460160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460160u, 0x128BF4u, 0x128BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BFCu;
label_128bfc:
    // 0x128bfc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x128bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128c00: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x128C00u;
    SET_GPR_U32(ctx, 31, 0x128C08u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x128C00u, 0x128C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C08u;
label_128c08:
    // 0x128c08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c10: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128C10u;
    SET_GPR_U32(ctx, 31, 0x128C18u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128C10u, 0x128C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C18u;
label_128c18:
    // 0x128c18: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x128c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x128c1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x128c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128c20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128c24: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128C24u;
    SET_GPR_U32(ctx, 31, 0x128C2Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128C24u, 0x128C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C2Cu;
label_128c2c:
    // 0x128c2c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x128c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x128c30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128C30u;
    {
        const bool branch_taken_0x128c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c30) {
            ctx->pc = 0x128C48u;
            goto label_128c48;
        }
    }
    ctx->pc = 0x128C38u;
    // 0x128c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128c3c: 0xa383ba28  sb          $v1, -0x45D8($gp)
    ctx->pc = 0x128c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949416), (uint8_t)GPR_U32(ctx, 3));
    // 0x128c40: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x128C40u;
    {
        const bool branch_taken_0x128c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c40) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128C48u;
label_128c48:
    // 0x128c48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c4c: 0x27858b80  addiu       $a1, $gp, -0x7480
    ctx->pc = 0x128c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937472));
    // 0x128c50: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128C50u;
    SET_GPR_U32(ctx, 31, 0x128C58u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128C50u, 0x128C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C58u;
label_128c58:
    // 0x128c58: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x128C58u;
    {
        const bool branch_taken_0x128c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c58) {
            ctx->pc = 0x128DA0u;
            goto label_128da0;
        }
    }
    ctx->pc = 0x128C60u;
    // 0x128c60: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x128c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128c64: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x128c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128c6c: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128c70: 0x27848b80  addiu       $a0, $gp, -0x7480
    ctx->pc = 0x128c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937472));
    // 0x128c74: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x128C74u;
    SET_GPR_U32(ctx, 31, 0x128C7Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x128C74u, 0x128C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C7Cu;
label_128c7c:
    // 0x128c7c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x128c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x128c80: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x128c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128c84: 0xa3a200df  sb          $v0, 0xDF($sp)
    ctx->pc = 0x128c84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 2));
    // 0x128c88: 0x83a200df  lb          $v0, 0xDF($sp)
    ctx->pc = 0x128c88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x128c8c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x128c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x128c90: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x128c90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x128c94: 0x2451ffd0  addiu       $s1, $v0, -0x30
    ctx->pc = 0x128c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x128c98: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x128c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128c9c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x128c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128ca4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128ca8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x128cac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x128cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x128cb0: 0x2442b430  addiu       $v0, $v0, -0x4BD0
    ctx->pc = 0x128cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947888));
    // 0x128cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128cb8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x128cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x128cbc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x128cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128cc0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x128cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128cc8: 0x24520008  addiu       $s2, $v0, 0x8
    ctx->pc = 0x128cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x128ccc: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x128cccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x128cd0: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x128cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x128cd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x128cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x128cd8: 0x2442f830  addiu       $v0, $v0, -0x7D0
    ctx->pc = 0x128cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965296));
    // 0x128cdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x128cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x128ce0: 0xa3a200c7  sb          $v0, 0xC7($sp)
    ctx->pc = 0x128ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 199), (uint8_t)GPR_U32(ctx, 2));
    // 0x128ce4: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x128ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x128ce8: 0xa3a200c6  sb          $v0, 0xC6($sp)
    ctx->pc = 0x128ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 198), (uint8_t)GPR_U32(ctx, 2));
    // 0x128cec: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x128cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x128cf0: 0xa3a200c5  sb          $v0, 0xC5($sp)
    ctx->pc = 0x128cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 197), (uint8_t)GPR_U32(ctx, 2));
    // 0x128cf4: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x128cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x128cf8: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x128cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
    // 0x128cfc: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x128cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x128d00: 0xa3a200c2  sb          $v0, 0xC2($sp)
    ctx->pc = 0x128d00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 194), (uint8_t)GPR_U32(ctx, 2));
    // 0x128d04: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x128d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x128d08: 0xa3a200c1  sb          $v0, 0xC1($sp)
    ctx->pc = 0x128d08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 193), (uint8_t)GPR_U32(ctx, 2));
    // 0x128d0c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x128d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128d10: 0xc04a5c0  jal         func_129700
    ctx->pc = 0x128D10u;
    SET_GPR_U32(ctx, 31, 0x128D18u);
    ctx->pc = 0x129700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129700u, 0x128D10u, 0x128D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D18u;
label_128d18:
    // 0x128d18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x128d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128d1c: 0xc0c43e2  jal         func_310F88
    ctx->pc = 0x128D1Cu;
    SET_GPR_U32(ctx, 31, 0x128D24u);
    ctx->pc = 0x310F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310F88u, 0x128D1Cu, 0x128D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D24u;
label_128d24:
    // 0x128d24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x128d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128d28: 0xc04a51c  jal         func_129470
    ctx->pc = 0x128D28u;
    SET_GPR_U32(ctx, 31, 0x128D30u);
    ctx->pc = 0x129470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129470u, 0x128D28u, 0x128D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D30u;
label_128d30:
    // 0x128d30: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x128d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x128d34: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x128d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x128d38: 0x93a300c5  lbu         $v1, 0xC5($sp)
    ctx->pc = 0x128d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 197)));
    // 0x128d3c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x128d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128d40: 0x93a300c6  lbu         $v1, 0xC6($sp)
    ctx->pc = 0x128d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 198)));
    // 0x128d44: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x128d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128d48: 0x93a300c7  lbu         $v1, 0xC7($sp)
    ctx->pc = 0x128d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 199)));
    // 0x128d4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x128d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128d50: 0x246707d0  addiu       $a3, $v1, 0x7D0
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x128d54: 0x93a300c3  lbu         $v1, 0xC3($sp)
    ctx->pc = 0x128d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x128d58: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x128d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128d5c: 0x93a300c2  lbu         $v1, 0xC2($sp)
    ctx->pc = 0x128d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 194)));
    // 0x128d60: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x128d60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128d64: 0x93a300c1  lbu         $v1, 0xC1($sp)
    ctx->pc = 0x128d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 193)));
    // 0x128d68: 0x306a00ff  andi        $t2, $v1, 0xFF
    ctx->pc = 0x128d68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128d6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x128d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128d70: 0xc08cfac  jal         func_233EB0
    ctx->pc = 0x128D70u;
    SET_GPR_U32(ctx, 31, 0x128D78u);
    ctx->pc = 0x233EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EB0u, 0x128D70u, 0x128D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D78u;
label_128d78:
    // 0x128d78: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x128d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x128d7c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128d80: 0x2463b7e0  addiu       $v1, $v1, -0x4820
    ctx->pc = 0x128d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948832));
    // 0x128d84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128d88: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x128d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x128d8c: 0x8f83ba24  lw          $v1, -0x45DC($gp)
    ctx->pc = 0x128d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949412)));
    // 0x128d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x128d94: 0xaf83ba24  sw          $v1, -0x45DC($gp)
    ctx->pc = 0x128d94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949412), GPR_U32(ctx, 3));
    // 0x128d98: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x128D98u;
    {
        const bool branch_taken_0x128d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d98) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128DA0u;
label_128da0:
    // 0x128da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128da4: 0x27858b88  addiu       $a1, $gp, -0x7478
    ctx->pc = 0x128da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937480));
    // 0x128da8: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128DA8u;
    SET_GPR_U32(ctx, 31, 0x128DB0u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128DA8u, 0x128DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DB0u;
label_128db0:
    // 0x128db0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x128DB0u;
    {
        const bool branch_taken_0x128db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128db0) {
            ctx->pc = 0x128E30u;
            goto label_128e30;
        }
    }
    ctx->pc = 0x128DB8u;
    // 0x128db8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x128db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128dbc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x128dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128dc4: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128dc8: 0x27848b88  addiu       $a0, $gp, -0x7478
    ctx->pc = 0x128dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937480));
    // 0x128dcc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x128DCCu;
    SET_GPR_U32(ctx, 31, 0x128DD4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x128DCCu, 0x128DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DD4u;
label_128dd4:
    // 0x128dd4: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x128dd8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x128dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128ddc: 0xa3a300de  sb          $v1, 0xDE($sp)
    ctx->pc = 0x128ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 3));
    // 0x128de0: 0x83a300de  lb          $v1, 0xDE($sp)
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x128de4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x128de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x128de8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x128de8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x128dec: 0x2471ffd0  addiu       $s1, $v1, -0x30
    ctx->pc = 0x128decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x128df0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x128df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128df4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x128df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128dfc: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x128dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128e00: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x128e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x128e04: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128e08: 0x2463b430  addiu       $v1, $v1, -0x4BD0
    ctx->pc = 0x128e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947888));
    // 0x128e0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128e10: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x128e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x128e14: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x128e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x128e18: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128e1c: 0x2463b7f0  addiu       $v1, $v1, -0x4810
    ctx->pc = 0x128e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948848));
    // 0x128e20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128e24: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x128e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x128e28: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x128E28u;
    {
        const bool branch_taken_0x128e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e28) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128E30u;
label_128e30:
    // 0x128e30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e34: 0x27858b90  addiu       $a1, $gp, -0x7470
    ctx->pc = 0x128e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937488));
    // 0x128e38: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128E38u;
    SET_GPR_U32(ctx, 31, 0x128E40u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128E38u, 0x128E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E40u;
label_128e40:
    // 0x128e40: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x128E40u;
    {
        const bool branch_taken_0x128e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e40) {
            ctx->pc = 0x128EC0u;
            goto label_128ec0;
        }
    }
    ctx->pc = 0x128E48u;
    // 0x128e48: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x128e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128e4c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x128e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x128e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128e54: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x128e58: 0x27848b90  addiu       $a0, $gp, -0x7470
    ctx->pc = 0x128e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937488));
    // 0x128e5c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x128E5Cu;
    SET_GPR_U32(ctx, 31, 0x128E64u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x128E5Cu, 0x128E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E64u;
label_128e64:
    // 0x128e64: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x128e68: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x128e68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128e6c: 0xa3a300dd  sb          $v1, 0xDD($sp)
    ctx->pc = 0x128e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 3));
    // 0x128e70: 0x83a300dd  lb          $v1, 0xDD($sp)
    ctx->pc = 0x128e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 221)));
    // 0x128e74: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x128e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x128e78: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x128e78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x128e7c: 0x2471ffd0  addiu       $s1, $v1, -0x30
    ctx->pc = 0x128e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x128e80: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x128e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128e84: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x128e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128e88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128e8c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x128e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128e90: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x128e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x128e94: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128e98: 0x2463b430  addiu       $v1, $v1, -0x4BD0
    ctx->pc = 0x128e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947888));
    // 0x128e9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128ea0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x128ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x128ea4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x128ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x128ea8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128eac: 0x2463b800  addiu       $v1, $v1, -0x4800
    ctx->pc = 0x128eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948864));
    // 0x128eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128eb4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x128eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x128eb8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x128EB8u;
    {
        const bool branch_taken_0x128eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128eb8) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128EC0u;
label_128ec0:
    // 0x128ec0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128ec4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128ec8: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x128ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
    // 0x128ecc: 0xc118058  jal         func_460160
    ctx->pc = 0x128ECCu;
    SET_GPR_U32(ctx, 31, 0x128ED4u);
    ctx->pc = 0x460160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460160u, 0x128ECCu, 0x128ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128ED4u;
label_128ed4:
    // 0x128ed4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128ed8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x128ED8u;
    SET_GPR_U32(ctx, 31, 0x128EE0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x128ED8u, 0x128EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EE0u;
label_128ee0:
    // 0x128ee0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ee8: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128EE8u;
    SET_GPR_U32(ctx, 31, 0x128EF0u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128EE8u, 0x128EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EF0u;
label_128ef0:
    // 0x128ef0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x128ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x128ef4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128ef8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128efc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x128EFCu;
    SET_GPR_U32(ctx, 31, 0x128F04u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x128EFCu, 0x128F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F04u;
label_128f04:
    // 0x128f04: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x128f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x128f08: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x128F08u;
    {
        const bool branch_taken_0x128f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f08) {
            ctx->pc = 0x128F54u;
            goto label_128f54;
        }
    }
    ctx->pc = 0x128F10u;
    // 0x128f10: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x128f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128f14: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x128f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128f1c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x128f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128f20: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128f24: 0xac64b480  sw          $a0, -0x4B80($v1)
    ctx->pc = 0x128f24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B480u, _value); } while (0);
    // 0x128f28: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128f2c: 0x8c64b480  lw          $a0, -0x4B80($v1)
    ctx->pc = 0x128f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60B480u));
    // 0x128f30: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x128f34: 0x8c632220  lw          $v1, 0x2220($v1)
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4E2220u));
    // 0x128f38: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x128F38u;
    {
        const bool branch_taken_0x128f38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x128f38) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128F40u;
    // 0x128f40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128f44: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128f48: 0xa064b484  sb          $a0, -0x4B7C($v1)
    ctx->pc = 0x128f48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B484u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B484u, _value); } while (0);
    // 0x128f4c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x128F4Cu;
    {
        const bool branch_taken_0x128f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f4c) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128F54u;
label_128f54:
    // 0x128f54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128f5c: 0x24a52468  addiu       $a1, $a1, 0x2468
    ctx->pc = 0x128f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9320));
    // 0x128f60: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128F60u;
    SET_GPR_U32(ctx, 31, 0x128F68u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128F60u, 0x128F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F68u;
label_128f68:
    // 0x128f68: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x128F68u;
    {
        const bool branch_taken_0x128f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f68) {
            ctx->pc = 0x128FB4u;
            goto label_128fb4;
        }
    }
    ctx->pc = 0x128F70u;
    // 0x128f70: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x128f70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128f74: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x128f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128f78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128f7c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x128f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128f80: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128f84: 0xac64b470  sw          $a0, -0x4B90($v1)
    ctx->pc = 0x128f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B470u, _value); } while (0);
    // 0x128f88: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128f8c: 0x8c64b470  lw          $a0, -0x4B90($v1)
    ctx->pc = 0x128f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60B470u));
    // 0x128f90: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x128f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x128f94: 0x8c63221c  lw          $v1, 0x221C($v1)
    ctx->pc = 0x128f94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4E221Cu));
    // 0x128f98: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x128F98u;
    {
        const bool branch_taken_0x128f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x128f98) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128FA0u;
    // 0x128fa0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128fa4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128fa8: 0xa064b474  sb          $a0, -0x4B8C($v1)
    ctx->pc = 0x128fa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B474u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B474u, _value); } while (0);
    // 0x128fac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x128FACu;
    {
        const bool branch_taken_0x128fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128fac) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128FB4u;
label_128fb4:
    // 0x128fb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fb8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x128fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x128fbc: 0x24a52458  addiu       $a1, $a1, 0x2458
    ctx->pc = 0x128fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9304));
    // 0x128fc0: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128FC0u;
    SET_GPR_U32(ctx, 31, 0x128FC8u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128FC0u, 0x128FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FC8u;
label_128fc8:
    // 0x128fc8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x128FC8u;
    {
        const bool branch_taken_0x128fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128fc8) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x128FD0u;
    // 0x128fd0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x128fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x128fd4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x128fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x128fd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128fdc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x128fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128fe0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128fe4: 0xac64b478  sw          $a0, -0x4B88($v1)
    ctx->pc = 0x128fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B478u, _value); } while (0);
    // 0x128fe8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x128fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x128fec: 0x8c64b478  lw          $a0, -0x4B88($v1)
    ctx->pc = 0x128fecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60B478u));
    // 0x128ff0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x128ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x128ff4: 0x8c632218  lw          $v1, 0x2218($v1)
    ctx->pc = 0x128ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4E2218u));
    // 0x128ff8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128FF8u;
    {
        const bool branch_taken_0x128ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x128ff8) {
            ctx->pc = 0x12900Cu;
            goto label_12900c;
        }
    }
    ctx->pc = 0x129000u;
    // 0x129000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129004: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x129004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x129008: 0xa064b47c  sb          $a0, -0x4B84($v1)
    ctx->pc = 0x129008u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B47Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B47Cu, _value); } while (0);
label_12900c:
    // 0x12900c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12900cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_129010:
    // 0x129010: 0x8f83ba14  lw          $v1, -0x45EC($gp)
    ctx->pc = 0x129010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949396)));
    // 0x129014: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x129014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x129018: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
    ctx->pc = 0x129018u;
    {
        const bool branch_taken_0x129018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129018) {
            ctx->pc = 0x128BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128bbc;
        }
    }
    ctx->pc = 0x129020u;
label_129020:
    // 0x129020: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x129020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x129024: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x129024u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129028: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x129028u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12902c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12902cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129030: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x129030u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129034: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x129034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129038: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x129038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12903c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12903cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129048: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x129048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x12904c: 0x3e00008  jr          $ra
    ctx->pc = 0x12904Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12904Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129054u;
    // 0x129054: 0x0  nop
    ctx->pc = 0x129054u;
    // NOP
    // 0x129058: 0x0  nop
    ctx->pc = 0x129058u;
    // NOP
    // 0x12905c: 0x0  nop
    ctx->pc = 0x12905cu;
    // NOP
    ctx->pc = 0x129060u;
}
