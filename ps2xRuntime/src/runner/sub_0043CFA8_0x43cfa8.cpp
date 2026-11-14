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

// Function: sub_0043CFA8
// Address: 0x43cfa8 - 0x43d340
void sub_0043CFA8_0x43cfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CFA8_0x43cfa8");
#endif

    switch (ctx->pc) {
        case 0x43d048u: goto label_43d048;
        case 0x43d058u: goto label_43d058;
        case 0x43d070u: goto label_43d070;
        case 0x43d114u: goto label_43d114;
        case 0x43d130u: goto label_43d130;
        case 0x43d140u: goto label_43d140;
        case 0x43d160u: goto label_43d160;
        case 0x43d17cu: goto label_43d17c;
        case 0x43d188u: goto label_43d188;
        case 0x43d190u: goto label_43d190;
        case 0x43d1d8u: goto label_43d1d8;
        case 0x43d1e8u: goto label_43d1e8;
        case 0x43d1fcu: goto label_43d1fc;
        case 0x43d22cu: goto label_43d22c;
        case 0x43d238u: goto label_43d238;
        case 0x43d24cu: goto label_43d24c;
        case 0x43d284u: goto label_43d284;
        case 0x43d2a0u: goto label_43d2a0;
        case 0x43d2b4u: goto label_43d2b4;
        case 0x43d2d4u: goto label_43d2d4;
        case 0x43d2f0u: goto label_43d2f0;
        case 0x43d2fcu: goto label_43d2fc;
        case 0x43d304u: goto label_43d304;
        default: break;
    }

    ctx->pc = 0x43cfa8u;

    // 0x43cfa8: 0x340c88a0  ori         $t4, $zero, 0x88A0
    ctx->pc = 0x43cfa8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
    // 0x43cfac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x43cfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43cfb0: 0x3ace823  subu        $sp, $sp, $t4
    ctx->pc = 0x43cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
    // 0x43cfb4: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x43cfb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x43cfb8: 0x7db2ffd0  sq          $s2, -0x30($t5)
    ctx->pc = 0x43cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967248), GPR_VEC(ctx, 18));
    // 0x43cfbc: 0x7db4ffb0  sq          $s4, -0x50($t5)
    ctx->pc = 0x43cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967216), GPR_VEC(ctx, 20));
    // 0x43cfc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x43cfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cfc4: 0x7db5ffa0  sq          $s5, -0x60($t5)
    ctx->pc = 0x43cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967200), GPR_VEC(ctx, 21));
    // 0x43cfc8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43cfc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43cfcc: 0x7db0fff0  sq          $s0, -0x10($t5)
    ctx->pc = 0x43cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967280), GPR_VEC(ctx, 16));
    // 0x43cfd0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x43cfd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43cfd4: 0x7db1ffe0  sq          $s1, -0x20($t5)
    ctx->pc = 0x43cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967264), GPR_VEC(ctx, 17));
    // 0x43cfd8: 0x7db3ffc0  sq          $s3, -0x40($t5)
    ctx->pc = 0x43cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967232), GPR_VEC(ctx, 19));
    // 0x43cfdc: 0x7db6ff90  sq          $s6, -0x70($t5)
    ctx->pc = 0x43cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967184), GPR_VEC(ctx, 22));
    // 0x43cfe0: 0xfdbfff80  sd          $ra, -0x80($t5)
    ctx->pc = 0x43cfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967168), GPR_U64(ctx, 31));
    // 0x43cfe4: 0x92820023  lbu         $v0, 0x23($s4)
    ctx->pc = 0x43cfe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x43cfe8: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x43cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x43cfec: 0x30440060  andi        $a0, $v0, 0x60
    ctx->pc = 0x43cfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x43cff0: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x43cff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x43cff4: 0x10860068  beq         $a0, $a2, . + 4 + (0x68 << 2)
    ctx->pc = 0x43CFF4u;
    {
        const bool branch_taken_0x43cff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x43CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43CFF4u;
        // 0x43cff8: 0x8e510014  lw          $s1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cff4) {
            ctx->pc = 0x43D198u;
            goto label_43d198;
        }
    }
    ctx->pc = 0x43CFFCu;
    // 0x43cffc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x43cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x43d000: 0x548200c2  bnel        $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x43D000u;
    {
        const bool branch_taken_0x43d000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x43d000) {
            ctx->pc = 0x43D004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43D000u;
            // 0x43d004: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D008u;
    // 0x43d008: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x43d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x43d00c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x43d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43d010: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x43D010u;
    {
        const bool branch_taken_0x43d010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D010u;
        // 0x43d014: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d010) {
            ctx->pc = 0x43D0FCu;
            goto label_43d0fc;
        }
    }
    ctx->pc = 0x43D018u;
    // 0x43d018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43D018u;
    {
        const bool branch_taken_0x43d018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D018u;
        // 0x43d01c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d018) {
            ctx->pc = 0x43D030u;
            goto label_43d030;
        }
    }
    ctx->pc = 0x43D020u;
    // 0x43d020: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43D020u;
    {
        const bool branch_taken_0x43d020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D020u;
        // 0x43d024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d020) {
            ctx->pc = 0x43D040u;
            goto label_43d040;
        }
    }
    ctx->pc = 0x43D028u;
    // 0x43d028: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x43D028u;
    {
        const bool branch_taken_0x43d028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D028u;
        // 0x43d02c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d028) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D030u;
label_43d030:
    // 0x43d030: 0x10660032  beq         $v1, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x43D030u;
    {
        const bool branch_taken_0x43d030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x43D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D030u;
        // 0x43d034: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d030) {
            ctx->pc = 0x43D0FCu;
            goto label_43d0fc;
        }
    }
    ctx->pc = 0x43D038u;
    // 0x43d038: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x43D038u;
    {
        const bool branch_taken_0x43d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D038u;
        // 0x43d03c: 0x340c88a0  ori         $t4, $zero, 0x88A0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d038) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D040u;
label_43d040:
    // 0x43d040: 0xc10f2cc  jal         func_43CB30
    ctx->pc = 0x43D040u;
    SET_GPR_U32(ctx, 31, 0x43D048u);
    ctx->pc = 0x43D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D040u;
    // 0x43d044: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CB30u, 0x43D040u, 0x43D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D048u;
label_43d048:
    // 0x43d048: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x43d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43d04c: 0x184000af  blez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x43D04Cu;
    {
        const bool branch_taken_0x43d04c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D04Cu;
        // 0x43d050: 0x340c88a0  ori         $t4, $zero, 0x88A0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d04c) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D054u;
    // 0x43d054: 0x0  nop
    ctx->pc = 0x43d054u;
    // NOP
label_43d058:
    // 0x43d058: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x43d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x43d05c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x43d05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x43d060: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x43D060u;
    {
        const bool branch_taken_0x43d060 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D060u;
        // 0x43d064: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d060) {
            ctx->pc = 0x43D0D4u;
            goto label_43d0d4;
        }
    }
    ctx->pc = 0x43D068u;
    // 0x43d068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43d068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d06c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43d06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43d070:
    // 0x43d070: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x43d070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x43d074: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x43d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x43d078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43d07c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x43D07Cu;
    {
        const bool branch_taken_0x43d07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D07Cu;
        // 0x43d080: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d07c) {
            ctx->pc = 0x43D0A8u;
            goto label_43d0a8;
        }
    }
    ctx->pc = 0x43D084u;
    // 0x43d084: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x43d084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x43d088: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x43d088u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x43d08c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x43d08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43d090: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x43d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x43d094: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x43d094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x43d098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d09c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x43d09cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x43d0a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x43D0A0u;
    {
        const bool branch_taken_0x43d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D0A0u;
        // 0x43d0a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d0a0) {
            ctx->pc = 0x43D0C0u;
            goto label_43d0c0;
        }
    }
    ctx->pc = 0x43D0A8u;
label_43d0a8:
    // 0x43d0a8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x43d0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x43d0ac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x43d0acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x43d0b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x43d0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43d0b4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x43d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x43d0b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43d0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43d0bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x43d0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_43d0c0:
    // 0x43d0c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x43d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x43d0c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x43d0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x43d0c8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x43d0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d0cc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x43D0CCu;
    {
        const bool branch_taken_0x43d0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D0CCu;
        // 0x43d0d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d0cc) {
            ctx->pc = 0x43D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d070;
        }
    }
    ctx->pc = 0x43D0D4u;
label_43d0d4:
    // 0x43d0d4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x43d0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43d0d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x43d0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d0dc: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x43d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x43d0e0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x43d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43d0e4: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x43d0e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x43d0e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x43d0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d0ec: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x43D0ECu;
    {
        const bool branch_taken_0x43d0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D0ECu;
        // 0x43d0f0: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d0ec) {
            ctx->pc = 0x43D058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d058;
        }
    }
    ctx->pc = 0x43D0F4u;
    // 0x43d0f4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x43D0F4u;
    {
        const bool branch_taken_0x43d0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D0F4u;
        // 0x43d0f8: 0x340c88a0  ori         $t4, $zero, 0x88A0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d0f4) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D0FCu;
label_43d0fc:
    // 0x43d0fc: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x43d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x43d100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43d104: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43d104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43d108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d10c: 0xc109b1a  jal         func_426C68
    ctx->pc = 0x43D10Cu;
    SET_GPR_U32(ctx, 31, 0x43D114u);
    ctx->pc = 0x43D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D10Cu;
    // 0x43d110: 0x628004  sllv        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C68u, 0x43D10Cu, 0x43D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D114u;
label_43d114:
    // 0x43d114: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x43D114u;
    {
        const bool branch_taken_0x43d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D114u;
        // 0x43d118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d114) {
            ctx->pc = 0x43D190u;
            goto label_43d190;
        }
    }
    ctx->pc = 0x43D11Cu;
    // 0x43d11c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x43d11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x43d120: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x43d120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43d124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43d124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d128: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x43D128u;
    SET_GPR_U32(ctx, 31, 0x43D130u);
    ctx->pc = 0x43D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D128u;
    // 0x43d12c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x43D128u, 0x43D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D130u;
label_43d130:
    // 0x43d130: 0x27a44010  addiu       $a0, $sp, 0x4010
    ctx->pc = 0x43d130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
    // 0x43d134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x43d134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d138: 0xc1096e4  jal         func_425B90
    ctx->pc = 0x43D138u;
    SET_GPR_U32(ctx, 31, 0x43D140u);
    ctx->pc = 0x43D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D138u;
    // 0x43d13c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425B90u, 0x43D138u, 0x43D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D140u;
label_43d140:
    // 0x43d140: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x43d140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x43d144: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x43d144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d148: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x43d148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x43d14c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43d14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43d150: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x43d150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x43d154: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x43d154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d158: 0xc10996e  jal         func_4265B8
    ctx->pc = 0x43D158u;
    SET_GPR_U32(ctx, 31, 0x43D160u);
    ctx->pc = 0x43D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D158u;
    // 0x43d15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4265B8u, 0x43D158u, 0x43D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D160u;
label_43d160:
    // 0x43d160: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x43d160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x43d164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d168: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x43d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x43d16c: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x43d16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x43d170: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x43d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x43d174: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43D174u;
    SET_GPR_U32(ctx, 31, 0x43D17Cu);
    ctx->pc = 0x43D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D174u;
    // 0x43d178: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43D174u, 0x43D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D17Cu;
label_43d17c:
    // 0x43d17c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x43d17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d180: 0xc10f2cc  jal         func_43CB30
    ctx->pc = 0x43D180u;
    SET_GPR_U32(ctx, 31, 0x43D188u);
    ctx->pc = 0x43D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D180u;
    // 0x43d184: 0x27a54010  addiu       $a1, $sp, 0x4010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CB30u, 0x43D180u, 0x43D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D188u;
label_43d188:
    // 0x43d188: 0xc109b64  jal         func_426D90
    ctx->pc = 0x43D188u;
    SET_GPR_U32(ctx, 31, 0x43D190u);
    ctx->pc = 0x43D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D188u;
    // 0x43d18c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426D90u, 0x43D188u, 0x43D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D190u;
label_43d190:
    // 0x43d190: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x43D190u;
    {
        const bool branch_taken_0x43d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D190u;
        // 0x43d194: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d190) {
            ctx->pc = 0x43D308u;
            goto label_43d308;
        }
    }
    ctx->pc = 0x43D198u;
label_43d198:
    // 0x43d198: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x43d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x43d19c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x43d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43d1a0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x43D1A0u;
    {
        const bool branch_taken_0x43d1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D1A0u;
        // 0x43d1a4: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d1a0) {
            ctx->pc = 0x43D220u;
            goto label_43d220;
        }
    }
    ctx->pc = 0x43D1A8u;
    // 0x43d1a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43D1A8u;
    {
        const bool branch_taken_0x43d1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D1A8u;
        // 0x43d1ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d1a8) {
            ctx->pc = 0x43D1C0u;
            goto label_43d1c0;
        }
    }
    ctx->pc = 0x43D1B0u;
    // 0x43d1b0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43D1B0u;
    {
        const bool branch_taken_0x43d1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D1B0u;
        // 0x43d1b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d1b0) {
            ctx->pc = 0x43D1D0u;
            goto label_43d1d0;
        }
    }
    ctx->pc = 0x43D1B8u;
    // 0x43d1b8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x43D1B8u;
    {
        const bool branch_taken_0x43d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D1B8u;
        // 0x43d1bc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d1b8) {
            ctx->pc = 0x43D308u;
            goto label_43d308;
        }
    }
    ctx->pc = 0x43D1C0u;
label_43d1c0:
    // 0x43d1c0: 0x5064002b  beql        $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x43D1C0u;
    {
        const bool branch_taken_0x43d1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x43d1c0) {
            ctx->pc = 0x43D1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43D1C0u;
            // 0x43d1c4: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43D270u;
            goto label_43d270;
        }
    }
    ctx->pc = 0x43D1C8u;
    // 0x43d1c8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x43D1C8u;
    {
        const bool branch_taken_0x43d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D1C8u;
        // 0x43d1cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d1c8) {
            ctx->pc = 0x43D308u;
            goto label_43d308;
        }
    }
    ctx->pc = 0x43D1D0u;
label_43d1d0:
    // 0x43d1d0: 0xc10f2cc  jal         func_43CB30
    ctx->pc = 0x43D1D0u;
    SET_GPR_U32(ctx, 31, 0x43D1D8u);
    ctx->pc = 0x43D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D1D0u;
    // 0x43d1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CB30u, 0x43D1D0u, 0x43D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D1D8u;
label_43d1d8:
    // 0x43d1d8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x43d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43d1dc: 0x1840004b  blez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x43D1DCu;
    {
        const bool branch_taken_0x43d1dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D1DCu;
        // 0x43d1e0: 0x340c88a0  ori         $t4, $zero, 0x88A0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d1dc) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D1E4u;
    // 0x43d1e4: 0x0  nop
    ctx->pc = 0x43d1e4u;
    // NOP
label_43d1e8:
    // 0x43d1e8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x43d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x43d1ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43d1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d1f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43d1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d1f4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x43D1F4u;
    SET_GPR_U32(ctx, 31, 0x43D1FCu);
    ctx->pc = 0x43D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D1F4u;
    // 0x43d1f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x43D1F4u, 0x43D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D1FCu;
label_43d1fc:
    // 0x43d1fc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x43d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43d200: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x43d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x43d204: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x43d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43d208: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x43d208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x43d20c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x43d20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d210: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x43D210u;
    {
        const bool branch_taken_0x43d210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D210u;
        // 0x43d214: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d210) {
            ctx->pc = 0x43D1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d1e8;
        }
    }
    ctx->pc = 0x43D218u;
    // 0x43d218: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x43D218u;
    {
        const bool branch_taken_0x43d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D218u;
        // 0x43d21c: 0x340c88a0  ori         $t4, $zero, 0x88A0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d218) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D220u;
label_43d220:
    // 0x43d220: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x43d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d224: 0xc10f2cc  jal         func_43CB30
    ctx->pc = 0x43D224u;
    SET_GPR_U32(ctx, 31, 0x43D22Cu);
    ctx->pc = 0x43D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D224u;
    // 0x43d228: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CB30u, 0x43D224u, 0x43D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D22Cu;
label_43d22c:
    // 0x43d22c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x43d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43d230: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x43D230u;
    {
        const bool branch_taken_0x43d230 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D230u;
        // 0x43d234: 0x340c88a0  ori         $t4, $zero, 0x88A0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d230) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D238u;
label_43d238:
    // 0x43d238: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x43d238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x43d23c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43d23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d240: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43d240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d244: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x43D244u;
    SET_GPR_U32(ctx, 31, 0x43D24Cu);
    ctx->pc = 0x43D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D244u;
    // 0x43d248: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x43D244u, 0x43D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D24Cu;
label_43d24c:
    // 0x43d24c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x43d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43d250: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x43d250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x43d254: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x43d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x43d258: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x43d258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x43d25c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x43d25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43d260: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x43D260u;
    {
        const bool branch_taken_0x43d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D260u;
        // 0x43d264: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d260) {
            ctx->pc = 0x43D238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d238;
        }
    }
    ctx->pc = 0x43D268u;
    // 0x43d268: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x43D268u;
    {
        const bool branch_taken_0x43d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D268u;
        // 0x43d26c: 0x340c88a0  ori         $t4, $zero, 0x88A0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d268) {
            ctx->pc = 0x43D30Cu;
            goto label_43d30c;
        }
    }
    ctx->pc = 0x43D270u;
label_43d270:
    // 0x43d270: 0x27b34410  addiu       $s3, $sp, 0x4410
    ctx->pc = 0x43d270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 17424));
    // 0x43d274: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x43d274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d27c: 0xc109b1a  jal         func_426C68
    ctx->pc = 0x43D27Cu;
    SET_GPR_U32(ctx, 31, 0x43D284u);
    ctx->pc = 0x43D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D27Cu;
    // 0x43d280: 0x558004  sllv        $s0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C68u, 0x43D27Cu, 0x43D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D284u;
label_43d284:
    // 0x43d284: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x43D284u;
    {
        const bool branch_taken_0x43d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D284u;
        // 0x43d288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d284) {
            ctx->pc = 0x43D304u;
            goto label_43d304;
        }
    }
    ctx->pc = 0x43D28Cu;
    // 0x43d28c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x43d28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x43d290: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x43d290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43d294: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43d294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d298: 0xc1092e8  jal         func_424BA0
    ctx->pc = 0x43D298u;
    SET_GPR_U32(ctx, 31, 0x43D2A0u);
    ctx->pc = 0x43D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D298u;
    // 0x43d29c: 0x26714010  addiu       $s1, $s3, 0x4010 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424BA0u, 0x43D298u, 0x43D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D2A0u;
label_43d2a0:
    // 0x43d2a0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x43d2a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43d2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x43d2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d2ac: 0xc1096e4  jal         func_425B90
    ctx->pc = 0x43D2ACu;
    SET_GPR_U32(ctx, 31, 0x43D2B4u);
    ctx->pc = 0x43D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D2ACu;
    // 0x43d2b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425B90u, 0x43D2ACu, 0x43D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D2B4u;
label_43d2b4:
    // 0x43d2b4: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x43d2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x43d2b8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x43d2b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d2bc: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x43d2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x43d2c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43d2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43d2c4: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x43d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x43d2c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x43d2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d2cc: 0xc10996e  jal         func_4265B8
    ctx->pc = 0x43D2CCu;
    SET_GPR_U32(ctx, 31, 0x43D2D4u);
    ctx->pc = 0x43D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D2CCu;
    // 0x43d2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4265B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4265B8u, 0x43D2CCu, 0x43D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D2D4u;
label_43d2d4:
    // 0x43d2d4: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x43d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x43d2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d2dc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x43d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x43d2e0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x43d2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x43d2e4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x43d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x43d2e8: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43D2E8u;
    SET_GPR_U32(ctx, 31, 0x43D2F0u);
    ctx->pc = 0x43D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D2E8u;
    // 0x43d2ec: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43D2E8u, 0x43D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D2F0u;
label_43d2f0:
    // 0x43d2f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x43d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d2f4: 0xc10f2cc  jal         func_43CB30
    ctx->pc = 0x43D2F4u;
    SET_GPR_U32(ctx, 31, 0x43D2FCu);
    ctx->pc = 0x43D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D2F4u;
    // 0x43d2f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CB30u, 0x43D2F4u, 0x43D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D2FCu;
label_43d2fc:
    // 0x43d2fc: 0xc109b64  jal         func_426D90
    ctx->pc = 0x43D2FCu;
    SET_GPR_U32(ctx, 31, 0x43D304u);
    ctx->pc = 0x43D300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D2FCu;
    // 0x43d300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426D90u, 0x43D2FCu, 0x43D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D304u;
label_43d304:
    // 0x43d304: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x43d304u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43d308:
    // 0x43d308: 0x340c88a0  ori         $t4, $zero, 0x88A0
    ctx->pc = 0x43d308u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34976);
label_43d30c:
    // 0x43d30c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x43d30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d310: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x43d310u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x43d314: 0x79b0fff0  lq          $s0, -0x10($t5)
    ctx->pc = 0x43d314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 13), 4294967280)));
    // 0x43d318: 0x79b1ffe0  lq          $s1, -0x20($t5)
    ctx->pc = 0x43d318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 13), 4294967264)));
    // 0x43d31c: 0x79b2ffd0  lq          $s2, -0x30($t5)
    ctx->pc = 0x43d31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 4294967248)));
    // 0x43d320: 0x79b3ffc0  lq          $s3, -0x40($t5)
    ctx->pc = 0x43d320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 13), 4294967232)));
    // 0x43d324: 0x79b4ffb0  lq          $s4, -0x50($t5)
    ctx->pc = 0x43d324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 13), 4294967216)));
    // 0x43d328: 0x79b5ffa0  lq          $s5, -0x60($t5)
    ctx->pc = 0x43d328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 13), 4294967200)));
    // 0x43d32c: 0x79b6ff90  lq          $s6, -0x70($t5)
    ctx->pc = 0x43d32cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 13), 4294967184)));
    // 0x43d330: 0xddbfff80  ld          $ra, -0x80($t5)
    ctx->pc = 0x43d330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967168)));
    // 0x43d334: 0x3e00008  jr          $ra
    ctx->pc = 0x43D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D334u;
        // 0x43d338: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D33Cu;
    // 0x43d33c: 0x0  nop
    ctx->pc = 0x43d33cu;
    // NOP
    ctx->pc = 0x43d340u;
}
