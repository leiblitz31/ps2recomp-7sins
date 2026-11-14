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

// Function: sub_00356C00
// Address: 0x356c00 - 0x357158
void sub_00356C00_0x356c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356C00_0x356c00");
#endif

    switch (ctx->pc) {
        case 0x356cc0u: goto label_356cc0;
        case 0x356ce8u: goto label_356ce8;
        case 0x356d00u: goto label_356d00;
        case 0x356d24u: goto label_356d24;
        case 0x356f24u: goto label_356f24;
        case 0x3570d8u: goto label_3570d8;
        case 0x357120u: goto label_357120;
        default: break;
    }

    ctx->pc = 0x356c00u;

    // 0x356c00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x356c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x356c04: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x356c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x356c08: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x356c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x356c0c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x356c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x356c10: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x356c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x356c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356c18: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x356c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x356c1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x356c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356c20: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x356c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x356c24: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x356c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x356c28: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x356c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x356c2c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x356c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x356c30: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x356c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x356c34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x356c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x356c38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x356c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x356c3c: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x356c3cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x356c40: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x356c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356c44: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x356c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x356c48: 0x8c73e880  lw          $s3, -0x1780($v1)
    ctx->pc = 0x356c48u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61E880u));
    // 0x356c4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356c50: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x356c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x356c54: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x356c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x356c58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x356c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x356c5c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x356c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x356c60: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x356c60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356c64: 0x8c94009c  lw          $s4, 0x9C($a0)
    ctx->pc = 0x356c64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x356c68: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x356c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x356c6c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x356C6Cu;
    {
        const bool branch_taken_0x356c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c6c) {
            ctx->pc = 0x356C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356C6Cu;
            // 0x356c70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x356C74u;
            goto label_356c74;
        }
    }
    ctx->pc = 0x356C74u;
label_356c74:
    // 0x356c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356c78: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x356c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x356c7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x356c7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x356c80: 0x8812  mflo        $s1
    ctx->pc = 0x356c80u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x356c84: 0x1486000e  bne         $a0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x356C84u;
    {
        const bool branch_taken_0x356c84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x356C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C84u;
        // 0x356c88: 0x8e770060  lw          $s7, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356c84) {
            ctx->pc = 0x356CC0u;
            goto label_356cc0;
        }
    }
    ctx->pc = 0x356C8Cu;
    // 0x356c8c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x356c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x356c90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x356c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356c94: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x356c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x356c98: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x356c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x356c9c: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356C9Cu;
    {
        const bool branch_taken_0x356c9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x356c9c) {
            ctx->pc = 0x356CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356C9Cu;
            // 0x356ca0: 0xac71001c  sw          $s1, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356CB4u;
            goto label_356cb4;
        }
    }
    ctx->pc = 0x356CA4u;
    // 0x356ca4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x356ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x356ca8: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x356CA8u;
    {
        const bool branch_taken_0x356ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x356CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CA8u;
        // 0x356cac: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ca8) {
            ctx->pc = 0x356CC4u;
            goto label_356cc4;
        }
    }
    ctx->pc = 0x356CB0u;
    // 0x356cb0: 0xac71001c  sw          $s1, 0x1C($v1)
    ctx->pc = 0x356cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
label_356cb4:
    // 0x356cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356cb8: 0xc0e7ccc  jal         func_39F330
    ctx->pc = 0x356CB8u;
    SET_GPR_U32(ctx, 31, 0x356CC0u);
    ctx->pc = 0x356CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356CB8u;
    // 0x356cbc: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F330u, 0x356CB8u, 0x356CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356CC0u;
label_356cc0:
    // 0x356cc0: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x356cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_356cc4:
    // 0x356cc4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x356cc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356cc8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x356cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x356ccc: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x356cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356cd0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x356cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x356cd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356cd8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x356cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356cdc: 0x3a80a  movz        $s5, $zero, $v1
    ctx->pc = 0x356cdcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x356ce0: 0xc0d51b6  jal         func_3546D8
    ctx->pc = 0x356CE0u;
    SET_GPR_U32(ctx, 31, 0x356CE8u);
    ctx->pc = 0x356CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356CE0u;
    // 0x356ce4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3546D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3546D8u, 0x356CE0u, 0x356CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356CE8u;
label_356ce8:
    // 0x356ce8: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x356ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x356cec: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x356cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x356cf0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x356cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x356cf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x356cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356cf8: 0xc0d51e0  jal         func_354780
    ctx->pc = 0x356CF8u;
    SET_GPR_U32(ctx, 31, 0x356D00u);
    ctx->pc = 0x356CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356CF8u;
    // 0x356cfc: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354780u, 0x356CF8u, 0x356D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D00u;
label_356d00:
    // 0x356d00: 0xde8200b8  ld          $v0, 0xB8($s4)
    ctx->pc = 0x356d00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x356d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x356d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x356d0c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x356d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x356d10: 0xde8300c8  ld          $v1, 0xC8($s4)
    ctx->pc = 0x356d10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x356d14: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x356d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x356d18: 0xde8200c0  ld          $v0, 0xC0($s4)
    ctx->pc = 0x356d18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x356d1c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x356D1Cu;
    SET_GPR_U32(ctx, 31, 0x356D24u);
    ctx->pc = 0x356D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356D1Cu;
    // 0x356d20: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x356D1Cu, 0x356D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D24u;
label_356d24:
    // 0x356d24: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x356D24u;
    {
        const bool branch_taken_0x356d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D24u;
        // 0x356d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d24) {
            ctx->pc = 0x357124u;
            goto label_357124;
        }
    }
    ctx->pc = 0x356D2Cu;
    // 0x356d2c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x356d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x356d30: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x356d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x356d34: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x356d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x356d38: 0x346303c6  ori         $v1, $v1, 0x3C6
    ctx->pc = 0x356d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)966);
    // 0x356d3c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x356d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x356d40: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x356d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x356d44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x356d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x356d48: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x356d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x356d4c: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x356d4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x356d50: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x356d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x356d54: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x356d54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x356d58: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x356d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x356d5c: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x356d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x356d60: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x356d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x356d64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x356d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x356d68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x356d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x356d6c: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x356d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x356d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x356d74: 0xc6620070  lwc1        $f2, 0x70($s3)
    ctx->pc = 0x356d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x356d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x356d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x356d80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356d84: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x356d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x356d88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x356d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x356d8c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x356d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x356d90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x356d90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x356d94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x356d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x356d98: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x356d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x356d9c: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x356d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x356da0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x356da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x356da4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x356da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x356da8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x356da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x356dac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x356dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x356db0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x356db0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x356db4: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x356db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x356db8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x356db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x356dbc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x356dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x356dc0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x356dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356dc4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x356dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x356dc8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x356dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x356dcc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x356dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x356dd0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x356dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x356dd4: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x356dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x356dd8: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x356dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x356ddc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x356ddcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD650u));
    // 0x356de0: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x356de0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x356de4: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x356de4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x356de8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x356de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x356dec: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x356decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
    // 0x356df0: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x356df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x356df4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x356df4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD660u));
    // 0x356df8: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x356df8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x356dfc: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x356dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x356e00: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x356e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x356e04: 0x8f84a858  lw          $a0, -0x57A8($gp)
    ctx->pc = 0x356e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x356e08: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x356e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x356e0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x356e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x356e10: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x356e10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e14: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x356e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x356e18: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x356e18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x356e1c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x356e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x356e20: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x356e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e24: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x356e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x356e28: 0x154938  dsll        $t1, $s5, 4
    ctx->pc = 0x356e28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) << 4);
    // 0x356e2c: 0x8ca400b4  lw          $a0, 0xB4($a1)
    ctx->pc = 0x356e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x356e30: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x356e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x356e34: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x356e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x356e38: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x356e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x356e3c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x356e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x356e40: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x356e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x356e44: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x356e44u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x356e48: 0x24080412  addiu       $t0, $zero, 0x412
    ctx->pc = 0x356e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x356e4c: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x356e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x356e50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x356e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x356e54: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x356e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x356e58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x356e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x356e5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x356e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x356e60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x356e60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x356e64: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x356e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x356e68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x356e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x356e6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x356e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x356e70: 0x71041389  pcpyld      $v0, $t0, $a0
    ctx->pc = 0x356e70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 4)));
    // 0x356e74: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x356e74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x356e78: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x356e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x356e7c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x356e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x356e80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x356e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x356e84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x356e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x356e88: 0x34848005  ori         $a0, $a0, 0x8005
    ctx->pc = 0x356e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32773);
    // 0x356e8c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x356e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x356e90: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x356e90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x356e94: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x356e94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x356e98: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x356e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x356e9c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x356e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x356ea0: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x356ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x356ea4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x356ea4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356ea8: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x356ea8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x356eac: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x356eacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x356eb0: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x356eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x356eb4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x356eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x356eb8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x356eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x356ebc: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x356ebcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356ec0: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x356ec0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x356ec4: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x356ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x356ec8: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x356ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x356ecc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x356eccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x356ed0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x356ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x356ed4: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x356ed4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356ed8: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x356ed8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x356edc: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x356edcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x356ee0: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x356ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x356ee4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x356ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x356ee8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x356ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x356eec: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x356eecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x356ef0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x356ef0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x356ef4: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x356ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
    // 0x356ef8: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x356ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x356efc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x356efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x356f00: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x356f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x356f04: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x356f04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x356f08: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x356f08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x356f0c: 0x7cc20090  sq          $v0, 0x90($a2)
    ctx->pc = 0x356f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), GPR_VEC(ctx, 2));
    // 0x356f10: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x356f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x356f14: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x356f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x356f18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f1c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x356F1Cu;
    SET_GPR_U32(ctx, 31, 0x356F24u);
    ctx->pc = 0x356F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F1Cu;
    // 0x356f20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x356F1Cu, 0x356F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F24u;
label_356f24:
    // 0x356f24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x356f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x356f28: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x356f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x356f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f30: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x356f30u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x356f34: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x356f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x356f38: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x356f38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x356f3c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x356f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x356f40: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x356f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x356f44: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x356f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x356f48: 0x346303fb  ori         $v1, $v1, 0x3FB
    ctx->pc = 0x356f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1019);
    // 0x356f4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x356f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x356f50: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x356f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x356f54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x356f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x356f58: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x356f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x356f5c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x356f5cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x356f60: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x356f60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x356f64: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x356f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x356f68: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x356f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x356f6c: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x356F6Cu;
    {
        const bool branch_taken_0x356f6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F6Cu;
        // 0x356f70: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f6c) {
            ctx->pc = 0x356F78u;
            goto label_356f78;
        }
    }
    ctx->pc = 0x356F74u;
    // 0x356f74: 0xc785823c  lwc1        $f5, -0x7DC4($gp)
    ctx->pc = 0x356f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_356f78:
    // 0x356f78: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x356f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x356f7c: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x356f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x356f80: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x356f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x356f84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x356f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x356f88: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x356f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x356f8c: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x356f8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x356f90: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x356f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x356f94: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x356f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x356f98: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x356f98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x356f9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x356f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x356fa0: 0xc781823c  lwc1        $f1, -0x7DC4($gp)
    ctx->pc = 0x356fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356fa4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x356fa4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356fa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x356fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x356fac: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x356facu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x356fb0: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x356fb0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x356fb4: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x356fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x356fb8: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x356fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x356fbc: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x356fbcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x356fc0: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x356fc0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x356fc4: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x356fc4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x356fc8: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x356fc8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x356fcc: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x356fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x356fd0: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x356fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x356fd4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x356fd4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x356fd8: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x356fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x356fdc: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x356fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x356fe0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x356fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x356fe4: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x356fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x356fe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356fec: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x356FECu;
    {
        const bool branch_taken_0x356fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x356FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356FECu;
        // 0x356ff0: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356fec) {
            ctx->pc = 0x357010u;
            goto label_357010;
        }
    }
    ctx->pc = 0x356FF4u;
    // 0x356ff4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x356ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x356ff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x356ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356ffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x356ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x357000: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x357000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x357004: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x357004u;
    {
        const bool branch_taken_0x357004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x357004) {
            ctx->pc = 0x357008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357004u;
            // 0x357008: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357028u;
            goto label_357028;
        }
    }
    ctx->pc = 0x35700Cu;
    // 0x35700c: 0x0  nop
    ctx->pc = 0x35700cu;
    // NOP
label_357010:
    // 0x357010: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x357010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x357014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x357014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x357018: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x357018u;
    {
        const bool branch_taken_0x357018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357018) {
            ctx->pc = 0x35701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357018u;
            // 0x35701c: 0xa205002b  sb          $a1, 0x2B($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35703Cu;
            goto label_35703c;
        }
    }
    ctx->pc = 0x357020u;
    // 0x357020: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x357020u;
    {
        const bool branch_taken_0x357020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357020u;
        // 0x357024: 0xa200002b  sb          $zero, 0x2B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357020) {
            ctx->pc = 0x35703Cu;
            goto label_35703c;
        }
    }
    ctx->pc = 0x357028u;
label_357028:
    // 0x357028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x357028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35702c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35702Cu;
    {
        const bool branch_taken_0x35702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35702Cu;
        // 0x357030: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35702c) {
            ctx->pc = 0x357038u;
            goto label_357038;
        }
    }
    ctx->pc = 0x357034u;
    // 0x357034: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x357034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_357038:
    // 0x357038: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x357038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
label_35703c:
    // 0x35703c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x35703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357040: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x357040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x357044: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x357044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x357048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x357048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35704c: 0x8f83aed4  lw          $v1, -0x512C($gp)
    ctx->pc = 0x35704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x357050: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x357050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x357054: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x357054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357058: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x357058u;
    {
        const bool branch_taken_0x357058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x35705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357058u;
        // 0x35705c: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357058) {
            ctx->pc = 0x357088u;
            goto label_357088;
        }
    }
    ctx->pc = 0x357060u;
    // 0x357060: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x357060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x357064: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x357064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35706c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x35706cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x357070: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x357070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x357074: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x357074u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x357078: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x357078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35707c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x35707cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x357080: 0xaf85aed4  sw          $a1, -0x512C($gp)
    ctx->pc = 0x357080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 5));
    // 0x357084: 0x0  nop
    ctx->pc = 0x357084u;
    // NOP
label_357088:
    // 0x357088: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x357088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x35708c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x35708cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x357090: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x357090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357094: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x357094u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x357098: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x357098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35709c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x35709cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x3570a0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3570a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3570a4: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x3570a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x3570a8: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x3570a8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3570ac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3570acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3570b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3570b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3570b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3570b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3570b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3570b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3570bc: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x3570bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x3570c0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3570c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3570c4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3570c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3570c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3570c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3570cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3570ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3570d0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3570d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3570d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3570d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3570d8:
    // 0x3570d8: 0x42000039  di
    ctx->pc = 0x3570d8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3570dc: 0x40f  sync.p
    ctx->pc = 0x3570dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3570e0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3570e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3570e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3570e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3570e8: 0x0  nop
    ctx->pc = 0x3570e8u;
    // NOP
    // 0x3570ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3570ECu;
    {
        const bool branch_taken_0x3570ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570ec) {
            ctx->pc = 0x3570D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3570d8;
        }
    }
    ctx->pc = 0x3570F4u;
    // 0x3570f4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x3570f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3570f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3570f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3570fc: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x3570fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x357100: 0x42000038  ei
    ctx->pc = 0x357100u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x357104: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x357104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x357108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35710c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357110: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357110u;
    {
        const bool branch_taken_0x357110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x357114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357110u;
        // 0x357114: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357110) {
            ctx->pc = 0x357120u;
            goto label_357120;
        }
    }
    ctx->pc = 0x357118u;
    // 0x357118: 0xc10a762  jal         func_429D88
    ctx->pc = 0x357118u;
    SET_GPR_U32(ctx, 31, 0x357120u);
    ctx->pc = 0x35711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357118u;
    // 0x35711c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x357118u, 0x357120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357120u;
label_357120:
    // 0x357120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357124:
    // 0x357124: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x357124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x357128: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x357128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35712c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x35712cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x357130: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x357130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x357134: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x357134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x357138: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x357138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35713c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35713cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357140: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x357140u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357144: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x357144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357148: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x357148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35714c: 0x3e00008  jr          $ra
    ctx->pc = 0x35714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35714Cu;
        // 0x357150: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357154u;
    // 0x357154: 0x0  nop
    ctx->pc = 0x357154u;
    // NOP
    ctx->pc = 0x357158u;
}
