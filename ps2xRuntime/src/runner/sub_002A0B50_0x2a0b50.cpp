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

// Function: sub_002A0B50
// Address: 0x2a0b50 - 0x2a0e20
void sub_002A0B50_0x2a0b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0B50_0x2a0b50");
#endif

    switch (ctx->pc) {
        case 0x2a0bbcu: goto label_2a0bbc;
        case 0x2a0bd0u: goto label_2a0bd0;
        case 0x2a0be4u: goto label_2a0be4;
        case 0x2a0bf8u: goto label_2a0bf8;
        case 0x2a0d6cu: goto label_2a0d6c;
        case 0x2a0d84u: goto label_2a0d84;
        case 0x2a0da0u: goto label_2a0da0;
        case 0x2a0de4u: goto label_2a0de4;
        case 0x2a0dfcu: goto label_2a0dfc;
        default: break;
    }

    ctx->pc = 0x2a0b50u;

    // 0x2a0b50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a0b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a0b54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a0b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a0b58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a0b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0b64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a0b68: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2a0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2a0b6c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2a0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2a0b70: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0b74: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2a0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a0b78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0B78u;
    {
        const bool branch_taken_0x2a0b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b78) {
            ctx->pc = 0x2A0B8Cu;
            goto label_2a0b8c;
        }
    }
    ctx->pc = 0x2A0B80u;
    // 0x2a0b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b84: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2A0B84u;
    {
        const bool branch_taken_0x2a0b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b84) {
            ctx->pc = 0x2A0E00u;
            goto label_2a0e00;
        }
    }
    ctx->pc = 0x2A0B8Cu;
label_2a0b8c:
    // 0x2a0b8c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0b90: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0b94: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x2a0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x2a0b98: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0b9c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2a0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a0ba0: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2A0BA0u;
    {
        const bool branch_taken_0x2a0ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ba0) {
            ctx->pc = 0x2A0DFCu;
            goto label_2a0dfc;
        }
    }
    ctx->pc = 0x2A0BA8u;
    // 0x2a0ba8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0bac: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a0bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a0bb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0bb4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A0BB4u;
    SET_GPR_U32(ctx, 31, 0x2A0BBCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A0BB4u, 0x2A0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BBCu;
label_2a0bbc:
    // 0x2a0bbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a0bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a0bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0bc8: 0xc0a5a70  jal         func_2969C0
    ctx->pc = 0x2A0BC8u;
    SET_GPR_U32(ctx, 31, 0x2A0BD0u);
    ctx->pc = 0x2969C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C0u, 0x2A0BC8u, 0x2A0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BD0u;
label_2a0bd0:
    // 0x2a0bd0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0bd4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2a0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a0bd8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a0bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a0bdc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A0BDCu;
    SET_GPR_U32(ctx, 31, 0x2A0BE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A0BDCu, 0x2A0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BE4u;
label_2a0be4:
    // 0x2a0be4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a0be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0be8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a0be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bf0: 0xc096950  jal         func_25A540
    ctx->pc = 0x2A0BF0u;
    SET_GPR_U32(ctx, 31, 0x2A0BF8u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2A0BF0u, 0x2A0BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BF8u;
label_2a0bf8:
    // 0x2a0bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c00: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0C00u;
    {
        const bool branch_taken_0x2a0c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0c00) {
            ctx->pc = 0x2A0C28u;
            goto label_2a0c28;
        }
    }
    ctx->pc = 0x2A0C08u;
    // 0x2a0c08: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0C08u;
    {
        const bool branch_taken_0x2a0c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c08) {
            ctx->pc = 0x2A0C18u;
            goto label_2a0c18;
        }
    }
    ctx->pc = 0x2A0C10u;
    // 0x2a0c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0C10u;
    {
        const bool branch_taken_0x2a0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c10) {
            ctx->pc = 0x2A0C30u;
            goto label_2a0c30;
        }
    }
    ctx->pc = 0x2A0C18u;
label_2a0c18:
    // 0x2a0c18: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2a0c18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x2a0c1c: 0x26318b80  addiu       $s1, $s1, -0x7480
    ctx->pc = 0x2a0c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937472));
    // 0x2a0c20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0C20u;
    {
        const bool branch_taken_0x2a0c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c20) {
            ctx->pc = 0x2A0C30u;
            goto label_2a0c30;
        }
    }
    ctx->pc = 0x2A0C28u;
label_2a0c28:
    // 0x2a0c28: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2a0c28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x2a0c2c: 0x26318ba0  addiu       $s1, $s1, -0x7460
    ctx->pc = 0x2a0c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937504));
label_2a0c30:
    // 0x2a0c30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0c38: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0c3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0c44: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x2a0c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x2a0c48: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0c4c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0c54: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2a0c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2a0c58: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0c5c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0c64: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2a0c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2a0c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0c6c: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0c70: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0c78: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2a0c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2a0c7c: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0c80: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0c88: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2a0c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2a0c8c: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0c90: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0c98: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2a0c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2a0c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0ca0: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0ca4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0cac: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2a0cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2a0cb0: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0cb4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0cbc: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2a0cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2a0cc0: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0cc4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ccc: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2a0cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2a0cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0cd4: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0cd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ce0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a0ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a0ce4: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0ce8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0cf0: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a0cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a0cf4: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0cf8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d00: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a0d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a0d04: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0d08: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d10: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2a0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2a0d14: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a0d18: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2a0d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a0d1c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2a0d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a0d20: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0d24: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d2c: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x2a0d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x2a0d30: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2a0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2a0d34: 0x2484d9c8  addiu       $a0, $a0, -0x2638
    ctx->pc = 0x2a0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957512));
    // 0x2a0d38: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2a0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0d3c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2a0d3cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4ED9C8u));
    // 0x2a0d40: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a0d40u;
    { uint32_t bits = FAST_READ32(0x4ED9D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d44: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2a0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2a0d48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a0d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a0d4c: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0d50: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d58: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2a0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2a0d5c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2a0d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0d60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0d64: 0xc103c86  jal         func_40F218
    ctx->pc = 0x2A0D64u;
    SET_GPR_U32(ctx, 31, 0x2A0D6Cu);
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x2A0D64u, 0x2A0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D6Cu;
label_2a0d6c:
    // 0x2a0d6c: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0d70: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d78: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2a0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2a0d7c: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x2A0D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D84u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x2A0D7Cu, 0x2A0D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D84u;
label_2a0d84:
    // 0x2a0d84: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0d88: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0d8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d90: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2a0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2a0d94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d98: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A0D98u;
    SET_GPR_U32(ctx, 31, 0x2A0DA0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A0D98u, 0x2A0DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DA0u;
label_2a0da0:
    // 0x2a0da0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2a0da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2a0da4: 0x2484d9d8  addiu       $a0, $a0, -0x2628
    ctx->pc = 0x2a0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957528));
    // 0x2a0da8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2a0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0dac: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2a0dacu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4ED9D8u));
    // 0x2a0db0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a0db0u;
    { uint32_t bits = FAST_READ32(0x4ED9E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0db4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2a0db4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2a0db8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a0db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a0dbc: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0dc0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0dc4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0dc8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a0dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0dd0: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2a0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2a0dd4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a0dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0dd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0ddc: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x2A0DDCu;
    SET_GPR_U32(ctx, 31, 0x2A0DE4u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x2A0DDCu, 0x2A0DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DE4u;
label_2a0de4:
    // 0x2a0de4: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x2a0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2a0de8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0df0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2a0df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2a0df4: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x2A0DF4u;
    SET_GPR_U32(ctx, 31, 0x2A0DFCu);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x2A0DF4u, 0x2A0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DFCu;
label_2a0dfc:
    // 0x2a0dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0e00:
    // 0x2a0e00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a0e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0e04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0e14: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2a0e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0E20u;
}
