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

// Function: sub_00385FF0
// Address: 0x385ff0 - 0x3864f8
void sub_00385FF0_0x385ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385FF0_0x385ff0");
#endif

    switch (ctx->pc) {
        case 0x386040u: goto label_386040;
        case 0x386074u: goto label_386074;
        case 0x38608cu: goto label_38608c;
        case 0x3860c4u: goto label_3860c4;
        case 0x3860d8u: goto label_3860d8;
        case 0x386154u: goto label_386154;
        case 0x3861c4u: goto label_3861c4;
        case 0x3861d0u: goto label_3861d0;
        case 0x3861ecu: goto label_3861ec;
        case 0x386230u: goto label_386230;
        case 0x38623cu: goto label_38623c;
        case 0x386254u: goto label_386254;
        case 0x38629cu: goto label_38629c;
        case 0x3862a8u: goto label_3862a8;
        case 0x3862c4u: goto label_3862c4;
        case 0x3862f0u: goto label_3862f0;
        case 0x386320u: goto label_386320;
        case 0x38632cu: goto label_38632c;
        case 0x386340u: goto label_386340;
        case 0x386398u: goto label_386398;
        case 0x3863a4u: goto label_3863a4;
        case 0x3863bcu: goto label_3863bc;
        case 0x3863e8u: goto label_3863e8;
        case 0x386454u: goto label_386454;
        case 0x38646cu: goto label_38646c;
        case 0x38648cu: goto label_38648c;
        case 0x3864acu: goto label_3864ac;
        case 0x3864bcu: goto label_3864bc;
        default: break;
    }

    ctx->pc = 0x385ff0u;

    // 0x385ff0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x385ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x385ff4: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x385ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x385ff8: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x385ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x385ffc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x385ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386000: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x386000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x386004: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x386004u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386008: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x386008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x38600c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x38600cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386010: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x386010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x386014: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x386014u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386018: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x386018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x38601c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x38601cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386020: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x386020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x386024: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x386024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x386028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x386028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38602c: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x38602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x386030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x386030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386034: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x386034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x386038: 0xc103322  jal         func_40CC88
    ctx->pc = 0x386038u;
    SET_GPR_U32(ctx, 31, 0x386040u);
    ctx->pc = 0x38603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386038u;
    // 0x38603c: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x386038u, 0x386040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386040u;
label_386040:
    // 0x386040: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x386040u;
    {
        const bool branch_taken_0x386040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386040u;
        // 0x386044: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386040) {
            ctx->pc = 0x3860D8u;
            goto label_3860d8;
        }
    }
    ctx->pc = 0x386048u;
    // 0x386048: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x386048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x38604c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x386050: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386054: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x386054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x386058: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x386058u;
    {
        const bool branch_taken_0x386058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386058) {
            ctx->pc = 0x38605Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386058u;
            // 0x38605c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386080u;
            goto label_386080;
        }
    }
    ctx->pc = 0x386060u;
    // 0x386060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386064: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386068: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x386068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x38606c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x38606Cu;
    SET_GPR_U32(ctx, 31, 0x386074u);
    ctx->pc = 0x386070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38606Cu;
    // 0x386070: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38606Cu, 0x386074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386074u;
label_386074:
    // 0x386074: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x386074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x386078: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x386078u;
    {
        const bool branch_taken_0x386078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386078u;
        // 0x38607c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386078) {
            ctx->pc = 0x3860D0u;
            goto label_3860d0;
        }
    }
    ctx->pc = 0x386080u;
label_386080:
    // 0x386080: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x386080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386084: 0xc10480a  jal         func_412028
    ctx->pc = 0x386084u;
    SET_GPR_U32(ctx, 31, 0x38608Cu);
    ctx->pc = 0x386088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386084u;
    // 0x386088: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x386084u, 0x38608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38608Cu;
label_38608c:
    // 0x38608c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x38608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x386090: 0x1443010d  bne         $v0, $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x386090u;
    {
        const bool branch_taken_0x386090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x386094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386090u;
        // 0x386094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386090) {
            ctx->pc = 0x3864C8u;
            goto label_3864c8;
        }
    }
    ctx->pc = 0x386098u;
    // 0x386098: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x386098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x38609c: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x38609cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3860a0: 0x8c65ae40  lw          $a1, -0x51C0($v1)
    ctx->pc = 0x3860a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5DAE40u));
    // 0x3860a4: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x3860a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3860a8: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x3860A8u;
    {
        const bool branch_taken_0x3860a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3860ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860A8u;
        // 0x3860ac: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860a8) {
            ctx->pc = 0x3860E0u;
            goto label_3860e0;
        }
    }
    ctx->pc = 0x3860B0u;
    // 0x3860b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3860b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3860b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3860b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3860b8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3860b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3860bc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3860BCu;
    SET_GPR_U32(ctx, 31, 0x3860C4u);
    ctx->pc = 0x3860C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3860BCu;
    // 0x3860c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3860BCu, 0x3860C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3860C4u;
label_3860c4:
    // 0x3860c4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3860c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x3860c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3860c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3860cc: 0x0  nop
    ctx->pc = 0x3860ccu;
    // NOP
label_3860d0:
    // 0x3860d0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3860D0u;
    SET_GPR_U32(ctx, 31, 0x3860D8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3860D0u, 0x3860D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3860D8u;
label_3860d8:
    // 0x3860d8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x3860D8u;
    {
        const bool branch_taken_0x3860d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860D8u;
        // 0x3860dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860d8) {
            ctx->pc = 0x3864C8u;
            goto label_3864c8;
        }
    }
    ctx->pc = 0x3860E0u;
label_3860e0:
    // 0x3860e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3860e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3860e4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3860e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3860e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3860e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3860ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3860ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3860f0: 0x6ba20013  ldl         $v0, 0x13($sp)
    ctx->pc = 0x3860f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3860f4: 0x6fa2000c  ldr         $v0, 0xC($sp)
    ctx->pc = 0x3860f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3860f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3860f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3860fc: 0xb2420073  sdl         $v0, 0x73($s2)
    ctx->pc = 0x3860fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386100: 0xb642006c  sdr         $v0, 0x6C($s2)
    ctx->pc = 0x386100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386104: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x386104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x386108: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x386108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x38610c: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x38610cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x386110: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x386110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386114: 0xb2470067  sdl         $a3, 0x67($s2)
    ctx->pc = 0x386114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386118: 0xb6470060  sdr         $a3, 0x60($s2)
    ctx->pc = 0x386118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38611c: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x38611cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x386120: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x386120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x386124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x386124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386128: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x386128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38612c: 0xa6420080  sh          $v0, 0x80($s2)
    ctx->pc = 0x38612cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x386130: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x386130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x386134: 0xa6430084  sh          $v1, 0x84($s2)
    ctx->pc = 0x386134u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x386138: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x386138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38613c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x38613cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x386140: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x386140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x386144: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x386144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x386148: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x386148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x38614c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x38614Cu;
    SET_GPR_U32(ctx, 31, 0x386154u);
    ctx->pc = 0x386150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38614Cu;
    // 0x386150: 0xa6420082  sh          $v0, 0x82($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 130), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x38614Cu, 0x386154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386154u;
label_386154:
    // 0x386154: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x386154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x386158: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x386158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x38615c: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x38615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x386160: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x386160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x386164: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x386164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x386168: 0xae44003c  sw          $a0, 0x3C($s2)
    ctx->pc = 0x386168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 4));
    // 0x38616c: 0xae450044  sw          $a1, 0x44($s2)
    ctx->pc = 0x38616cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 5));
    // 0x386170: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x386170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x386174: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x386174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x386178: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x386178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x38617c: 0xae440038  sw          $a0, 0x38($s2)
    ctx->pc = 0x38617cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
    // 0x386180: 0x146000ae  bnez        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x386180u;
    {
        const bool branch_taken_0x386180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386180u;
        // 0x386184: 0xae450040  sw          $a1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386180) {
            ctx->pc = 0x38643Cu;
            goto label_38643c;
        }
    }
    ctx->pc = 0x386188u;
    // 0x386188: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x386188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38618c: 0x10a00073  beqz        $a1, . + 4 + (0x73 << 2)
    ctx->pc = 0x38618Cu;
    {
        const bool branch_taken_0x38618c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x386190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38618Cu;
        // 0x386190: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38618c) {
            ctx->pc = 0x38635Cu;
            goto label_38635c;
        }
    }
    ctx->pc = 0x386194u;
    // 0x386194: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x386194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x386198: 0xa28018  mult        $s0, $a1, $v0
    ctx->pc = 0x386198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x38619c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x38619cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x3861a0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3861a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3861a4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3861A4u;
    {
        const bool branch_taken_0x3861a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3861A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861A4u;
        // 0x3861a8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861a4) {
            ctx->pc = 0x3861D8u;
            goto label_3861d8;
        }
    }
    ctx->pc = 0x3861ACu;
    // 0x3861ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3861acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3861b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3861b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3861b4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3861b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x3861b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3861b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3861bc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3861BCu;
    SET_GPR_U32(ctx, 31, 0x3861C4u);
    ctx->pc = 0x3861C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3861BCu;
    // 0x3861c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3861BCu, 0x3861C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3861C4u;
label_3861c4:
    // 0x3861c4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x3861c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x3861c8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3861C8u;
    SET_GPR_U32(ctx, 31, 0x3861D0u);
    ctx->pc = 0x3861CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3861C8u;
    // 0x3861cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3861C8u, 0x3861D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3861D0u;
label_3861d0:
    // 0x3861d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3861d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3861d4: 0x0  nop
    ctx->pc = 0x3861d4u;
    // NOP
label_3861d8:
    // 0x3861d8: 0x128000ae  beqz        $s4, . + 4 + (0xAE << 2)
    ctx->pc = 0x3861D8u;
    {
        const bool branch_taken_0x3861d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3861DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861D8u;
        // 0x3861dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861d8) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x3861E0u;
    // 0x3861e0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3861e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3861e4: 0xc103454  jal         func_40D150
    ctx->pc = 0x3861E4u;
    SET_GPR_U32(ctx, 31, 0x3861ECu);
    ctx->pc = 0x3861E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3861E4u;
    // 0x3861e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3861E4u, 0x3861ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3861ECu;
label_3861ec:
    // 0x3861ec: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x3861ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x3861f0: 0x128000a8  beqz        $s4, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3861F0u;
    {
        const bool branch_taken_0x3861f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3861F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861F0u;
        // 0x3861f4: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861f0) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x3861F8u;
    // 0x3861f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3861F8u;
    {
        const bool branch_taken_0x3861f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3861FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861F8u;
        // 0x3861fc: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861f8) {
            ctx->pc = 0x38625Cu;
            goto label_38625c;
        }
    }
    ctx->pc = 0x386200u;
    // 0x386200: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x386200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x386204: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x386204u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386208: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x386208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x38620c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x38620cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x386210: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x386210u;
    {
        const bool branch_taken_0x386210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386210u;
        // 0x386214: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386210) {
            ctx->pc = 0x386240u;
            goto label_386240;
        }
    }
    ctx->pc = 0x386218u;
    // 0x386218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38621c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38621cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386220: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x386220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x386224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x386224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386228: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x386228u;
    SET_GPR_U32(ctx, 31, 0x386230u);
    ctx->pc = 0x38622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386228u;
    // 0x38622c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386228u, 0x386230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386230u;
label_386230:
    // 0x386230: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x386230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x386234: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x386234u;
    SET_GPR_U32(ctx, 31, 0x38623Cu);
    ctx->pc = 0x386238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386234u;
    // 0x386238: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x386234u, 0x38623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38623Cu;
label_38623c:
    // 0x38623c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38623cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386240:
    // 0x386240: 0x12800094  beqz        $s4, . + 4 + (0x94 << 2)
    ctx->pc = 0x386240u;
    {
        const bool branch_taken_0x386240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x386244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386240u;
        // 0x386244: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386240) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x386248u;
    // 0x386248: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x386248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x38624c: 0xc10480a  jal         func_412028
    ctx->pc = 0x38624Cu;
    SET_GPR_U32(ctx, 31, 0x386254u);
    ctx->pc = 0x386250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38624Cu;
    // 0x386250: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38624Cu, 0x386254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386254u;
label_386254:
    // 0x386254: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x386254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x386258: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x386258u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_38625c:
    // 0x38625c: 0x1280008d  beqz        $s4, . + 4 + (0x8D << 2)
    ctx->pc = 0x38625Cu;
    {
        const bool branch_taken_0x38625c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x386260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38625Cu;
        // 0x386260: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38625c) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x386264u;
    // 0x386264: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x386264u;
    {
        const bool branch_taken_0x386264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386264u;
        // 0x386268: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386264) {
            ctx->pc = 0x3862C8u;
            goto label_3862c8;
        }
    }
    ctx->pc = 0x38626Cu;
    // 0x38626c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x38626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x386270: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x386270u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386274: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x386274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x386278: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x386278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x38627c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x38627Cu;
    {
        const bool branch_taken_0x38627c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38627Cu;
        // 0x386280: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38627c) {
            ctx->pc = 0x3862B0u;
            goto label_3862b0;
        }
    }
    ctx->pc = 0x386284u;
    // 0x386284: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386288: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x38628c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x38628cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x386290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x386290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386294: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x386294u;
    SET_GPR_U32(ctx, 31, 0x38629Cu);
    ctx->pc = 0x386298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386294u;
    // 0x386298: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386294u, 0x38629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38629Cu;
label_38629c:
    // 0x38629c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x38629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x3862a0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3862A0u;
    SET_GPR_U32(ctx, 31, 0x3862A8u);
    ctx->pc = 0x3862A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3862A0u;
    // 0x3862a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3862A0u, 0x3862A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862A8u;
label_3862a8:
    // 0x3862a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3862a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3862ac: 0x0  nop
    ctx->pc = 0x3862acu;
    // NOP
label_3862b0:
    // 0x3862b0: 0x12800078  beqz        $s4, . + 4 + (0x78 << 2)
    ctx->pc = 0x3862B0u;
    {
        const bool branch_taken_0x3862b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3862B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862B0u;
        // 0x3862b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862b0) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x3862B8u;
    // 0x3862b8: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x3862b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3862bc: 0xc10480a  jal         func_412028
    ctx->pc = 0x3862BCu;
    SET_GPR_U32(ctx, 31, 0x3862C4u);
    ctx->pc = 0x3862C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3862BCu;
    // 0x3862c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3862BCu, 0x3862C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862C4u;
label_3862c4:
    // 0x3862c4: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x3862c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_3862c8:
    // 0x3862c8: 0x52800073  beql        $s4, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x3862C8u;
    {
        const bool branch_taken_0x3862c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3862c8) {
            ctx->pc = 0x3862CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3862C8u;
            // 0x3862cc: 0x93c20003  lbu         $v0, 0x3($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386498u;
            goto label_386498;
        }
    }
    ctx->pc = 0x3862D0u;
    // 0x3862d0: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3862d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3862d4: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3862D4u;
    {
        const bool branch_taken_0x3862d4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3862d4) {
            ctx->pc = 0x38635Cu;
            goto label_38635c;
        }
    }
    ctx->pc = 0x3862DCu;
    // 0x3862dc: 0x96420082  lhu         $v0, 0x82($s2)
    ctx->pc = 0x3862dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x3862e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3862e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3862e4: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3862E4u;
    {
        const bool branch_taken_0x3862e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3862E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862E4u;
        // 0x3862e8: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862e4) {
            ctx->pc = 0x38635Cu;
            goto label_38635c;
        }
    }
    ctx->pc = 0x3862ECu;
    // 0x3862ec: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x3862ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3862f0:
    // 0x3862f0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3862f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3862f4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x3862f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3862f8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x3862f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x3862fc: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x3862FCu;
    {
        const bool branch_taken_0x3862fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x386300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862FCu;
        // 0x386300: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862fc) {
            ctx->pc = 0x386348u;
            goto label_386348;
        }
    }
    ctx->pc = 0x386304u;
    // 0x386304: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x386304u;
    {
        const bool branch_taken_0x386304 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x386308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386304u;
        // 0x386308: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386304) {
            ctx->pc = 0x386338u;
            goto label_386338;
        }
    }
    ctx->pc = 0x38630Cu;
    // 0x38630c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38630cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386310: 0xafb60080  sw          $s6, 0x80($sp)
    ctx->pc = 0x386310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 22));
    // 0x386314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x386314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386318: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x386318u;
    SET_GPR_U32(ctx, 31, 0x386320u);
    ctx->pc = 0x38631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386318u;
    // 0x38631c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386318u, 0x386320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386320u;
label_386320:
    // 0x386320: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x386320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x386324: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x386324u;
    SET_GPR_U32(ctx, 31, 0x38632Cu);
    ctx->pc = 0x386328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386324u;
    // 0x386328: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x386324u, 0x38632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38632Cu;
label_38632c:
    // 0x38632c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38632Cu;
    {
        const bool branch_taken_0x38632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38632Cu;
        // 0x386330: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38632c) {
            ctx->pc = 0x38635Cu;
            goto label_38635c;
        }
    }
    ctx->pc = 0x386334u;
    // 0x386334: 0x0  nop
    ctx->pc = 0x386334u;
    // NOP
label_386338:
    // 0x386338: 0xc103454  jal         func_40D150
    ctx->pc = 0x386338u;
    SET_GPR_U32(ctx, 31, 0x386340u);
    ctx->pc = 0x38633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386338u;
    // 0x38633c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x386338u, 0x386340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386340u;
label_386340:
    // 0x386340: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x386340u;
    {
        const bool branch_taken_0x386340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386340) {
            ctx->pc = 0x386344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386340u;
            // 0x386344: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38635Cu;
            goto label_38635c;
        }
    }
    ctx->pc = 0x386348u;
label_386348:
    // 0x386348: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x386348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x38634c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38634cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x386350: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x386350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x386354: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x386354u;
    {
        const bool branch_taken_0x386354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386354u;
        // 0x386358: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386354) {
            ctx->pc = 0x3862F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3862f0;
        }
    }
    ctx->pc = 0x38635Cu;
label_38635c:
    // 0x38635c: 0x1280004d  beqz        $s4, . + 4 + (0x4D << 2)
    ctx->pc = 0x38635Cu;
    {
        const bool branch_taken_0x38635c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x386360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38635Cu;
        // 0x386360: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38635c) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x386364u;
    // 0x386364: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x386364u;
    {
        const bool branch_taken_0x386364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x386368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386364u;
        // 0x386368: 0x580c0  sll         $s0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386364) {
            ctx->pc = 0x38643Cu;
            goto label_38643c;
        }
    }
    ctx->pc = 0x38636Cu;
    // 0x38636c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x38636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x386370: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x386370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x386374: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x386374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x386378: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x386378u;
    {
        const bool branch_taken_0x386378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386378u;
        // 0x38637c: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386378) {
            ctx->pc = 0x3863A8u;
            goto label_3863a8;
        }
    }
    ctx->pc = 0x386380u;
    // 0x386380: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386384: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386388: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x386388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x38638c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38638cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386390: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x386390u;
    SET_GPR_U32(ctx, 31, 0x386398u);
    ctx->pc = 0x386394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386390u;
    // 0x386394: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386390u, 0x386398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386398u;
label_386398:
    // 0x386398: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x386398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x38639c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x38639Cu;
    SET_GPR_U32(ctx, 31, 0x3863A4u);
    ctx->pc = 0x3863A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38639Cu;
    // 0x3863a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38639Cu, 0x3863A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3863A4u;
label_3863a4:
    // 0x3863a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3863a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3863a8:
    // 0x3863a8: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x3863A8u;
    {
        const bool branch_taken_0x3863a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3863ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863A8u;
        // 0x3863ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3863a8) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x3863B0u;
    // 0x3863b0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3863b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3863b4: 0xc10347c  jal         func_40D1F0
    ctx->pc = 0x3863B4u;
    SET_GPR_U32(ctx, 31, 0x3863BCu);
    ctx->pc = 0x3863B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3863B4u;
    // 0x3863b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1F0u, 0x3863B4u, 0x3863BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3863BCu;
label_3863bc:
    // 0x3863bc: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x3863bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x3863c0: 0x12800034  beqz        $s4, . + 4 + (0x34 << 2)
    ctx->pc = 0x3863C0u;
    {
        const bool branch_taken_0x3863c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3863C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863C0u;
        // 0x3863c4: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3863c0) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x3863C8u;
    // 0x3863c8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3863c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3863cc: 0x34426001  ori         $v0, $v0, 0x6001
    ctx->pc = 0x3863ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24577);
    // 0x3863d0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3863d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3863d4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3863D4u;
    {
        const bool branch_taken_0x3863d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3863D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863D4u;
        // 0x3863d8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3863d4) {
            ctx->pc = 0x38643Cu;
            goto label_38643c;
        }
    }
    ctx->pc = 0x3863DCu;
    // 0x3863dc: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3863DCu;
    {
        const bool branch_taken_0x3863dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3863E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863DCu;
        // 0x3863e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3863dc) {
            ctx->pc = 0x38643Cu;
            goto label_38643c;
        }
    }
    ctx->pc = 0x3863E4u;
    // 0x3863e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3863e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3863e8:
    // 0x3863e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3863e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3863ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3863ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3863f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3863f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3863f4: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x3863f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3863f8: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x3863f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3863fc: 0xb3a700a7  sdl         $a3, 0xA7($sp)
    ctx->pc = 0x3863fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386400: 0xb7a700a0  sdr         $a3, 0xA0($sp)
    ctx->pc = 0x386400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386404: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x386404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x386408: 0x97a200a2  lhu         $v0, 0xA2($sp)
    ctx->pc = 0x386408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 162)));
    // 0x38640c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x38640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x386410: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x386410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x386414: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x386414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x386418: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x386418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x38641c: 0x225282a  slt         $a1, $s1, $a1
    ctx->pc = 0x38641cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x386420: 0x97a200a4  lhu         $v0, 0xA4($sp)
    ctx->pc = 0x386420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x386424: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x386424u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x386428: 0x97a300a6  lhu         $v1, 0xA6($sp)
    ctx->pc = 0x386428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x38642c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x38642cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x386430: 0x97a200a0  lhu         $v0, 0xA0($sp)
    ctx->pc = 0x386430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x386434: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x386434u;
    {
        const bool branch_taken_0x386434 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x386438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386434u;
        // 0x386438: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386434) {
            ctx->pc = 0x3863E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3863e8;
        }
    }
    ctx->pc = 0x38643Cu;
label_38643c:
    // 0x38643c: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x38643Cu;
    {
        const bool branch_taken_0x38643c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x386440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38643Cu;
        // 0x386440: 0x3c06005e  lui         $a2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38643c) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x386444u;
    // 0x386444: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x386444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386448: 0x24d0ae40  addiu       $s0, $a2, -0x51C0
    ctx->pc = 0x386448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946368));
    // 0x38644c: 0xc104c80  jal         func_413200
    ctx->pc = 0x38644Cu;
    SET_GPR_U32(ctx, 31, 0x386454u);
    ctx->pc = 0x386450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38644Cu;
    // 0x386450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x38644Cu, 0x386454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386454u;
label_386454:
    // 0x386454: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x386454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386458: 0xaf80bd18  sw          $zero, -0x42E8($gp)
    ctx->pc = 0x386458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950168), GPR_U32(ctx, 0));
    // 0x38645c: 0xaf80bd1c  sw          $zero, -0x42E4($gp)
    ctx->pc = 0x38645cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950172), GPR_U32(ctx, 0));
    // 0x386460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x386460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386464: 0xc1049e2  jal         func_412788
    ctx->pc = 0x386464u;
    SET_GPR_U32(ctx, 31, 0x38646Cu);
    ctx->pc = 0x386468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386464u;
    // 0x386468: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x386464u, 0x38646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38646Cu;
label_38646c:
    // 0x38646c: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x38646cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x386470: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x386470u;
    {
        const bool branch_taken_0x386470 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x386474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386470u;
        // 0x386474: 0x8f85bd18  lw          $a1, -0x42E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386470) {
            ctx->pc = 0x386494u;
            goto label_386494;
        }
    }
    ctx->pc = 0x386478u;
    // 0x386478: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x386478u;
    {
        const bool branch_taken_0x386478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386478u;
        // 0x38647c: 0x8f87bd1c  lw          $a3, -0x42E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386478) {
            ctx->pc = 0x3864C4u;
            goto label_3864c4;
        }
    }
    ctx->pc = 0x386480u;
    // 0x386480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x386480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386484: 0xc104b0a  jal         func_412C28
    ctx->pc = 0x386484u;
    SET_GPR_U32(ctx, 31, 0x38648Cu);
    ctx->pc = 0x386488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386484u;
    // 0x386488: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412C28u, 0x386484u, 0x38648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38648Cu;
label_38648c:
    // 0x38648c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x38648Cu;
    {
        const bool branch_taken_0x38648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38648Cu;
        // 0x386490: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38648c) {
            ctx->pc = 0x3864C8u;
            goto label_3864c8;
        }
    }
    ctx->pc = 0x386494u;
label_386494:
    // 0x386494: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x386494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
label_386498:
    // 0x386498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x386498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38649c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38649Cu;
    {
        const bool branch_taken_0x38649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38649c) {
            ctx->pc = 0x3864B4u;
            goto label_3864b4;
        }
    }
    ctx->pc = 0x3864A4u;
    // 0x3864a4: 0xc0e6796  jal         func_399E58
    ctx->pc = 0x3864A4u;
    SET_GPR_U32(ctx, 31, 0x3864ACu);
    ctx->pc = 0x3864A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864A4u;
    // 0x3864a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E58u, 0x3864A4u, 0x3864ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864ACu;
label_3864ac:
    // 0x3864ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3864ACu;
    {
        const bool branch_taken_0x3864ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3864B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864ACu;
        // 0x3864b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3864ac) {
            ctx->pc = 0x3864C8u;
            goto label_3864c8;
        }
    }
    ctx->pc = 0x3864B4u;
label_3864b4:
    // 0x3864b4: 0xc0e6490  jal         func_399240
    ctx->pc = 0x3864B4u;
    SET_GPR_U32(ctx, 31, 0x3864BCu);
    ctx->pc = 0x3864B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864B4u;
    // 0x3864b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399240u, 0x3864B4u, 0x3864BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864BCu;
label_3864bc:
    // 0x3864bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3864BCu;
    {
        const bool branch_taken_0x3864bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3864C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864BCu;
        // 0x3864c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3864bc) {
            ctx->pc = 0x3864C8u;
            goto label_3864c8;
        }
    }
    ctx->pc = 0x3864C4u;
label_3864c4:
    // 0x3864c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3864c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3864c8:
    // 0x3864c8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3864c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3864cc: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3864ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3864d0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3864d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3864d4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3864d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3864d8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3864d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3864dc: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3864dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3864e0: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x3864e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3864e4: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x3864e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3864e8: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x3864e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3864ec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3864ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3864f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3864F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3864F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864F0u;
        // 0x3864f4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3864F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3864F8u;
}
