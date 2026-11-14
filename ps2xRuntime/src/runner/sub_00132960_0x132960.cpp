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

// Function: sub_00132960
// Address: 0x132960 - 0x132f90
void sub_00132960_0x132960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132960_0x132960");
#endif

    switch (ctx->pc) {
        case 0x132998u: goto label_132998;
        case 0x1329bcu: goto label_1329bc;
        case 0x1329e0u: goto label_1329e0;
        case 0x1329f0u: goto label_1329f0;
        case 0x132a1cu: goto label_132a1c;
        case 0x132a28u: goto label_132a28;
        case 0x132a40u: goto label_132a40;
        case 0x132a54u: goto label_132a54;
        case 0x132a70u: goto label_132a70;
        case 0x132a7cu: goto label_132a7c;
        case 0x132a8cu: goto label_132a8c;
        case 0x132ab8u: goto label_132ab8;
        case 0x132ac4u: goto label_132ac4;
        case 0x132adcu: goto label_132adc;
        case 0x132b14u: goto label_132b14;
        case 0x132b64u: goto label_132b64;
        case 0x132b78u: goto label_132b78;
        case 0x132b9cu: goto label_132b9c;
        case 0x132bbcu: goto label_132bbc;
        case 0x132bd4u: goto label_132bd4;
        case 0x132c00u: goto label_132c00;
        case 0x132c1cu: goto label_132c1c;
        case 0x132c30u: goto label_132c30;
        case 0x132c44u: goto label_132c44;
        case 0x132c54u: goto label_132c54;
        case 0x132c6cu: goto label_132c6c;
        case 0x132c7cu: goto label_132c7c;
        case 0x132c94u: goto label_132c94;
        case 0x132ca4u: goto label_132ca4;
        case 0x132cbcu: goto label_132cbc;
        case 0x132cccu: goto label_132ccc;
        case 0x132ce4u: goto label_132ce4;
        case 0x132cf4u: goto label_132cf4;
        case 0x132d0cu: goto label_132d0c;
        case 0x132d1cu: goto label_132d1c;
        case 0x132d34u: goto label_132d34;
        case 0x132d44u: goto label_132d44;
        case 0x132d5cu: goto label_132d5c;
        case 0x132d6cu: goto label_132d6c;
        case 0x132d84u: goto label_132d84;
        case 0x132d98u: goto label_132d98;
        case 0x132db0u: goto label_132db0;
        case 0x132dc8u: goto label_132dc8;
        case 0x132de4u: goto label_132de4;
        case 0x132e00u: goto label_132e00;
        case 0x132e1cu: goto label_132e1c;
        case 0x132e38u: goto label_132e38;
        case 0x132e54u: goto label_132e54;
        case 0x132e70u: goto label_132e70;
        case 0x132e98u: goto label_132e98;
        case 0x132eacu: goto label_132eac;
        case 0x132f4cu: goto label_132f4c;
        default: break;
    }

    ctx->pc = 0x132960u;

    // 0x132960: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x132960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x132964: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x132964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x132968: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x132968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13296c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x132970: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x132970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x132974: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x132974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x132978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x132978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13297c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x132980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132988: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x132988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x13298c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13298cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132990: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x132990u;
    {
        const bool branch_taken_0x132990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132990) {
            ctx->pc = 0x1329C0u;
            goto label_1329c0;
        }
    }
    ctx->pc = 0x132998u;
label_132998:
    // 0x132998: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x132998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13299c: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1329a0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1329a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1329a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1329a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1329a8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1329a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1329ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1329acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1329b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1329b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329b4: 0xc04cc58  jal         func_133160
    ctx->pc = 0x1329B4u;
    SET_GPR_U32(ctx, 31, 0x1329BCu);
    ctx->pc = 0x133160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133160u, 0x1329B4u, 0x1329BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329BCu;
label_1329bc:
    // 0x1329bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1329bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1329c0:
    // 0x1329c0: 0x2ea20014  sltiu       $v0, $s5, 0x14
    ctx->pc = 0x1329c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1329c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1329C4u;
    {
        const bool branch_taken_0x1329c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329c4) {
            ctx->pc = 0x132998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132998;
        }
    }
    ctx->pc = 0x1329CCu;
    // 0x1329cc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1329ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1329d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1329d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1329d4: 0x24a52530  addiu       $a1, $a1, 0x2530
    ctx->pc = 0x1329d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
    // 0x1329d8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1329D8u;
    SET_GPR_U32(ctx, 31, 0x1329E0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1329D8u, 0x1329E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329E0u;
label_1329e0:
    // 0x1329e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1329e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1329e4: 0x27858b9c  addiu       $a1, $gp, -0x7464
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937500));
    // 0x1329e8: 0xc0f0ab6  jal         func_3C2AD8
    ctx->pc = 0x1329E8u;
    SET_GPR_U32(ctx, 31, 0x1329F0u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x1329E8u, 0x1329F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329F0u;
label_1329f0:
    // 0x1329f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1329f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329f4: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1329F4u;
    {
        const bool branch_taken_0x1329f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329f4) {
            ctx->pc = 0x132A08u;
            goto label_132a08;
        }
    }
    ctx->pc = 0x1329FCu;
    // 0x1329fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1329fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a00: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x132A00u;
    {
        const bool branch_taken_0x132a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a00) {
            ctx->pc = 0x132F54u;
            goto label_132f54;
        }
    }
    ctx->pc = 0x132A08u;
label_132a08:
    // 0x132a08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x132a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132a14: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x132A14u;
    SET_GPR_U32(ctx, 31, 0x132A1Cu);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x132A14u, 0x132A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A1Cu;
label_132a1c:
    // 0x132a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a20: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x132A20u;
    SET_GPR_U32(ctx, 31, 0x132A28u);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x132A20u, 0x132A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A28u;
label_132a28:
    // 0x132a28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x132a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a38: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x132A38u;
    SET_GPR_U32(ctx, 31, 0x132A40u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x132A38u, 0x132A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A40u;
label_132a40:
    // 0x132a40: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x132a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x132a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x132a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a4c: 0xc04cc28  jal         func_1330A0
    ctx->pc = 0x132A4Cu;
    SET_GPR_U32(ctx, 31, 0x132A54u);
    ctx->pc = 0x1330A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1330A0u, 0x132A4Cu, 0x132A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A54u;
label_132a54:
    // 0x132a54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x132a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132a60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x132a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a64: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x132a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a68: 0xc0f0b08  jal         func_3C2C20
    ctx->pc = 0x132A68u;
    SET_GPR_U32(ctx, 31, 0x132A70u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x132A68u, 0x132A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A70u;
label_132a70:
    // 0x132a70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a74: 0xc0f0af2  jal         func_3C2BC8
    ctx->pc = 0x132A74u;
    SET_GPR_U32(ctx, 31, 0x132A7Cu);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x132A74u, 0x132A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A7Cu;
label_132a7c:
    // 0x132a7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x132a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a80: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x132a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a84: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x132A84u;
    {
        const bool branch_taken_0x132a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a84) {
            ctx->pc = 0x132F24u;
            goto label_132f24;
        }
    }
    ctx->pc = 0x132A8Cu;
label_132a8c:
    // 0x132a8c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x132a8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132a90: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x132a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x132a94: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x132a94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x132a98: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x132a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x132a9c: 0x14620121  bne         $v1, $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x132A9Cu;
    {
        const bool branch_taken_0x132a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132a9c) {
            ctx->pc = 0x132F24u;
            goto label_132f24;
        }
    }
    ctx->pc = 0x132AA4u;
    // 0x132aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132aa8: 0x27858ba0  addiu       $a1, $gp, -0x7460
    ctx->pc = 0x132aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x132aac: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x132ab0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132AB0u;
    SET_GPR_U32(ctx, 31, 0x132AB8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132AB0u, 0x132AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AB8u;
label_132ab8:
    // 0x132ab8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x132ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x132abc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x132ABCu;
    SET_GPR_U32(ctx, 31, 0x132AC4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x132ABCu, 0x132AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AC4u;
label_132ac4:
    // 0x132ac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x132ac8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x132ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x132acc: 0xa04000b0  sb          $zero, 0xB0($v0)
    ctx->pc = 0x132accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x132ad0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x132ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x132ad4: 0xc04cde0  jal         func_133780
    ctx->pc = 0x132AD4u;
    SET_GPR_U32(ctx, 31, 0x132ADCu);
    ctx->pc = 0x133780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133780u, 0x132AD4u, 0x132ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132ADCu;
label_132adc:
    // 0x132adc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x132adcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x132ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x132ae4: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132AE4u;
    {
        const bool branch_taken_0x132ae4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x132ae4) {
            ctx->pc = 0x132AF8u;
            goto label_132af8;
        }
    }
    ctx->pc = 0x132AECu;
    // 0x132aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132af0: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x132AF0u;
    {
        const bool branch_taken_0x132af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132af0) {
            ctx->pc = 0x132F54u;
            goto label_132f54;
        }
    }
    ctx->pc = 0x132AF8u;
label_132af8:
    // 0x132af8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x132af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x132afc: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x132afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x132b00: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x132b04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x132b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x132b08: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x132b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x132b0c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132b10: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x132b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_132b14:
    // 0x132b14: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x132b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x132b18: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x132b18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x132b1c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x132B1Cu;
    {
        const bool branch_taken_0x132b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b1c) {
            ctx->pc = 0x132B60u;
            goto label_132b60;
        }
    }
    ctx->pc = 0x132B24u;
    // 0x132b24: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x132b24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132b28: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x132b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x132b2c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x132b2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x132b30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x132b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x132b34: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132B34u;
    {
        const bool branch_taken_0x132b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132b34) {
            ctx->pc = 0x132B54u;
            goto label_132b54;
        }
    }
    ctx->pc = 0x132B3Cu;
    // 0x132b3c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x132b3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x132b40: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x132b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x132b44: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x132b44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x132b48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x132b4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132B4Cu;
    {
        const bool branch_taken_0x132b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132b4c) {
            ctx->pc = 0x132B60u;
            goto label_132b60;
        }
    }
    ctx->pc = 0x132B54u;
label_132b54:
    // 0x132b54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x132b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x132b58: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x132B58u;
    {
        const bool branch_taken_0x132b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b58) {
            ctx->pc = 0x132B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132b14;
        }
    }
    ctx->pc = 0x132B60u;
label_132b60:
    // 0x132b60: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x132b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_132b64:
    // 0x132b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b68: 0x27858ba8  addiu       $a1, $gp, -0x7458
    ctx->pc = 0x132b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937512));
    // 0x132b6c: 0x27a600fc  addiu       $a2, $sp, 0xFC
    ctx->pc = 0x132b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x132b70: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132B70u;
    SET_GPR_U32(ctx, 31, 0x132B78u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132B70u, 0x132B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B78u;
label_132b78:
    // 0x132b78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x132B78u;
    {
        const bool branch_taken_0x132b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b78) {
            ctx->pc = 0x132BBCu;
            goto label_132bbc;
        }
    }
    ctx->pc = 0x132B80u;
    // 0x132b80: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x132b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132b84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x132b88: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x132b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x132b8c: 0x8fb700fc  lw          $s7, 0xFC($sp)
    ctx->pc = 0x132b8cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b94: 0xc04cc18  jal         func_133060
    ctx->pc = 0x132B94u;
    SET_GPR_U32(ctx, 31, 0x132B9Cu);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x132B94u, 0x132B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B9Cu;
label_132b9c:
    // 0x132b9c: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x132b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132ba0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x132BA0u;
    {
        const bool branch_taken_0x132ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132ba0) {
            ctx->pc = 0x132BBCu;
            goto label_132bbc;
        }
    }
    ctx->pc = 0x132BA8u;
    // 0x132ba8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x132ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132bac: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x132bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x132bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bb4: 0xc04cc58  jal         func_133160
    ctx->pc = 0x132BB4u;
    SET_GPR_U32(ctx, 31, 0x132BBCu);
    ctx->pc = 0x133160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133160u, 0x132BB4u, 0x132BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BBCu;
label_132bbc:
    // 0x132bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bc0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132bc4: 0x24a52560  addiu       $a1, $a1, 0x2560
    ctx->pc = 0x132bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9568));
    // 0x132bc8: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x132bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x132bcc: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132BCCu;
    SET_GPR_U32(ctx, 31, 0x132BD4u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132BCCu, 0x132BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BD4u;
label_132bd4:
    // 0x132bd4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x132BD4u;
    {
        const bool branch_taken_0x132bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132bd4) {
            ctx->pc = 0x132C20u;
            goto label_132c20;
        }
    }
    ctx->pc = 0x132BDCu;
    // 0x132bdc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x132bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x132be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132be4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132BE4u;
    {
        const bool branch_taken_0x132be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132be4) {
            ctx->pc = 0x132C0Cu;
            goto label_132c0c;
        }
    }
    ctx->pc = 0x132BECu;
    // 0x132bec: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x132becu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bf4: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132bf8: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132BF8u;
    SET_GPR_U32(ctx, 31, 0x132C00u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132BF8u, 0x132C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C00u;
label_132c00:
    // 0x132c00: 0xa057002d  sb          $s7, 0x2D($v0)
    ctx->pc = 0x132c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 23));
    // 0x132c04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132C04u;
    {
        const bool branch_taken_0x132c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c04) {
            ctx->pc = 0x132C20u;
            goto label_132c20;
        }
    }
    ctx->pc = 0x132C0Cu;
label_132c0c:
    // 0x132c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c10: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132c14: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132C14u;
    SET_GPR_U32(ctx, 31, 0x132C1Cu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132C14u, 0x132C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C1Cu;
label_132c1c:
    // 0x132c1c: 0xa040002d  sb          $zero, 0x2D($v0)
    ctx->pc = 0x132c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
label_132c20:
    // 0x132c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c24: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132c28: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132C28u;
    SET_GPR_U32(ctx, 31, 0x132C30u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132C28u, 0x132C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C30u;
label_132c30:
    // 0x132c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c34: 0x27858bb0  addiu       $a1, $gp, -0x7450
    ctx->pc = 0x132c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937520));
    // 0x132c38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x132c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c3c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132C3Cu;
    SET_GPR_U32(ctx, 31, 0x132C44u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132C3Cu, 0x132C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C44u;
label_132c44:
    // 0x132c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c48: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132c4c: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132C4Cu;
    SET_GPR_U32(ctx, 31, 0x132C54u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132C4Cu, 0x132C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C54u;
label_132c54:
    // 0x132c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132c5c: 0x24a52578  addiu       $a1, $a1, 0x2578
    ctx->pc = 0x132c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
    // 0x132c60: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x132c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x132c64: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132C64u;
    SET_GPR_U32(ctx, 31, 0x132C6Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132C64u, 0x132C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C6Cu;
label_132c6c:
    // 0x132c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c70: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132c74: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132C74u;
    SET_GPR_U32(ctx, 31, 0x132C7Cu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132C74u, 0x132C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C7Cu;
label_132c7c:
    // 0x132c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132c84: 0x24a52588  addiu       $a1, $a1, 0x2588
    ctx->pc = 0x132c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9608));
    // 0x132c88: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x132c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x132c8c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132C8Cu;
    SET_GPR_U32(ctx, 31, 0x132C94u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132C8Cu, 0x132C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C94u;
label_132c94:
    // 0x132c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c98: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132c9c: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132C9Cu;
    SET_GPR_U32(ctx, 31, 0x132CA4u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132C9Cu, 0x132CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CA4u;
label_132ca4:
    // 0x132ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ca8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132cac: 0x24a52598  addiu       $a1, $a1, 0x2598
    ctx->pc = 0x132cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
    // 0x132cb0: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x132cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x132cb4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132CB4u;
    SET_GPR_U32(ctx, 31, 0x132CBCu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132CB4u, 0x132CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CBCu;
label_132cbc:
    // 0x132cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cc0: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132cc4: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132CC4u;
    SET_GPR_U32(ctx, 31, 0x132CCCu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132CC4u, 0x132CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CCCu;
label_132ccc:
    // 0x132ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cd0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132cd4: 0x24a525a8  addiu       $a1, $a1, 0x25A8
    ctx->pc = 0x132cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9640));
    // 0x132cd8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x132cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x132cdc: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132CDCu;
    SET_GPR_U32(ctx, 31, 0x132CE4u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132CDCu, 0x132CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CE4u;
label_132ce4:
    // 0x132ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ce8: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132cec: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132CECu;
    SET_GPR_U32(ctx, 31, 0x132CF4u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132CECu, 0x132CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CF4u;
label_132cf4:
    // 0x132cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cf8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132cfc: 0x24a525b8  addiu       $a1, $a1, 0x25B8
    ctx->pc = 0x132cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9656));
    // 0x132d00: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x132d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x132d04: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132D04u;
    SET_GPR_U32(ctx, 31, 0x132D0Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132D04u, 0x132D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D0Cu;
label_132d0c:
    // 0x132d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d10: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132d14: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132D14u;
    SET_GPR_U32(ctx, 31, 0x132D1Cu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132D14u, 0x132D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D1Cu;
label_132d1c:
    // 0x132d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132d24: 0x24a525c8  addiu       $a1, $a1, 0x25C8
    ctx->pc = 0x132d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9672));
    // 0x132d28: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x132d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x132d2c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132D2Cu;
    SET_GPR_U32(ctx, 31, 0x132D34u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132D2Cu, 0x132D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D34u;
label_132d34:
    // 0x132d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d38: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132d3c: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132D3Cu;
    SET_GPR_U32(ctx, 31, 0x132D44u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132D3Cu, 0x132D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D44u;
label_132d44:
    // 0x132d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d48: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132d4c: 0x24a525d8  addiu       $a1, $a1, 0x25D8
    ctx->pc = 0x132d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9688));
    // 0x132d50: 0x2446001c  addiu       $a2, $v0, 0x1C
    ctx->pc = 0x132d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x132d54: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132D54u;
    SET_GPR_U32(ctx, 31, 0x132D5Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132D54u, 0x132D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D5Cu;
label_132d5c:
    // 0x132d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d60: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132d64: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132D64u;
    SET_GPR_U32(ctx, 31, 0x132D6Cu);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132D64u, 0x132D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D6Cu;
label_132d6c:
    // 0x132d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d70: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x132d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x132d74: 0x24a525e8  addiu       $a1, $a1, 0x25E8
    ctx->pc = 0x132d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9704));
    // 0x132d78: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x132d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x132d7c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132D7Cu;
    SET_GPR_U32(ctx, 31, 0x132D84u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132D7Cu, 0x132D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D84u;
label_132d84:
    // 0x132d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d88: 0x27858bb8  addiu       $a1, $gp, -0x7448
    ctx->pc = 0x132d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937528));
    // 0x132d8c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x132d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132d90: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132D90u;
    SET_GPR_U32(ctx, 31, 0x132D98u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132D90u, 0x132D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D98u;
label_132d98:
    // 0x132d98: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x132D98u;
    {
        const bool branch_taken_0x132d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d98) {
            ctx->pc = 0x132E88u;
            goto label_132e88;
        }
    }
    ctx->pc = 0x132DA0u;
    // 0x132da0: 0x27848bc0  addiu       $a0, $gp, -0x7440
    ctx->pc = 0x132da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937536));
    // 0x132da4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x132da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132da8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x132DA8u;
    SET_GPR_U32(ctx, 31, 0x132DB0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x132DA8u, 0x132DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DB0u;
label_132db0:
    // 0x132db0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x132DB0u;
    {
        const bool branch_taken_0x132db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132db0) {
            ctx->pc = 0x132DD4u;
            goto label_132dd4;
        }
    }
    ctx->pc = 0x132DB8u;
    // 0x132db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dbc: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132dc0: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132DC0u;
    SET_GPR_U32(ctx, 31, 0x132DC8u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132DC0u, 0x132DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DC8u;
label_132dc8:
    // 0x132dc8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x132dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x132dcc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x132DCCu;
    {
        const bool branch_taken_0x132dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132dcc) {
            ctx->pc = 0x132E88u;
            goto label_132e88;
        }
    }
    ctx->pc = 0x132DD4u;
label_132dd4:
    // 0x132dd4: 0x27848bc8  addiu       $a0, $gp, -0x7438
    ctx->pc = 0x132dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937544));
    // 0x132dd8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x132dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132ddc: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x132DDCu;
    SET_GPR_U32(ctx, 31, 0x132DE4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x132DDCu, 0x132DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DE4u;
label_132de4:
    // 0x132de4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132DE4u;
    {
        const bool branch_taken_0x132de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132de4) {
            ctx->pc = 0x132E0Cu;
            goto label_132e0c;
        }
    }
    ctx->pc = 0x132DECu;
    // 0x132dec: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x132decu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132df4: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132df8: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132DF8u;
    SET_GPR_U32(ctx, 31, 0x132E00u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132DF8u, 0x132E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E00u;
label_132e00:
    // 0x132e00: 0xac570024  sw          $s7, 0x24($v0)
    ctx->pc = 0x132e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 23));
    // 0x132e04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x132E04u;
    {
        const bool branch_taken_0x132e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e04) {
            ctx->pc = 0x132E88u;
            goto label_132e88;
        }
    }
    ctx->pc = 0x132E0Cu;
label_132e0c:
    // 0x132e0c: 0x27848bd0  addiu       $a0, $gp, -0x7430
    ctx->pc = 0x132e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937552));
    // 0x132e10: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x132e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132e14: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x132E14u;
    SET_GPR_U32(ctx, 31, 0x132E1Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x132E14u, 0x132E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E1Cu;
label_132e1c:
    // 0x132e1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132E1Cu;
    {
        const bool branch_taken_0x132e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132e1c) {
            ctx->pc = 0x132E44u;
            goto label_132e44;
        }
    }
    ctx->pc = 0x132E24u;
    // 0x132e24: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x132e24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e2c: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132e30: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132E30u;
    SET_GPR_U32(ctx, 31, 0x132E38u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132E30u, 0x132E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E38u;
label_132e38:
    // 0x132e38: 0xac570024  sw          $s7, 0x24($v0)
    ctx->pc = 0x132e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 23));
    // 0x132e3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x132E3Cu;
    {
        const bool branch_taken_0x132e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e3c) {
            ctx->pc = 0x132E88u;
            goto label_132e88;
        }
    }
    ctx->pc = 0x132E44u;
label_132e44:
    // 0x132e44: 0x27848bd8  addiu       $a0, $gp, -0x7428
    ctx->pc = 0x132e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937560));
    // 0x132e48: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x132e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132e4c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x132E4Cu;
    SET_GPR_U32(ctx, 31, 0x132E54u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x132E4Cu, 0x132E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E54u;
label_132e54:
    // 0x132e54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132E54u;
    {
        const bool branch_taken_0x132e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132e54) {
            ctx->pc = 0x132E7Cu;
            goto label_132e7c;
        }
    }
    ctx->pc = 0x132E5Cu;
    // 0x132e5c: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x132e5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x132e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e64: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132e68: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132E68u;
    SET_GPR_U32(ctx, 31, 0x132E70u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132E68u, 0x132E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E70u;
label_132e70:
    // 0x132e70: 0xac570024  sw          $s7, 0x24($v0)
    ctx->pc = 0x132e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 23));
    // 0x132e74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132E74u;
    {
        const bool branch_taken_0x132e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e74) {
            ctx->pc = 0x132E88u;
            goto label_132e88;
        }
    }
    ctx->pc = 0x132E7Cu;
label_132e7c:
    // 0x132e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e80: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x132E80u;
    {
        const bool branch_taken_0x132e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e80) {
            ctx->pc = 0x132F54u;
            goto label_132f54;
        }
    }
    ctx->pc = 0x132E88u;
label_132e88:
    // 0x132e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e8c: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x132e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132e90: 0xc04cc00  jal         func_133000
    ctx->pc = 0x132E90u;
    SET_GPR_U32(ctx, 31, 0x132E98u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x132E90u, 0x132E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E98u;
label_132e98:
    // 0x132e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e9c: 0x27858be0  addiu       $a1, $gp, -0x7420
    ctx->pc = 0x132e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937568));
    // 0x132ea0: 0x24460028  addiu       $a2, $v0, 0x28
    ctx->pc = 0x132ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x132ea4: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x132EA4u;
    SET_GPR_U32(ctx, 31, 0x132EACu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x132EA4u, 0x132EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EACu;
label_132eac:
    // 0x132eac: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x132eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x132eb0: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x132eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x132eb4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x132EB4u;
    {
        const bool branch_taken_0x132eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132eb4) {
            ctx->pc = 0x132EF8u;
            goto label_132ef8;
        }
    }
    ctx->pc = 0x132EBCu;
    // 0x132ebc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x132ebcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132ec0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x132ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x132ec4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x132ec4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x132ec8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x132ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x132ecc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132ECCu;
    {
        const bool branch_taken_0x132ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132ecc) {
            ctx->pc = 0x132EECu;
            goto label_132eec;
        }
    }
    ctx->pc = 0x132ED4u;
    // 0x132ed4: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x132ed4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x132ed8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x132ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x132edc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x132edcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x132ee0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x132ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x132ee4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132EE4u;
    {
        const bool branch_taken_0x132ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132ee4) {
            ctx->pc = 0x132EF8u;
            goto label_132ef8;
        }
    }
    ctx->pc = 0x132EECu;
label_132eec:
    // 0x132eec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x132eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x132ef0: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x132EF0u;
    {
        const bool branch_taken_0x132ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ef0) {
            ctx->pc = 0x132EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132eac;
        }
    }
    ctx->pc = 0x132EF8u;
label_132ef8:
    // 0x132ef8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x132ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x132efc: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x132efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x132f00: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x132f00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x132f04: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x132F04u;
    {
        const bool branch_taken_0x132f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f04) {
            ctx->pc = 0x132F24u;
            goto label_132f24;
        }
    }
    ctx->pc = 0x132F0Cu;
    // 0x132f0c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x132f0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132f10: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x132f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x132f14: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x132f14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x132f18: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x132f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x132f1c: 0x1462ff11  bne         $v1, $v0, . + 4 + (-0xEF << 2)
    ctx->pc = 0x132F1Cu;
    {
        const bool branch_taken_0x132f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132f1c) {
            ctx->pc = 0x132B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132b64;
        }
    }
    ctx->pc = 0x132F24u;
label_132f24:
    // 0x132f24: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x132f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x132f28: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x132f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x132f2c: 0x1440fed7  bnez        $v0, . + 4 + (-0x129 << 2)
    ctx->pc = 0x132F2Cu;
    {
        const bool branch_taken_0x132f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132f2c) {
            ctx->pc = 0x132A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132a8c;
        }
    }
    ctx->pc = 0x132F34u;
    // 0x132f34: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x132F34u;
    {
        const bool branch_taken_0x132f34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f34) {
            ctx->pc = 0x132F50u;
            goto label_132f50;
        }
    }
    ctx->pc = 0x132F3Cu;
    // 0x132f3c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x132f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x132f40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f44: 0xc04cbe4  jal         func_132F90
    ctx->pc = 0x132F44u;
    SET_GPR_U32(ctx, 31, 0x132F4Cu);
    ctx->pc = 0x132F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132F90u, 0x132F44u, 0x132F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F4Cu;
label_132f4c:
    // 0x132f4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x132f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132f50:
    // 0x132f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132f54:
    // 0x132f54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x132f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x132f58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x132f58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x132f5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x132f5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x132f60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x132f60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132f64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x132f64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132f68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132f6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132f78: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x132f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x132f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x132F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132F84u;
    // 0x132f84: 0x0  nop
    ctx->pc = 0x132f84u;
    // NOP
    // 0x132f88: 0x0  nop
    ctx->pc = 0x132f88u;
    // NOP
    // 0x132f8c: 0x0  nop
    ctx->pc = 0x132f8cu;
    // NOP
    ctx->pc = 0x132f90u;
}
