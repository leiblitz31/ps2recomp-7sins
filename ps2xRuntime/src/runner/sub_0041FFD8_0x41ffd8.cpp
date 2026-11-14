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

// Function: sub_0041FFD8
// Address: 0x41ffd8 - 0x420170
void sub_0041FFD8_0x41ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FFD8_0x41ffd8");
#endif

    switch (ctx->pc) {
        case 0x41ffd8u: goto label_41ffd8;
        case 0x41ffdcu: goto label_41ffdc;
        case 0x41ffe0u: goto label_41ffe0;
        case 0x41ffe4u: goto label_41ffe4;
        case 0x41ffe8u: goto label_41ffe8;
        case 0x41ffecu: goto label_41ffec;
        case 0x41fff0u: goto label_41fff0;
        case 0x41fff4u: goto label_41fff4;
        case 0x41fff8u: goto label_41fff8;
        case 0x41fffcu: goto label_41fffc;
        case 0x420000u: goto label_420000;
        case 0x420004u: goto label_420004;
        case 0x420008u: goto label_420008;
        case 0x42000cu: goto label_42000c;
        case 0x420010u: goto label_420010;
        case 0x420014u: goto label_420014;
        case 0x420018u: goto label_420018;
        case 0x42001cu: goto label_42001c;
        case 0x420020u: goto label_420020;
        case 0x420024u: goto label_420024;
        case 0x420028u: goto label_420028;
        case 0x42002cu: goto label_42002c;
        case 0x420030u: goto label_420030;
        case 0x420034u: goto label_420034;
        case 0x420038u: goto label_420038;
        case 0x42003cu: goto label_42003c;
        case 0x420040u: goto label_420040;
        case 0x420044u: goto label_420044;
        case 0x420048u: goto label_420048;
        case 0x42004cu: goto label_42004c;
        case 0x420050u: goto label_420050;
        case 0x420054u: goto label_420054;
        case 0x420058u: goto label_420058;
        case 0x42005cu: goto label_42005c;
        case 0x420060u: goto label_420060;
        case 0x420064u: goto label_420064;
        case 0x420068u: goto label_420068;
        case 0x42006cu: goto label_42006c;
        case 0x420070u: goto label_420070;
        case 0x420074u: goto label_420074;
        case 0x420078u: goto label_420078;
        case 0x42007cu: goto label_42007c;
        case 0x420080u: goto label_420080;
        case 0x420084u: goto label_420084;
        case 0x420088u: goto label_420088;
        case 0x42008cu: goto label_42008c;
        case 0x420090u: goto label_420090;
        case 0x420094u: goto label_420094;
        case 0x420098u: goto label_420098;
        case 0x42009cu: goto label_42009c;
        case 0x4200a0u: goto label_4200a0;
        case 0x4200a4u: goto label_4200a4;
        case 0x4200a8u: goto label_4200a8;
        case 0x4200acu: goto label_4200ac;
        case 0x4200b0u: goto label_4200b0;
        case 0x4200b4u: goto label_4200b4;
        case 0x4200b8u: goto label_4200b8;
        case 0x4200bcu: goto label_4200bc;
        case 0x4200c0u: goto label_4200c0;
        case 0x4200c4u: goto label_4200c4;
        case 0x4200c8u: goto label_4200c8;
        case 0x4200ccu: goto label_4200cc;
        case 0x4200d0u: goto label_4200d0;
        case 0x4200d4u: goto label_4200d4;
        case 0x4200d8u: goto label_4200d8;
        case 0x4200dcu: goto label_4200dc;
        case 0x4200e0u: goto label_4200e0;
        case 0x4200e4u: goto label_4200e4;
        case 0x4200e8u: goto label_4200e8;
        case 0x4200ecu: goto label_4200ec;
        case 0x4200f0u: goto label_4200f0;
        case 0x4200f4u: goto label_4200f4;
        case 0x4200f8u: goto label_4200f8;
        case 0x4200fcu: goto label_4200fc;
        case 0x420100u: goto label_420100;
        case 0x420104u: goto label_420104;
        case 0x420108u: goto label_420108;
        case 0x42010cu: goto label_42010c;
        case 0x420110u: goto label_420110;
        case 0x420114u: goto label_420114;
        case 0x420118u: goto label_420118;
        case 0x42011cu: goto label_42011c;
        case 0x420120u: goto label_420120;
        case 0x420124u: goto label_420124;
        case 0x420128u: goto label_420128;
        case 0x42012cu: goto label_42012c;
        case 0x420130u: goto label_420130;
        case 0x420134u: goto label_420134;
        case 0x420138u: goto label_420138;
        case 0x42013cu: goto label_42013c;
        case 0x420140u: goto label_420140;
        case 0x420144u: goto label_420144;
        case 0x420148u: goto label_420148;
        case 0x42014cu: goto label_42014c;
        case 0x420150u: goto label_420150;
        case 0x420154u: goto label_420154;
        case 0x420158u: goto label_420158;
        case 0x42015cu: goto label_42015c;
        case 0x420160u: goto label_420160;
        case 0x420164u: goto label_420164;
        case 0x420168u: goto label_420168;
        case 0x42016cu: goto label_42016c;
        default: break;
    }

    ctx->pc = 0x41ffd8u;

label_41ffd8:
    // 0x41ffd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41ffdc:
    // 0x41ffdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41ffe0:
    // 0x41ffe0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41ffe4:
    // 0x41ffe4: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x41ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_41ffe8:
    // 0x41ffe8: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x41ffe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41ffec:
    // 0x41ffec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41fff0:
    // 0x41fff0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x41fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_41fff4:
    // 0x41fff4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41fff8:
    // 0x41fff8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41fffc:
    // 0x41fffc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41fffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420000:
    // 0x420000: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x420000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_420004:
    // 0x420004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_420008:
    // 0x420008: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x420008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_42000c:
    // 0x42000c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_420010:
    if (ctx->pc == 0x420010u) {
        ctx->pc = 0x420010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42000Cu;
        // 0x420010: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420014u;
        goto label_420014;
    }
    ctx->pc = 0x42000Cu;
    {
        const bool branch_taken_0x42000c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x420010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42000Cu;
        // 0x420010: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42000c) {
            ctx->pc = 0x420030u;
            goto label_420030;
        }
    }
    ctx->pc = 0x420014u;
label_420014:
    // 0x420014: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x420014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_420018:
    // 0x420018: 0x60f809  jalr        $v1
label_42001c:
    if (ctx->pc == 0x42001Cu) {
        ctx->pc = 0x420020u;
        goto label_420020;
    }
    ctx->pc = 0x420018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x420020u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420018u, 0x420020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420020u;
label_420020:
    // 0x420020: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x420020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420024:
    // 0x420024: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x420024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_420028:
    // 0x420028: 0xa4400028  sh          $zero, 0x28($v0)
    ctx->pc = 0x420028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 0));
label_42002c:
    // 0x42002c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x42002cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_420030:
    // 0x420030: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x420030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420034:
    // 0x420034: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x420034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_420038:
    // 0x420038: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x420038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_42003c:
    // 0x42003c: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
label_420040:
    if (ctx->pc == 0x420040u) {
        ctx->pc = 0x420040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42003Cu;
        // 0x420040: 0x2670e880  addiu       $s0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420044u;
        goto label_420044;
    }
    ctx->pc = 0x42003Cu;
    {
        const bool branch_taken_0x42003c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42003c) {
            ctx->pc = 0x420040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42003Cu;
            // 0x420040: 0x2670e880  addiu       $s0, $s3, -0x1780 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42011Cu;
            goto label_42011c;
        }
    }
    ctx->pc = 0x420044u;
label_420044:
    // 0x420044: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x420044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_420048:
    // 0x420048: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_42004c:
    if (ctx->pc == 0x42004Cu) {
        ctx->pc = 0x42004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420048u;
        // 0x42004c: 0x8f82be18  lw          $v0, -0x41E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420050u;
        goto label_420050;
    }
    ctx->pc = 0x420048u;
    {
        const bool branch_taken_0x420048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420048u;
        // 0x42004c: 0x8f82be18  lw          $v0, -0x41E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420048) {
            ctx->pc = 0x4200ECu;
            goto label_4200ec;
        }
    }
    ctx->pc = 0x420050u;
label_420050:
    // 0x420050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x420050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_420054:
    // 0x420054: 0x10640026  beq         $v1, $a0, . + 4 + (0x26 << 2)
label_420058:
    if (ctx->pc == 0x420058u) {
        ctx->pc = 0x420058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420054u;
        // 0x420058: 0x2670e880  addiu       $s0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42005Cu;
        goto label_42005c;
    }
    ctx->pc = 0x420054u;
    {
        const bool branch_taken_0x420054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x420058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420054u;
        // 0x420058: 0x2670e880  addiu       $s0, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420054) {
            ctx->pc = 0x4200F0u;
            goto label_4200f0;
        }
    }
    ctx->pc = 0x42005Cu;
label_42005c:
    // 0x42005c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x42005cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_420060:
    // 0x420060: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x420060u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_420064:
    // 0x420064: 0x2470fff0  addiu       $s0, $v1, -0x10
    ctx->pc = 0x420064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_420068:
    // 0x420068: 0x8f82ada8  lw          $v0, -0x5258($gp)
    ctx->pc = 0x420068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946216)));
label_42006c:
    // 0x42006c: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
label_420070:
    if (ctx->pc == 0x420070u) {
        ctx->pc = 0x420070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42006Cu;
        // 0x420070: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420074u;
        goto label_420074;
    }
    ctx->pc = 0x42006Cu;
    {
        const bool branch_taken_0x42006c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x420070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42006Cu;
        // 0x420070: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42006c) {
            ctx->pc = 0x4200E0u;
            goto label_4200e0;
        }
    }
    ctx->pc = 0x420074u;
label_420074:
    // 0x420074: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420078:
    // 0x420078: 0x2671e880  addiu       $s1, $s3, -0x1780
    ctx->pc = 0x420078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_42007c:
    // 0x42007c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x42007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_420080:
    // 0x420080: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x420080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_420084:
    // 0x420084: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_420088:
    if (ctx->pc == 0x420088u) {
        ctx->pc = 0x420088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420084u;
        // 0x420088: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42008Cu;
        goto label_42008c;
    }
    ctx->pc = 0x420084u;
    {
        const bool branch_taken_0x420084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x420084) {
            ctx->pc = 0x420088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420084u;
            // 0x420088: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42008Cu;
            goto label_42008c;
        }
    }
    ctx->pc = 0x42008Cu;
label_42008c:
    // 0x42008c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42008cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420090:
    // 0x420090: 0x24a508b0  addiu       $a1, $a1, 0x8B0
    ctx->pc = 0x420090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2224));
label_420094:
    // 0x420094: 0xc1082d8  jal         func_420B60
label_420098:
    if (ctx->pc == 0x420098u) {
        ctx->pc = 0x420098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420094u;
        // 0x420098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42009Cu;
        goto label_42009c;
    }
    ctx->pc = 0x420094u;
    SET_GPR_U32(ctx, 31, 0x42009Cu);
    ctx->pc = 0x420098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420094u;
    // 0x420098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x420094u, 0x42009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42009Cu;
label_42009c:
    // 0x42009c: 0x2644ca28  addiu       $a0, $s2, -0x35D8
    ctx->pc = 0x42009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953512));
label_4200a0:
    // 0x4200a0: 0xc104ca6  jal         func_413298
label_4200a4:
    if (ctx->pc == 0x4200A4u) {
        ctx->pc = 0x4200A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200A0u;
        // 0x4200a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200A8u;
        goto label_4200a8;
    }
    ctx->pc = 0x4200A0u;
    SET_GPR_U32(ctx, 31, 0x4200A8u);
    ctx->pc = 0x4200A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4200A0u;
    // 0x4200a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x4200A0u, 0x4200A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4200A8u;
label_4200a8:
    // 0x4200a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4200a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4200ac:
    // 0x4200ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4200acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4200b0:
    // 0x4200b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4200b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4200b4:
    // 0x4200b4: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x4200b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4200b8:
    // 0x4200b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4200b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4200bc:
    // 0x4200bc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4200bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4200c0:
    // 0x4200c0: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x4200c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_4200c4:
    // 0x4200c4: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x4200c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4200c8:
    // 0x4200c8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4200c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4200cc:
    // 0x4200cc: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4200ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4200d0:
    // 0x4200d0: 0x40f809  jalr        $v0
label_4200d4:
    if (ctx->pc == 0x4200D4u) {
        ctx->pc = 0x4200D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200D0u;
        // 0x4200d4: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200D8u;
        goto label_4200d8;
    }
    ctx->pc = 0x4200D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4200D8u);
        ctx->pc = 0x4200D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200D0u;
        // 0x4200d4: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4200D0u, 0x4200D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4200D8u;
label_4200d8:
    // 0x4200d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_4200dc:
    if (ctx->pc == 0x4200DCu) {
        ctx->pc = 0x4200DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200D8u;
        // 0x4200dc: 0xaf80ada8  sw          $zero, -0x5258($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200E0u;
        goto label_4200e0;
    }
    ctx->pc = 0x4200D8u;
    {
        const bool branch_taken_0x4200d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4200DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200D8u;
        // 0x4200dc: 0xaf80ada8  sw          $zero, -0x5258($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4200d8) {
            ctx->pc = 0x4200E8u;
            goto label_4200e8;
        }
    }
    ctx->pc = 0x4200E0u;
label_4200e0:
    // 0x4200e0: 0x1464ffe1  bne         $v1, $a0, . + 4 + (-0x1F << 2)
label_4200e4:
    if (ctx->pc == 0x4200E4u) {
        ctx->pc = 0x4200E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200E0u;
        // 0x4200e4: 0x2470fff0  addiu       $s0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4200E8u;
        goto label_4200e8;
    }
    ctx->pc = 0x4200E0u;
    {
        const bool branch_taken_0x4200e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4200E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200E0u;
        // 0x4200e4: 0x2470fff0  addiu       $s0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4200e0) {
            ctx->pc = 0x420068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420068;
        }
    }
    ctx->pc = 0x4200E8u;
label_4200e8:
    // 0x4200e8: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x4200e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4200ec:
    // 0x4200ec: 0x2670e880  addiu       $s0, $s3, -0x1780
    ctx->pc = 0x4200ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_4200f0:
    // 0x4200f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4200f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4200f4:
    // 0x4200f4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4200f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4200f8:
    // 0x4200f8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4200fc:
    if (ctx->pc == 0x4200FCu) {
        ctx->pc = 0x4200FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200F8u;
        // 0x4200fc: 0x8f82be18  lw          $v0, -0x41E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420100u;
        goto label_420100;
    }
    ctx->pc = 0x4200F8u;
    {
        const bool branch_taken_0x4200f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4200FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4200F8u;
        // 0x4200fc: 0x8f82be18  lw          $v0, -0x41E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4200f8) {
            ctx->pc = 0x420118u;
            goto label_420118;
        }
    }
    ctx->pc = 0x420100u;
label_420100:
    // 0x420100: 0xc104284  jal         func_410A10
label_420104:
    if (ctx->pc == 0x420104u) {
        ctx->pc = 0x420108u;
        goto label_420108;
    }
    ctx->pc = 0x420100u;
    SET_GPR_U32(ctx, 31, 0x420108u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x420100u, 0x420108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420108u;
label_420108:
    // 0x420108: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_42010c:
    // 0x42010c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x42010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_420110:
    // 0x420110: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x420110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_420114:
    // 0x420114: 0x8f82be18  lw          $v0, -0x41E8($gp)
    ctx->pc = 0x420114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420118:
    // 0x420118: 0x2670e880  addiu       $s0, $s3, -0x1780
    ctx->pc = 0x420118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_42011c:
    // 0x42011c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x42011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_420120:
    // 0x420120: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x420120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_420124:
    // 0x420124: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_420128:
    if (ctx->pc == 0x420128u) {
        ctx->pc = 0x42012Cu;
        goto label_42012c;
    }
    ctx->pc = 0x420124u;
    {
        const bool branch_taken_0x420124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x420124) {
            ctx->pc = 0x420140u;
            goto label_420140;
        }
    }
    ctx->pc = 0x42012Cu;
label_42012c:
    // 0x42012c: 0xc104284  jal         func_410A10
label_420130:
    if (ctx->pc == 0x420130u) {
        ctx->pc = 0x420134u;
        goto label_420134;
    }
    ctx->pc = 0x42012Cu;
    SET_GPR_U32(ctx, 31, 0x420134u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x42012Cu, 0x420134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420134u;
label_420134:
    // 0x420134: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420138:
    // 0x420138: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x420138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_42013c:
    // 0x42013c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x42013cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_420140:
    // 0x420140: 0x8f83be1c  lw          $v1, -0x41E4($gp)
    ctx->pc = 0x420140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950428)));
label_420144:
    // 0x420144: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x420144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_420148:
    // 0x420148: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x420148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42014c:
    // 0x42014c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x42014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_420150:
    // 0x420150: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x420150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420154:
    // 0x420154: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x420154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420158:
    // 0x420158: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x420158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42015c:
    // 0x42015c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x42015cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420160:
    // 0x420160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420164:
    // 0x420164: 0xaf83be1c  sw          $v1, -0x41E4($gp)
    ctx->pc = 0x420164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950428), GPR_U32(ctx, 3));
label_420168:
    // 0x420168: 0x3e00008  jr          $ra
label_42016c:
    if (ctx->pc == 0x42016Cu) {
        ctx->pc = 0x42016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420168u;
        // 0x42016c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420170u;
        goto label_fallthrough_0x420168;
    }
    ctx->pc = 0x420168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420168u;
        // 0x42016c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x420168:
    ctx->pc = 0x420170u;
}
