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

// Function: sub_00376FA0
// Address: 0x376fa0 - 0x3770f8
void sub_00376FA0_0x376fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376FA0_0x376fa0");
#endif

    switch (ctx->pc) {
        case 0x376ff0u: goto label_376ff0;
        default: break;
    }

    ctx->pc = 0x376fa0u;

    // 0x376fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376fa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x376fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376fa8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x376fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x376fac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x376facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x376fb0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x376fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x376fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x376fb8: 0xae04c430  sw          $a0, -0x3BD0($s0)
    ctx->pc = 0x376fb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61C430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C430u, _value); } while (0);
    // 0x376fbc: 0x2610c430  addiu       $s0, $s0, -0x3BD0
    ctx->pc = 0x376fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951984));
    // 0x376fc0: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x376fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x376fc4: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x376fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x376fc8: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x376fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x376fcc: 0xb206002b  sdl         $a2, 0x2B($s0)
    ctx->pc = 0x376fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376fd0: 0xb6060024  sdr         $a2, 0x24($s0)
    ctx->pc = 0x376fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376fd4: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x376fd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x61C45Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C45Cu, _value); } while (0);
    // 0x376fd8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x376fd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61C450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C450u, _value); } while (0);
    // 0x376fdc: 0x24657710  addiu       $a1, $v1, 0x7710
    ctx->pc = 0x376fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30480));
    // 0x376fe0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x376fe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61C460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C460u, _value); } while (0);
    // 0x376fe4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x376fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376fe8: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x376FE8u;
    SET_GPR_U32(ctx, 31, 0x376FF0u);
    ctx->pc = 0x376FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FE8u;
    // 0x376fec: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x376FE8u, 0x376FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FF0u;
label_376ff0:
    // 0x376ff0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x376ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x376ff4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x376ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x376ff8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x376ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377000: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x377000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377004: 0x3e00008  jr          $ra
    ctx->pc = 0x377004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377004u;
        // 0x377008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37700Cu;
    // 0x37700c: 0x0  nop
    ctx->pc = 0x37700cu;
    // NOP
    // 0x377010: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x377014: 0x2443c430  addiu       $v1, $v0, -0x3BD0
    ctx->pc = 0x377014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x377018: 0xac44c430  sw          $a0, -0x3BD0($v0)
    ctx->pc = 0x377018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61C430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C430u, _value); } while (0);
    // 0x37701c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37701cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C438u));
    // 0x377020: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x377020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x377024: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x377024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377028: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x377028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37702c: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x37702cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x377030: 0x3e00008  jr          $ra
    ctx->pc = 0x377030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377030u;
        // 0x377034: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377038u;
    // 0x377038: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x37703c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x37703cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377040: 0x8c44c438  lw          $a0, -0x3BC8($v0)
    ctx->pc = 0x377040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C438u));
    // 0x377044: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x377044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377048: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x377048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x37704c: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x37704cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x377050: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377054: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x377054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x377058: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x377058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x37705c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x37705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x377060: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x377060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x377064: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x377064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x377068: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x377068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x37706c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x377070: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x377070u;
    {
        const bool branch_taken_0x377070 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x377074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377070u;
        // 0x377074: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377070) {
            ctx->pc = 0x37709Cu;
            goto label_37709c;
        }
    }
    ctx->pc = 0x377078u;
    // 0x377078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37707c: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x37707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x377080: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x377080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x377084: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x377084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x377088: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x377088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x37708c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x37708cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x377090: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x377090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x377094: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x377094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x377098: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x377098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_37709c:
    // 0x37709c: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x37709Cu;
    {
        const bool branch_taken_0x37709c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x37709c) {
            ctx->pc = 0x3770F0u;
            goto label_3770f0;
        }
    }
    ctx->pc = 0x3770A4u;
    // 0x3770a4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3770a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3770a8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3770a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3770ac: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x3770acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3770b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3770b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3770b4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3770b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3770b8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3770b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3770bc: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3770bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3770c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3770c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3770c4: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3770C4u;
    {
        const bool branch_taken_0x3770c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3770C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770C4u;
        // 0x3770c8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770c4) {
            ctx->pc = 0x3770F0u;
            goto label_3770f0;
        }
    }
    ctx->pc = 0x3770CCu;
    // 0x3770cc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3770ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3770d0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3770d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3770d4: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x3770d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3770d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3770d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3770dc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3770dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3770e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3770e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3770e4: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3770e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3770e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3770e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3770ec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3770ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3770f0:
    // 0x3770f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3770F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3770F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770F0u;
        // 0x3770f4: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3770F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3770F8u;
}
