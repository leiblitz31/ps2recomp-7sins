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

// Function: entry_303de8
// Address: 0x303de8 - 0x303fd0
void entry_303de8_0x303fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_303de8_0x303fd0");
#endif

    switch (ctx->pc) {
        case 0x303e30u: goto label_303e30;
        case 0x303e3cu: goto label_303e3c;
        case 0x303e54u: goto label_303e54;
        case 0x303e70u: goto label_303e70;
        case 0x303e90u: goto label_303e90;
        case 0x303eb4u: goto label_303eb4;
        case 0x303ee8u: goto label_303ee8;
        case 0x303f14u: goto label_303f14;
        case 0x303f4cu: goto label_303f4c;
        case 0x303f5cu: goto label_303f5c;
        case 0x303f64u: goto label_303f64;
        case 0x303f78u: goto label_303f78;
        case 0x303f88u: goto label_303f88;
        case 0x303f98u: goto label_303f98;
        case 0x303fa0u: goto label_303fa0;
        default: break;
    }

    ctx->pc = 0x303de8u;

    // 0x303de8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x303de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x303dec: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x303decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x303df0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x303df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x303df4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x303df4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303df8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x303df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x303dfc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x303dfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e00: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x303e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x303e04: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x303e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e08: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x303e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x303e0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x303e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e10: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x303e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x303e14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x303e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e18: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x303e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x303e1c: 0x3c160061  lui         $s6, 0x61
    ctx->pc = 0x303e1cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)97 << 16));
    // 0x303e20: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x303e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x303e24: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x303e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x303e28: 0xc0c0910  jal         func_302440
    ctx->pc = 0x303E28u;
    SET_GPR_U32(ctx, 31, 0x303E30u);
    ctx->pc = 0x303E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E28u;
    // 0x303e2c: 0x26d11340  addiu       $s1, $s6, 0x1340 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302440u, 0x303E28u, 0x303E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E30u;
label_303e30:
    // 0x303e30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x303e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e34: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x303E34u;
    SET_GPR_U32(ctx, 31, 0x303E3Cu);
    ctx->pc = 0x303E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E34u;
    // 0x303e38: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x303E34u, 0x303E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E3Cu;
label_303e3c:
    // 0x303e3c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x303e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x303e40: 0x8c430c1c  lw          $v1, 0xC1C($v0)
    ctx->pc = 0x303e40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x303e44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303E44u;
    {
        const bool branch_taken_0x303e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303e44) {
            ctx->pc = 0x303E54u;
            goto label_303e54;
        }
    }
    ctx->pc = 0x303E4Cu;
    // 0x303e4c: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x303E4Cu;
    SET_GPR_U32(ctx, 31, 0x303E54u);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x303E4Cu, 0x303E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E54u;
label_303e54:
    // 0x303e54: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x303E54u;
    {
        const bool branch_taken_0x303e54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x303e54) {
            ctx->pc = 0x303E68u;
            goto label_303e68;
        }
    }
    ctx->pc = 0x303E5Cu;
    // 0x303e5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x303e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303e60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303E60u;
    {
        const bool branch_taken_0x303e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E60u;
        // 0x303e64: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e60) {
            ctx->pc = 0x303E78u;
            goto label_303e78;
        }
    }
    ctx->pc = 0x303E68u;
label_303e68:
    // 0x303e68: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x303E68u;
    SET_GPR_U32(ctx, 31, 0x303E70u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x303E68u, 0x303E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E70u;
label_303e70:
    // 0x303e70: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x303E70u;
    {
        const bool branch_taken_0x303e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E70u;
        // 0x303e74: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e70) {
            ctx->pc = 0x303FA4u;
            goto label_303fa4;
        }
    }
    ctx->pc = 0x303E78u;
label_303e78:
    // 0x303e78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303E78u;
    {
        const bool branch_taken_0x303e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E78u;
        // 0x303e7c: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e78) {
            ctx->pc = 0x303E88u;
            goto label_303e88;
        }
    }
    ctx->pc = 0x303E80u;
    // 0x303e80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303E80u;
    {
        const bool branch_taken_0x303e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303e80) {
            ctx->pc = 0x303E98u;
            goto label_303e98;
        }
    }
    ctx->pc = 0x303E88u;
label_303e88:
    // 0x303e88: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x303E88u;
    SET_GPR_U32(ctx, 31, 0x303E90u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x303E88u, 0x303E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E90u;
label_303e90:
    // 0x303e90: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x303E90u;
    {
        const bool branch_taken_0x303e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E90u;
        // 0x303e94: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e90) {
            ctx->pc = 0x303FA4u;
            goto label_303fa4;
        }
    }
    ctx->pc = 0x303E98u;
label_303e98:
    // 0x303e98: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303E98u;
    {
        const bool branch_taken_0x303e98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x303E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E98u;
        // 0x303e9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e98) {
            ctx->pc = 0x303EA8u;
            goto label_303ea8;
        }
    }
    ctx->pc = 0x303EA0u;
    // 0x303ea0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x303EA0u;
    {
        const bool branch_taken_0x303ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EA0u;
        // 0x303ea4: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ea0) {
            ctx->pc = 0x303EB4u;
            goto label_303eb4;
        }
    }
    ctx->pc = 0x303EA8u;
label_303ea8:
    // 0x303ea8: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x303ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x303eac: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x303EACu;
    SET_GPR_U32(ctx, 31, 0x303EB4u);
    ctx->pc = 0x303EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303EACu;
    // 0x303eb0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x303EACu, 0x303EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EB4u;
label_303eb4:
    // 0x303eb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x303eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x303eb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x303eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x303ebc: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x303ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x303ec0: 0x2442ab50  addiu       $v0, $v0, -0x54B0
    ctx->pc = 0x303ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945616));
    // 0x303ec4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x303ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x303ec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x303ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303ecc: 0xae33041c  sw          $s3, 0x41C($s1)
    ctx->pc = 0x303eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
    // 0x303ed0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x303ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x303ed4: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x303ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x303ed8: 0x26d01340  addiu       $s0, $s6, 0x1340
    ctx->pc = 0x303ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4928));
    // 0x303edc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x303edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x303ee0: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x303EE0u;
    SET_GPR_U32(ctx, 31, 0x303EE8u);
    ctx->pc = 0x303EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303EE0u;
    // 0x303ee4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x303EE0u, 0x303EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EE8u;
label_303ee8:
    // 0x303ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x303ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303eec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x303eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303ef0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x303ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303ef4: 0xae340418  sw          $s4, 0x418($s1)
    ctx->pc = 0x303ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
    // 0x303ef8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x303ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x303efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f00: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x303f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x303f04: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x303f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x303f08: 0xae370414  sw          $s7, 0x414($s1)
    ctx->pc = 0x303f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
    // 0x303f0c: 0xc0c041c  jal         func_301070
    ctx->pc = 0x303F0Cu;
    SET_GPR_U32(ctx, 31, 0x303F14u);
    ctx->pc = 0x303F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F0Cu;
    // 0x303f10: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x303F0Cu, 0x303F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F14u;
label_303f14:
    // 0x303f14: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x303f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x303f18: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x303f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x303f1c: 0x24511f80  addiu       $s1, $v0, 0x1F80
    ctx->pc = 0x303f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x303f20: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x303f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x303f24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x303f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x303f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x303f2c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x303f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x303f30: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x303f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x303f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f38: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x303f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x303f3c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x303f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f40: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x303f40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303f44: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x303F44u;
    SET_GPR_U32(ctx, 31, 0x303F4Cu);
    ctx->pc = 0x303F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F44u;
    // 0x303f48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x303F44u, 0x303F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F4Cu;
label_303f4c:
    // 0x303f4c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x303F4Cu;
    {
        const bool branch_taken_0x303f4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x303F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F4Cu;
        // 0x303f50: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f4c) {
            ctx->pc = 0x303F6Cu;
            goto label_303f6c;
        }
    }
    ctx->pc = 0x303F54u;
    // 0x303f54: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x303F54u;
    SET_GPR_U32(ctx, 31, 0x303F5Cu);
    ctx->pc = 0x303F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F54u;
    // 0x303f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x303F54u, 0x303F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F5Cu;
label_303f5c:
    // 0x303f5c: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x303F5Cu;
    SET_GPR_U32(ctx, 31, 0x303F64u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x303F5Cu, 0x303F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F64u;
label_303f64:
    // 0x303f64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x303F64u;
    {
        const bool branch_taken_0x303f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F64u;
        // 0x303f68: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f64) {
            ctx->pc = 0x303FA4u;
            goto label_303fa4;
        }
    }
    ctx->pc = 0x303F6Cu;
label_303f6c:
    // 0x303f6c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x303f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x303f70: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x303F70u;
    SET_GPR_U32(ctx, 31, 0x303F78u);
    ctx->pc = 0x303F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F70u;
    // 0x303f74: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x303F70u, 0x303F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F78u;
label_303f78:
    // 0x303f78: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303F78u;
    {
        const bool branch_taken_0x303f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x303f78) {
            ctx->pc = 0x303F90u;
            goto label_303f90;
        }
    }
    ctx->pc = 0x303F80u;
    // 0x303f80: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x303F80u;
    SET_GPR_U32(ctx, 31, 0x303F88u);
    ctx->pc = 0x303F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F80u;
    // 0x303f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x303F80u, 0x303F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F88u;
label_303f88:
    // 0x303f88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x303F88u;
    {
        const bool branch_taken_0x303f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F88u;
        // 0x303f8c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f88) {
            ctx->pc = 0x303FA4u;
            goto label_303fa4;
        }
    }
    ctx->pc = 0x303F90u;
label_303f90:
    // 0x303f90: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x303F90u;
    SET_GPR_U32(ctx, 31, 0x303F98u);
    ctx->pc = 0x303F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F90u;
    // 0x303f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x303F90u, 0x303F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F98u;
label_303f98:
    // 0x303f98: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x303F98u;
    SET_GPR_U32(ctx, 31, 0x303FA0u);
    ctx->pc = 0x303F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F98u;
    // 0x303f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x303F98u, 0x303FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FA0u;
label_303fa0:
    // 0x303fa0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x303fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_303fa4:
    // 0x303fa4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x303fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x303fa8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x303fa8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x303fac: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x303facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x303fb0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x303fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x303fb4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x303fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x303fb8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x303fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x303fbc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x303fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x303fc0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x303fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303fc4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x303fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x303FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FC8u;
        // 0x303fcc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303FD0u;
}
