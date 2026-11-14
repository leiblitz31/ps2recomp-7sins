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

// Function: sub_00354E90
// Address: 0x354e90 - 0x3553e8
void sub_00354E90_0x354e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354E90_0x354e90");
#endif

    switch (ctx->pc) {
        case 0x354f4cu: goto label_354f4c;
        case 0x354f74u: goto label_354f74;
        case 0x354f8cu: goto label_354f8c;
        case 0x354fb0u: goto label_354fb0;
        case 0x3551b0u: goto label_3551b0;
        case 0x355368u: goto label_355368;
        case 0x3553b0u: goto label_3553b0;
        default: break;
    }

    ctx->pc = 0x354e90u;

    // 0x354e90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x354e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x354e94: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x354e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354e98: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x354e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x354e9c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x354e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x354ea0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x354ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x354ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ea8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x354ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x354eac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x354eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354eb0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x354eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x354eb4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x354eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x354eb8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x354eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x354ebc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x354ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x354ec0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x354ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x354ec4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x354ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x354ec8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x354ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x354ecc: 0x8c73e880  lw          $s3, -0x1780($v1)
    ctx->pc = 0x354eccu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61E880u));
    // 0x354ed0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x354ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x354ed4: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x354ed4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x354ed8: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x354ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x354edc: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x354edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x354ee0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x354ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x354ee4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x354ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354ee8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x354ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x354eec: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x354eecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x354ef0: 0x8c94009c  lw          $s4, 0x9C($a0)
    ctx->pc = 0x354ef0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x354ef4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x354EF4u;
    {
        const bool branch_taken_0x354ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354ef4) {
            ctx->pc = 0x354EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354EF4u;
            // 0x354ef8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x354EFCu;
            goto label_354efc;
        }
    }
    ctx->pc = 0x354EFCu;
label_354efc:
    // 0x354efc: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x354efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x354f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354f04: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x354f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x354f08: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x354f08u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x354f0c: 0x8812  mflo        $s1
    ctx->pc = 0x354f0cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x354f10: 0x1486000e  bne         $a0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x354F10u;
    {
        const bool branch_taken_0x354f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x354F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F10u;
        // 0x354f14: 0x8e770060  lw          $s7, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f10) {
            ctx->pc = 0x354F4Cu;
            goto label_354f4c;
        }
    }
    ctx->pc = 0x354F18u;
    // 0x354f18: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x354f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x354f1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354f20: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x354f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x354f24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x354f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x354f28: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354F28u;
    {
        const bool branch_taken_0x354f28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x354f28) {
            ctx->pc = 0x354F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354F28u;
            // 0x354f2c: 0xac71001c  sw          $s1, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354F40u;
            goto label_354f40;
        }
    }
    ctx->pc = 0x354F30u;
    // 0x354f30: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x354f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x354f34: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x354F34u;
    {
        const bool branch_taken_0x354f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x354F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F34u;
        // 0x354f38: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f34) {
            ctx->pc = 0x354F50u;
            goto label_354f50;
        }
    }
    ctx->pc = 0x354F3Cu;
    // 0x354f3c: 0xac71001c  sw          $s1, 0x1C($v1)
    ctx->pc = 0x354f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
label_354f40:
    // 0x354f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f44: 0xc0e7ccc  jal         func_39F330
    ctx->pc = 0x354F44u;
    SET_GPR_U32(ctx, 31, 0x354F4Cu);
    ctx->pc = 0x354F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F44u;
    // 0x354f48: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F330u, 0x354F44u, 0x354F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F4Cu;
label_354f4c:
    // 0x354f4c: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x354f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_354f50:
    // 0x354f50: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x354f50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354f54: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x354f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x354f58: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x354f58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f5c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x354f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x354f60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x354f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354f64: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x354f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f68: 0x3a80a  movz        $s5, $zero, $v1
    ctx->pc = 0x354f68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x354f6c: 0xc0d51b6  jal         func_3546D8
    ctx->pc = 0x354F6Cu;
    SET_GPR_U32(ctx, 31, 0x354F74u);
    ctx->pc = 0x354F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F6Cu;
    // 0x354f70: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3546D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3546D8u, 0x354F6Cu, 0x354F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F74u;
label_354f74:
    // 0x354f74: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x354f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354f78: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x354f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x354f7c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x354f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x354f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x354f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354f84: 0xc0d51e0  jal         func_354780
    ctx->pc = 0x354F84u;
    SET_GPR_U32(ctx, 31, 0x354F8Cu);
    ctx->pc = 0x354F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354F84u;
    // 0x354f88: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354780u, 0x354F84u, 0x354F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F8Cu;
label_354f8c:
    // 0x354f8c: 0xde8200b8  ld          $v0, 0xB8($s4)
    ctx->pc = 0x354f8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x354f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354f94: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x354f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x354f98: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x354f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x354f9c: 0xde8300c8  ld          $v1, 0xC8($s4)
    ctx->pc = 0x354f9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x354fa0: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x354fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x354fa4: 0xde8200c0  ld          $v0, 0xC0($s4)
    ctx->pc = 0x354fa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x354fa8: 0xc10a322  jal         func_428C88
    ctx->pc = 0x354FA8u;
    SET_GPR_U32(ctx, 31, 0x354FB0u);
    ctx->pc = 0x354FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354FA8u;
    // 0x354fac: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x354FA8u, 0x354FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354FB0u;
label_354fb0:
    // 0x354fb0: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x354FB0u;
    {
        const bool branch_taken_0x354fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FB0u;
        // 0x354fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354fb0) {
            ctx->pc = 0x3553B4u;
            goto label_3553b4;
        }
    }
    ctx->pc = 0x354FB8u;
    // 0x354fb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x354fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x354fbc: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x354fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x354fc0: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x354fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x354fc4: 0x346303c6  ori         $v1, $v1, 0x3C6
    ctx->pc = 0x354fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)966);
    // 0x354fc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x354fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x354fcc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x354fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x354fd0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x354fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x354fd4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x354fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x354fd8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x354fd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x354fdc: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x354fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x354fe0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x354fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x354fe4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x354fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x354fe8: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x354fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x354fec: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x354fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x354ff0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x354ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x354ff4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x354ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x354ff8: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x354ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x354ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x355000: 0xc6620070  lwc1        $f2, 0x70($s3)
    ctx->pc = 0x355000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355008: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x355008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35500c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355010: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x355010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x355014: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x355014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x355018: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x355018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35501c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35501cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x355020: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x355020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x355024: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x355024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355028: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x355028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x35502c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35502cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x355030: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x355030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x355034: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x355034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x355038: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x355038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35503c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35503cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x355040: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x355040u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x355044: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x355044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x355048: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x355048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35504c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x35504cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355050: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x355050u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x355054: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x355054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x355058: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x355058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x35505c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x35505cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x355060: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x355060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x355064: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x355064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x355068: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x355068u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD650u));
    // 0x35506c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x35506cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x355070: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x355070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x355074: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x355074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x355078: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x355078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
    // 0x35507c: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x35507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x355080: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x355080u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD660u));
    // 0x355084: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x355084u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x355088: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x355088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x35508c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x35508cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x355090: 0x8f84a858  lw          $a0, -0x57A8($gp)
    ctx->pc = 0x355090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x355094: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x355094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x355098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x355098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35509c: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x35509cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550a0: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x3550a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x3550a4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x3550a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3550a8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3550a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3550ac: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x3550acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550b0: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x3550b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x3550b4: 0x154138  dsll        $t0, $s5, 4
    ctx->pc = 0x3550b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << 4);
    // 0x3550b8: 0x8ca400b4  lw          $a0, 0xB4($a1)
    ctx->pc = 0x3550b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x3550bc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3550bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3550c0: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x3550c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3550c4: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x3550c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x3550c8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3550c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3550cc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x3550ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x3550d0: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x3550d0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3550d4: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x3550d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x3550d8: 0x34e72412  ori         $a3, $a3, 0x2412
    ctx->pc = 0x3550d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9234);
    // 0x3550dc: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x3550dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x3550e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3550e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3550e4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x3550e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x3550e8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x3550e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x3550ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3550ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3550f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3550f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3550f4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x3550f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x3550f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3550f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3550fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3550fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x355100: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x355100u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x355104: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x355104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x355108: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x355108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x35510c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x35510cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x355110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x355110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x355114: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x355114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x355118: 0x34428005  ori         $v0, $v0, 0x8005
    ctx->pc = 0x355118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x35511c: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x35511cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x355120: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x355120u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x355124: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x355124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x355128: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x355128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x35512c: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x35512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x355130: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x355130u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355134: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x355134u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x355138: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x355138u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x35513c: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x35513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x355140: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x355140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x355144: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x355144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x355148: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x355148u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35514c: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x35514cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x355150: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x355150u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x355154: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x355154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x355158: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x355158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x35515c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x35515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x355160: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x355160u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355164: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x355164u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x355168: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x355168u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x35516c: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x35516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x355170: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x355170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x355174: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x355174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x355178: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x355178u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x35517c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x35517cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x355180: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x355180u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
    // 0x355184: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x355184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x355188: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x355188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x35518c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x35518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x355190: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x355190u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x355194: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x355194u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x355198: 0x7cc20090  sq          $v0, 0x90($a2)
    ctx->pc = 0x355198u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), GPR_VEC(ctx, 2));
    // 0x35519c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x35519cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x3551a0: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x3551a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x3551a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3551a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3551a8: 0xc10a322  jal         func_428C88
    ctx->pc = 0x3551A8u;
    SET_GPR_U32(ctx, 31, 0x3551B0u);
    ctx->pc = 0x3551ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551A8u;
    // 0x3551ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3551A8u, 0x3551B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551B0u;
label_3551b0:
    // 0x3551b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3551b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3551b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3551b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3551b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3551b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3551bc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x3551bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3551c0: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x3551c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3551c4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3551c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3551c8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3551c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3551cc: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x3551ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x3551d0: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x3551d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x3551d4: 0x346303fb  ori         $v1, $v1, 0x3FB
    ctx->pc = 0x3551d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1019);
    // 0x3551d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3551d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3551dc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3551dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3551e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3551e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3551e4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x3551e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x3551e8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3551e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3551ec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3551ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3551f0: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3551f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3551f4: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x3551f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3551f8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3551F8u;
    {
        const bool branch_taken_0x3551f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551F8u;
        // 0x3551fc: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3551f8) {
            ctx->pc = 0x355208u;
            goto label_355208;
        }
    }
    ctx->pc = 0x355200u;
    // 0x355200: 0xc785823c  lwc1        $f5, -0x7DC4($gp)
    ctx->pc = 0x355200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x355204: 0x0  nop
    ctx->pc = 0x355204u;
    // NOP
label_355208:
    // 0x355208: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x355208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x35520c: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x35520cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x355210: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x355210u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x355214: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x355214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x355218: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x355218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x35521c: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x35521cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x355220: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x355220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x355224: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x355224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x355228: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x355228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35522c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x35522cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x355230: 0xc781823c  lwc1        $f1, -0x7DC4($gp)
    ctx->pc = 0x355230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355234: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x355234u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x355238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35523c: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x35523cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x355240: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x355240u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x355244: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x355244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355248: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x355248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35524c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x35524cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x355250: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x355250u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x355254: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x355254u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x355258: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x355258u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x35525c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x35525cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355260: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x355260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x355264: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x355264u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x355268: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x355268u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x35526c: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x35526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x355270: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x355270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x355274: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x355274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x355278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x355278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35527c: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35527Cu;
    {
        const bool branch_taken_0x35527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x355280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35527Cu;
        // 0x355280: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35527c) {
            ctx->pc = 0x3552A0u;
            goto label_3552a0;
        }
    }
    ctx->pc = 0x355284u;
    // 0x355284: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x355284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x355288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x355288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35528c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355290: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x355290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355294: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355294u;
    {
        const bool branch_taken_0x355294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x355294) {
            ctx->pc = 0x355298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355294u;
            // 0x355298: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3552B8u;
            goto label_3552b8;
        }
    }
    ctx->pc = 0x35529Cu;
    // 0x35529c: 0x0  nop
    ctx->pc = 0x35529cu;
    // NOP
label_3552a0:
    // 0x3552a0: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3552a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3552a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3552a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3552a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3552A8u;
    {
        const bool branch_taken_0x3552a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3552a8) {
            ctx->pc = 0x3552ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3552A8u;
            // 0x3552ac: 0xa205002b  sb          $a1, 0x2B($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3552CCu;
            goto label_3552cc;
        }
    }
    ctx->pc = 0x3552B0u;
    // 0x3552b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3552B0u;
    {
        const bool branch_taken_0x3552b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3552B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3552B0u;
        // 0x3552b4: 0xa200002b  sb          $zero, 0x2B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3552b0) {
            ctx->pc = 0x3552CCu;
            goto label_3552cc;
        }
    }
    ctx->pc = 0x3552B8u;
label_3552b8:
    // 0x3552b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3552b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3552bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3552BCu;
    {
        const bool branch_taken_0x3552bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3552C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3552BCu;
        // 0x3552c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3552bc) {
            ctx->pc = 0x3552C8u;
            goto label_3552c8;
        }
    }
    ctx->pc = 0x3552C4u;
    // 0x3552c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3552c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3552c8:
    // 0x3552c8: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x3552c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
label_3552cc:
    // 0x3552cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3552ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3552d0: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x3552d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x3552d4: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x3552d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3552d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3552d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3552dc: 0x8f83aed4  lw          $v1, -0x512C($gp)
    ctx->pc = 0x3552dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x3552e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3552e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3552e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3552e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3552e8: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3552E8u;
    {
        const bool branch_taken_0x3552e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3552ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3552E8u;
        // 0x3552ec: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3552e8) {
            ctx->pc = 0x355318u;
            goto label_355318;
        }
    }
    ctx->pc = 0x3552F0u;
    // 0x3552f0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3552f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3552f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3552f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3552f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3552f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552fc: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3552fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x355300: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x355300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x355304: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x355304u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x355308: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x355308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x35530c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x35530cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x355310: 0xaf85aed4  sw          $a1, -0x512C($gp)
    ctx->pc = 0x355310u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 5));
    // 0x355314: 0x0  nop
    ctx->pc = 0x355314u;
    // NOP
label_355318:
    // 0x355318: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x355318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x35531c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x35531cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x355320: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x355320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x355324: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x355324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x355328: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x355328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35532c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x35532cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x355330: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x355330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x355334: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x355334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x355338: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x355338u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x35533c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x35533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x355340: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x355340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x355344: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x355344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x355348: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x355348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x35534c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x35534cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x355350: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x355350u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x355354: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x355354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x355358: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x355358u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x35535c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35535cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x355360: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x355360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x355364: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x355364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_355368:
    // 0x355368: 0x42000039  di
    ctx->pc = 0x355368u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35536c: 0x40f  sync.p
    ctx->pc = 0x35536cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x355370: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x355370u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x355374: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x355374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355378: 0x0  nop
    ctx->pc = 0x355378u;
    // NOP
    // 0x35537c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35537Cu;
    {
        const bool branch_taken_0x35537c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35537c) {
            ctx->pc = 0x355368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355368;
        }
    }
    ctx->pc = 0x355384u;
    // 0x355384: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x355384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x355388: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35538c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x35538cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x355390: 0x42000038  ei
    ctx->pc = 0x355390u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x355394: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x355394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x355398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35539c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3553a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3553A0u;
    {
        const bool branch_taken_0x3553a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3553A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553A0u;
        // 0x3553a4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3553a0) {
            ctx->pc = 0x3553B0u;
            goto label_3553b0;
        }
    }
    ctx->pc = 0x3553A8u;
    // 0x3553a8: 0xc10a762  jal         func_429D88
    ctx->pc = 0x3553A8u;
    SET_GPR_U32(ctx, 31, 0x3553B0u);
    ctx->pc = 0x3553ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3553A8u;
    // 0x3553ac: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x3553A8u, 0x3553B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3553B0u;
label_3553b0:
    // 0x3553b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3553b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3553b4:
    // 0x3553b4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3553b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3553b8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3553b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3553bc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3553bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3553c0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3553c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3553c4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3553c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3553c8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3553c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3553cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3553ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3553d0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3553d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3553d4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3553d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3553d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3553d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3553dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3553DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3553E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553DCu;
        // 0x3553e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3553DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3553E4u;
    // 0x3553e4: 0x0  nop
    ctx->pc = 0x3553e4u;
    // NOP
    ctx->pc = 0x3553e8u;
}
