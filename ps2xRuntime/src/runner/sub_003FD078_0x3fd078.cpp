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

// Function: sub_003FD078
// Address: 0x3fd078 - 0x3fd1b0
void sub_003FD078_0x3fd078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD078_0x3fd078");
#endif

    switch (ctx->pc) {
        case 0x3fd158u: goto label_3fd158;
        default: break;
    }

    ctx->pc = 0x3fd078u;

    // 0x3fd078: 0x90860011  lbu         $a2, 0x11($a0)
    ctx->pc = 0x3fd078u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3fd07c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3fd07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3fd080: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3FD080u;
    {
        const bool branch_taken_0x3fd080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD080u;
        // 0x3fd084: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd080) {
            ctx->pc = 0x3FD1A8u;
            goto label_3fd1a8;
        }
    }
    ctx->pc = 0x3FD088u;
    // 0x3fd088: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3fd088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3fd08c: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FD08Cu;
    {
        const bool branch_taken_0x3fd08c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD08Cu;
        // 0x3fd090: 0xa25821  addu        $t3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd08c) {
            ctx->pc = 0x3FD0A0u;
            goto label_3fd0a0;
        }
    }
    ctx->pc = 0x3FD094u;
    // 0x3fd094: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3fd094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3fd098: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3FD098u;
    {
        const bool branch_taken_0x3fd098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD098u;
        // 0x3fd09c: 0x244ac588  addiu       $t2, $v0, -0x3A78 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd098) {
            ctx->pc = 0x3FD0C4u;
            goto label_3fd0c4;
        }
    }
    ctx->pc = 0x3FD0A0u;
label_3fd0a0:
    // 0x3fd0a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fd0a4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FD0A4u;
    {
        const bool branch_taken_0x3fd0a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0A4u;
        // 0x3fd0a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd0a4) {
            ctx->pc = 0x3FD0B8u;
            goto label_3fd0b8;
        }
    }
    ctx->pc = 0x3FD0ACu;
    // 0x3fd0ac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3fd0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3fd0b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3FD0B0u;
    {
        const bool branch_taken_0x3fd0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0B0u;
        // 0x3fd0b4: 0x244ac688  addiu       $t2, $v0, -0x3978 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd0b0) {
            ctx->pc = 0x3FD0C4u;
            goto label_3fd0c4;
        }
    }
    ctx->pc = 0x3FD0B8u;
label_3fd0b8:
    // 0x3fd0b8: 0x14c2003b  bne         $a2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3FD0B8u;
    {
        const bool branch_taken_0x3fd0b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0B8u;
        // 0x3fd0bc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd0b8) {
            ctx->pc = 0x3FD1A8u;
            goto label_3fd1a8;
        }
    }
    ctx->pc = 0x3FD0C0u;
    // 0x3fd0c0: 0x244ac788  addiu       $t2, $v0, -0x3878
    ctx->pc = 0x3fd0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952840));
label_3fd0c4:
    // 0x3fd0c4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3fd0c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd0c8: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x3fd0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3fd0cc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3FD0CCu;
    {
        const bool branch_taken_0x3fd0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0CCu;
        // 0x3fd0d0: 0x1681823  subu        $v1, $t3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd0cc) {
            ctx->pc = 0x3FD1A8u;
            goto label_3fd1a8;
        }
    }
    ctx->pc = 0x3FD0D4u;
    // 0x3fd0d4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3fd0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd0d8: 0x10b102a  slt         $v0, $t0, $t3
    ctx->pc = 0x3fd0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3fd0dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FD0DCu;
    {
        const bool branch_taken_0x3fd0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0DCu;
        // 0x3fd0e0: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd0dc) {
            ctx->pc = 0x3FD134u;
            goto label_3fd134;
        }
    }
    ctx->pc = 0x3FD0E4u;
    // 0x3fd0e4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3FD0E4u;
    {
        const bool branch_taken_0x3fd0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0E4u;
        // 0x3fd0e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd0e4) {
            ctx->pc = 0x3FD154u;
            goto label_3fd154;
        }
    }
    ctx->pc = 0x3FD0ECu;
    // 0x3fd0ec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FD0ECu;
    {
        const bool branch_taken_0x3fd0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd0ec) {
            ctx->pc = 0x3FD0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD0ECu;
            // 0x3fd0f0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD138u;
            goto label_3fd138;
        }
    }
    ctx->pc = 0x3FD0F4u;
    // 0x3fd0f4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fd0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fd0f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FD0F8u;
    {
        const bool branch_taken_0x3fd0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd0f8) {
            ctx->pc = 0x3FD0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD0F8u;
            // 0x3fd0fc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD120u;
            goto label_3fd120;
        }
    }
    ctx->pc = 0x3FD100u;
    // 0x3fd100: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3fd100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3fd104: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x3fd104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fd108: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3fd108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd10c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3fd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3fd110: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3fd110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fd114: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3fd114u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd118: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3fd118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd11c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3fd11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fd120:
    // 0x3fd120: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fd120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fd124: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3fd124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3fd128: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3fd128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fd12c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3fd12cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd130: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fd130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fd134:
    // 0x3fd134: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3fd134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fd138:
    // 0x3fd138: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fd138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fd13c: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x3fd13cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3fd140: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3fd140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3fd144: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3fd144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fd148: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3fd148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd14c: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FD14Cu;
    {
        const bool branch_taken_0x3fd14c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD14Cu;
        // 0x3fd150: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd14c) {
            ctx->pc = 0x3FD1A8u;
            goto label_3fd1a8;
        }
    }
    ctx->pc = 0x3FD154u;
label_3fd154:
    // 0x3fd154: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3fd154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fd158:
    // 0x3fd158: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fd158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fd15c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3fd15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3fd160: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3fd160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3fd164: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x3fd164u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3fd168: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3fd168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3fd16c: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x3fd16cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3fd170: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3fd170u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fd174: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x3fd174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3fd178: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x3fd178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3fd17c: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x3fd17cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3fd180: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x3fd180u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3fd184: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x3fd184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x3fd188: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fd188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fd18c: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3fd18cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd190: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fd190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fd194: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x3fd194u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd198: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3fd198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fd19c: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x3fd19cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd1a0: 0x1520ffed  bnez        $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3FD1A0u;
    {
        const bool branch_taken_0x3fd1a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1A0u;
        // 0x3fd1a4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd1a0) {
            ctx->pc = 0x3FD158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd158;
        }
    }
    ctx->pc = 0x3FD1A8u;
label_3fd1a8:
    // 0x3fd1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FD1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD1B0u;
}
