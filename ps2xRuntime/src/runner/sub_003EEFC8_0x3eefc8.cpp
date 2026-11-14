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

// Function: sub_003EEFC8
// Address: 0x3eefc8 - 0x3ef8d8
void sub_003EEFC8_0x3eefc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEFC8_0x3eefc8");
#endif

    switch (ctx->pc) {
        case 0x3ef140u: goto label_3ef140;
        case 0x3ef2f8u: goto label_3ef2f8;
        case 0x3ef490u: goto label_3ef490;
        case 0x3ef628u: goto label_3ef628;
        case 0x3ef7f8u: goto label_3ef7f8;
        default: break;
    }

    ctx->pc = 0x3eefc8u;

    // 0x3eefc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3eefc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3eefcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3eefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eefd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eefd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3eefd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eefd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eefd8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x3eefd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3eefdc: 0x1462023b  bne         $v1, $v0, . + 4 + (0x23B << 2)
    ctx->pc = 0x3EEFDCu;
    {
        const bool branch_taken_0x3eefdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFDCu;
        // 0x3eefe0: 0xde0d0000  ld          $t5, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eefdc) {
            ctx->pc = 0x3EF8CCu;
            goto label_3ef8cc;
        }
    }
    ctx->pc = 0x3EEFE4u;
    // 0x3eefe4: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x3eefe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3eefe8: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3eefe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3eefec: 0x10400154  beqz        $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x3EEFECu;
    {
        const bool branch_taken_0x3eefec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFECu;
        // 0x3eeff0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eefec) {
            ctx->pc = 0x3EF540u;
            goto label_3ef540;
        }
    }
    ctx->pc = 0x3EEFF4u;
    // 0x3eeff4: 0x920e0011  lbu         $t6, 0x11($s0)
    ctx->pc = 0x3eeff4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3eeff8: 0x11c2007f  beq         $t6, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x3EEFF8u;
    {
        const bool branch_taken_0x3eeff8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFF8u;
        // 0x3eeffc: 0x29c20003  slti        $v0, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeff8) {
            ctx->pc = 0x3EF1F8u;
            goto label_3ef1f8;
        }
    }
    ctx->pc = 0x3EF000u;
    // 0x3ef000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF000u;
    {
        const bool branch_taken_0x3ef000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF000u;
        // 0x3ef004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef000) {
            ctx->pc = 0x3EF018u;
            goto label_3ef018;
        }
    }
    ctx->pc = 0x3EF008u;
    // 0x3ef008: 0x11c20008  beq         $t6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF008u;
    {
        const bool branch_taken_0x3ef008 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF008u;
        // 0x3ef00c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef008) {
            ctx->pc = 0x3EF02Cu;
            goto label_3ef02c;
        }
    }
    ctx->pc = 0x3EF010u;
    // 0x3ef010: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x3EF010u;
    {
        const bool branch_taken_0x3ef010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF010u;
        // 0x3ef014: 0xfe0d0008  sd          $t5, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef010) {
            ctx->pc = 0x3EF538u;
            goto label_3ef538;
        }
    }
    ctx->pc = 0x3EF018u;
label_3ef018:
    // 0x3ef018: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ef018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ef01c: 0x11c200e0  beq         $t6, $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x3EF01Cu;
    {
        const bool branch_taken_0x3ef01c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF01Cu;
        // 0x3ef020: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef01c) {
            ctx->pc = 0x3EF3A0u;
            goto label_3ef3a0;
        }
    }
    ctx->pc = 0x3EF024u;
    // 0x3ef024: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x3EF024u;
    {
        const bool branch_taken_0x3ef024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF024u;
        // 0x3ef028: 0xfe0d0008  sd          $t5, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef024) {
            ctx->pc = 0x3EF538u;
            goto label_3ef538;
        }
    }
    ctx->pc = 0x3EF02Cu;
label_3ef02c:
    // 0x3ef02c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x3ef02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3ef030: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ef030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ef034: 0x65a30007  daddiu      $v1, $t5, 0x7
    ctx->pc = 0x3ef034u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)7);
    // 0x3ef038: 0xa27821  addu        $t7, $a1, $v0
    ctx->pc = 0x3ef038u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ef03c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3ef03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3ef040: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ef040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ef044: 0x65a4ffff  daddiu      $a0, $t5, -0x1
    ctx->pc = 0x3ef044u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)4294967295);
    // 0x3ef048: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3ef048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3ef04c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ef04cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ef050: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x3ef050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x3ef054: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3ef054u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3ef058: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x3ef058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef05c: 0xa45021  addu        $t2, $a1, $a0
    ctx->pc = 0x3ef05cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3ef060: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x3ef060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x3ef064: 0x11a00132  beqz        $t5, . + 4 + (0x132 << 2)
    ctx->pc = 0x3EF064u;
    {
        const bool branch_taken_0x3ef064 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF064u;
        // 0x3ef068: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef064) {
            ctx->pc = 0x3EF530u;
            goto label_3ef530;
        }
    }
    ctx->pc = 0x3EF06Cu;
    // 0x3ef06c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3ef06cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef070: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x3ef070u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ef074: 0x24180007  addiu       $t8, $zero, 0x7
    ctx->pc = 0x3ef074u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ef078: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3ef078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef07c: 0x19a00020  blez        $t5, . + 4 + (0x20 << 2)
    ctx->pc = 0x3EF07Cu;
    {
        const bool branch_taken_0x3ef07c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3EF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF07Cu;
        // 0x3ef080: 0x31a40003  andi        $a0, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef07c) {
            ctx->pc = 0x3EF100u;
            goto label_3ef100;
        }
    }
    ctx->pc = 0x3EF084u;
    // 0x3ef084: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3EF084u;
    {
        const bool branch_taken_0x3ef084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF084u;
        // 0x3ef088: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef084) {
            ctx->pc = 0x3EF138u;
            goto label_3ef138;
        }
    }
    ctx->pc = 0x3EF08Cu;
    // 0x3ef08c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3EF08Cu;
    {
        const bool branch_taken_0x3ef08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef08c) {
            ctx->pc = 0x3EF090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF08Cu;
            // 0x3ef090: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF104u;
            goto label_3ef104;
        }
    }
    ctx->pc = 0x3EF094u;
    // 0x3ef094: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3ef094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ef098: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3EF098u;
    {
        const bool branch_taken_0x3ef098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef098) {
            ctx->pc = 0x3EF09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF098u;
            // 0x3ef09c: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF0D4u;
            goto label_3ef0d4;
        }
    }
    ctx->pc = 0x3EF0A0u;
    // 0x3ef0a0: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3ef0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ef0a4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef0a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef0a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef0ac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF0ACu;
    {
        const bool branch_taken_0x3ef0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef0ac) {
            ctx->pc = 0x3EF0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF0ACu;
            // 0x3ef0b0: 0xa1e0ffff  sb          $zero, -0x1($t7) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 15), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF0B8u;
            goto label_3ef0b8;
        }
    }
    ctx->pc = 0x3EF0B4u;
    // 0x3ef0b4: 0xa1eeffff  sb          $t6, -0x1($t7)
    ctx->pc = 0x3ef0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294967295), (uint8_t)GPR_U32(ctx, 14));
label_3ef0b8:
    // 0x3ef0b8: 0x14780003  bne         $v1, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF0B8u;
    {
        const bool branch_taken_0x3ef0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x3EF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0B8u;
        // 0x3ef0bc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0b8) {
            ctx->pc = 0x3EF0C8u;
            goto label_3ef0c8;
        }
    }
    ctx->pc = 0x3EF0C0u;
    // 0x3ef0c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef0c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef0c4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3ef0c8:
    // 0x3ef0c8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3ef0c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3ef0cc: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef0ccu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x3ef0d0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ef0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3ef0d4:
    // 0x3ef0d4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef0d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef0d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef0dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF0DCu;
    {
        const bool branch_taken_0x3ef0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef0dc) {
            ctx->pc = 0x3EF0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF0DCu;
            // 0x3ef0e0: 0xa1600000  sb          $zero, 0x0($t3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF0E8u;
            goto label_3ef0e8;
        }
    }
    ctx->pc = 0x3EF0E4u;
    // 0x3ef0e4: 0xa1790000  sb          $t9, 0x0($t3)
    ctx->pc = 0x3ef0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 25));
label_3ef0e8:
    // 0x3ef0e8: 0x14780003  bne         $v1, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF0E8u;
    {
        const bool branch_taken_0x3ef0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x3EF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0E8u;
        // 0x3ef0ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0e8) {
            ctx->pc = 0x3EF0F8u;
            goto label_3ef0f8;
        }
    }
    ctx->pc = 0x3EF0F0u;
    // 0x3ef0f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef0f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef0f4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3ef0f8:
    // 0x3ef0f8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3ef0f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3ef0fc: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef0fcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
label_3ef100:
    // 0x3ef100: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ef100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3ef104:
    // 0x3ef104: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef108: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef10c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF10Cu;
    {
        const bool branch_taken_0x3ef10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef10c) {
            ctx->pc = 0x3EF110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF10Cu;
            // 0x3ef110: 0xa1600000  sb          $zero, 0x0($t3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF118u;
            goto label_3ef118;
        }
    }
    ctx->pc = 0x3EF114u;
    // 0x3ef114: 0xa1790000  sb          $t9, 0x0($t3)
    ctx->pc = 0x3ef114u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 25));
label_3ef118:
    // 0x3ef118: 0x14780003  bne         $v1, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF118u;
    {
        const bool branch_taken_0x3ef118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x3EF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF118u;
        // 0x3ef11c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef118) {
            ctx->pc = 0x3EF128u;
            goto label_3ef128;
        }
    }
    ctx->pc = 0x3EF120u;
    // 0x3ef120: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef124: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3ef128:
    // 0x3ef128: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef128u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x3ef12c: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3ef12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef130: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x3EF130u;
    {
        const bool branch_taken_0x3ef130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF130u;
        // 0x3ef134: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef130) {
            ctx->pc = 0x3EF530u;
            goto label_3ef530;
        }
    }
    ctx->pc = 0x3EF138u;
label_3ef138:
    // 0x3ef138: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x3ef138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef13c: 0x0  nop
    ctx->pc = 0x3ef13cu;
    // NOP
label_3ef140:
    // 0x3ef140: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ef140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef144: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef14c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF14Cu;
    {
        const bool branch_taken_0x3ef14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef14c) {
            ctx->pc = 0x3EF150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF14Cu;
            // 0x3ef150: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF158u;
            goto label_3ef158;
        }
    }
    ctx->pc = 0x3EF154u;
    // 0x3ef154: 0xa0990000  sb          $t9, 0x0($a0)
    ctx->pc = 0x3ef154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 25));
label_3ef158:
    // 0x3ef158: 0x14780003  bne         $v1, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF158u;
    {
        const bool branch_taken_0x3ef158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x3EF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF158u;
        // 0x3ef15c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef158) {
            ctx->pc = 0x3EF168u;
            goto label_3ef168;
        }
    }
    ctx->pc = 0x3EF160u;
    // 0x3ef160: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef164: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3ef168:
    // 0x3ef168: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ef168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef16c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef16cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef174: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF174u;
    {
        const bool branch_taken_0x3ef174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef174) {
            ctx->pc = 0x3EF178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF174u;
            // 0x3ef178: 0xa080ffff  sb          $zero, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF180u;
            goto label_3ef180;
        }
    }
    ctx->pc = 0x3EF17Cu;
    // 0x3ef17c: 0xa099ffff  sb          $t9, -0x1($a0)
    ctx->pc = 0x3ef17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 25));
label_3ef180:
    // 0x3ef180: 0x14780003  bne         $v1, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF180u;
    {
        const bool branch_taken_0x3ef180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x3EF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF180u;
        // 0x3ef184: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef180) {
            ctx->pc = 0x3EF190u;
            goto label_3ef190;
        }
    }
    ctx->pc = 0x3EF188u;
    // 0x3ef188: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef18c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef18cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3ef190:
    // 0x3ef190: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ef190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef194: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef19c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF19Cu;
    {
        const bool branch_taken_0x3ef19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef19c) {
            ctx->pc = 0x3EF1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF19Cu;
            // 0x3ef1a0: 0xa080fffe  sb          $zero, -0x2($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF1A8u;
            goto label_3ef1a8;
        }
    }
    ctx->pc = 0x3EF1A4u;
    // 0x3ef1a4: 0xa099fffe  sb          $t9, -0x2($a0)
    ctx->pc = 0x3ef1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 25));
label_3ef1a8:
    // 0x3ef1a8: 0x14780003  bne         $v1, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF1A8u;
    {
        const bool branch_taken_0x3ef1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x3EF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1A8u;
        // 0x3ef1ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1a8) {
            ctx->pc = 0x3EF1B8u;
            goto label_3ef1b8;
        }
    }
    ctx->pc = 0x3EF1B0u;
    // 0x3ef1b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef1b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1b4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3ef1b8:
    // 0x3ef1b8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3ef1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef1bc: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef1bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef1c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ef1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ef1c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF1C4u;
    {
        const bool branch_taken_0x3ef1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef1c4) {
            ctx->pc = 0x3EF1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF1C4u;
            // 0x3ef1c8: 0xa080fffd  sb          $zero, -0x3($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF1D0u;
            goto label_3ef1d0;
        }
    }
    ctx->pc = 0x3EF1CCu;
    // 0x3ef1cc: 0xa099fffd  sb          $t9, -0x3($a0)
    ctx->pc = 0x3ef1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 25));
label_3ef1d0:
    // 0x3ef1d0: 0x14780003  bne         $v1, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF1D0u;
    {
        const bool branch_taken_0x3ef1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x3EF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1D0u;
        // 0x3ef1d4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1d0) {
            ctx->pc = 0x3EF1E0u;
            goto label_3ef1e0;
        }
    }
    ctx->pc = 0x3EF1D8u;
    // 0x3ef1d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1dc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3ef1e0:
    // 0x3ef1e0: 0x658c0004  daddiu      $t4, $t4, 0x4
    ctx->pc = 0x3ef1e0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4);
    // 0x3ef1e4: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3ef1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef1e8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3EF1E8u;
    {
        const bool branch_taken_0x3ef1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1E8u;
        // 0x3ef1ec: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1e8) {
            ctx->pc = 0x3EF140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ef140;
        }
    }
    ctx->pc = 0x3EF1F0u;
    // 0x3ef1f0: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x3EF1F0u;
    {
        const bool branch_taken_0x3ef1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1F0u;
        // 0x3ef1f4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1f0) {
            ctx->pc = 0x3EF534u;
            goto label_3ef534;
        }
    }
    ctx->pc = 0x3EF1F8u;
label_3ef1f8:
    // 0x3ef1f8: 0x65a20003  daddiu      $v0, $t5, 0x3
    ctx->pc = 0x3ef1f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)3);
    // 0x3ef1fc: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x3ef1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3ef200: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ef200u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ef204: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3ef204u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3ef208: 0xa37821  addu        $t7, $a1, $v1
    ctx->pc = 0x3ef208u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ef20c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef210: 0x65a4ffff  daddiu      $a0, $t5, -0x1
    ctx->pc = 0x3ef210u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)4294967295);
    // 0x3ef214: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ef214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ef218: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ef218u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ef21c: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x3ef21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x3ef220: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3ef220u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3ef224: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3ef224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ef228: 0xa45021  addu        $t2, $a1, $a0
    ctx->pc = 0x3ef228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3ef22c: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x3ef22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x3ef230: 0x11a000bf  beqz        $t5, . + 4 + (0xBF << 2)
    ctx->pc = 0x3EF230u;
    {
        const bool branch_taken_0x3ef230 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF230u;
        // 0x3ef234: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef230) {
            ctx->pc = 0x3EF530u;
            goto label_3ef530;
        }
    }
    ctx->pc = 0x3EF238u;
    // 0x3ef238: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3ef238u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef23c: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x3ef23cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ef240: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3ef240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef244: 0x19a0001e  blez        $t5, . + 4 + (0x1E << 2)
    ctx->pc = 0x3EF244u;
    {
        const bool branch_taken_0x3ef244 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3EF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF244u;
        // 0x3ef248: 0x31a90003  andi        $t1, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef244) {
            ctx->pc = 0x3EF2C0u;
            goto label_3ef2c0;
        }
    }
    ctx->pc = 0x3EF24Cu;
    // 0x3ef24c: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3EF24Cu;
    {
        const bool branch_taken_0x3ef24c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF24Cu;
        // 0x3ef250: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef24c) {
            ctx->pc = 0x3EF2F4u;
            goto label_3ef2f4;
        }
    }
    ctx->pc = 0x3EF254u;
    // 0x3ef254: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3EF254u;
    {
        const bool branch_taken_0x3ef254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef254) {
            ctx->pc = 0x3EF258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF254u;
            // 0x3ef258: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF2C4u;
            goto label_3ef2c4;
        }
    }
    ctx->pc = 0x3EF25Cu;
    // 0x3ef25c: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x3ef25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ef260: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3EF260u;
    {
        const bool branch_taken_0x3ef260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef260) {
            ctx->pc = 0x3EF264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF260u;
            // 0x3ef264: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF298u;
            goto label_3ef298;
        }
    }
    ctx->pc = 0x3EF268u;
    // 0x3ef268: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3ef268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ef26c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef26cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef270: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef274: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF274u;
    {
        const bool branch_taken_0x3ef274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF274u;
        // 0x3ef278: 0xa1e2ffff  sb          $v0, -0x1($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef274) {
            ctx->pc = 0x3EF288u;
            goto label_3ef288;
        }
    }
    ctx->pc = 0x3EF27Cu;
    // 0x3ef27c: 0x2544ffff  addiu       $a0, $t2, -0x1
    ctx->pc = 0x3ef27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3ef280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF280u;
    {
        const bool branch_taken_0x3ef280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF280u;
        // 0x3ef284: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef280) {
            ctx->pc = 0x3EF28Cu;
            goto label_3ef28c;
        }
    }
    ctx->pc = 0x3EF288u;
label_3ef288:
    // 0x3ef288: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3ef288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3ef28c:
    // 0x3ef28c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3ef28cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3ef290: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef290u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x3ef294: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ef298:
    // 0x3ef298: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef29c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef2a0: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF2A0u;
    {
        const bool branch_taken_0x3ef2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2A0u;
        // 0x3ef2a4: 0xa1620000  sb          $v0, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef2a0) {
            ctx->pc = 0x3EF2B4u;
            goto label_3ef2b4;
        }
    }
    ctx->pc = 0x3EF2A8u;
    // 0x3ef2a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef2a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef2ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF2ACu;
    {
        const bool branch_taken_0x3ef2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2ACu;
        // 0x3ef2b0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef2ac) {
            ctx->pc = 0x3EF2B8u;
            goto label_3ef2b8;
        }
    }
    ctx->pc = 0x3EF2B4u;
label_3ef2b4:
    // 0x3ef2b4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3ef2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3ef2b8:
    // 0x3ef2b8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3ef2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3ef2bc: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef2bcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
label_3ef2c0:
    // 0x3ef2c0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ef2c4:
    // 0x3ef2c4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef2c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef2c8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef2cc: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF2CCu;
    {
        const bool branch_taken_0x3ef2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2CCu;
        // 0x3ef2d0: 0xa1620000  sb          $v0, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef2cc) {
            ctx->pc = 0x3EF2E0u;
            goto label_3ef2e0;
        }
    }
    ctx->pc = 0x3EF2D4u;
    // 0x3ef2d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef2d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef2d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF2D8u;
    {
        const bool branch_taken_0x3ef2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2D8u;
        // 0x3ef2dc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef2d8) {
            ctx->pc = 0x3EF2E4u;
            goto label_3ef2e4;
        }
    }
    ctx->pc = 0x3EF2E0u;
label_3ef2e0:
    // 0x3ef2e0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3ef2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3ef2e4:
    // 0x3ef2e4: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef2e4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x3ef2e8: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3ef2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef2ec: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3EF2ECu;
    {
        const bool branch_taken_0x3ef2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2ECu;
        // 0x3ef2f0: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef2ec) {
            ctx->pc = 0x3EF530u;
            goto label_3ef530;
        }
    }
    ctx->pc = 0x3EF2F4u;
label_3ef2f4:
    // 0x3ef2f4: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x3ef2f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3ef2f8:
    // 0x3ef2f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef2fc: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef2fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef300: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef304: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF304u;
    {
        const bool branch_taken_0x3ef304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF304u;
        // 0x3ef308: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef304) {
            ctx->pc = 0x3EF318u;
            goto label_3ef318;
        }
    }
    ctx->pc = 0x3EF30Cu;
    // 0x3ef30c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef30cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF310u;
    {
        const bool branch_taken_0x3ef310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF310u;
        // 0x3ef314: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef310) {
            ctx->pc = 0x3EF31Cu;
            goto label_3ef31c;
        }
    }
    ctx->pc = 0x3EF318u;
label_3ef318:
    // 0x3ef318: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3ef318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3ef31c:
    // 0x3ef31c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef31cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef320: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef324: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef328: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF328u;
    {
        const bool branch_taken_0x3ef328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF328u;
        // 0x3ef32c: 0xa122ffff  sb          $v0, -0x1($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef328) {
            ctx->pc = 0x3EF33Cu;
            goto label_3ef33c;
        }
    }
    ctx->pc = 0x3EF330u;
    // 0x3ef330: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef330u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF334u;
    {
        const bool branch_taken_0x3ef334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF334u;
        // 0x3ef338: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef334) {
            ctx->pc = 0x3EF340u;
            goto label_3ef340;
        }
    }
    ctx->pc = 0x3EF33Cu;
label_3ef33c:
    // 0x3ef33c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3ef33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3ef340:
    // 0x3ef340: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef344: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef348: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef34c: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF34Cu;
    {
        const bool branch_taken_0x3ef34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF34Cu;
        // 0x3ef350: 0xa122fffe  sb          $v0, -0x2($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4294967294), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef34c) {
            ctx->pc = 0x3EF360u;
            goto label_3ef360;
        }
    }
    ctx->pc = 0x3EF354u;
    // 0x3ef354: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef358: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF358u;
    {
        const bool branch_taken_0x3ef358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF358u;
        // 0x3ef35c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef358) {
            ctx->pc = 0x3EF364u;
            goto label_3ef364;
        }
    }
    ctx->pc = 0x3EF360u;
label_3ef360:
    // 0x3ef360: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3ef360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3ef364:
    // 0x3ef364: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef368: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef36c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3ef36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ef370: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF370u;
    {
        const bool branch_taken_0x3ef370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF370u;
        // 0x3ef374: 0xa122fffd  sb          $v0, -0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4294967293), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef370) {
            ctx->pc = 0x3EF384u;
            goto label_3ef384;
        }
    }
    ctx->pc = 0x3EF378u;
    // 0x3ef378: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef37c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF37Cu;
    {
        const bool branch_taken_0x3ef37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF37Cu;
        // 0x3ef380: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef37c) {
            ctx->pc = 0x3EF388u;
            goto label_3ef388;
        }
    }
    ctx->pc = 0x3EF384u;
label_3ef384:
    // 0x3ef384: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3ef384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3ef388:
    // 0x3ef388: 0x658c0004  daddiu      $t4, $t4, 0x4
    ctx->pc = 0x3ef388u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4);
    // 0x3ef38c: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3ef38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef390: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x3EF390u;
    {
        const bool branch_taken_0x3ef390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF390u;
        // 0x3ef394: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef390) {
            ctx->pc = 0x3EF2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ef2f8;
        }
    }
    ctx->pc = 0x3EF398u;
    // 0x3ef398: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3EF398u;
    {
        const bool branch_taken_0x3ef398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF398u;
        // 0x3ef39c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef398) {
            ctx->pc = 0x3EF534u;
            goto label_3ef534;
        }
    }
    ctx->pc = 0x3EF3A0u;
label_3ef3a0:
    // 0x3ef3a0: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x3ef3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3ef3a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ef3a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ef3a8: 0x65a2ffff  daddiu      $v0, $t5, -0x1
    ctx->pc = 0x3ef3a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)4294967295);
    // 0x3ef3ac: 0xa37821  addu        $t7, $a1, $v1
    ctx->pc = 0x3ef3acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ef3b0: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3ef3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3ef3b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ef3b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ef3b8: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x3ef3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x3ef3bc: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x3ef3bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ef3c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ef3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ef3c4: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x3ef3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x3ef3c8: 0x11a00059  beqz        $t5, . + 4 + (0x59 << 2)
    ctx->pc = 0x3EF3C8u;
    {
        const bool branch_taken_0x3ef3c8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3C8u;
        // 0x3ef3cc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3c8) {
            ctx->pc = 0x3EF530u;
            goto label_3ef530;
        }
    }
    ctx->pc = 0x3EF3D0u;
    // 0x3ef3d0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3ef3d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef3d4: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x3ef3d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ef3d8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x3ef3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef3dc: 0x19a0001e  blez        $t5, . + 4 + (0x1E << 2)
    ctx->pc = 0x3EF3DCu;
    {
        const bool branch_taken_0x3ef3dc = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3EF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3DCu;
        // 0x3ef3e0: 0x31a90003  andi        $t1, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3dc) {
            ctx->pc = 0x3EF458u;
            goto label_3ef458;
        }
    }
    ctx->pc = 0x3EF3E4u;
    // 0x3ef3e4: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3EF3E4u;
    {
        const bool branch_taken_0x3ef3e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3E4u;
        // 0x3ef3e8: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3e4) {
            ctx->pc = 0x3EF48Cu;
            goto label_3ef48c;
        }
    }
    ctx->pc = 0x3EF3ECu;
    // 0x3ef3ec: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3EF3ECu;
    {
        const bool branch_taken_0x3ef3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef3ec) {
            ctx->pc = 0x3EF3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF3ECu;
            // 0x3ef3f0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF45Cu;
            goto label_3ef45c;
        }
    }
    ctx->pc = 0x3EF3F4u;
    // 0x3ef3f4: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x3ef3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ef3f8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3EF3F8u;
    {
        const bool branch_taken_0x3ef3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef3f8) {
            ctx->pc = 0x3EF3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF3F8u;
            // 0x3ef3fc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF430u;
            goto label_3ef430;
        }
    }
    ctx->pc = 0x3EF400u;
    // 0x3ef400: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3ef400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ef404: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef408: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ef408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ef40c: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF40Cu;
    {
        const bool branch_taken_0x3ef40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF40Cu;
        // 0x3ef410: 0xa1e2ffff  sb          $v0, -0x1($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef40c) {
            ctx->pc = 0x3EF420u;
            goto label_3ef420;
        }
    }
    ctx->pc = 0x3EF414u;
    // 0x3ef414: 0x2544ffff  addiu       $a0, $t2, -0x1
    ctx->pc = 0x3ef414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3ef418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF418u;
    {
        const bool branch_taken_0x3ef418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF418u;
        // 0x3ef41c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef418) {
            ctx->pc = 0x3EF424u;
            goto label_3ef424;
        }
    }
    ctx->pc = 0x3EF420u;
label_3ef420:
    // 0x3ef420: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ef420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ef424:
    // 0x3ef424: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3ef424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3ef428: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef428u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x3ef42c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ef430:
    // 0x3ef430: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef434: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ef434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ef438: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF438u;
    {
        const bool branch_taken_0x3ef438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF438u;
        // 0x3ef43c: 0xa1620000  sb          $v0, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef438) {
            ctx->pc = 0x3EF44Cu;
            goto label_3ef44c;
        }
    }
    ctx->pc = 0x3EF440u;
    // 0x3ef440: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef444: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF444u;
    {
        const bool branch_taken_0x3ef444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF444u;
        // 0x3ef448: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef444) {
            ctx->pc = 0x3EF450u;
            goto label_3ef450;
        }
    }
    ctx->pc = 0x3EF44Cu;
label_3ef44c:
    // 0x3ef44c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ef44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ef450:
    // 0x3ef450: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3ef450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3ef454: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef454u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
label_3ef458:
    // 0x3ef458: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ef45c:
    // 0x3ef45c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef45cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef460: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ef460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ef464: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF464u;
    {
        const bool branch_taken_0x3ef464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF464u;
        // 0x3ef468: 0xa1620000  sb          $v0, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef464) {
            ctx->pc = 0x3EF478u;
            goto label_3ef478;
        }
    }
    ctx->pc = 0x3EF46Cu;
    // 0x3ef46c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef470: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF470u;
    {
        const bool branch_taken_0x3ef470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF470u;
        // 0x3ef474: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef470) {
            ctx->pc = 0x3EF47Cu;
            goto label_3ef47c;
        }
    }
    ctx->pc = 0x3EF478u;
label_3ef478:
    // 0x3ef478: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ef478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ef47c:
    // 0x3ef47c: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef47cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x3ef480: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3ef480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef484: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3EF484u;
    {
        const bool branch_taken_0x3ef484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF484u;
        // 0x3ef488: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef484) {
            ctx->pc = 0x3EF530u;
            goto label_3ef530;
        }
    }
    ctx->pc = 0x3EF48Cu;
label_3ef48c:
    // 0x3ef48c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x3ef48cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3ef490:
    // 0x3ef490: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef494: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef494u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef498: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ef498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ef49c: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF49Cu;
    {
        const bool branch_taken_0x3ef49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF49Cu;
        // 0x3ef4a0: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef49c) {
            ctx->pc = 0x3EF4B0u;
            goto label_3ef4b0;
        }
    }
    ctx->pc = 0x3EF4A4u;
    // 0x3ef4a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef4a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF4A8u;
    {
        const bool branch_taken_0x3ef4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4A8u;
        // 0x3ef4ac: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4a8) {
            ctx->pc = 0x3EF4B4u;
            goto label_3ef4b4;
        }
    }
    ctx->pc = 0x3EF4B0u;
label_3ef4b0:
    // 0x3ef4b0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ef4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ef4b4:
    // 0x3ef4b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef4b8: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef4b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef4bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ef4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ef4c0: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF4C0u;
    {
        const bool branch_taken_0x3ef4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4C0u;
        // 0x3ef4c4: 0xa122ffff  sb          $v0, -0x1($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4c0) {
            ctx->pc = 0x3EF4D4u;
            goto label_3ef4d4;
        }
    }
    ctx->pc = 0x3EF4C8u;
    // 0x3ef4c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef4cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF4CCu;
    {
        const bool branch_taken_0x3ef4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4CCu;
        // 0x3ef4d0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4cc) {
            ctx->pc = 0x3EF4D8u;
            goto label_3ef4d8;
        }
    }
    ctx->pc = 0x3EF4D4u;
label_3ef4d4:
    // 0x3ef4d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ef4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ef4d8:
    // 0x3ef4d8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef4dc: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef4dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef4e0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ef4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ef4e4: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF4E4u;
    {
        const bool branch_taken_0x3ef4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4E4u;
        // 0x3ef4e8: 0xa122fffe  sb          $v0, -0x2($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4294967294), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4e4) {
            ctx->pc = 0x3EF4F8u;
            goto label_3ef4f8;
        }
    }
    ctx->pc = 0x3EF4ECu;
    // 0x3ef4ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef4ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef4f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF4F0u;
    {
        const bool branch_taken_0x3ef4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4F0u;
        // 0x3ef4f4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4f0) {
            ctx->pc = 0x3EF4FCu;
            goto label_3ef4fc;
        }
    }
    ctx->pc = 0x3EF4F8u;
label_3ef4f8:
    // 0x3ef4f8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ef4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ef4fc:
    // 0x3ef4fc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ef4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef500: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3ef500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3ef504: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3ef504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3ef508: 0x146e0004  bne         $v1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF508u;
    {
        const bool branch_taken_0x3ef508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x3EF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF508u;
        // 0x3ef50c: 0xa122fffd  sb          $v0, -0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 4294967293), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef508) {
            ctx->pc = 0x3EF51Cu;
            goto label_3ef51c;
        }
    }
    ctx->pc = 0x3EF510u;
    // 0x3ef510: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ef510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef514: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF514u;
    {
        const bool branch_taken_0x3ef514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF514u;
        // 0x3ef518: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef514) {
            ctx->pc = 0x3EF520u;
            goto label_3ef520;
        }
    }
    ctx->pc = 0x3EF51Cu;
label_3ef51c:
    // 0x3ef51c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ef51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ef520:
    // 0x3ef520: 0x658c0004  daddiu      $t4, $t4, 0x4
    ctx->pc = 0x3ef520u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4);
    // 0x3ef524: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3ef524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef528: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x3EF528u;
    {
        const bool branch_taken_0x3ef528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF528u;
        // 0x3ef52c: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef528) {
            ctx->pc = 0x3EF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ef490;
        }
    }
    ctx->pc = 0x3EF530u;
label_3ef530:
    // 0x3ef530: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ef530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ef534:
    // 0x3ef534: 0xfe0d0008  sd          $t5, 0x8($s0)
    ctx->pc = 0x3ef534u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 13));
label_3ef538:
    // 0x3ef538: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x3ef538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ef53c: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x3ef53cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
label_3ef540:
    // 0x3ef540: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3ef540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ef544: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ef544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ef548: 0x546200e1  bnel        $v1, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x3EF548u;
    {
        const bool branch_taken_0x3ef548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef548) {
            ctx->pc = 0x3EF54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF548u;
            // 0x3ef54c: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF8D0u;
            goto label_3ef8d0;
        }
    }
    ctx->pc = 0x3EF550u;
    // 0x3ef550: 0x10e0007e  beqz        $a3, . + 4 + (0x7E << 2)
    ctx->pc = 0x3EF550u;
    {
        const bool branch_taken_0x3ef550 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF550u;
        // 0x3ef554: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef550) {
            ctx->pc = 0x3EF74Cu;
            goto label_3ef74c;
        }
    }
    ctx->pc = 0x3EF558u;
    // 0x3ef558: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x3ef558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3ef55c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ef55cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ef560: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3ef560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ef564: 0xd70b8  dsll        $t6, $t5, 2
    ctx->pc = 0x3ef564u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) << 2);
    // 0x3ef568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ef56c: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x3ef56cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ef570: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ef570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ef574: 0x11a0006c  beqz        $t5, . + 4 + (0x6C << 2)
    ctx->pc = 0x3EF574u;
    {
        const bool branch_taken_0x3ef574 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF574u;
        // 0x3ef578: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef574) {
            ctx->pc = 0x3EF728u;
            goto label_3ef728;
        }
    }
    ctx->pc = 0x3EF57Cu;
    // 0x3ef57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ef57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef580: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3ef580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef584: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x3ef584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ef588: 0x19a00003  blez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF588u;
    {
        const bool branch_taken_0x3ef588 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3EF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF588u;
        // 0x3ef58c: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef588) {
            ctx->pc = 0x3EF598u;
            goto label_3ef598;
        }
    }
    ctx->pc = 0x3EF590u;
    // 0x3ef590: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3EF590u;
    {
        const bool branch_taken_0x3ef590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef590) {
            ctx->pc = 0x3EF594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF590u;
            // 0x3ef594: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF628u;
            goto label_3ef628;
        }
    }
    ctx->pc = 0x3EF598u;
label_3ef598:
    // 0x3ef598: 0x9063ffff  lbu         $v1, -0x1($v1)
    ctx->pc = 0x3ef598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x3ef59c: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x3ef59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3ef5a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF5A0u;
    {
        const bool branch_taken_0x3ef5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5A0u;
        // 0x3ef5a4: 0xe31821  addu        $v1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef5a0) {
            ctx->pc = 0x3EF5B4u;
            goto label_3ef5b4;
        }
    }
    ctx->pc = 0x3EF5A8u;
    // 0x3ef5a8: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x3ef5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3ef5ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF5ACu;
    {
        const bool branch_taken_0x3ef5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5ACu;
        // 0x3ef5b0: 0xa0abffff  sb          $t3, -0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef5ac) {
            ctx->pc = 0x3EF5C0u;
            goto label_3ef5c0;
        }
    }
    ctx->pc = 0x3EF5B4u;
label_3ef5b4:
    // 0x3ef5b4: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x3ef5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3ef5b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ef5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ef5bc: 0xa0a2ffff  sb          $v0, -0x1($a1)
    ctx->pc = 0x3ef5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 2));
label_3ef5c0:
    // 0x3ef5c0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3ef5c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef5c4: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x3ef5c4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x3ef5c8: 0x18d502b  sltu        $t2, $t4, $t5
    ctx->pc = 0x3ef5c8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef5cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef5d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef5d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef5d8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3ef5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ef5dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef5e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef5e4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3ef5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef5e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef5f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef5f4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3ef5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ef5f8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef5fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef600: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3ef600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ef604: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3ef604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3ef608: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef610: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef614: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef618: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef61c: 0x11400042  beqz        $t2, . + 4 + (0x42 << 2)
    ctx->pc = 0x3EF61Cu;
    {
        const bool branch_taken_0x3ef61c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF61Cu;
        // 0x3ef620: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef61c) {
            ctx->pc = 0x3EF728u;
            goto label_3ef728;
        }
    }
    ctx->pc = 0x3EF624u;
    // 0x3ef624: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3ef624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ef628:
    // 0x3ef628: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ef628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ef62c: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x3ef62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3ef630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF630u;
    {
        const bool branch_taken_0x3ef630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF630u;
        // 0x3ef634: 0xe31021  addu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef630) {
            ctx->pc = 0x3EF640u;
            goto label_3ef640;
        }
    }
    ctx->pc = 0x3EF638u;
    // 0x3ef638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF638u;
    {
        const bool branch_taken_0x3ef638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF638u;
        // 0x3ef63c: 0xa08b0000  sb          $t3, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef638) {
            ctx->pc = 0x3EF648u;
            goto label_3ef648;
        }
    }
    ctx->pc = 0x3EF640u;
label_3ef640:
    // 0x3ef640: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef644: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ef648:
    // 0x3ef648: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef64c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ef64cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ef650: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef658: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef65c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3ef65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ef660: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef660u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef664: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef668: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ef668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ef66c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef674: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef678: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3ef678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ef67c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef67cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef680: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef684: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ef684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ef688: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef68c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef690: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef694: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef698: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef69c: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3ef69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ef6a0: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x3ef6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3ef6a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF6A4u;
    {
        const bool branch_taken_0x3ef6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6A4u;
        // 0x3ef6a8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef6a4) {
            ctx->pc = 0x3EF6B4u;
            goto label_3ef6b4;
        }
    }
    ctx->pc = 0x3EF6ACu;
    // 0x3ef6ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF6ACu;
    {
        const bool branch_taken_0x3ef6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6ACu;
        // 0x3ef6b0: 0xa08b0000  sb          $t3, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef6ac) {
            ctx->pc = 0x3EF6C0u;
            goto label_3ef6c0;
        }
    }
    ctx->pc = 0x3EF6B4u;
label_3ef6b4:
    // 0x3ef6b4: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x3ef6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3ef6b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef6bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ef6c0:
    // 0x3ef6c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef6c4: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3ef6c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ef6c8: 0x658c0002  daddiu      $t4, $t4, 0x2
    ctx->pc = 0x3ef6c8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)2);
    // 0x3ef6cc: 0x18d502b  sltu        $t2, $t4, $t5
    ctx->pc = 0x3ef6ccu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef6d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef6d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef6dc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3ef6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ef6e0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef6e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef6e8: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3ef6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ef6ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef6f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef6f8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3ef6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ef6fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef700: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ef700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ef704: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x3ef704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3ef708: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3ef708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3ef70c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef714: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef718: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef71c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ef71cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef720: 0x1540ffc1  bnez        $t2, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3EF720u;
    {
        const bool branch_taken_0x3ef720 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF720u;
        // 0x3ef724: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef720) {
            ctx->pc = 0x3EF628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ef628;
        }
    }
    ctx->pc = 0x3EF728u;
label_3ef728:
    // 0x3ef728: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ef728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ef72c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3ef72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ef730: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3ef730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ef734: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ef734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ef738: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x3ef738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ef73c: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x3ef73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef740: 0xa2040013  sb          $a0, 0x13($s0)
    ctx->pc = 0x3ef740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ef744: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3EF744u;
    {
        const bool branch_taken_0x3ef744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF744u;
        // 0x3ef748: 0xfe0e0008  sd          $t6, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef744) {
            ctx->pc = 0x3EF8C8u;
            goto label_3ef8c8;
        }
    }
    ctx->pc = 0x3EF74Cu;
label_3ef74c:
    // 0x3ef74c: 0xd1078  dsll        $v0, $t5, 1
    ctx->pc = 0x3ef74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << 1);
    // 0x3ef750: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x3ef750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x3ef754: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ef754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ef758: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3ef758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef75c: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x3ef75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ef760: 0x4d102d  daddu       $v0, $v0, $t5
    ctx->pc = 0x3ef760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 13));
    // 0x3ef764: 0x24eaffff  addiu       $t2, $a3, -0x1
    ctx->pc = 0x3ef764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3ef768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ef768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ef76c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ef76cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ef770: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ef770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ef774: 0x11a0004b  beqz        $t5, . + 4 + (0x4B << 2)
    ctx->pc = 0x3EF774u;
    {
        const bool branch_taken_0x3ef774 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF774u;
        // 0x3ef778: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef774) {
            ctx->pc = 0x3EF8A4u;
            goto label_3ef8a4;
        }
    }
    ctx->pc = 0x3EF77Cu;
    // 0x3ef77c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3ef77cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef780: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3ef780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef784: 0x19a00003  blez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF784u;
    {
        const bool branch_taken_0x3ef784 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3EF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF784u;
        // 0x3ef788: 0x31a20001  andi        $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef784) {
            ctx->pc = 0x3EF794u;
            goto label_3ef794;
        }
    }
    ctx->pc = 0x3EF78Cu;
    // 0x3ef78c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3EF78Cu;
    {
        const bool branch_taken_0x3ef78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef78c) {
            ctx->pc = 0x3EF790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF78Cu;
            // 0x3ef790: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF7F4u;
            goto label_3ef7f4;
        }
    }
    ctx->pc = 0x3EF794u;
label_3ef794:
    // 0x3ef794: 0x90e3ffff  lbu         $v1, -0x1($a3)
    ctx->pc = 0x3ef794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ef798: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3ef798u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ef79c: 0x24aafffc  addiu       $t2, $a1, -0x4
    ctx->pc = 0x3ef79cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3ef7a0: 0x24e9fffe  addiu       $t1, $a3, -0x2
    ctx->pc = 0x3ef7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3ef7a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef7a8: 0x18d402b  sltu        $t0, $t4, $t5
    ctx->pc = 0x3ef7a8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef7b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef7b4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3ef7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ef7b8: 0xa0a3ffff  sb          $v1, -0x1($a1)
    ctx->pc = 0x3ef7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef7bc: 0x90e4ffff  lbu         $a0, -0x1($a3)
    ctx->pc = 0x3ef7bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ef7c0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3ef7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ef7c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ef7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ef7c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef7cc: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3ef7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ef7d0: 0xa0a3fffe  sb          $v1, -0x2($a1)
    ctx->pc = 0x3ef7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef7d4: 0x90e4ffff  lbu         $a0, -0x1($a3)
    ctx->pc = 0x3ef7d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ef7d8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3ef7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ef7dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ef7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ef7e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef7e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef7e8: 0x1100002e  beqz        $t0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3EF7E8u;
    {
        const bool branch_taken_0x3ef7e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7E8u;
        // 0x3ef7ec: 0xa0a3fffd  sb          $v1, -0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef7e8) {
            ctx->pc = 0x3EF8A4u;
            goto label_3ef8a4;
        }
    }
    ctx->pc = 0x3EF7F0u;
    // 0x3ef7f0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3ef7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7f4:
    // 0x3ef7f4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3ef7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7f8:
    // 0x3ef7f8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3ef7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ef7fc: 0x658c0002  daddiu      $t4, $t4, 0x2
    ctx->pc = 0x3ef7fcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)2);
    // 0x3ef800: 0x18d402b  sltu        $t0, $t4, $t5
    ctx->pc = 0x3ef800u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3ef804: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef80c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef810: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3ef810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ef814: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ef814u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef818: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3ef818u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ef81c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3ef81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ef820: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ef820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ef824: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef828: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3ef828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ef82c: 0xa0a3ffff  sb          $v1, -0x1($a1)
    ctx->pc = 0x3ef82cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef830: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3ef830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ef834: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3ef834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ef838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ef838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ef83c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef840: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef844: 0xa0a3fffe  sb          $v1, -0x2($a1)
    ctx->pc = 0x3ef844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef848: 0x90e4ffff  lbu         $a0, -0x1($a3)
    ctx->pc = 0x3ef848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ef84c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3ef84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ef850: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ef850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ef854: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef858: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3ef858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3ef85c: 0xa0a3fffd  sb          $v1, -0x3($a1)
    ctx->pc = 0x3ef85cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef860: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3ef860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3ef864: 0x90e3ffff  lbu         $v1, -0x1($a3)
    ctx->pc = 0x3ef864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ef868: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef870: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef874: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3ef874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ef878: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ef878u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef87c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ef87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ef880: 0x90e3ffff  lbu         $v1, -0x1($a3)
    ctx->pc = 0x3ef880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x3ef884: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3ef884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3ef888: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ef888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ef88c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ef88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ef890: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ef890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ef894: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ef894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ef898: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ef898u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef89c: 0x1500ffd6  bnez        $t0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3EF89Cu;
    {
        const bool branch_taken_0x3ef89c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF89Cu;
        // 0x3ef8a0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef89c) {
            ctx->pc = 0x3EF7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ef7f8;
        }
    }
    ctx->pc = 0x3EF8A4u;
label_3ef8a4:
    // 0x3ef8a4: 0x16d302d  daddu       $a2, $t3, $t5
    ctx->pc = 0x3ef8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 13));
    // 0x3ef8a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ef8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ef8ac: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3ef8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3ef8b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ef8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ef8b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ef8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ef8b8: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x3ef8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ef8bc: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x3ef8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ef8c0: 0xa2040013  sb          $a0, 0x13($s0)
    ctx->pc = 0x3ef8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ef8c4: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x3ef8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
label_3ef8c8:
    // 0x3ef8c8: 0xa2050010  sb          $a1, 0x10($s0)
    ctx->pc = 0x3ef8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 5));
label_3ef8cc:
    // 0x3ef8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef8d0:
    // 0x3ef8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF8D0u;
        // 0x3ef8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF8D8u;
}
