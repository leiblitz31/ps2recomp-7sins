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

// Function: sub_0037CFD0
// Address: 0x37cfd0 - 0x37d1e0
void sub_0037CFD0_0x37cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CFD0_0x37cfd0");
#endif

    switch (ctx->pc) {
        case 0x37cfd0u: goto label_37cfd0;
        case 0x37cfd4u: goto label_37cfd4;
        case 0x37cfd8u: goto label_37cfd8;
        case 0x37cfdcu: goto label_37cfdc;
        case 0x37cfe0u: goto label_37cfe0;
        case 0x37cfe4u: goto label_37cfe4;
        case 0x37cfe8u: goto label_37cfe8;
        case 0x37cfecu: goto label_37cfec;
        case 0x37cff0u: goto label_37cff0;
        case 0x37cff4u: goto label_37cff4;
        case 0x37cff8u: goto label_37cff8;
        case 0x37cffcu: goto label_37cffc;
        case 0x37d000u: goto label_37d000;
        case 0x37d004u: goto label_37d004;
        case 0x37d008u: goto label_37d008;
        case 0x37d00cu: goto label_37d00c;
        case 0x37d010u: goto label_37d010;
        case 0x37d014u: goto label_37d014;
        case 0x37d018u: goto label_37d018;
        case 0x37d01cu: goto label_37d01c;
        case 0x37d020u: goto label_37d020;
        case 0x37d024u: goto label_37d024;
        case 0x37d028u: goto label_37d028;
        case 0x37d02cu: goto label_37d02c;
        case 0x37d030u: goto label_37d030;
        case 0x37d034u: goto label_37d034;
        case 0x37d038u: goto label_37d038;
        case 0x37d03cu: goto label_37d03c;
        case 0x37d040u: goto label_37d040;
        case 0x37d044u: goto label_37d044;
        case 0x37d048u: goto label_37d048;
        case 0x37d04cu: goto label_37d04c;
        case 0x37d050u: goto label_37d050;
        case 0x37d054u: goto label_37d054;
        case 0x37d058u: goto label_37d058;
        case 0x37d05cu: goto label_37d05c;
        case 0x37d060u: goto label_37d060;
        case 0x37d064u: goto label_37d064;
        case 0x37d068u: goto label_37d068;
        case 0x37d06cu: goto label_37d06c;
        case 0x37d070u: goto label_37d070;
        case 0x37d074u: goto label_37d074;
        case 0x37d078u: goto label_37d078;
        case 0x37d07cu: goto label_37d07c;
        case 0x37d080u: goto label_37d080;
        case 0x37d084u: goto label_37d084;
        case 0x37d088u: goto label_37d088;
        case 0x37d08cu: goto label_37d08c;
        case 0x37d090u: goto label_37d090;
        case 0x37d094u: goto label_37d094;
        case 0x37d098u: goto label_37d098;
        case 0x37d09cu: goto label_37d09c;
        case 0x37d0a0u: goto label_37d0a0;
        case 0x37d0a4u: goto label_37d0a4;
        case 0x37d0a8u: goto label_37d0a8;
        case 0x37d0acu: goto label_37d0ac;
        case 0x37d0b0u: goto label_37d0b0;
        case 0x37d0b4u: goto label_37d0b4;
        case 0x37d0b8u: goto label_37d0b8;
        case 0x37d0bcu: goto label_37d0bc;
        case 0x37d0c0u: goto label_37d0c0;
        case 0x37d0c4u: goto label_37d0c4;
        case 0x37d0c8u: goto label_37d0c8;
        case 0x37d0ccu: goto label_37d0cc;
        case 0x37d0d0u: goto label_37d0d0;
        case 0x37d0d4u: goto label_37d0d4;
        case 0x37d0d8u: goto label_37d0d8;
        case 0x37d0dcu: goto label_37d0dc;
        case 0x37d0e0u: goto label_37d0e0;
        case 0x37d0e4u: goto label_37d0e4;
        case 0x37d0e8u: goto label_37d0e8;
        case 0x37d0ecu: goto label_37d0ec;
        case 0x37d0f0u: goto label_37d0f0;
        case 0x37d0f4u: goto label_37d0f4;
        case 0x37d0f8u: goto label_37d0f8;
        case 0x37d0fcu: goto label_37d0fc;
        case 0x37d100u: goto label_37d100;
        case 0x37d104u: goto label_37d104;
        case 0x37d108u: goto label_37d108;
        case 0x37d10cu: goto label_37d10c;
        case 0x37d110u: goto label_37d110;
        case 0x37d114u: goto label_37d114;
        case 0x37d118u: goto label_37d118;
        case 0x37d11cu: goto label_37d11c;
        case 0x37d120u: goto label_37d120;
        case 0x37d124u: goto label_37d124;
        case 0x37d128u: goto label_37d128;
        case 0x37d12cu: goto label_37d12c;
        case 0x37d130u: goto label_37d130;
        case 0x37d134u: goto label_37d134;
        case 0x37d138u: goto label_37d138;
        case 0x37d13cu: goto label_37d13c;
        case 0x37d140u: goto label_37d140;
        case 0x37d144u: goto label_37d144;
        case 0x37d148u: goto label_37d148;
        case 0x37d14cu: goto label_37d14c;
        case 0x37d150u: goto label_37d150;
        case 0x37d154u: goto label_37d154;
        case 0x37d158u: goto label_37d158;
        case 0x37d15cu: goto label_37d15c;
        case 0x37d160u: goto label_37d160;
        case 0x37d164u: goto label_37d164;
        case 0x37d168u: goto label_37d168;
        case 0x37d16cu: goto label_37d16c;
        case 0x37d170u: goto label_37d170;
        case 0x37d174u: goto label_37d174;
        case 0x37d178u: goto label_37d178;
        case 0x37d17cu: goto label_37d17c;
        case 0x37d180u: goto label_37d180;
        case 0x37d184u: goto label_37d184;
        case 0x37d188u: goto label_37d188;
        case 0x37d18cu: goto label_37d18c;
        case 0x37d190u: goto label_37d190;
        case 0x37d194u: goto label_37d194;
        case 0x37d198u: goto label_37d198;
        case 0x37d19cu: goto label_37d19c;
        case 0x37d1a0u: goto label_37d1a0;
        case 0x37d1a4u: goto label_37d1a4;
        case 0x37d1a8u: goto label_37d1a8;
        case 0x37d1acu: goto label_37d1ac;
        case 0x37d1b0u: goto label_37d1b0;
        case 0x37d1b4u: goto label_37d1b4;
        case 0x37d1b8u: goto label_37d1b8;
        case 0x37d1bcu: goto label_37d1bc;
        case 0x37d1c0u: goto label_37d1c0;
        case 0x37d1c4u: goto label_37d1c4;
        case 0x37d1c8u: goto label_37d1c8;
        case 0x37d1ccu: goto label_37d1cc;
        case 0x37d1d0u: goto label_37d1d0;
        case 0x37d1d4u: goto label_37d1d4;
        case 0x37d1d8u: goto label_37d1d8;
        case 0x37d1dcu: goto label_37d1dc;
        default: break;
    }

    ctx->pc = 0x37cfd0u;

label_37cfd0:
    // 0x37cfd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_37cfd4:
    // 0x37cfd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37cfd8:
    // 0x37cfd8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x37cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_37cfdc:
    // 0x37cfdc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x37cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_37cfe0:
    // 0x37cfe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37cfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37cfe4:
    // 0x37cfe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37cfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_37cfe8:
    // 0x37cfe8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x37cfe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37cfec:
    // 0x37cfec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x37cfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_37cff0:
    // 0x37cff0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x37cff0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37cff4:
    // 0x37cff4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x37cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_37cff8:
    // 0x37cff8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_37cffc:
    // 0x37cffc: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
label_37d000:
    if (ctx->pc == 0x37D000u) {
        ctx->pc = 0x37D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFFCu;
        // 0x37d000: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D004u;
        goto label_37d004;
    }
    ctx->pc = 0x37CFFCu;
    {
        const bool branch_taken_0x37cffc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFFCu;
        // 0x37d000: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cffc) {
            ctx->pc = 0x37D018u;
            goto label_37d018;
        }
    }
    ctx->pc = 0x37D004u;
label_37d004:
    // 0x37d004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37d008:
    // 0x37d008: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
label_37d00c:
    if (ctx->pc == 0x37D00Cu) {
        ctx->pc = 0x37D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D008u;
        // 0x37d00c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D010u;
        goto label_37d010;
    }
    ctx->pc = 0x37D008u;
    {
        const bool branch_taken_0x37d008 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D008u;
        // 0x37d00c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d008) {
            ctx->pc = 0x37D080u;
            goto label_37d080;
        }
    }
    ctx->pc = 0x37D010u;
label_37d010:
    // 0x37d010: 0x10000035  b           . + 4 + (0x35 << 2)
label_37d014:
    if (ctx->pc == 0x37D014u) {
        ctx->pc = 0x37D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D010u;
        // 0x37d014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D018u;
        goto label_37d018;
    }
    ctx->pc = 0x37D010u;
    {
        const bool branch_taken_0x37d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D010u;
        // 0x37d014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d010) {
            ctx->pc = 0x37D0E8u;
            goto label_37d0e8;
        }
    }
    ctx->pc = 0x37D018u;
label_37d018:
    // 0x37d018: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x37d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37d01c:
    // 0x37d01c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x37d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37d020:
    // 0x37d020: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x37d020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37d024:
    // 0x37d024: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x37d024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_37d028:
    // 0x37d028: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x37d028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_37d02c:
    // 0x37d02c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37d030:
    // 0x37d030: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37d034:
    // 0x37d034: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x37d034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_37d038:
    // 0x37d038: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x37d038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37d03c:
    // 0x37d03c: 0x24910044  addiu       $s1, $a0, 0x44
    ctx->pc = 0x37d03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_37d040:
    // 0x37d040: 0x40f809  jalr        $v0
label_37d044:
    if (ctx->pc == 0x37D044u) {
        ctx->pc = 0x37D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D040u;
        // 0x37d044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D048u;
        goto label_37d048;
    }
    ctx->pc = 0x37D040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D048u);
        ctx->pc = 0x37D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D040u;
        // 0x37d044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D040u, 0x37D048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D048u;
label_37d048:
    // 0x37d048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37d048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d04c:
    // 0x37d04c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_37d050:
    if (ctx->pc == 0x37D050u) {
        ctx->pc = 0x37D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D04Cu;
        // 0x37d050: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D054u;
        goto label_37d054;
    }
    ctx->pc = 0x37D04Cu;
    {
        const bool branch_taken_0x37d04c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D04Cu;
        // 0x37d050: 0x26420002  addiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d04c) {
            ctx->pc = 0x37D078u;
            goto label_37d078;
        }
    }
    ctx->pc = 0x37D054u;
label_37d054:
    // 0x37d054: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37d054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37d058:
    // 0x37d058: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37d058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37d05c:
    // 0x37d05c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37d060:
    // 0x37d060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37d060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37d064:
    // 0x37d064: 0xc1035f6  jal         func_40D7D8
label_37d068:
    if (ctx->pc == 0x37D068u) {
        ctx->pc = 0x37D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D064u;
        // 0x37d068: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D06Cu;
        goto label_37d06c;
    }
    ctx->pc = 0x37D064u;
    SET_GPR_U32(ctx, 31, 0x37D06Cu);
    ctx->pc = 0x37D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D064u;
    // 0x37d068: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D064u, 0x37D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D06Cu;
label_37d06c:
    // 0x37d06c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37d06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37d070:
    // 0x37d070: 0x1000004e  b           . + 4 + (0x4E << 2)
label_37d074:
    if (ctx->pc == 0x37D074u) {
        ctx->pc = 0x37D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D070u;
        // 0x37d074: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D078u;
        goto label_37d078;
    }
    ctx->pc = 0x37D070u;
    {
        const bool branch_taken_0x37d070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D070u;
        // 0x37d074: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d070) {
            ctx->pc = 0x37D1ACu;
            goto label_37d1ac;
        }
    }
    ctx->pc = 0x37D078u;
label_37d078:
    // 0x37d078: 0x10000021  b           . + 4 + (0x21 << 2)
label_37d07c:
    if (ctx->pc == 0x37D07Cu) {
        ctx->pc = 0x37D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D078u;
        // 0x37d07c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D080u;
        goto label_37d080;
    }
    ctx->pc = 0x37D078u;
    {
        const bool branch_taken_0x37d078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D078u;
        // 0x37d07c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d078) {
            ctx->pc = 0x37D100u;
            goto label_37d100;
        }
    }
    ctx->pc = 0x37D080u;
label_37d080:
    // 0x37d080: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x37d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37d084:
    // 0x37d084: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x37d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_37d088:
    // 0x37d088: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x37d088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37d08c:
    // 0x37d08c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x37d08cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_37d090:
    // 0x37d090: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x37d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_37d094:
    // 0x37d094: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37d094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37d098:
    // 0x37d098: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37d09c:
    // 0x37d09c: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x37d09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_37d0a0:
    // 0x37d0a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x37d0a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37d0a4:
    // 0x37d0a4: 0x24910044  addiu       $s1, $a0, 0x44
    ctx->pc = 0x37d0a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_37d0a8:
    // 0x37d0a8: 0x40f809  jalr        $v0
label_37d0ac:
    if (ctx->pc == 0x37D0ACu) {
        ctx->pc = 0x37D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0A8u;
        // 0x37d0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D0B0u;
        goto label_37d0b0;
    }
    ctx->pc = 0x37D0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D0B0u);
        ctx->pc = 0x37D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0A8u;
        // 0x37d0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D0A8u, 0x37D0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D0B0u;
label_37d0b0:
    // 0x37d0b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37d0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d0b4:
    // 0x37d0b4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_37d0b8:
    if (ctx->pc == 0x37D0B8u) {
        ctx->pc = 0x37D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0B4u;
        // 0x37d0b8: 0x26420003  addiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D0BCu;
        goto label_37d0bc;
    }
    ctx->pc = 0x37D0B4u;
    {
        const bool branch_taken_0x37d0b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0B4u;
        // 0x37d0b8: 0x26420003  addiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0b4) {
            ctx->pc = 0x37D0E0u;
            goto label_37d0e0;
        }
    }
    ctx->pc = 0x37D0BCu;
label_37d0bc:
    // 0x37d0bc: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37d0c0:
    // 0x37d0c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37d0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37d0c4:
    // 0x37d0c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_37d0c8:
    // 0x37d0c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37d0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37d0cc:
    // 0x37d0cc: 0xc1035f6  jal         func_40D7D8
label_37d0d0:
    if (ctx->pc == 0x37D0D0u) {
        ctx->pc = 0x37D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0CCu;
        // 0x37d0d0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D0D4u;
        goto label_37d0d4;
    }
    ctx->pc = 0x37D0CCu;
    SET_GPR_U32(ctx, 31, 0x37D0D4u);
    ctx->pc = 0x37D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D0CCu;
    // 0x37d0d0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D0CCu, 0x37D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D0D4u;
label_37d0d4:
    // 0x37d0d4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_37d0d8:
    // 0x37d0d8: 0x10000034  b           . + 4 + (0x34 << 2)
label_37d0dc:
    if (ctx->pc == 0x37D0DCu) {
        ctx->pc = 0x37D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0D8u;
        // 0x37d0dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D0E0u;
        goto label_37d0e0;
    }
    ctx->pc = 0x37D0D8u;
    {
        const bool branch_taken_0x37d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0D8u;
        // 0x37d0dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0d8) {
            ctx->pc = 0x37D1ACu;
            goto label_37d1ac;
        }
    }
    ctx->pc = 0x37D0E0u;
label_37d0e0:
    // 0x37d0e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_37d0e4:
    if (ctx->pc == 0x37D0E4u) {
        ctx->pc = 0x37D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0E0u;
        // 0x37d0e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D0E8u;
        goto label_37d0e8;
    }
    ctx->pc = 0x37D0E0u;
    {
        const bool branch_taken_0x37d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0E0u;
        // 0x37d0e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0e0) {
            ctx->pc = 0x37D100u;
            goto label_37d100;
        }
    }
    ctx->pc = 0x37D0E8u;
label_37d0e8:
    // 0x37d0e8: 0xc1035f6  jal         func_40D7D8
label_37d0ec:
    if (ctx->pc == 0x37D0ECu) {
        ctx->pc = 0x37D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0E8u;
        // 0x37d0ec: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D0F0u;
        goto label_37d0f0;
    }
    ctx->pc = 0x37D0E8u;
    SET_GPR_U32(ctx, 31, 0x37D0F0u);
    ctx->pc = 0x37D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D0E8u;
    // 0x37d0ec: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D0E8u, 0x37D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D0F0u;
label_37d0f0:
    // 0x37d0f0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_37d0f4:
    // 0x37d0f4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_37d0f8:
    if (ctx->pc == 0x37D0F8u) {
        ctx->pc = 0x37D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0F4u;
        // 0x37d0f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D0FCu;
        goto label_37d0fc;
    }
    ctx->pc = 0x37D0F4u;
    {
        const bool branch_taken_0x37d0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0F4u;
        // 0x37d0f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0f4) {
            ctx->pc = 0x37D1ACu;
            goto label_37d1ac;
        }
    }
    ctx->pc = 0x37D0FCu;
label_37d0fc:
    // 0x37d0fc: 0x0  nop
    ctx->pc = 0x37d0fcu;
    // NOP
label_37d100:
    // 0x37d100: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x37d100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37d104:
    // 0x37d104: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x37d104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_37d108:
    // 0x37d108: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x37d108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_37d10c:
    // 0x37d10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37d110:
    // 0x37d110: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x37d110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_37d114:
    // 0x37d114: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x37d114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37d118:
    // 0x37d118: 0xc0debba  jal         func_37AEE8
label_37d11c:
    if (ctx->pc == 0x37D11Cu) {
        ctx->pc = 0x37D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D118u;
        // 0x37d11c: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D120u;
        goto label_37d120;
    }
    ctx->pc = 0x37D118u;
    SET_GPR_U32(ctx, 31, 0x37D120u);
    ctx->pc = 0x37D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D118u;
    // 0x37d11c: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AEE8u, 0x37D118u, 0x37D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D120u;
label_37d120:
    // 0x37d120: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_37d124:
    if (ctx->pc == 0x37D124u) {
        ctx->pc = 0x37D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D120u;
        // 0x37d124: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D128u;
        goto label_37d128;
    }
    ctx->pc = 0x37D120u;
    {
        const bool branch_taken_0x37d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d120) {
            ctx->pc = 0x37D124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D120u;
            // 0x37d124: 0xa2110000  sb          $s1, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D140u;
            goto label_37d140;
        }
    }
    ctx->pc = 0x37D128u;
label_37d128:
    // 0x37d128: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x37d128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_37d12c:
    // 0x37d12c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x37d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_37d130:
    // 0x37d130: 0x40f809  jalr        $v0
label_37d134:
    if (ctx->pc == 0x37D134u) {
        ctx->pc = 0x37D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D130u;
        // 0x37d134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D138u;
        goto label_37d138;
    }
    ctx->pc = 0x37D130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D138u);
        ctx->pc = 0x37D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D130u;
        // 0x37d134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D130u, 0x37D138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D138u;
label_37d138:
    // 0x37d138: 0x1000001f  b           . + 4 + (0x1F << 2)
label_37d13c:
    if (ctx->pc == 0x37D13Cu) {
        ctx->pc = 0x37D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D138u;
        // 0x37d13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D140u;
        goto label_37d140;
    }
    ctx->pc = 0x37D138u;
    {
        const bool branch_taken_0x37d138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D138u;
        // 0x37d13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d138) {
            ctx->pc = 0x37D1B8u;
            goto label_37d1b8;
        }
    }
    ctx->pc = 0x37D140u;
label_37d140:
    // 0x37d140: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x37d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37d144:
    // 0x37d144: 0x2428818  mult        $s1, $s2, $v0
    ctx->pc = 0x37d144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_37d148:
    // 0x37d148: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37d148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37d14c:
    // 0x37d14c: 0x2692e880  addiu       $s2, $s4, -0x1780
    ctx->pc = 0x37d14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_37d150:
    // 0x37d150: 0x34a5000c  ori         $a1, $a1, 0xC
    ctx->pc = 0x37d150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12);
label_37d154:
    // 0x37d154: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x37d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_37d158:
    // 0x37d158: 0x40f809  jalr        $v0
label_37d15c:
    if (ctx->pc == 0x37D15Cu) {
        ctx->pc = 0x37D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D158u;
        // 0x37d15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D160u;
        goto label_37d160;
    }
    ctx->pc = 0x37D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D160u);
        ctx->pc = 0x37D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D158u;
        // 0x37d15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D158u, 0x37D160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D160u;
label_37d160:
    // 0x37d160: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_37d164:
    if (ctx->pc == 0x37D164u) {
        ctx->pc = 0x37D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D160u;
        // 0x37d164: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D168u;
        goto label_37d168;
    }
    ctx->pc = 0x37D160u;
    {
        const bool branch_taken_0x37d160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D160u;
        // 0x37d164: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d160) {
            ctx->pc = 0x37D180u;
            goto label_37d180;
        }
    }
    ctx->pc = 0x37D168u;
label_37d168:
    // 0x37d168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37d168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d16c:
    // 0x37d16c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x37d16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37d170:
    // 0x37d170: 0xc0bb778  jal         func_2EDDE0
label_37d174:
    if (ctx->pc == 0x37D174u) {
        ctx->pc = 0x37D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D170u;
        // 0x37d174: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D178u;
        goto label_37d178;
    }
    ctx->pc = 0x37D170u;
    SET_GPR_U32(ctx, 31, 0x37D178u);
    ctx->pc = 0x37D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D170u;
    // 0x37d174: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x37D170u, 0x37D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D178u;
label_37d178:
    // 0x37d178: 0x1000000f  b           . + 4 + (0xF << 2)
label_37d17c:
    if (ctx->pc == 0x37D17Cu) {
        ctx->pc = 0x37D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D178u;
        // 0x37d17c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D180u;
        goto label_37d180;
    }
    ctx->pc = 0x37D178u;
    {
        const bool branch_taken_0x37d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D178u;
        // 0x37d17c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d178) {
            ctx->pc = 0x37D1B8u;
            goto label_37d1b8;
        }
    }
    ctx->pc = 0x37D180u;
label_37d180:
    // 0x37d180: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x37d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_37d184:
    // 0x37d184: 0x40f809  jalr        $v0
label_37d188:
    if (ctx->pc == 0x37D188u) {
        ctx->pc = 0x37D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D184u;
        // 0x37d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D18Cu;
        goto label_37d18c;
    }
    ctx->pc = 0x37D184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D18Cu);
        ctx->pc = 0x37D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D184u;
        // 0x37d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D184u, 0x37D18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D18Cu;
label_37d18c:
    // 0x37d18c: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x37d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37d190:
    // 0x37d190: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37d190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37d194:
    // 0x37d194: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x37d194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_37d198:
    // 0x37d198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37d198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37d19c:
    // 0x37d19c: 0xc1035f6  jal         func_40D7D8
label_37d1a0:
    if (ctx->pc == 0x37D1A0u) {
        ctx->pc = 0x37D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D19Cu;
        // 0x37d1a0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D1A4u;
        goto label_37d1a4;
    }
    ctx->pc = 0x37D19Cu;
    SET_GPR_U32(ctx, 31, 0x37D1A4u);
    ctx->pc = 0x37D1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D19Cu;
    // 0x37d1a0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37D19Cu, 0x37D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1A4u;
label_37d1a4:
    // 0x37d1a4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x37d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_37d1a8:
    // 0x37d1a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x37d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_37d1ac:
    // 0x37d1ac: 0xc103628  jal         func_40D8A0
label_37d1b0:
    if (ctx->pc == 0x37D1B0u) {
        ctx->pc = 0x37D1B4u;
        goto label_37d1b4;
    }
    ctx->pc = 0x37D1ACu;
    SET_GPR_U32(ctx, 31, 0x37D1B4u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37D1ACu, 0x37D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1B4u;
label_37d1b4:
    // 0x37d1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d1b8:
    // 0x37d1b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x37d1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_37d1bc:
    // 0x37d1bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x37d1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37d1c0:
    // 0x37d1c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x37d1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37d1c4:
    // 0x37d1c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x37d1c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37d1c8:
    // 0x37d1c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37d1c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37d1cc:
    // 0x37d1cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37d1ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37d1d0:
    // 0x37d1d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37d1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37d1d4:
    // 0x37d1d4: 0x3e00008  jr          $ra
label_37d1d8:
    if (ctx->pc == 0x37D1D8u) {
        ctx->pc = 0x37D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D1D4u;
        // 0x37d1d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D1DCu;
        goto label_37d1dc;
    }
    ctx->pc = 0x37D1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D1D4u;
        // 0x37d1d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D1DCu;
label_37d1dc:
    // 0x37d1dc: 0x0  nop
    ctx->pc = 0x37d1dcu;
    // NOP
    ctx->pc = 0x37d1e0u;
}
