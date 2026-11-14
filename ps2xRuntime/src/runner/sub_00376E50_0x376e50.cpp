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

// Function: sub_00376E50
// Address: 0x376e50 - 0x376fa0
void sub_00376E50_0x376e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376E50_0x376e50");
#endif

    switch (ctx->pc) {
        case 0x376e88u: goto label_376e88;
        case 0x376eb0u: goto label_376eb0;
        case 0x376ed4u: goto label_376ed4;
        case 0x376efcu: goto label_376efc;
        case 0x376f5cu: goto label_376f5c;
        case 0x376f7cu: goto label_376f7c;
        case 0x376f90u: goto label_376f90;
        default: break;
    }

    ctx->pc = 0x376e50u;

    // 0x376e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376e54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x376e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x376e58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376e5c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x376e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x376e60: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x376e60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x376e64: 0x2450c430  addiu       $s0, $v0, -0x3BD0
    ctx->pc = 0x376e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x376e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376e6c: 0x24c66d48  addiu       $a2, $a2, 0x6D48
    ctx->pc = 0x376e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27976));
    // 0x376e70: 0xac40c430  sw          $zero, -0x3BD0($v0)
    ctx->pc = 0x376e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61C430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C430u, _value); } while (0);
    // 0x376e74: 0x24e77950  addiu       $a3, $a3, 0x7950
    ctx->pc = 0x376e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31056));
    // 0x376e78: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x376e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x376e7c: 0x2405012a  addiu       $a1, $zero, 0x12A
    ctx->pc = 0x376e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x376e80: 0xc0e6a18  jal         func_39A860
    ctx->pc = 0x376E80u;
    SET_GPR_U32(ctx, 31, 0x376E88u);
    ctx->pc = 0x376E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E80u;
    // 0x376e84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A860u, 0x376E80u, 0x376E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E88u;
label_376e88:
    // 0x376e88: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x376E88u;
    {
        const bool branch_taken_0x376e88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x376E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E88u;
        // 0x376e8c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e88) {
            ctx->pc = 0x376F08u;
            goto label_376f08;
        }
    }
    ctx->pc = 0x376E90u;
    // 0x376e90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x376e94: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x376e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x376e98: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x376e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x376e9c: 0x24a57c50  addiu       $a1, $a1, 0x7C50
    ctx->pc = 0x376e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31824));
    // 0x376ea0: 0x24c67bf0  addiu       $a2, $a2, 0x7BF0
    ctx->pc = 0x376ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31728));
    // 0x376ea4: 0x24e77bd0  addiu       $a3, $a3, 0x7BD0
    ctx->pc = 0x376ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31696));
    // 0x376ea8: 0xc0e6a2a  jal         func_39A8A8
    ctx->pc = 0x376EA8u;
    SET_GPR_U32(ctx, 31, 0x376EB0u);
    ctx->pc = 0x376EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EA8u;
    // 0x376eac: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A8A8u, 0x376EA8u, 0x376EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EB0u;
label_376eb0:
    // 0x376eb0: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x376EB0u;
    {
        const bool branch_taken_0x376eb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x376EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376EB0u;
        // 0x376eb4: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376eb0) {
            ctx->pc = 0x376F08u;
            goto label_376f08;
        }
    }
    ctx->pc = 0x376EB8u;
    // 0x376eb8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x376eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x376ebc: 0x24c679e8  addiu       $a2, $a2, 0x79E8
    ctx->pc = 0x376ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31208));
    // 0x376ec0: 0x24e77a20  addiu       $a3, $a3, 0x7A20
    ctx->pc = 0x376ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31264));
    // 0x376ec4: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x376ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x376ec8: 0x2405012a  addiu       $a1, $zero, 0x12A
    ctx->pc = 0x376ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x376ecc: 0xc0e63a2  jal         func_398E88
    ctx->pc = 0x376ECCu;
    SET_GPR_U32(ctx, 31, 0x376ED4u);
    ctx->pc = 0x376ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376ECCu;
    // 0x376ed0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x376ECCu, 0x376ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376ED4u;
label_376ed4:
    // 0x376ed4: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x376ED4u;
    {
        const bool branch_taken_0x376ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x376ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376ED4u;
        // 0x376ed8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ed4) {
            ctx->pc = 0x376F08u;
            goto label_376f08;
        }
    }
    ctx->pc = 0x376EDCu;
    // 0x376edc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x376ee0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x376ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x376ee4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x376ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x376ee8: 0x24a57b38  addiu       $a1, $a1, 0x7B38
    ctx->pc = 0x376ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31544));
    // 0x376eec: 0x24c67ab8  addiu       $a2, $a2, 0x7AB8
    ctx->pc = 0x376eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31416));
    // 0x376ef0: 0x24e77a88  addiu       $a3, $a3, 0x7A88
    ctx->pc = 0x376ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31368));
    // 0x376ef4: 0xc0e63b4  jal         func_398ED0
    ctx->pc = 0x376EF4u;
    SET_GPR_U32(ctx, 31, 0x376EFCu);
    ctx->pc = 0x376EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376EF4u;
    // 0x376ef8: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x376EF4u, 0x376EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376EFCu;
label_376efc:
    // 0x376efc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x376efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x376f00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x376F00u;
    {
        const bool branch_taken_0x376f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F00u;
        // 0x376f04: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f00) {
            ctx->pc = 0x376F0Cu;
            goto label_376f0c;
        }
    }
    ctx->pc = 0x376F08u;
label_376f08:
    // 0x376f08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376f0c:
    // 0x376f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376f14: 0x3e00008  jr          $ra
    ctx->pc = 0x376F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F14u;
        // 0x376f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376F1Cu;
    // 0x376f1c: 0x0  nop
    ctx->pc = 0x376f1cu;
    // NOP
    // 0x376f20: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x376f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x376f24: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376f28: 0x8c43c434  lw          $v1, -0x3BCC($v0)
    ctx->pc = 0x376f28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C434u));
    // 0x376f2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x376f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x376f30: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x376F30u;
    {
        const bool branch_taken_0x376f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F30u;
        // 0x376f34: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f30) {
            ctx->pc = 0x376F68u;
            goto label_376f68;
        }
    }
    ctx->pc = 0x376F38u;
    // 0x376f38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x376F38u;
    {
        const bool branch_taken_0x376f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376f38) {
            ctx->pc = 0x376F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376F38u;
            // 0x376f3c: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376F4Cu;
            goto label_376f4c;
        }
    }
    ctx->pc = 0x376F40u;
    // 0x376f40: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x376f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x376f44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x376F44u;
    {
        const bool branch_taken_0x376f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F44u;
        // 0x376f48: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f44) {
            ctx->pc = 0x376F94u;
            goto label_376f94;
        }
    }
    ctx->pc = 0x376F4Cu;
label_376f4c:
    // 0x376f4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x376f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x376f50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x376f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x376f54: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x376F54u;
    SET_GPR_U32(ctx, 31, 0x376F5Cu);
    ctx->pc = 0x376F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F54u;
    // 0x376f58: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x376F54u, 0x376F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F5Cu;
label_376f5c:
    // 0x376f5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x376f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x376F60u;
    {
        const bool branch_taken_0x376f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F60u;
        // 0x376f64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f60) {
            ctx->pc = 0x376F88u;
            goto label_376f88;
        }
    }
    ctx->pc = 0x376F68u;
label_376f68:
    // 0x376f68: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x376f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x376f6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x376f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x376f70: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x376f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x376f74: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x376F74u;
    SET_GPR_U32(ctx, 31, 0x376F7Cu);
    ctx->pc = 0x376F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F74u;
    // 0x376f78: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x376F74u, 0x376F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F7Cu;
label_376f7c:
    // 0x376f7c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x376f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x376f80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x376f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x376f84: 0x0  nop
    ctx->pc = 0x376f84u;
    // NOP
label_376f88:
    // 0x376f88: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x376F88u;
    SET_GPR_U32(ctx, 31, 0x376F90u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x376F88u, 0x376F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F90u;
label_376f90:
    // 0x376f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376f94:
    // 0x376f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x376f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376f98: 0x3e00008  jr          $ra
    ctx->pc = 0x376F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F98u;
        // 0x376f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376FA0u;
}
