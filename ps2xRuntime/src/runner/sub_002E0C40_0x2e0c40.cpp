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

// Function: sub_002E0C40
// Address: 0x2e0c40 - 0x2e0e40
void sub_002E0C40_0x2e0c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0C40_0x2e0c40");
#endif

    switch (ctx->pc) {
        case 0x2e0c90u: goto label_2e0c90;
        case 0x2e0cccu: goto label_2e0ccc;
        case 0x2e0ce0u: goto label_2e0ce0;
        case 0x2e0cf0u: goto label_2e0cf0;
        case 0x2e0d0cu: goto label_2e0d0c;
        case 0x2e0d1cu: goto label_2e0d1c;
        case 0x2e0d30u: goto label_2e0d30;
        case 0x2e0d50u: goto label_2e0d50;
        case 0x2e0d64u: goto label_2e0d64;
        case 0x2e0dd8u: goto label_2e0dd8;
        case 0x2e0df0u: goto label_2e0df0;
        case 0x2e0e0cu: goto label_2e0e0c;
        default: break;
    }

    ctx->pc = 0x2e0c40u;

    // 0x2e0c40: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e0c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2e0c44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e0c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e0c48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e0c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e0c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e0c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0c54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0c60: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2e0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2e0c64: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2e0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x2e0c68: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x2e0c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x2e0c6c: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x2e0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x2e0c70: 0xafa800d0  sw          $t0, 0xD0($sp)
    ctx->pc = 0x2e0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 8));
    // 0x2e0c74: 0xafa900e0  sw          $t1, 0xE0($sp)
    ctx->pc = 0x2e0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 9));
    // 0x2e0c78: 0xa3aa00f0  sb          $t2, 0xF0($sp)
    ctx->pc = 0x2e0c78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e0c7c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2e0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0c80: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2e0c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0c84: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2e0c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0c88: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E0C88u;
    SET_GPR_U32(ctx, 31, 0x2E0C90u);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E0C88u, 0x2E0C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C90u;
label_2e0c90:
    // 0x2e0c90: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2e0c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2e0c94: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2e0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2e0c98: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2e0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e0c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0ca0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0CA0u;
    {
        const bool branch_taken_0x2e0ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e0ca0) {
            ctx->pc = 0x2E0CB4u;
            goto label_2e0cb4;
        }
    }
    ctx->pc = 0x2E0CA8u;
    // 0x2e0ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2E0CACu;
    {
        const bool branch_taken_0x2e0cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cac) {
            ctx->pc = 0x2E0E10u;
            goto label_2e0e10;
        }
    }
    ctx->pc = 0x2E0CB4u;
label_2e0cb4:
    // 0x2e0cb4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0cb8: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2e0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2e0cbc: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x2e0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e0cc0: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x2e0cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2e0cc4: 0xc0b8150  jal         func_2E0540
    ctx->pc = 0x2E0CC4u;
    SET_GPR_U32(ctx, 31, 0x2E0CCCu);
    ctx->pc = 0x2E0540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0540u, 0x2E0CC4u, 0x2E0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CCCu;
label_2e0ccc:
    // 0x2e0ccc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0cd0: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x2e0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2e0cd4: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x2e0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e0cd8: 0xc0b8124  jal         func_2E0490
    ctx->pc = 0x2E0CD8u;
    SET_GPR_U32(ctx, 31, 0x2E0CE0u);
    ctx->pc = 0x2E0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0490u, 0x2E0CD8u, 0x2E0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CE0u;
label_2e0ce0:
    // 0x2e0ce0: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2e0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2e0ce4: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2e0ce8: 0xc041998  jal         func_106660
    ctx->pc = 0x2E0CE8u;
    SET_GPR_U32(ctx, 31, 0x2E0CF0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2E0CE8u, 0x2E0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CF0u;
label_2e0cf0:
    // 0x2e0cf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0CF0u;
    {
        const bool branch_taken_0x2e0cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cf0) {
            ctx->pc = 0x2E0D0Cu;
            goto label_2e0d0c;
        }
    }
    ctx->pc = 0x2E0CF8u;
    // 0x2e0cf8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0cfc: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2e0cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e0d00: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2e0d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e0d04: 0xc0b80dc  jal         func_2E0370
    ctx->pc = 0x2E0D04u;
    SET_GPR_U32(ctx, 31, 0x2E0D0Cu);
    ctx->pc = 0x2E0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0370u, 0x2E0D04u, 0x2E0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D0Cu;
label_2e0d0c:
    // 0x2e0d0c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0d10: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x2e0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e0d14: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2E0D14u;
    SET_GPR_U32(ctx, 31, 0x2E0D1Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2E0D14u, 0x2E0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D1Cu;
label_2e0d1c:
    // 0x2e0d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e0d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d20: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2e0d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0d24: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2e0d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0d28: 0xc092158  jal         func_248560
    ctx->pc = 0x2E0D28u;
    SET_GPR_U32(ctx, 31, 0x2E0D30u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2E0D28u, 0x2E0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D30u;
label_2e0d30:
    // 0x2e0d30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e0d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d34: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2e0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2e0d38: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2e0d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e0d3c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x2e0d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e0d40: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x2e0d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0d44: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x2e0d44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0d48: 0xc0b7b08  jal         func_2DEC20
    ctx->pc = 0x2E0D48u;
    SET_GPR_U32(ctx, 31, 0x2E0D50u);
    ctx->pc = 0x2DEC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC20u, 0x2E0D48u, 0x2E0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D50u;
label_2e0d50:
    // 0x2e0d50: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2e0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2e0d54: 0x62a823  subu        $s5, $v1, $v0
    ctx->pc = 0x2e0d54u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0d58: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2e0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2e0d5c: 0xc0b7b80  jal         func_2DEE00
    ctx->pc = 0x2E0D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E0D64u);
    ctx->pc = 0x2DEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEE00u, 0x2E0D5Cu, 0x2E0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D64u;
label_2e0d64:
    // 0x2e0d64: 0x558018  mult        $s0, $v0, $s5
    ctx->pc = 0x2e0d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2e0d68: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0D68u;
    {
        const bool branch_taken_0x2e0d68 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2e0d68) {
            ctx->pc = 0x2E0D74u;
            goto label_2e0d74;
        }
    }
    ctx->pc = 0x2E0D70u;
    // 0x2e0d70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e0d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d74:
    // 0x2e0d74: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x2e0d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e0d78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0D78u;
    {
        const bool branch_taken_0x2e0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d78) {
            ctx->pc = 0x2E0D8Cu;
            goto label_2e0d8c;
        }
    }
    ctx->pc = 0x2E0D80u;
    // 0x2e0d80: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2e0d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e0d84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0D84u;
    {
        const bool branch_taken_0x2e0d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d84) {
            ctx->pc = 0x2E0D90u;
            goto label_2e0d90;
        }
    }
    ctx->pc = 0x2E0D8Cu;
label_2e0d8c:
    // 0x2e0d8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e0d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d90:
    // 0x2e0d90: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2e0d94: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x2e0d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x2e0d98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0D98u;
    {
        const bool branch_taken_0x2e0d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d98) {
            ctx->pc = 0x2E0DACu;
            goto label_2e0dac;
        }
    }
    ctx->pc = 0x2E0DA0u;
    // 0x2e0da0: 0x241101f4  addiu       $s1, $zero, 0x1F4
    ctx->pc = 0x2e0da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2e0da4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0DA4u;
    {
        const bool branch_taken_0x2e0da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0da4) {
            ctx->pc = 0x2E0DB0u;
            goto label_2e0db0;
        }
    }
    ctx->pc = 0x2E0DACu;
label_2e0dac:
    // 0x2e0dac: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2e0dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e0db0:
    // 0x2e0db0: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x2e0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2e0db4: 0x2025021  addu        $t2, $s0, $v0
    ctx->pc = 0x2e0db4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0db8: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2e0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2e0dbc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2e0dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0dc0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2e0dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0dc4: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2e0dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e0dc8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x2e0dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e0dcc: 0x8fa900e0  lw          $t1, 0xE0($sp)
    ctx->pc = 0x2e0dccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e0dd0: 0xc0b7aac  jal         func_2DEAB0
    ctx->pc = 0x2E0DD0u;
    SET_GPR_U32(ctx, 31, 0x2E0DD8u);
    ctx->pc = 0x2DEAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAB0u, 0x2E0DD0u, 0x2E0DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DD8u;
label_2e0dd8:
    // 0x2e0dd8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e0dd8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0ddc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0de0: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x2e0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2e0de4: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x2e0de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e0de8: 0xc0b8240  jal         func_2E0900
    ctx->pc = 0x2E0DE8u;
    SET_GPR_U32(ctx, 31, 0x2E0DF0u);
    ctx->pc = 0x2E0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0900u, 0x2E0DE8u, 0x2E0DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DF0u;
label_2e0df0:
    // 0x2e0df0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2e0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0df4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e0df8: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x2e0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2e0dfc: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x2e0dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2e0e00: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x2e0e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2e0e04: 0xc0b821c  jal         func_2E0870
    ctx->pc = 0x2E0E04u;
    SET_GPR_U32(ctx, 31, 0x2E0E0Cu);
    ctx->pc = 0x2E0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0870u, 0x2E0E04u, 0x2E0E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E0Cu;
label_2e0e0c:
    // 0x2e0e0c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2e0e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e10:
    // 0x2e0e10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e0e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0e14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e0e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0e18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e0e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0e1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0e20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e2c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2e0e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e0e30: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E38u;
    // 0x2e0e38: 0x0  nop
    ctx->pc = 0x2e0e38u;
    // NOP
    // 0x2e0e3c: 0x0  nop
    ctx->pc = 0x2e0e3cu;
    // NOP
    ctx->pc = 0x2e0e40u;
}
